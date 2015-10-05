// stdafx.cpp: исходный файл, содержащий только стандартные включаемые модули
// A4.pch будет предкомпилированным заголовком
// stdafx.obj будет содержать предварительно откомпилированные сведения о типе

#include "stdafx.h"

int Input() {

	printf("Введите число>>");
	int val = 0;

	if (scanf("%d", &val) != 1) {
		throw "Bed input!";
	}

	return val;
}


int SumOfNum(int val) {

	if (val < 0) {
		throw "Bed value!";
	}
	int sum = 0;

	while (val > 0) {
		sum += val % 10;
		val /= 10;
	}

	return sum;
}


void Output(int sum) {

	printf("Сумма цифр числа: %d\n", sum);

	return;
}
