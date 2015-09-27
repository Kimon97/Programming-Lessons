// stdafx.cpp: �������� ����, ���������� ������ ����������� ���������� ������
// WorkWithFiles.pch ����� ������������������� ����������
// stdafx.obj ����� ��������� �������������� ����������������� �������� � ����

#include "stdafx.h"

void OperateException(Exception e) {
	switch (e.Code()) {
	case Creating:
		printf("Problems with creating: \n");
		break;
	case Deleting:
		printf("Problems with deleting: \n");
		break;

	case Sorting:
		printf("Problems with sorting: \n");
		break;
	default:
		printf("Some non-declered problems: \n");
	}
	printf("%s\n", e.Info().c_str());

}
