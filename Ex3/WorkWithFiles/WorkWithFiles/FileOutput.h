#pragma once
class FileOutput {
private:
	FILE* file;
public:
	FileOutput(const char* fName);
	
	void Write(string str);

	virtual ~FileOutput();
};

