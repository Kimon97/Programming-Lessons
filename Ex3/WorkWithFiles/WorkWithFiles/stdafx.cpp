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

	case Printing:
		printf("Problems with printing: \n");
		break;

	case Reading:
		printf("Problems with reading: \n");
		break;

	default:
		printf("Some non-declered problems: \n");
	}
	printf("%s\n", e.Info().c_str());

}

//bool OpenFile(const char* str) {
//
//	char path[256];
//	GetModuleFileName(NULL, (LPWSTR)path, MAX_PATH);
//	assert(printf(path));
//	Catting(path);
//	return true;
//}

//bool Catting(char* str) {
	/*char* end = str + strlen(str) - 1;
	while (str != end)
	if (*end == '/') {
		*end = '\0';
		return true;
	}
	return true;
}*/