// stdafx.cpp: �������� ����, ���������� ������ ����������� ���������� ������
// ExB2.pch ����� ������������������� ����������
// stdafx.obj ����� ��������� �������������� ����������������� �������� � ����

#include "stdafx.h"

long long Exist(long long val) {

	long long until = sqrtl((long double)val) + 1;

	for (long long i = 2; i < until; i++)
	if (val % (i*i) == 0)
		return i;


	return 1;
}

void Solve(long long val, long long* underSquare, long long* nearSquare) {

	long long Ret;

	*nearSquare = 1;
	*underSquare = val;

	while ((Ret = Exist(*underSquare)) != 1) {

		*nearSquare *= Ret;
		*underSquare /= Ret*Ret;

	}

}