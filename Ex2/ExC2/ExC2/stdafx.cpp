// stdafx.cpp: �������� ����, ���������� ������ ����������� ���������� ������
// ExC2.pch ����� ������������������� ����������
// stdafx.obj ����� ��������� �������������� ����������������� �������� � ����

#include "stdafx.h"

int Solve(const int n) {

	int res = 1;

	if (n == 1)return 2;

	for (int i = 2; i <= n; i++) {

		res += 2;
		while (!Check(res))res += 2;
	}

	return res;
}

bool Check(int val) {
	
	int until = sqrt((double)val) + 1;

	for (int i = 2; i < until;i++)
	if (val % i == 0)
		return false;

	return true;
}