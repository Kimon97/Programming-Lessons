// stdafx.cpp: �������� ����, ���������� ������ ����������� ���������� ������
// ExB1.pch ����� ������������������� ����������
// stdafx.obj ����� ��������� �������������� ����������������� �������� � ����

#include "stdafx.h"

bool Solve(long long val) {

	long long until = sqrtl((long double)val) + 1;

	for (long long i = 2; i < until;i++)
	if (val % (i*i) == 0)
		return true;

	return false;
}