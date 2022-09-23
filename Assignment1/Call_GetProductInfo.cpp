#include "stdafx.h"
#include "Call_SystemInfo_APIs.h"
#include "handlError.h"
void Call_GetProductInfo(DWORD osMajorVersion,
	DWORD osMinorVersion,
	DWORD spMajorVersion,
	DWORD spMinorVersion,
	DWORD* edition) {
	//This function fails if one of the input parameters is invalid.
	if (!GetProductInfo(
		osMajorVersion,
		osMinorVersion,
		spMajorVersion,
		spMinorVersion,
		edition)) {

		wprintf(L"GetProductInfo() failed\n");
		handlError();
	};
	wprintf(L"GetProductInfo() successed\n");
	switch (*edition) {
		case PRODUCT_BUSINESS:
			wprintf(L"Product Info: Buisiness\n");
			break;
		case PRODUCT_CORE:
			wprintf(L"Product Info: Windows 10 Home\n");
			break;
		case PRODUCT_HOME_PREMIUM:
			wprintf(L"Product Info: Home Premium\n");
			break;
		case PRODUCT_PROFESSIONAL:
			wprintf(L"Product Info: Windows 10 Pro\n");
			break;
		case PRODUCT_EDUCATION:
			wprintf(L"Product Info: Windows 10 Education\n");
			break;
		case PRODUCT_STANDARD_SERVER:
		case PRODUCT_STANDARD_SERVER_CORE:
		case PRODUCT_STANDARD_SERVER_CORE_V:
		case PRODUCT_STANDARD_SERVER_V:
			break;
		default:
			wprintf(L"Product Info: An unknown product\n");
	}
	wprintf(L"Product Info: 0x%08x\n", *edition);
}