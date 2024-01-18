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
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.BeginAndEndStim
	 */
	struct UBPC_Base_StimEmitter_C_BeginAndEndStim_Params
	{
	public:
		class UStimTemplate*                                       StimTemplate;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSStimOverrideParams                                StimParams;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStimID                                             StimID;                                                  // 0x0014(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.EndStim
	 */
	struct UBPC_Base_StimEmitter_C_EndStim_Params
	{
	public:
		struct FStimID                                             StimID;                                                  // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.BeginStim
	 */
	struct UBPC_Base_StimEmitter_C_BeginStim_Params
	{
	public:
		class UStimTemplate*                                       StimTemplate;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSStimOverrideParams                                StimParams;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		struct FStimID                                             StimID;                                                  // 0x0010(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PLIH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ReceiveEndPlay
	 */
	struct UBPC_Base_StimEmitter_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ExecuteUbergraph_BPC_Base_StimEmitter
	 */
	struct UBPC_Base_StimEmitter_C_ExecuteUbergraph_BPC_Base_StimEmitter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
