// WorkWithFiles.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"



int _tmain(int argc, _TCHAR* argv[])
{	
	Onegin onegin("onegin.txt");

	printf("New Onegin:\n%s", onegin.GetNewOnegin());

	return 0;
}

