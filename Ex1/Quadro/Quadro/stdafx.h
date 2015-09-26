// stdafx.h: включаемый файл дл€ стандартных системных включаемых файлов
// или включаемых файлов дл€ конкретного проекта, которые часто используютс€, но
// не часто измен€ютс€
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



/*Libraries*/
#include <math.h>


#include <locale.h>

#define INDEXING

#include "SolvingQuadro.h"
#include "Codes.h"

#undef INDEXING

typedef int(*Functions)(double, double);

/*Functions*/
	/*Input*/
bool InputWouldSolve(const char question[]);
bool InputMults(double* a, double* b, double* c);


	/*Output*/
int TwoRoots(double x1, double x2);

int OneRoot(double x1, double x2);
int OneRootButNotQuadro(double x1, double x2);

int NoRootsButNotQuadro(double x1, double x2);
int NoRoots(double x1, double x2);

int InfiniteRoots(double x1, double x2);

