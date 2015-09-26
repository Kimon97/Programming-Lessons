#pragma once

#include "SolvingQuadro.h"
#include "stdafx.h"

template<typename T>
int Quadro(const T a, const T b, const T c, T* x1, T* x2) {
	if (a == 0) {
		if (b == 0) {
			if (c == 0) return INFINITE_ROOTS;

			return NO_ROOTS_BUT_NOT_QUADRO;
		}

		*x1 = *x2 = -c / b;
		return ONE_ROOT_BUT_NOT_QUADRO;
	}

	if (b == 0) {
		if (c > 0) return NO_ROOTS;
		else {
			*x1 = sqrt(-c / a);
			*x2 = -*x1;
			return TWO_ROOTS;
		}
	}

	if (c == 0) {
		*x1 = 0;
		*x2 = -b / a;
		return TWO_ROOTS;
	}

	double d = b*b - 4 * a*c;
	if (d < 0) return NO_ROOTS;
	if (d == 0) {
		*x1 = *x2 = -b / (2 * a);
		return ONE_ROOT;
	}
	*x1 = (-b - sqrt(d)) / 2 / a;
	*x2 = (-b + sqrt(d)) / 2 / a;
	return TWO_ROOTS;
}