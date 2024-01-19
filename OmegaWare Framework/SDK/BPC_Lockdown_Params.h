#pragma once

/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPC_Lockdown.BPC_Lockdown_C.GetLockdownState
	 */
	struct UBPC_Lockdown_C_GetLockdownState_Params
	{
	public:
		bool                                                       bLockdownState;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Lockdown.BPC_Lockdown_C.UpdateLockdownState
	 */
	struct UBPC_Lockdown_C_UpdateLockdownState_Params
	{
	public:
		bool                                                       bNewLockdownState;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Lockdown.BPC_Lockdown_C.ReceiveBeginPlay
	 */
	struct UBPC_Lockdown_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Lockdown.BPC_Lockdown_C.ReceiveEndPlay
	 */
	struct UBPC_Lockdown_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Lockdown.BPC_Lockdown_C.ExecuteUbergraph_BPC_Lockdown
	 */
	struct UBPC_Lockdown_C_ExecuteUbergraph_BPC_Lockdown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MR0S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Lockdown.BPC_Lockdown_C.OnLockdownStateChanged__DelegateSignature
	 */
	struct UBPC_Lockdown_C_OnLockdownStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bNewLockdownState;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
