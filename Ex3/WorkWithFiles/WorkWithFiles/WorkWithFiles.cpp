// WorkWithFiles.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[]) {

	setlocale(LC_ALL, "RUS");

	try {
		
		Onegin onegin(InputFile);

		int n;
		printf("Input count of verses>>");
		scanf("%d", &n);
		
		onegin.NewOneginToFile(OutputFile, n);
		//printf("Would you like to see resoults?(0 or 1)>>");
		//int flag = 0;
		//scanf("%d", &flag);
		//if (flag) {
		//	//_spawnl(P_NOWAITO, OutputFile, OutputFile);
		//	//ShellExecute(NULL, (LPCWSTR)"open", (LPCWSTR)OutputFile, NULL, NULL, SW_RESTORE);
		//	//CreateProcess(NULL,   // No module name (use command line)
		//	//			  (LPWSTR)InputFile,        // Command line
		//	//			  NULL,           // Process handle not inheritable
		//	//			  NULL,           // Thread handle not inheritable
		//	//			  FALSE,          // Set handle inheritance to FALSE
		//	//			  0,              // No creation flags
		//	//			  NULL,           // Use parent's environment block
		//	//			  NULL,           // Use parent's starting directory 
		//	//			  NULL,            // Pointer to STARTUPINFO structure
		//	//			  NULL);

		//	//system(strcat("notepad /", OutputFile));
		//	//OpenFile(OutputFile);
		//	printf((const char*)argv[ 1 ]);
		//}
	}
	catch (Exception e) {
		OperateException(e);
	}
	return 0;
}
