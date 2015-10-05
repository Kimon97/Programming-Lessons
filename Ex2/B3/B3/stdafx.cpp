// stdafx.cpp: исходный файл, содержащий только стандартные включаемые модули
// B3.pch будет предкомпилированным заголовком
// stdafx.obj будет содержать предварительно откомпилированные сведения о типе

#include "stdafx.h"

int Input(int* mas) {

}


int ThreeMAX(int n, int* mas, int res[]) {
	if (n == 1) {
		res[ 0 ] = mas[ 0 ];
		return n;
	}

	if (n == 2) {
		res[ 0 ] = max(mas[ 0 ], mas[ 1 ]);
		res[ 1 ] = min(mas[ 0 ], mas[ 1 ]);
	}


}


void ThreeSort(int* mas) {
	bool b = false;
	do {
		if (mas[ 0 ] > mas[ 1 ]) {
			swap(mas[ 0 ], mas[ 1 ]);
			b = true;
		}
		if (mas[ 1 ] > mas[ 2 ]) {
			swap(mas[ 1 ], mas[ 2 ]);
			b = true;
		}
	} while (b);
	

}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}



void Output(int n, int* mas, ...);