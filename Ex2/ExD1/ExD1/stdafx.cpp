// stdafx.cpp: исходный файл, содержащий только стандартные включаемые модули
// ExD1.pch будет предкомпилированным заголовком
// stdafx.obj будет содержать предварительно откомпилированные сведения о типе

#include "stdafx.h"

#pragma region Work with matrix
int** createIntMatr(int n, int m) {
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

char** createCharMatr(int n, int m) {
	bool allRight = true;

	char** matr = (char**)calloc(n, sizeof(*matr));
	if (matr)
	for (int i = 0; i < n; i++) {

		matr[ i ] = (char*)calloc(m, sizeof(**matr));

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


template<typename T>
void deleteMatr(T** matr, int n) {

	for (int i = 0; i < n; i++)
		free(matr[ i ]);
	free(matr);
}
#pragma endregion

bool Input(char** matr, const int n) {

	printf("Input matrix:\n");

	char temp;

	for (int i = 0; i < n; i++)	
	for (int j = 0; j < n; j++) {
		do {
			scanf_s("%c", &temp);
			if (!(temp == '.' || temp == '#' || temp == ' ' || temp == '\n')) {
				printf("Wrong input!\n");
				return false;
			}
		} while (temp != '.' && temp != '#');

		matr[ i ][ j ] = temp;
	}
	
	return true;
}

#pragma region Main solve
int Result(char** matr, int n, int* xRes, int* yRes) {

	int** matrI = createIntMatr(n, n);

	Solve(matr, n - 1, n - 1, matrI);
	
	int res = 0;

	for (int i = 0; i < n;i++)
	for (int j = 0; j < n; j++) 
	if (matrI[ i ][ j ] > res) {
		res = matrI[ i ][ j ];
		*xRes = j;
		*yRes = i;
	}
	

	deleteMatr(matrI, n);

	return res;
}

int Solve(char** chMatr, int iX, int iY, int** iMatr) {
	
	if (iX == 0 || iY == 0) {
		if (chMatr[ iY ][ iX ] == '#') {
			iMatr[ iY ][ iX ] = 0;
			return 0;
		}
		else {
			iMatr[ iY ][ iX ] = 1;
			return 1;
		}
	}

	if (chMatr[ iY ][ iX ] == '#') {
		Solve(chMatr, iX - 1, iY, iMatr), Solve(chMatr, iX, iY - 1, iMatr), Solve(chMatr, iX - 1, iY - 1, iMatr);
		iMatr[ iY ][ iX ] = 0;
		return 0;
	}

	iMatr[ iY ][ iX ] = min(min(Solve(chMatr, iX - 1, iY, iMatr), Solve(chMatr, iX, iY - 1, iMatr)), Solve(chMatr, iX - 1, iY - 1, iMatr)) + 1;

	return iMatr[ iY ][ iX ];
}
#pragma endregion
