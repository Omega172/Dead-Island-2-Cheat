#pragma once

/**
 * Name: Dead_Island_2
 * Version: Cracked
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
	 * Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.SyncStateExpressionChanged
	 */
	struct UBPC_AnimationSlave_AI_C_SyncStateExpressionChanged_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.ReceiveBeginPlay
	 */
	struct UBPC_AnimationSlave_AI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.ReceiveEndPlay
	 */
	struct UBPC_AnimationSlave_AI_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.OnDelayOver
	 */
	struct UBPC_AnimationSlave_AI_C_OnDelayOver_Params
	{	};

	/**
	 * Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.ExecuteUbergraph_BPC_AnimationSlave_AI
	 */
	struct UBPC_AnimationSlave_AI_C_ExecuteUbergraph_BPC_AnimationSlave_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_615K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
