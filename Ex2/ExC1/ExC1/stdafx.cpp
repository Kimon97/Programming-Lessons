// stdafx.cpp: исходный файл, содержащий только стандартные включаемые модули
// ExC1.pch будет предкомпилированным заголовком
// stdafx.obj будет содержать предварительно откомпилированные сведения о типе

#include "stdafx.h"

bool Solve(long long val) {

	if ((val + 2) % 4 == 0)return false;
	
	if (val == 1)return true;



	if (val % 4 == 0) return Solve(val / 4);

	if ((val + 1) % 4 == 0) return Solve((val + 1) / 4);

	if ((val - 1) % 4 == 0) return Solve((val - 1) / 4);

	return false;
}