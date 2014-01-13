// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// Evaluator source code
#include <sstream>
#include "core/QPosition.h"
#include "core/Debug.h"
#include "pattern/types.h"

#include "Evaluator.h"

#if defined(_DEBUG) && defined(_MSC_VER)
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

using namespace std;

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
			result=new CEvaluator(FNBase(evaluatorType, coeffSet), nFiles);
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
	os << "coefficients/" << evaluatorType << coeffSet;
	return os.str();
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
	size_t result=fread(&iVersion, sizeof(int), 1, fp);
	_ASSERT(result==1);
	result=fread(&fParams, sizeof(int), 1, fp);
	_ASSERT(result==1);
}

//! Read in Evaluator coefficients from a coefficient file
//!
//! If the file's fParams is 14, coefficients are stored as floats and are in units of stones
//! If the file's fParams is 100, coefficients are stored as u2s and are in units of centistones.
//!
//! \throw string if error
CEvaluator::CEvaluator(const std::string& fnBase, int nFiles) {
	int map,  iFile, coeffStart, mover, packedCoeff;
	int nIDs, nConfigs, id, config, wconfig, cid, wcid;
	u2 configpm1, configpm2, mapsize;
	bool fHasPotMobs;
	float* rawCoeffs=0;	//!< for use with raw (float) coeffs
	i2* i2Coeffs=0;		//!< for use with converted (packed) coeffs
	TCoeff coeff;
	int iSubset, nSubsets, nEmpty;

	// some parameters are set based on the Evaluator version number
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

CEvaluator::~CEvaluator() {
	int color, set;

	// delete the coeffs array
	for (set=0; set<nSets; set++) {
		for (color=0; color<2; color++) {
			delete[] coeffs[set][color];
		}
	}
}

////////////////////////////////////////
// J evaluation
////////////////////////////////////////

// iDebugEval prints out debugging information in the static evaluation routine.
//	0 - none
//	1 - final value
//	2 - board, final value and all components
// only works with OLD_EVAL set to 1 (slower old version)
const int iDebugEval=0;

inline TCoeff ConfigValue(const TCoeff* pcmove, TConfig config, int map, int offset) {
	TCoeff value=pcmove[config+offset];
	if (iDebugEval>1)
		printf("Config: %5u, Id: %5hu, Value: %4d\n", config, mapsJ[map].ConfigToID(u2(config)), value);
	return value;
}

inline TCoeff PatternValue(TConfig configs[], const TCoeff* pcmove, int pattern, int map, int offset) {
	TConfig config=configs[pattern];
	TCoeff value=pcmove[config+offset];
	if (iDebugEval>1)
		printf("Pattern: %2d - Config: %5u, Id: %5hu, Value: %4d (pms %2d, %2d)\n",
				pattern, config, mapsJ[map].ConfigToID(u2(config)), value>>16, (value>>8)&0xFF, value&0xFF);
	return value;
}

inline TCoeff ConfigPMValue(const TCoeff* pcmove, TConfig config, int map, int offset) {
	TCoeff value=pcmove[config+offset];
	if (iDebugEval>1)
		printf("Config: %5u, Id: %5hu, Value: %4d (pms %2d, %2d)\n",
				config, mapsJ[map].ConfigToID(u2(config)), value>>16, (value>>8)&0xFF, value&0xFF);
	return value;
}


// offsetJs for coefficients
const int offsetJR1=0, sizeJR1=6561,
	offsetJR2=offsetJR1+sizeJR1, sizeJR2=6561,
	offsetJR3=offsetJR2+sizeJR2, sizeJR3=6561,
	offsetJR4=offsetJR3+sizeJR3, sizeJR4=6561,
	offsetJD8=offsetJR4+sizeJR4, sizeJD8=6561,
	offsetJD7=offsetJD8+sizeJD8, sizeJD7=2187,
	offsetJD6=offsetJD7+sizeJD7, sizeJD6= 729,
	offsetJD5=offsetJD6+sizeJD6, sizeJD5= 243,
	offsetJTriangle=offsetJD5+sizeJD5, sizeJTriangle=  9*6561,
	offsetJC4=offsetJTriangle+sizeJTriangle, sizeJC4=6561,
	offsetJC5=offsetJC4+sizeJC4, sizeJC5=6561*9,
	offsetJEX=offsetJC5+sizeJC5, sizeJEX=6561*9,
	offsetJMP=offsetJEX+sizeJEX, sizeJMP=64,
	offsetJMO=offsetJMP+sizeJMP, sizeJMO=64,
	offsetJPMP=offsetJMO+sizeJMO, sizeJPMP=64,
	offsetJPMO=offsetJPMP+sizeJPMP, sizeJPMO=64,
	offsetJPAR=offsetJPMO+sizeJPMO, sizeJPAR=2;

// value all the edge patterns. return the sum of the values.
static TCoeff ValueEdgePatternsJ(const TConfig configs[], const TCoeff* pcmove, int pattern1, int pattern2) {
	TConfig config1, config2, configXX;
	u4 configs2x5;
	TCoeff value;

	value=0;
	config1=configs[pattern1];
	config2=configs[pattern2];

	configs2x5=row1To2x5[config1]+row2To2x5[config2];
	configXX=config1+(config1<<1)+row2ToXX[config2];
	value+=ConfigValue(pcmove, configs2x5&0xFFFF, C2x5J, offsetJC5);
	value+=ConfigValue(pcmove, configs2x5>>16,    C2x5J, offsetJC5);
	value+=ConfigValue(pcmove, config1+(config1<<1)+row2ToXX[config2],CR1XXJ, offsetJEX);

	// in J-configs, the values are multiplied by 65536
	//_ASSERT((value&0xFFFF)==0);
	return value;
}

// value all the triangle patterns. return the sum of the values.
static TCoeff ValueTrianglePatternsJ(const TConfig configs[], const TCoeff* pcmove, int pattern1, int pattern2, int pattern3, int pattern4) {
	TConfig config1, config2, config3, config4;
	u4 configsTriangle;
	TCoeff value;

	value=0;
	config1=configs[pattern1];
	config2=configs[pattern2];
	config3=configs[pattern3];
	config4=configs[pattern4];

	configsTriangle=row1ToTriangle[config1]+row2ToTriangle[config2]+row3ToTriangle[config3]+row4ToTriangle[config4];
	value+=ConfigPMValue(pcmove, configsTriangle&0xFFFF, C4J, offsetJTriangle);
	value+=ConfigPMValue(pcmove, configsTriangle>>16,    C4J, offsetJTriangle);

	return value;
}

static CValue ValueJMobs(const TConfig configs[], int nEmpty, bool fBlackMove, TCoeff *const pcoeffs[2], u4 nMovesPlayer, u4 nMovesOpponent) {
	TCoeff value;
	TCoeff *pcmove=pcoeffs[fBlackMove];

	value=0;

	if (iDebugEval>1) {
		cout << "----------------------------\n";
		//bb.Print(fBlackMove);
		cout << (fBlackMove?"Black":"White") << " to move\n\n";
	}

	const TCoeff* const pR1 = pcmove+offsetJR1;
	value+=pR1[configs[0]] + pR1[configs[7]] + pR1[configs[19]] + pR1[configs[26]];
	const TCoeff* const pR2 = pcmove+offsetJR2;
	value+=pR2[configs[1]] + pR2[configs[6]] + pR2[configs[20]] + pR2[configs[25]];
	const TCoeff* const pR3 = pcmove+offsetJR3;
	value+=pR3[configs[2]] + pR3[configs[5]] + pR3[configs[21]] + pR3[configs[24]];
	const TCoeff* const pR4 = pcmove+offsetJR4;
	value+=pR4[configs[3]] + pR4[configs[4]] + pR4[configs[22]] + pR4[configs[23]];
	const TCoeff* const pD5 = pcmove+offsetJD5;
	value+=pD5[configs[10]] + pD5[configs[16]] + pD5[configs[29]] + pD5[configs[35]];
	const TCoeff* const pD6 = pcmove+offsetJD6;
	value+=pD6[configs[11]] + pD6[configs[15]] + pD6[configs[30]] + pD6[configs[34]];
	const TCoeff* const pD7 = pcmove+offsetJD7;
	value+=pD7[configs[12]] + pD7[configs[14]] + pD7[configs[31]] + pD7[configs[33]];
	const TCoeff* const pD8 = pcmove+offsetJD8;
	value+=pD8[configs[13]] + pD8[configs[32]];
	

	// Triangle patterns in corners
	value+=ValueTrianglePatternsJ(configs, pcmove, 0, 1, 2, 3);
	value+=ValueTrianglePatternsJ(configs, pcmove, 7, 6, 5, 4);

	if (iDebugEval>1)
		printf("Straight lines done. Value so far: %d.\n",value>>16);

	// Take apart packed information about pot mobilities
	int nPMO=(value>>8) & 0xFF;
	int nPMP=value&0xFF;
	if (iDebugEval>1)
		printf("Raw pot mobs: %d, %d\n", nPMO,nPMP);
	nPMO=(nPMO+potMobAdd)>>potMobShift;
	nPMP=(nPMP+potMobAdd)>>potMobShift;
	value>>=16;

	// pot mobility
	value+=ConfigValue(pcmove, nPMP, PM1J, offsetJPMP);
	value+=ConfigValue(pcmove, nPMO, PM2J, offsetJPMO);

	if (iDebugEval>1)
		printf("Potential mobility done. Value so far: %d.\n",value);

	// 2x4, 2x5, edge+2X patterns
	value+=ValueEdgePatternsJ(configs, pcmove, 0, 1);
	value+=ValueEdgePatternsJ(configs, pcmove, 7, 6);
	value+=ValueEdgePatternsJ(configs, pcmove, 19, 20);
	value+=ValueEdgePatternsJ(configs, pcmove, 26, 25);

	if (iDebugEval>1)
		printf("Corners done. Value so far: %d.\n",value);

	// mobility
	value+=ConfigValue(pcmove, nMovesPlayer, M1J, offsetJMP);
	value+=ConfigValue(pcmove, nMovesOpponent, M2J, offsetJMO);

	if (iDebugEval>1)
		printf("Mobility done. Value so far: %d.\n",value);

	// parity
	value+=ConfigValue(pcmove, nEmpty&1, PARJ, offsetJPAR);

	if (iDebugEval>0)
		printf("Total Value= %d\n", value);

	return CValue(value);
}

// pos2 evaluators
CValue CEvaluator::EvalMobs(const Pos2& pos2, u4 nMovesPlayer, u4 nMovesOpponent) const {
	int nEmpty = pos2.NEmpty();
	return ValueJMobs(pos2.Configs(), nEmpty, pos2.BlackMove(), pcoeffs[nEmpty], nMovesPlayer, nMovesOpponent);
}
