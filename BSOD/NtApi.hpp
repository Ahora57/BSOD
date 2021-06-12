#pragma once
#include "Struct.h"

#pragma comment(lib, "ntdll.lib")



namespace NtApiWork {



	EXTERN_C NTSTATUS NTAPI RtlAdjustPrivilege(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrentThread, PBOOLEAN  Enabled);
	EXTERN_C NTSTATUS NTAPI NtRaiseHardError(NTSTATUS ErrorStatus, ULONG NumberOfParameters, ULONG UnocodeStringParameterMask, PULONG_PTR Parameters, ULONG ValidResponceOption, PULONG Responce);
	EXTERN_C NTSTATUS NTAPI RtlSetProcessIsCritical(BOOLEAN bNew,BOOLEAN* pbOld,BOOLEAN bNeedScb);
	EXTERN_C NTSTATUS NTAPI	NtTerminateProcess(IN HANDLE               ProcessHandle OPTIONAL, IN NTSTATUS             ExitStatus);

}