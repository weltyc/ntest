// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// evaluator source code
#include "Evaluator.h"
#include "QPosition.h"
#include "Debug.h"
#include "Pos2All.h"
#include "options.h"
#include <sstream>

#if defined(_DEBUG) && defined(_MSC_VER)
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

float multiplier=10*kStoneValue;

extern CEvaluator* evaluator;

char CEvaluator::filenameBuffer[200];

//////////////////////////////////////////////////
// Evaluator base class
//////////////////////////////////////////////////

class CEvaluatorList: public std::map<CEvaluatorInfo, CEvaluator*> {
public:
	~CEvaluatorList();
};

static CEvaluatorList evaluatorList;

CEvaluatorList::~CEvaluatorList() {
	for (iterator it=begin(); it!=end(); it++) {
		delete it->second;
	}
}

//! Virtual destructor so base destructors can be called.
CEvaluator::~CEvaluator() {
}

CEvaluator* CEvaluator::FindEvaluator(char evaluatorType, char coeffSet) {
	CEvaluatorInfo evaluatorInfo;
	CEvaluator* result;
	map<CEvaluatorInfo, CEvaluator*>::iterator ptr;

	evaluatorInfo.evaluatorType=evaluatorType;
	evaluatorInfo.coeffSet=coeffSet;

	ptr=evaluatorList.find(evaluatorInfo);
	if (ptr==evaluatorList.end()) {
		switch(evaluatorType) {
		case 'J': {
			int nFiles= (coeffSet>='9')?10:6;
			result=new CEvaluatorJ(FNBase(evaluatorType, coeffSet), nFiles);
			break;
				  }
		default:
			_ASSERT(0);
		}
		_ASSERT(result);
		evaluatorList[evaluatorInfo]=result;
	}
	else {
		result=(*ptr).second;
	}
	return result;
}

std::string CEvaluator::FNBase(char evaluatorType, char coeffSet) {
	std::ostringstream os;
	os << fnBaseDir << "coefficients\\" << evaluatorType << coeffSet;
	return os.str();
	sprintf(filenameBuffer, "%scoefficients/%c%c", fnBaseDir, evaluatorType, coeffSet);
	return filenameBuffer;
}

void CEvaluator::Setup() {
	::evaluator=this;
}

bool CEvaluator::Pos2Enabled() const {
	return false;
}

//////////////////////////////////////////////////////
// Pattern J evaluator
//	Use 2x4, 2x5, edge+X patterns
//////////////////////////////////////////////////////

//! Conver the file to i2 format
//!
//! read in the file (float format) and write it out in i2 format.
//! reopen the file and read the iversion and fParams flags
static void ConvertFile(FILE*& fp, std::string fn, int& iVersion, u4& fParams) {
	// convert float coefficient file to int. Write new coefficients file to disk and reload.
	std::vector<i2> newCoeffs;
	float oldCoeff;
	while (fread(&oldCoeff, sizeof(oldCoeff), 1, fp)) {
		int coeff=int(oldCoeff*kStoneValue);
		if (coeff>0x3FFF)
			coeff=0x3FFF;
		if (coeff<-0x3FFF)
			coeff=-0x3FFF;
		newCoeffs.push_back(i2(coeff));
	}
	fclose(fp);
	fp=fopen(fn.c_str(), "wb");
	if (!fp)
		throw std::string("Can't open coefficient file for conversion: ")+fn;
	fParams=100;
	fwrite(&iVersion, sizeof(int), 1, fp);
	fwrite(&fParams, sizeof(int), 1, fp);
	fwrite(&newCoeffs[0], sizeof(u2), newCoeffs.size(), fp);
	fclose(fp);
	fp=fopen(fn.c_str(), "rb");
	if (!fp)
		throw std::string("Can't open coefficient file ")+fn;
	int result=fread(&iVersion, sizeof(int), 1, fp);
	_ASSERT(result==1);
	result=fread(&fParams, sizeof(int), 1, fp);
	_ASSERT(result==1);
}

