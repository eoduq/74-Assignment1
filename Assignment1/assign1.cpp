#include "stdafx.h"
#include <tchar.h>
#include "Call_SystemInfo_APIs.h"
#define MAX_PATH 260


//_tmain for unicode program(wmain) else main
int _tmain(int argc, _TCHAR* argv[]) {

	//arguments for Call_GetNativeSystemInfo()
	SYSTEM_INFO SystemInfo; 
	memset(&SystemInfo, 0, sizeof(SystemInfo));
	printf("------------------------\n");
	Call_GetNativeSystemInfo(&SystemInfo);

	//arguments for Call_GetComputerName()
	wchar_t ComputerName[256];
	DWORD sizeName = sizeof(ComputerName);
	printf("------------------------\n");
	Call_GetComputerName(ComputerName, &sizeName);

	//arguments for Call_GetWindowDirectory()
	wchar_t WindowDirectory[MAX_PATH];
	UINT32 sizeDirec = sizeof(WindowDirectory);
	printf("------------------------\n");
	Call_GetWindowsDirectory(WindowDirectory, sizeDirec);

	//arguments for Call_GetProductInfo()
	DWORD osMajorVersion=6;
	DWORD osMinorVersion=0;
	DWORD spMajorVersion = 0;//NULL;
	DWORD spMinorVersion = 0;// NULL;
	DWORD edition=0;
	printf("------------------------\n");
	Call_GetProductInfo(osMajorVersion,
		osMinorVersion,
		spMajorVersion,
		spMinorVersion,
		&edition);
	printf("------------------------\n");



	return 0;
}