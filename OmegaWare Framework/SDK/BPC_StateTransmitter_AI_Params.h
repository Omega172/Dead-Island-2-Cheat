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
	 * Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.ResetState
	 */
	struct UBPC_StateTransmitter_AI_C_ResetState_Params
	{
	public:
		ETransmittableStatus                                       StateType;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3KR1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.SetState
	 */
	struct UBPC_StateTransmitter_AI_C_SetState_Params
	{
	public:
		ETransmittableStatus                                       StateType;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R3SB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStateTransmitterConfig*                             Relay;                                                   // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.OnServerActivated
	 */
	struct UBPC_StateTransmitter_AI_C_OnServerActivated_Params
	{
	public:
		ETransmittableStatus                                       StatusType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T1TM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Strength;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.OnServerDeactivated
	 */
	struct UBPC_StateTransmitter_AI_C_OnServerDeactivated_Params
	{
	public:
		ETransmittableStatus                                       StatusType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.ReceiveBeginPlay
	 */
	struct UBPC_StateTransmitter_AI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.ExecuteUbergraph_BPC_StateTransmitter_AI
	 */
	struct UBPC_StateTransmitter_AI_C_ExecuteUbergraph_BPC_StateTransmitter_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
