// ExA2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[]) {

	printf("#<-------ExA2 v1.0, by Kim Zyong------->#\n\n");

	int n;
	printf("Input N - size of matrix >> ");
	scanf_s("%d", &n);

	int** matr = createMatr(n, n);

	if (!matr) {
		printf("Problem with memory allocation!\n");
		return 0;
	}

	printf("Input matrix:\n");

	for (int i = 0; i < n; i++)
	for (int j = 0; j < n; j++)
	if (scanf_s("%d", &matr[ i ][ j ]) < 1) {
		printf("Problems with input!\n");
		return  0;
	}
		


	for (int i = 0; i < n; i++)
	for (int j = 0; j < n; j++)
		swap(&matr[ i ][ j ], &matr[ j ][ i ]);

	printf("New matrix:\n");
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++)
			printf("%d ", matr[ i ][ j ]);
		printf("\n");

	}

	deleteMatr(matr, n);
	
	return 0;
}

