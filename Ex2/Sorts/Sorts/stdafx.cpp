// stdafx.cpp: исходный файл, содержащий только стандартные включаемые модули
// Sorts.pch будет предкомпилированным заголовком
// stdafx.obj будет содержать предварительно откомпилированные сведения о типе

#include "stdafx.h"

void swap(int* val1, int* val2) {

	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;

}