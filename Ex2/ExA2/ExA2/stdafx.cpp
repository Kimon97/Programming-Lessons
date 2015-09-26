// stdafx.cpp: исходный файл, содержащий только стандартные включаемые модули
// ExA2.pch будет предкомпилированным заголовком
// stdafx.obj будет содержать предварительно откомпилированные сведения о типе

#include "stdafx.h"

void Swap(int* a, int* b) {

	int temp = *a;

	*a = *b;

	*b = temp;

}

int** createMatr(int n, int m) {
	bool allRight = true;

	int** matr = (int**)calloc(n, sizeof(*matr));
	if (matr)
	for (int i = 0; i < n; i++) {

		matr[ i ] = (int*)calloc(m, sizeof(**matr));

		if (!matr[ i ]) {
			deleteMatr(matr, i);
			allRight = false;
			break;
		}
	}

	else
		allRight = false;


	if (allRight)
		return matr;

	return NULL;
}

void deleteMatr(int** matr, int n) {

	for (int i = 0; i < n; i++)
		free(matr[ i ]);
	free(matr);
}
