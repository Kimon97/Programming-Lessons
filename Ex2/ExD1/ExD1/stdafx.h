// stdafx.h: включаемый файл дл€ стандартных системных включаемых файлов
// или включаемых файлов дл€ конкретного проекта, которые часто используютс€, но
// не часто измен€ютс€
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>




#include <locale.h>
#include <allocators>


#define min(a,b)    (((a) < (b)) ? (a) : (b))


//Functions

int** createIntMatr(int n, int m);
char** createCharMatr(int n, int m);

template<typename T>
void deleteMatr(T** matr, int n);


bool Input(char** matr, const int n);


int Result(char** matr, int n, int* xRes, int* yRes);
int Solve(char** chMatr, int iX, int iY, int** iMatr);

