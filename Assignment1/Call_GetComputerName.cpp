#include "stdafx.h"
#include "Call_SystemInfo_APIs.h"
#include <wchar.h>
#include "handlError.h"
void Call_GetComputerName(wchar_t* buff, DWORD* sizeofbuff) {
	if (!GetComputerName(buff, sizeofbuff)) {
		wprintf(L"GetComputerName() failed\n");
		handlError();

	}
	wprintf(L"GetComputerName() successed\n");
	wprintf(L"Computer Name: %s\n", buff);
}