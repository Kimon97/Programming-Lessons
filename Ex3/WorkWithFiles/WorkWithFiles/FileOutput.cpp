#include "stdafx.h"
#include <boost\container\string.hpp>
using boost::container::string;
#include "Exceptions.h"
#include "FileOutput.h"


FileOutput::FileOutput(const char* fName) {
	file = fopen(fName, "w");
	if (!file)
		throw Exception("Can't open or create file!!!", Printing);
}


FileOutput::~FileOutput() {
	fclose(file);
}


void FileOutput::Write(string str) {
	if (fwrite(str.c_str(), sizeof(char), str.length(), file) != str.length())
		throw Exception("All strings havn't been written to the file!", Printing);
}
