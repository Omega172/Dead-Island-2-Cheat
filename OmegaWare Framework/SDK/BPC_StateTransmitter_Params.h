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
	 * Function BPC_StateTransmitter.BPC_StateTransmitter_C.OnServerActivated
	 */
	struct UBPC_StateTransmitter_C_OnServerActivated_Params
	{
	public:
		ETransmittableStatus                                       StatusType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GJ1A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Strength;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_StateTransmitter.BPC_StateTransmitter_C.OnServerDeactivated
	 */
	struct UBPC_StateTransmitter_C_OnServerDeactivated_Params
	{
	public:
		ETransmittableStatus                                       StatusType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_StateTransmitter.BPC_StateTransmitter_C.ExecuteUbergraph_BPC_StateTransmitter
	 */
	struct UBPC_StateTransmitter_C_ExecuteUbergraph_BPC_StateTransmitter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_StateTransmitter.BPC_StateTransmitter_C.ServerDeactivated__DelegateSignature
	 */
	struct UBPC_StateTransmitter_C_ServerDeactivated__DelegateSignature_Params
	{	};

	/**
	 * Function BPC_StateTransmitter.BPC_StateTransmitter_C.ServerActivated__DelegateSignature
	 */
	struct UBPC_StateTransmitter_C_ServerActivated__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
