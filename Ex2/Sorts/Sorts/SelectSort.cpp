#include "stdafx.h"
#include "SelectSort.h"


void SelectSort(int* mas, int n) {

	if (n == 1)
		return;

	int current = 0;
	for (int i = 1; i < n; i++)
	if (mas[ i ] < mas[ current ])
		current = i;
	swap(mas, mas + current);

	SelectSort(mas + 1, n - 1);
}

