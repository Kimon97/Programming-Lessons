// ExC2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	printf("#<-------ExB1 v1.0, by Kim Zyong------->#\n\n");

	setlocale(LC_ALL, "RUS");

	printf("Я нахожу N-ное простое число несчитая 1.\n");

	int n;
	printf("Input N >> ");
	scanf_s("%d", &n);

	int res = Solve(n);

	printf("Answer: %d\n", res);

	return 0;
}

