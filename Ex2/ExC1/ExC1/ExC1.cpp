// ExC1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	printf("#<-------ExC1 v1.0, by Kim Zyong------->#\n\n");

	long long val;

	printf("Input weight >> ");
	scanf_s("%lli", &val);

	if (Solve(val))
		printf("We can weigh it.\n");
	else
		printf("We can't weigh it.\n");

	return 0;
}

