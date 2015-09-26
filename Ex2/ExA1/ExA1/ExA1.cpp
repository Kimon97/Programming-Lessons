// ExA1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[]) {

	printf("#<-------ExA1 v1.0, by Kim Zyong------->#\n\n");

	setlocale(LC_ALL, "RUS");

	printf("Я из введенных списка чисел выдаю простые.\n");

	int n;

	printf("Input namber of values>> ");
	scanf_s("%d", &n);

	int* mas = (int*)calloc(n, sizeof(*mas));
	if(!mas){
		printf("Error with memory allocation!\n");
		return 0;
	}

	printf("Input values:\n");

	for(int i = 0; i < n; i++)
	if(scanf_s("%d", mas + i) != 1){
		printf("Wrong input!");
		return 0;
	}

	int* resMas = (int*)calloc(n, sizeof(*mas));

	int resN = Solve(mas, resMas, n);

	printf("Resoult:\n");
	for (int i = 0; i < resN; i++)
		printf("%d ", resMas[ i ]);
	printf("\n");

	free(mas);
	free(resMas);

	return 0;
}

