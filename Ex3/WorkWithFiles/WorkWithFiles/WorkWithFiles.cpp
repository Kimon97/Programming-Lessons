// WorkWithFiles.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[]) {

	setlocale(LC_ALL, "RUS");

	try {
		
		Onegin onegin("onegin.txt");
		printf("New Onegin:\n%s", onegin.GetNewOnegin().c_str());
	}
	catch (Exception e) {
		OperateException(e);
	}
	return 0;
}
