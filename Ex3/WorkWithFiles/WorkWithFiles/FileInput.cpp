#include "stdafx.h"

#include <boost\container\string.hpp>
using boost::container::string;

#include <boost\container\vector.hpp>
using boost::container::vector;

#include <regex>


#include "Exceptions.h"

#include "FileInput.h"


FileInput::FileInput(const char* path)  {
	file = fopen(path, "r");

	if (!file) throw Exception("File isn't existing!", Creating);

	fseek(file, 0, SEEK_END);
	int len = ftell(file);
	rewind(file);

	char* buf = (char*)calloc(len, sizeof(*buf));

	fread(buf, sizeof(*buf), len, file);

	text = buf;
}

string FileInput::GetText() {
	return text;
}



vector<string> FileInput::CreateStringsByPattern(string pattern) {


	std::smatch matches;
	std::regex reg(pattern.c_str());
	std::string str = text.c_str();
//	std::string temp;
	vector<string> mas;
	while (std::regex_search(str, matches, reg)) {
		for (auto x : matches) {
			

			//*(temp.begin() + x.length()) = '\0';
			string temp = x.str().c_str();
			mas.push_back(temp);
			temp = mas[ 0 ];
			
		
		}
		str = matches.suffix();
	}
	return mas;
}

FileInput::~FileInput() {
	fclose(file);
}
