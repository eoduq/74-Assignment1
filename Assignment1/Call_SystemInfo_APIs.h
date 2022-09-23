#pragma once
#include "stdafx.h"

void Call_GetNativeSystemInfo(SYSTEM_INFO* SystemInfo);
void Call_GetComputerName(TCHAR* buff, DWORD* sizeofbuff);
void Call_GetWindowsDirectory(TCHAR* buff, UINT sizeofbuff);
void Call_GetProductInfo(DWORD osMajorVersion,
	DWORD osMinorVersion,
	DWORD spMajorVersion,
	DWORD spMinorVersion,
 DWORD* edition);