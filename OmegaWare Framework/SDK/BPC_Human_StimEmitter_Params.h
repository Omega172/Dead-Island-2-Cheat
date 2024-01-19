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
	 * Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.TogglePassiveStim
	 */
	struct UBPC_Human_StimEmitter_C_TogglePassiveStim_Params
	{
	public:
		class UStimTemplate*                                       StimTemplate;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enable;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.DisablePassiveStims
	 */
	struct UBPC_Human_StimEmitter_C_DisablePassiveStims_Params
	{	};

	/**
	 * Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.EnablePassiveStims
	 */
	struct UBPC_Human_StimEmitter_C_EnablePassiveStims_Params
	{	};

	/**
	 * Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.UnbindListeners
	 */
	struct UBPC_Human_StimEmitter_C_UnbindListeners_Params
	{	};

	/**
	 * Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.BindListeners
	 */
	struct UBPC_Human_StimEmitter_C_BindListeners_Params
	{	};

	/**
	 * Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.OnSurvivorStimExpressionChanged
	 */
	struct UBPC_Human_StimEmitter_C_OnSurvivorStimExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LF72[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.ReceiveBeginPlay
	 */
	struct UBPC_Human_StimEmitter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.ReceiveEndPlay
	 */
	struct UBPC_Human_StimEmitter_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.ExecuteUbergraph_BPC_Human_StimEmitter
	 */
	struct UBPC_Human_StimEmitter_C_ExecuteUbergraph_BPC_Human_StimEmitter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
