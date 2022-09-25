#include <stdlib.h>
#include "handlError.h"
#include "stdafx.h"
//print last error code and message
void handlError(void) {
	DWORD error=GetLastError();//variabe to store error code value
	TCHAR errMessage[1024];//array to store error message
	FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM, NULL, error, 0, errMessage, 1024, NULL);
	wprintf(L"Error_Code: %d, Error_Message: %s", error, errMessage);
	exit(EXIT_FAILURE);//unsuccessful execution of a program
}
