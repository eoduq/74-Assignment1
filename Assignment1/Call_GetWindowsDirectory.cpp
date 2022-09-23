#include "stdafx.h"
#include "Call_SystemInfo_APIs.h"
#include "handlError.h"
void Call_GetWindowsDirectory(TCHAR* buff, UINT sizeofbuff) {
	if (!GetWindowsDirectory(buff, sizeofbuff)) {
		wprintf(L"GetWindowsDirectory() failed\n");
		handlError();
	}
	wprintf(L"GetWindowsDirectory() successed\n");
	wprintf(L"Window Directory: %s\n",buff);
}