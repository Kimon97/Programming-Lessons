// ExB1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[]) {

	printf("#<-------ExB1 v1.0, by Kim Zyong------->#\n\n");

	setlocale(LC_ALL, "RUS");

	printf("���������: ���� �� �������� ����� ����� ������ 1 � ��������� �����.\n");

	long long val;

	printf("Input value >> ");
	scanf_s("%lli", &val);

	if (Solve(val))
		printf("It has squares of some values.\n");
	else
		printf("It hasn't squares of some values.\n");

	return 0;
}

