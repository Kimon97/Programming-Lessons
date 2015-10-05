// A4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");
	printf("Я нахожу сумму цифр числа!\n\n\n");
	try {
		int val = Input();

		int res = SumOfNum(val);

		Output(res);
	}
	catch (char* e) {
		printf(e);
		return 0;
	}
	return 0;
}

