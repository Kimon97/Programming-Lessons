#pragma once
class FileInput {
private:
	FILE* file;
	string text;
public:
	FileInput(const char* path);
	vector<string> CreateStringsByPattern(string pattern);
	string GetText();
	virtual ~FileInput();
};

