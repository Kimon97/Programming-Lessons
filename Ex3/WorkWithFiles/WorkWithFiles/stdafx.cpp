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

		break;
	default:
		printf("Some non-declered problems: \n");
	}
	printf("%s\n", e.Info().c_str());

}
