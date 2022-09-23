#include <stdlib.h>
#include "handlError.h"
#include "stdafx.h"
void handlError(void) {
	DWORD error=GetLastError();
	TCHAR errMessage[1024];
	FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM, NULL, error, 0, errMessage, 1024, NULL);
	wprintf(L"Error_Code: %d, Error_Message: %s", error, errMessage);
	exit(EXIT_FAILURE);
}