// stdafx.cpp: �������� ����, ���������� ������ ����������� ���������� ������
// ExA1.pch ����� ������������������� ����������
// stdafx.obj ����� ��������� �������������� ����������������� �������� � ����

#include "stdafx.h"

int Solve(const int* mas, int* resMas, const int n) {

	int resN = 0;

	for (int i = 0; i < n; i++) 
		if (Check(mas[ i ]))
			resMas[ resN++ ] = mas[ i ];
	
	return resN;
}


bool Check(const int val) {
	
	int until = sqrt(double(val)) + 1;
	for(int i = 2; i < until;i++)
	if(val % i == 0)
		return false;

	return true;
}