#pragma once

/*
<summary>

	If you want to use it with 
	massives of functions, write
	(#define INDEXING) before
	inclusion of this .h and
	SolvingQuadro.h files.

</summary>
*/

#ifdef INDEXING

const int TWO_ROOTS = 5;
const int ONE_ROOT = 4;
const int NO_ROOTS = 3;
const int ONE_ROOT_BUT_NOT_QUADRO = 2;
const int NO_ROOTS_BUT_NOT_QUADRO = 1;
const int INFINITE_ROOTS = 0;

#else

const int TWO_ROOTS = 2;
const int ONE_ROOT = 1;
const int NO_ROOTS = 0;
const int ONE_ROOT_BUT_NOT_QUADRO = -1;
const int NO_ROOTS_BUT_NOT_QUADRO = -2;
const int INFINITE_ROOTS = -3;

#endif