//! Read in evaluator coefficients from an evaluator file
//!
//! If the file's fParams is 14, coefficients are stored as floats and are in units of stones
//! If the file's fParams is 100, coefficients are stored as u2s and are in units of centistones.
//!
//! \throw string if error
CEvaluatorJ::CEvaluatorJ(const std::string& fnBase, int nFiles) {
	int map,  iFile, coeffStart, mover, packedCoeff;
	int nIDs, nConfigs, id, config, wconfig, cid, wcid;
	u2 configpm1, configpm2, mapsize;
	bool fHasPotMobs;
	float* rawCoeffs=0;	//!< for use with raw (float) coeffs
	i2* i2Coeffs=0;		//!< for use with converted (packed) coeffs
	TCoeff coeff;
	int iSubset, nSubsets, nEmpty;

	// some parameters are set based on the evaluator version number
	int nSetWidth=60/nFiles;
	char cCoeffSet=fnBase.end()[-1];


	// read in sets
	nSets=0;
	for (iFile=0; iFile<nFiles; iFile++) {
		FILE* fp;
		std::string fn;
		int iVersion;

		// get file name
		std::ostringstream os;
		os << fnBase << char('a'+(iFile%nFiles)) << ".cof";
		fn=os.str();

		// open file
		fp=fopen(fn.c_str(),"rb");
		if (!fp)
			throw std::string("Can't open coefficient file ")+fn;

		// read in version and parameter info
		u4 fParams;
		fread(&iVersion, sizeof(iVersion), 1, fp);
		fread(&fParams, sizeof(fParams), 1, fp);
		if (iVersion==1 && fParams==14) {
			ConvertFile(fp, fn, iVersion, fParams);
		}
		if (iVersion!=1 || (fParams!=100)) {
			throw std::string("error reading from coefficients file ")+fnBase;
		}

		// calculate the number of subsets
		nSubsets=2;

		for (iSubset=0; iSubset<nSubsets; iSubset++) {
			// allocate memory for the black and white versions of the coefficients
			coeffs[nSets][0]=new TCoeff[nCoeffsJ];
			coeffs[nSets][1]=new TCoeff[nCoeffsJ];
			CHECKNEW(coeffs[nSets][0] && coeffs[nSets][1]);

			// put the coefficients in the proper place
			for (map=0; map<nMapsJ; map++) {

				// inital calculations
				nIDs=mapsJ[map].NIDs();
				nConfigs=mapsJ[map].NConfigs();
				mapsize=mapsJ[map].size;
				coeffStart=coeffStartsJ[map];

				// get raw coefficients from file
				i2Coeffs=new i2[nIDs];
				CHECKNEW(i2Coeffs!=NULL);
				if (fread(i2Coeffs,sizeof(u2),nIDs,fp)<size_t(nIDs))
					throw std::string("error reading from coefficients file")+fnBase;

				// convert raw coefficients[id] to i2s[config]
				for (config=0; config<nConfigs; config++) {
					id=mapsJ[map].ConfigToID(config);

					coeff = i2Coeffs[id];

					cid=config+coeffStart;

					if (map==PARJ) {
						// odd-even correction, only in Parity coefficient.
						if (cCoeffSet>='A') {
							if (iFile>=7)
								coeff+=TCoeff(kStoneValue*.65);
							else if (iFile==6)
								coeff+=TCoeff(kStoneValue*.33);
						}
					}
					
					// coeff value has first 2 bytes=coeff, 3rd byte=potmob1, 4th byte=potmob2
					if (map<M1J) {	// pattern maps
						// restrict the coefficient to 2 bytes
						if (coeff>0x3FFF)
							packedCoeff=0x3FFF;
						if (coeff<-0x3FFF)
							packedCoeff=-0x3FFF;
						else
							packedCoeff=coeff;
						
						// get linear pot mob info
						if (map<=D5J) {	// straight-line maps
							fHasPotMobs=true;
							configpm1=configToPotMob[0][mapsize][config];
							configpm2=configToPotMob[1][mapsize][config];
						}
						
						else if (map==C4J) {	// corner triangle maps
							fHasPotMobs=true;
							configpm1=configToPotMobTriangle[0][config];
							configpm2=configToPotMobTriangle[1][config];
						}

						else {	// 2x4, 2x5, edge+2X
							fHasPotMobs=false;
						}

						// pack coefficient and pot mob together
						if (fHasPotMobs)
							packedCoeff=(packedCoeff<<16) | (configpm1<<8) | (configpm2);						

						// calculate white config
						wconfig=nConfigs-1-config;
						wcid=wconfig+coeffStart;
						coeffs[nSets][0][wcid]=packedCoeff;
						coeffs[nSets][1][cid]=packedCoeff;
					}
					
					else {		// non-pattern maps
						coeffs[nSets][0][cid]=coeff;
						coeffs[nSets][1][cid]=coeff;
					}
				}

				delete[] rawCoeffs;
				delete[] i2Coeffs;
			}

			// fold 2x4 corners into 2x5 corners
			TCoeff* pcf2x4, *pcf2x5;
			TConfig c2x4;

			for(mover=0; mover<2;mover++) {
				pcf2x4=&(coeffs[nSets][mover][coeffStartsJ[C2x4J]]);
				pcf2x5=&(coeffs[nSets][mover][coeffStartsJ[C2x5J]]);
				// fold coefficients in
				for (config=0; config<9*6561; config++) {
					c2x4=configs2x5To2x4[config];
					pcf2x5[config]+=pcf2x4[c2x4];
				}
				// zero out 2x4 coefficients
				for (config=0;config<6561; config++) {
					pcf2x4[config]=0;
				}
			}

			// Set the pcoeffs array and the fParameters
			for (nEmpty=59-nSetWidth*iFile; nEmpty>=50-nSetWidth*iFile; nEmpty--) {
				// if this is a set of the wrong parity, do nothing
				if ((nEmpty&1)==iSubset)
					continue;
				for (mover=0; mover<2; mover++) {
					pcoeffs[nEmpty][mover]=coeffs[nSets][mover];
				}
			}

			nSets++;
		}
		fclose(fp);
	}
}

CEvaluatorJ::~CEvaluatorJ() {
	int color, set;

	// delete the coeffs array
	for (set=0; set<nSets; set++) {
		for (color=0; color<2; color++) {
			delete[] coeffs[set][color];
		}
	}
}

// pos2 evaluators
CValue CEvaluatorJ::EvalMobs(u4 nMovesPlayer, u4 nMovesOpponent) const {
	return ValueJMobs(pcoeffs[nEmpty_], nMovesPlayer, nMovesOpponent);
}

bool CEvaluatorJ::Pos2Enabled() const {
	return true;
}
