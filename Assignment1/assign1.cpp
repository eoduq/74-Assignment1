#include "stdafx.h"
#include <tchar.h>
#include "Call_SystemInfo_APIs.h"
#include "Print_SharedUserData.h"
#define MAX_PATH 260


//_tmain for unicode program(wmain) else main
int _tmain(int argc, _TCHAR* argv[]) {

	//arguments for Call_GetNativeSystemInfo()
	SYSTEM_INFO SystemInfo; 
	memset(&SystemInfo, 0, sizeof(SystemInfo));
	wprintf(L"------------------------\n");
	wprintf(L"------------------------\n");
	Call_GetNativeSystemInfo(&SystemInfo);

	//arguments for Call_GetComputerName()
	wchar_t ComputerName[256];
	DWORD sizeName = sizeof(ComputerName);
	wprintf(L"------------------------\n");
	Call_GetComputerName(ComputerName, &sizeName);

	//arguments for Call_GetWindowDirectory()
	wchar_t WindowDirectory[MAX_PATH];
	UINT32 sizeDirec = sizeof(WindowDirectory);
	wprintf(L"------------------------\n");
	Call_GetWindowsDirectory(WindowDirectory, sizeDirec);

	//arguments for Call_GetProductInfo()
	DWORD osMajorVersion=6;
	DWORD osMinorVersion=0;
	DWORD spMajorVersion = 0;//NULL;
	DWORD spMinorVersion = 0;// NULL;
	DWORD edition=0;
	wprintf(L"------------------------\n");
	Call_GetProductInfo(osMajorVersion,
		osMinorVersion,
		spMajorVersion,
		spMinorVersion,
		&edition);
	wprintf(L"------------------------\n");
	wprintf(L"------------------------\n");
	wprintf(L"\n\n");


	wprintf(L"------------------------\n");
	wprintf(L"------------------------\n");
	wprintf(L"exact version of your Windows system\n");
	//KUSER_SHARED_DATA mydata;
	
	Print_SharedUserData();
	wprintf(L"------------------------\n");
	wprintf(L"------------------------\n");



	return 0;
}