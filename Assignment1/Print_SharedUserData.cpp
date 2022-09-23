
#include "stdafx.h"
#include "Print_SharedUserData.h"
void Print_SharedUserData(void) {
	auto sharedUserData = (BYTE*)0x7FFE0000;//KUSER_SHARED_DATA struct is allocated in fixed address
	wprintf(L"Version: %d.%d.%d\n", *(ULONG*)(sharedUserData + 0x26c), *(ULONG*)(sharedUserData + 0x270), *(ULONG*)(sharedUserData + 0x260));


}