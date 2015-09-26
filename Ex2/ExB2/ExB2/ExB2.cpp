// ExB2.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	printf("#<-------ExB1 v1.0, by Kim Zyong------->#\n\n");

	setlocale(LC_ALL, "RUS");

	printf("Ќормализует корень квадратный из n в вид b*корень(a).\n");

	long long n = 0;

	printf("Input n >> ");
	scanf_s("%lli", &n);

	long long a = 0, b = 0;

	Solve(n, &a, &b);

	char Res[ 256 ];

	(a == 1) ? sprintf_s(Res, "%lli", b) : 
				sprintf_s(Res, "%lli * sqrt(%lli)", b, a);

	printf("sqrt(%lli) == %s\n", n, Res);


	return 0;
}

