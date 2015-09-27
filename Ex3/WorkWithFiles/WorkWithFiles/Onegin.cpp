#include "stdafx.h"
#include "Onegin.h"




Onegin::Onegin(char* path) {

	FILE* file = fopen(path, "r");

	if (!file) throw Exception("File isn't existing!",Creating);

	fseek(file, 0, SEEK_END);
	int len = ftell(file);
	rewind(file);

	char* buf = (char*)calloc(len, sizeof(*buf));

	fread(buf, sizeof(*buf), len, file);

	char* temp = buf;

	for (int i = 0; i < len; i++) {
		while (*temp != '\n') temp++, i++;

		*temp = '\0';

		if (buf[ 0 ] == '\t' && 
			buf[ 1 ] == '\t')
			strmas.push_back(string(buf+2));

		temp++;
		i++;
		buf = temp;
	}
	Sort();
}

//private
bool Onegin::isalpha_(char c) {
	bool flag = false;
	if (c >= 'à' && c <= 'ÿ') {
		flag = true;
	}
	if (c >= 'À' && c <= 'ß') {
		flag = true;
	}
	return flag;
}

bool Onegin::Compare(string str1, string str2) {
	string::iterator iStr1 = str1.end();
	string::iterator iStr2 = str2.end();

	int res = 0;

	while (!res && iStr1 > str1.begin() && iStr2 > str2.begin()) {
		
		

		iStr1--;
		iStr2--;

		while (!isalpha_(*iStr1)) {
			iStr1--;

			if (iStr1 <= str1.begin() || iStr2 <= str2.begin()) return false;
		}
		while (!isalpha_(*iStr2)) {
			iStr2--;

			if (iStr1 <= str1.begin() || iStr2 <= str2.begin()) return false;
		}

		res = *iStr1 - *iStr2;
	}

	return *iStr1 < *iStr2;
}

//private
void Onegin::Sort() {
	try {
		vector<string>::iterator begin = strmas.begin(),
			end = strmas.end();


		std::sort(begin, end, Compare);
	}
	catch (std::exception e) {
		throw Exception(string(e.what()), Sorting);
	}

}

//public
string Onegin::GetNewOnegin() {
	srand(time(NULL));

	int i, j;
	string res;

	int randmas[ 7 ] = {};

	for (int i = 0; i < 7; i++) {
		randmas[ i ] = rand()*rand() % (strmas.size() - 1);
		for (int j = 0; j < i; j++) {
			if (randmas[ i ] == randmas[ j ]) {
				i--;
				break;
			}
		}

	}
	//ABAB
	i = randmas[ 0 ];
	j = randmas[ 1 ];

	res += strmas[ i ] + '\n' += strmas[ j ] + '\n' += strmas[ i + 1 ] + '\n' += strmas[ j + 1 ] + '\n';

	//AABB
	i = randmas[ 2 ];
	j = randmas[ 3 ];

	res += strmas[ i ] + '\n' += strmas[ i + 1 ] + '\n' += strmas[ j ] + '\n' += strmas[ j + 1 ] + '\n';

	//ABBA
	i = randmas[ 4 ];
	j = randmas[ 5 ];

	res += strmas[ i ] + '\n' += strmas[ j ] + '\n' += strmas[ j + 1 ] + '\n' += strmas[ i + 1 ] + '\n';

	//AA
	i = randmas[ 6 ];

	res += strmas[ i ] + '\n' += strmas[ i + 1 ] + '\n';
	return res;
}

Onegin::~Onegin() {}