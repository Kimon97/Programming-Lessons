#include "stdafx.h"
#include "Onegin.h"


Onegin::Onegin(char* path) {

	FILE* file = fopen(path, "r");
	fseek(file, 0, SEEK_END);
	int len = ftell(file);
	rewind(file);
	char* buf = (char*)calloc(len, sizeof(*buf));

	fread(buf, sizeof(*buf), len, file);

	char* temp = buf;

	for (int i = 0; i < len; i++) {
		while (*temp != '\n') temp++,i++;
		*temp = '\0';
		if (buf[ 0 ] == '\t' && buf[ 1 ] == '\t')
			strmas.push_back(std::string(buf));
		temp++;
		i++;
		buf = temp;
	}
	Sort();
}

//private
bool Onegin::Compare(std::string str1, std::string str2) {
	std::string::iterator iStr1 = str1.end();
	std::string::iterator iStr2 = str1.end();
	int res = 0;
	while (!res) {
		iStr1--;
		iStr2--;

		if (iStr1 == str1.begin() || iStr2 == str2.begin()) return false;

		while (!isalpha(*iStr1))iStr1--;
		while (!isalpha(*iStr2))iStr2--;
		res = iStr1 - iStr2;
	}

	return iStr1 < iStr2;
}

//private
void Onegin::Sort() {
	vector<std::string>::iterator begin = strmas.begin(), end = strmas.end();
	std::sort(begin, end, Compare);
}

//public
std::string Onegin::GetNewOnegin() { 
	srand(time(NULL));

	int i, j;
	std::string res;

	//ABAB
	i = rand()*rand() % strmas.size();
	j = rand()*rand() % strmas.size();

	res += strmas[ i ] + '\n' += strmas[ j ] + '\n' += strmas[ i + 1 ] + '\n' += strmas[ j + 1 ] + '\n';

	//AABB
	i = rand()*rand() % strmas.size();
	j = rand()*rand() % strmas.size();

	res += strmas[ i ] + '\n' += strmas[ i + 1 ] + '\n' += strmas[ j ] + '\n' += strmas[ j + 1 ] + '\n';

	//ABBA
	i = rand()*rand() % strmas.size();
	j = rand()*rand() % strmas.size();

	res += strmas[ i ] + '\n' += strmas[ j ] + '\n' += strmas[ j + 1 ] + '\n' += strmas[ i + 1 ] + '\n';

	//AA
	i = rand()*rand() % strmas.size();

	res += strmas[ i ] + '\n' += strmas[ i + 1 ] + '\n';
	return res;
}

Onegin::~Onegin() {}
