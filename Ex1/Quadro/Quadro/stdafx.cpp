// stdafx.cpp: исходный файл, содержащий только стандартные включаемые модули
// Quadro.pch будет предкомпилированным заголовком
// stdafx.obj будет содержать предварительно откомпилированные сведения о типе

#include "stdafx.h"

//Input
bool InputWouldSolve(const char question[]) {

	printf(question);

	char ans;
	scanf_s(" %c", &ans);

	for (int i = 0; i < 10; i++) {
		if (ans == '+' || ans == '-') break;

		printf("\nНеправильный ввод. Попробуй еще раз.(введи + или -) >> ");
		scanf_s(" %c", &ans);
	}

	return ans == '+';
}


bool InputMults(double* a, double* b, double* c) {

	printf("Введи коэфициенты (a b c) своего уравнения через пробел. >> ");

	for (int i = 0; i < 10; i++) {
		if (scanf_s("%lg %lg %lg", a, b, c) < 3)
			printf("\nНеправильный ввод. Попробуй еще раз >> ");
		else
			return true;
	}

	return false;
}



//Output
int TwoRoots(double x1, double x2) {

	printf("\nОтвет:\n");

	setlocale(LC_ALL, "C");

	printf("%c x1 = %lg\n", char(218), x1);
	printf("%c\n", (char)179);
	printf("%c x2 = %lg\n", char(192), x2);

	setlocale(LC_ALL, "RUS");
	return 0;
}

int OneRoot(double x1, double x2) {

	printf("\nОтвет:\n");
	printf("x1 = x2 = %lg\n", x1);
	return 0;
}
int OneRootButNotQuadro(double x1, double x2) {

	printf("\nЭто не квадратное уравнение. Ответ:\n", x1);
	printf("x = %lg\n");
	return 0;
}

int NoRootsButNotQuadro(double x1, double x2) {
	printf("\nЭто не квадратное уравнение. Ответа нет.\n", x1);
	return 0;
}
int NoRoots(double x1, double x2) {
	printf("\nОтвета нет. D < 0.\n");
	return 0;
}

int InfiniteRoots(double x1, double x2) {
	printf("\nБесконечное количество решений.\n");
	return 0;
}