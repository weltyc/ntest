#include <Windows.h>
#include "Store.h"
#include <sstream>

FileIo::FileIo(const std::string& path, bool forReading) : m_path(path) {
	const char* mode = forReading ? "rb" : "wb";
	fp = fopen(path.c_str(), mode);
	if (fp==NULL) {
		throw IOException("Unable to open file", path, errno);
	}
}

FileIo::~FileIo() {
	if (fp==NULL) {
		throw IOException("File is not open", "", -1);
	}
	int result = fclose(fp);
	fp=NULL;
	if (result!=0) {
		throw IOException("Error closing the file", "", result);
	}
}

static std::string TempPath(const std::string& path) {
	// generate temporary file name for writing
	std::string tempDir;
	size_t loc=path.find_last_of("\\/");
	if (loc==-1) {
		tempDir=".";
	}
	else {
		tempDir.assign(path, 0, loc);
	}
	char fnTemp[MAX_PATH+1];
	GetTempFileNameA(tempDir.c_str(), "bk", 0, fnTemp);
	fnTemp[MAX_PATH]=0;
	return std::string(fnTemp);
}

FileWriter::FileWriter(const std::string& path) : m_permanentPath(path)
	, m_tempPath(TempPath(path))
	, m_file(new FileIo(m_tempPath, false)) {
};

FileWriter::~FileWriter() {
	m_file.reset(0);

	if (!MoveFileExA(m_tempPath.c_str(), m_permanentPath.c_str(), MOVEFILE_REPLACE_EXISTING)) {
		int err=GetLastError();
		std::ostringstream os;
		os << "WARNING: Can't save book file " << m_permanentPath << "\n";
		switch(err) {
			case ERROR_ACCESS_DENIED:
				os << "Access denied (is the file write-protected?)";
				break;
			case ERROR_WRITE_PROTECT:
				os << "Disk is write protected";
				break;
			default:
				os << "error code = " << err;
		}
		os << "\n";
		throw IOException(os.str(), m_permanentPath, err);
	}
}

size_t MemoryWriter::write(const void* data, size_t size, size_t count) {
	char* pc = (char*)data;

	for (size_t i=0; i<size; i++) {
		for (size_t j=0; j<count; j++) {
			const char c = *pc;
			m_bytes.push_back(c);
			pc++;
		}
	}

	return count;
}

size_t MemoryReader::read(void* data, size_t size, size_t count) {
	char* pc = (char*) data;

	for (size_t j=0; j<count; j++) {
		for (size_t i=0; i<size; i++) {
			if (readLoc >= m_bytes.size()) {
				return j;
			}
			*pc = m_bytes[readLoc];
			readLoc++;
			pc++;
		}
	}

	return count;
}
