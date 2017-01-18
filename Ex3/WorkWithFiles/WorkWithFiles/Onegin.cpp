#include "stdafx.h"

#include <boost\container\string.hpp>
using boost::container::string;

#include <boost\container\vector.hpp>
using boost::container::vector;

#include <random>
#include <time.h>

#include "FileInput.h"
#include "FileOutput.h"
#include "Exceptions.h"

#include "Onegin.h"




Onegin::Onegin(const char* fName) {
#pragma region OLD
	/*FILE* file = fopen(path, "r");

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
	Sort();*/
#pragma endregion

	FileInput Input(fName);

	strmas = Input.CreateStringsByPattern(PATTERN);

	CutBedSimbols();

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
string Onegin::GetNewOnegin(const int CountOfVerses, const string separator) {
	srand(time(NULL));

	if (CountOfVerses * 14 > strmas.size())
		throw Exception("Count of verses you asked is more then posible!", Inputing);

	int i, j;
	string res;

	int size = strmas.size() - 1;
	int* randmas = (int*)calloc(size,sizeof(*randmas));

	if (!randmas)
		throw Exception("Bed allocation!", Memory);

	//Creating random massive without repetitions
	for (i = 0; i < size; i++)
		randmas[ i ] = i;

	i = j = 0;

	int n = size + rand();
	for (int k = 0; k < n; k++) {
		i = rand() % size;

		do
			j = rand() % size;
		while (j == i);

		std::swap(randmas[ i ], randmas[ j ]);
	}

	//Creating verses
	for (int k = 0; k < CountOfVerses; k++) {
#pragma region CreatingVerse
		//ABAB
		i = randmas[ 7 * k + 0 ];
		j = randmas[ 7 * k + 1 ];

		res += strmas[ i ] + '\n' + strmas[ j ] + '\n' + strmas[ i + 1 ] + '\n' + strmas[ j + 1 ] + '\n';
		string str = strmas[ i ];
		//AABB
		i = randmas[ 7 * k + 2 ];
		j = randmas[ 7 * k + 3 ];

		res += strmas[ i ] + '\n' + strmas[ i + 1 ] + '\n' + strmas[ j ] + '\n' + strmas[ j + 1 ] + '\n';

		//ABBA
		i = randmas[ 7 * k + 4 ];
		j = randmas[ 7 * k + 5 ];

		res += strmas[ i ] + '\n' + strmas[ j ] + '\n' + strmas[ j + 1 ] + '\n' + strmas[ i + 1 ] + '\n';

		//AA
		i = randmas[ 7 * k + 6 ];

		res += strmas[ i ] + '\n' + strmas[ i + 1 ]+'\n';

#pragma endregion

		res += separator;
	}
	return res;
}


bool Onegin::NewOneginToFile(const char* fName,const int VersesCount) {

	FileOutput file (fName);

	string str = GetNewOnegin(VersesCount,"\n");

	file.Write(str);
	return true;
}

void Onegin::CutBedSimbols() {
	for (int i = 0; i < strmas.size(); i++) {
		strmas[ i ].erase(strmas[ i ].begin(), strmas[ i ].begin() + 2);
		strmas[ i ].erase(strmas[ i ].end() - 1);
	}
}


Onegin::~Onegin() {}