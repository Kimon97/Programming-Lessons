// A4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");
	printf("� ������ ����� ���� �����!\n\n\n");
	try {
		int val = Input();

		int res = SumOfNum(val);

		Output(res);
	}
	catch (char* e) {
		printf(e);
		return 0;
	}
	return 0;
}

