#include "stdafx.h"
#include "Call_SystemInfo_APIs.h"
#include "handlError.h"
void Call_GetNativeSystemInfo(SYSTEM_INFO* SystemInfo) {
	::GetNativeSystemInfo(SystemInfo);
	wprintf(L"GetNativeSystemInfo() successed\n");
	if (SystemInfo->wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64) {
		//return 9
		wprintf(L"x64 (AMD or Intel)\n");
	}
	else if (SystemInfo->wProcessorArchitecture == PROCESSOR_ARCHITECTURE_ARM) {
		//return 5
		wprintf(L"ARM\n");
	}
	else if (SystemInfo->wProcessorArchitecture == PROCESSOR_ARCHITECTURE_ARM64) {
		//return 12
		wprintf(L"ARM64");
	}
	else if (SystemInfo->wProcessorArchitecture == PROCESSOR_ARCHITECTURE_IA64) {
		//return 6
		wprintf(L"Intel Itanium-based\n");
	}
	else if (SystemInfo->wProcessorArchitecture == PROCESSOR_ARCHITECTURE_INTEL) {
		//return 0
		wprintf(L"x86\n");
	}
	else if (SystemInfo->wProcessorArchitecture == PROCESSOR_ARCHITECTURE_UNKNOWN) {
		//return 0xffff
		wprintf(L"Unknown architecture.\n");
	}
}


