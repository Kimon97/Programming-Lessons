// Sorts.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[]) {

	int* mas = new int[ MAX ];
	srand(time(NULL));

	printf("===================================\n");
	printf("\tBubble sort\n");
	printf("===================================\n");


	for (int i = 0; i < MAX; i++)
		mas[ i ] = rand() % 30;

	printf("Before:\n");

	for (int i = 0; i < MAX; i++)
		printf("%d ", mas[i]);

	BubbleSort(mas, MAX);

	printf("\n-----------------------------------\n");

	printf("After:\n");

	for (int i = 0; i < MAX; i++)
		printf("%d ", mas[i]);
	printf("\n-----------------------------------\n");
	printf("\n\n\n");

	printf("===================================\n");
	printf("\tSelect sort\n");
	printf("===================================\n");

	
	printf("Before:\n");
	for (int i = 0; i < MAX; i++)
		mas[ i ] = rand() % 30;

	for (int i = 0; i < MAX; i++)
		printf("%d ", mas[ i ]);

	SelectSort(mas, MAX);

	printf("\n-----------------------------------\n");

	printf("After:\n");

	for (int i = 0; i < MAX; i++)
		printf("%d ", mas[ i ]);
	printf("\n-----------------------------------\n");


	return 0;
}

