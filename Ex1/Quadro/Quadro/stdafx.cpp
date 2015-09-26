// stdafx.cpp: �������� ����, ���������� ������ ����������� ���������� ������
// Quadro.pch ����� ������������������� ����������
// stdafx.obj ����� ��������� �������������� ����������������� �������� � ����

#include "stdafx.h"

//Input
bool InputWouldSolve(const char question[]) {

	printf(question);

	char ans;
	scanf_s(" %c", &ans);

	for (int i = 0; i < 10; i++) {
		if (ans == '+' || ans == '-') break;

		printf("\n������������ ����. �������� ��� ���.(����� + ��� -) >> ");
		scanf_s(" %c", &ans);
	}

	return ans == '+';
}


bool InputMults(double* a, double* b, double* c) {

	printf("����� ����������� (a b c) ������ ��������� ����� ������. >> ");

	for (int i = 0; i < 10; i++) {
		if (scanf_s("%lg %lg %lg", a, b, c) < 3)
			printf("\n������������ ����. �������� ��� ��� >> ");
		else
			return true;
	}

	return false;
}



//Output
int TwoRoots(double x1, double x2) {

	printf("\n�����:\n");

	setlocale(LC_ALL, "C");

	printf("%c x1 = %lg\n", char(218), x1);
	printf("%c\n", (char)179);
	printf("%c x2 = %lg\n", char(192), x2);

	setlocale(LC_ALL, "RUS");
	return 0;
}

int OneRoot(double x1, double x2) {

	printf("\n�����:\n");
	printf("x1 = x2 = %lg\n", x1);
	return 0;
}
int OneRootButNotQuadro(double x1, double x2) {

	printf("\n��� �� ���������� ���������. �����:\n", x1);
	printf("x = %lg\n");
	return 0;
}

int NoRootsButNotQuadro(double x1, double x2) {
	printf("\n��� �� ���������� ���������. ������ ���.\n", x1);
	return 0;
}
int NoRoots(double x1, double x2) {
	printf("\n������ ���. D < 0.\n");
	return 0;
}

int InfiniteRoots(double x1, double x2) {
	printf("\n����������� ���������� �������.\n");
	return 0;
}