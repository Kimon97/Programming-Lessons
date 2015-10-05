// stdafx.cpp: �������� ����, ���������� ������ ����������� ���������� ������
// A4.pch ����� ������������������� ����������
// stdafx.obj ����� ��������� �������������� ����������������� �������� � ����

#include "stdafx.h"

int Input() {

	printf("������� �����>>");
	int val = 0;

	if (scanf("%d", &val) != 1) {
		throw "Bed input!";
	}

	return val;
}


int SumOfNum(int val) {

	if (val < 0) {
		throw "Bed value!";
	}
	int sum = 0;

	while (val > 0) {
		sum += val % 10;
		val /= 10;
	}

	return sum;
}


void Output(int sum) {

	printf("����� ���� �����: %d\n", sum);

	return;
}
