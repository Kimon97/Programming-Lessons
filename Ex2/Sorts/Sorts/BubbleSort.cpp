#include "stdafx.h"
#include "BubbleSort.h"


void BubbleSort(int* mas, int n) {
	if (n == 1) {
		return;
	}

	BubbleSort(mas + 1, n - 1);

	for (int i = 0; i < n - 1; i++)
	if (mas[ i ] > mas[ i + 1 ]) 
		swap(&mas[ i ], &mas[ i + 1 ]);
			
}
