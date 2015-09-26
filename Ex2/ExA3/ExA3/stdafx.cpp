// stdafx.cpp: �������� ����, ���������� ������ ����������� ���������� ������
// ExA3.pch ����� ������������������� ����������
// stdafx.obj ����� ��������� �������������� ����������������� �������� � ����

#include "stdafx.h"

long long gcd(long long val1, long long val2) {
	if (val2 == 0)
		return val1;

	return gcd(val2, val1 % val2);
}

long long lcm(long long val1, long long val2) {
	return val1*val2 / gcd(val1, val2);
}

bool Input(long long* val1, long long* val2, long long* val3) {

	printf("Input three values:\n");
	if (scanf_s("%lli %lli %lli", val1, val2, val3) < 3) {
		printf("Problems with input!\n");
		return false;
	}

	return true;
}
