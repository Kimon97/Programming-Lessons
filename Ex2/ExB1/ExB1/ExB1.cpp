// ExB1.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[]) {

	printf("#<-------ExB1 v1.0, by Kim Zyong------->#\n\n");

	setlocale(LC_ALL, "RUS");

	printf("ќпредел€ю: есть ли квадраты неких чисел больше 1 в введенном числе.\n");

	long long val;

	printf("Input value >> ");
	scanf_s("%lli", &val);

	if (Solve(val))
		printf("It has squares of some values.\n");
	else
		printf("It hasn't squares of some values.\n");

	return 0;
}

