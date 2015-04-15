#ifndef H_Store
#define H_Store

#include <cerrno>
#include <cstdio>
#include <memory>
#include <vector>
#include <string>
#include <iostream>

//! Abstract interface for a stream to write information (FILE* or memory)
class Writer {
public:
	//! Write data to the store
	//! @param data - location of data to write
	//! @param size - size of data elements, in bytes, for instance using sizeof()
	//! @param count - number of data elements to write
	//! @return number of data elements written. If this differs from count, there was an error.
	virtual size_t write(const void* data, size_t size, size_t count) = 0;

	//! Close the writer
	//! \throw IOException if unable to write to the file
	virtual ~Writer() {};
};

//! Abstract interface for a stream to read information (FILE* or memory)
class Reader {
public:
	//! Read data from the store
	//! @param data - location to store the data that was read in
	//! @param size - size of data elements, in bytes, for instance using sizeof()
	//! @param count - number of data elements to read
	//! @return number of data elements read. If this differs from count, there was an error.
	virtual size_t read(void* data, size_t size, size_t count) = 0;
	virtual ~Reader() {};
};

class IOException {
public:
	const std::string m_description;
	const std::string m_filename;
	const int m_errno;

	IOException(const std::string& description, const std::string& filename, int errorNumber) : m_description(description), m_filename(filename), m_errno(errorNumber) {};
	IOException(const char* description, const std::string& filename, int errorNumber) : m_description(description), m_filename(filename), m_errno(errorNumber) {};
	bool IsFileNotFound() { return m_errno == ENOENT; };
};

//! Abstract interface for a place to store and retrieve information (File or Memory)
class Store {
public:
	//! get a new Writer to write to this Store.
	//! The caller is responsible for calling delete(writer)
	//! \throw IOException if an error occurred when opening the file
	virtual std::auto_ptr<Writer> getWriter() = 0;

	//! get a new Reader to read to this Store
	//! The caller is responsible for calling delete(reader)
	//! \throw IOException if an error occurred when opening the file
	virtual std::auto_ptr<Reader> getReader() = 0;

	//! String representation of this Store
	virtual std::string ToString() = 0;
};

//! Base class for file-based Reader and Writer
class FileIo {
protected:
	FILE* fp;

public:
	const std::string m_path;

	FileIo(const std::string& path, bool forReading);
	size_t write(const void* data, size_t size, size_t count) {
		return fwrite(data, size, count, fp);
	}

	virtual ~FileIo();
};

class FileWriter : public Writer {
private: 
	const std::string m_permanentPath;
	const std::string m_tempPath;
	std::auto_ptr<FileIo> m_file;

public:
	FileWriter(const std::string& path);
	~FileWriter();

	size_t write(const void* data, size_t size, size_t count) {
		return m_file->write(data, size, count);
	}
};

class FileReader : public FileIo, public Reader {
public:
	FileReader(const std::string& path) : FileIo(path, true) {};

	size_t read(void* data, size_t size, size_t count) {
		return fread(data, size, count, fp);
	}
};

class File : public Store {
private:
	const std::string m_path;

public:
	File(const std::string& path) : m_path(path) {};
	File(const char* path) : m_path(path) {};

	std::auto_ptr<Writer> getWriter() {
		return std::auto_ptr<Writer>(new FileWriter(m_path));
	}

	std::auto_ptr<Reader> getReader() {
		return std::auto_ptr<Reader>(new FileReader(m_path));
	}

	std::string ToString() {
		return m_path;
	}
};

class MemoryWriter : public Writer {
private:
	std::vector<char>& m_bytes;

public:
	MemoryWriter(std::vector<char>& bytes) : m_bytes(bytes) {};

	size_t write(const void* data, size_t size, size_t count);
};

class MemoryReader : public Reader {
private:
	std::vector<char>& m_bytes;
	size_t readLoc;

public:
	MemoryReader(std::vector<char>& bytes) : m_bytes(bytes), readLoc(0) {};

	size_t read(void* data, size_t size, size_t count);
};

class MemoryStore : public Store {
private:
	std::vector<char>& m_bytes;	//!< Not owned by the store! Somebody else has to delete it.

public:
	MemoryStore(std::vector<char>& bytes) : m_bytes(bytes) {};

	std::auto_ptr<Reader> getReader() {
		return std::auto_ptr<Reader>(new MemoryReader(m_bytes));
	}

	std::auto_ptr<Writer> getWriter() {
		return std::auto_ptr<Writer>(new MemoryWriter(m_bytes));
	}

	std::string ToString() {
		return "Memory Store";
	}
	
	void Print() const {
		std::cout << "char[] fileBytes = {";
		for (std::vector<char>::iterator it = m_bytes.begin(); it != m_bytes.end(); ++it) {
			std::cout << (short)(*it) << ", ";
		}
		std::cout << "};\n";
	}
};

#endif  //H_Store
