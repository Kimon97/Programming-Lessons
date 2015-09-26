// stdafx.cpp: исходный файл, содержащий только стандартные включаемые модули
// ExB1.pch будет предкомпилированным заголовком
// stdafx.obj будет содержать предварительно откомпилированные сведения о типе

#include "stdafx.h"

bool Solve(long long val) {

	long long until = sqrtl((long double)val) + 1;

	for (long long i = 2; i < until;i++)
	if (val % (i*i) == 0)
		return true;

	return false;
}