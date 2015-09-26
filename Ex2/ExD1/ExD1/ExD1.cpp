// ExD1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	printf("#<-------ExD1 v1.0, by Kim Zyong------->#\n\n");

	setlocale(LC_ALL, "RUS");

	printf("Эта программа находит наименьший квадрат из точек в введенной матрице NxN.\n");

	int n;
	printf("Input N >> ");
	if (scanf_s("%d", &n) != 1 || n < 1 || n > 100) {
		printf("Wrong input!\n");
		return 0;
	}

	char** matr = createCharMatr(n, n);

	if (!Input(matr, n)) return 0;

	int xRes = 0, yRes = 0;

	int lenRes = Result(matr, n, &xRes, &yRes);

	printf("Max length of square == %d\n", lenRes);
	printf("Right Bottom point is (%d,%d)\n", xRes, yRes);
	
	deleteMatr(matr, n);

	return 0;
}

template<typename T>
void deleteMatr(T** matr, int n) {

	for (int i = 0; i < n; i++)
		free(matr[ i ]);
	free(matr);
}
