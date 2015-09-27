// TestTime.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[]) {

	setlocale(LC_ALL, "RUS");
	std::string str;

	char buf[ 256 ];

	clock_t time = clock();

	ifstream in("onegin.txt", ios::in);

	//in.sync_with_stdio(false);
	int k = in.width();
	while (!in.eof()) {
		in.getline(buf, 256);
	//	printf("%s\n", buf);
		//str += buf;
	}

	in.close();
	time -= clock();
	time = -time;
	printf("\n\n\n%d\n", time);
	char* buf1;
	time = -clock();
	FILE* f = fopen("onegin.txt", "rb");
	fseek(f, 0, SEEK_END);
	int len = ftell(f);
	buf1 = (char*)calloc(len, sizeof(char));
	rewind(f);
	fread(buf1, sizeof(*buf1), len, f);
	fclose(f);
	time += clock();
	printf("%d", time);
	for (int i = 0; i < 10000000000000; i++)i = i;
	printf(buf1);
	return 0;
}

