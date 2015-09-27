// stdafx.cpp: исходный файл, содержащий только стандартные включаемые модули
// WorkWithFiles.pch будет предкомпилированным заголовком
// stdafx.obj будет содержать предварительно откомпилированные сведения о типе

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
