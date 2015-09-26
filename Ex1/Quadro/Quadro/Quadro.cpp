// Quadro.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[]) {

	printf("#<-------Quadro v1.0, by Kim Zyong------->#\n\n");

	setlocale(LC_ALL, "RUS");

	Functions* mas = new Functions[ 6 ];

	mas[ TWO_ROOTS ] = TwoRoots;
	mas[ ONE_ROOT ] = OneRoot;
	mas[ ONE_ROOT_BUT_NOT_QUADRO ] = OneRootButNotQuadro;
	mas[ NO_ROOTS ] = NoRoots;
	mas[ NO_ROOTS_BUT_NOT_QUADRO ] = NoRootsButNotQuadro;
	mas[ INFINITE_ROOTS ] = InfiniteRoots;


	double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;

	bool ans = InputWouldSolve("Привет, ты хочешь решить квадратное уравнение?(введи + или -) >> ");

	int res = 0;

	while (ans) {

		printf("\nОтлично!\n");
		InputMults(&a, &b, &c);

		res = Quadro(a, b, c, &x1, &x2);
		mas[ res ](x1, x2);

		ans = InputWouldSolve("\nХочешь еще решить квадратное уравнение?(введи + или -) >> ");
	}

	return 0;
}

#include "SolvingQuadro.cpp"