// ExA3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	printf("#<-------ExA3 v1.0, by Kim Zyong------->#\n\n");

	setlocale(LC_ALL, "RUS");

	printf("������� ��� ���� �����.\n");

	long long val1 = 0, val2 = 0, val3 = 0;
	
	if (!Input(&val1, &val2, &val3)) return 0;

	long long res = lcm(val1, lcm(val2, val3));

	printf("LCM(%lli, %lli, %lli) == %lli\n", val1, val2, val3, res);

	return 0;
}

