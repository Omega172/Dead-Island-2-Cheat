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
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.CardCounterModification
	 */
	struct UBP_Action_Wait_AI_C_CardCounterModification_Params
	{
	public:
		TArray<struct FCardDealerCounterModification>              CardModifiers;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.ShouldTick
	 */
	struct UBP_Action_Wait_AI_C_ShouldTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.UpdateWantsTick
	 */
	struct UBP_Action_Wait_AI_C_UpdateWantsTick_Params
	{	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.AddDSLog
	 */
	struct UBP_Action_Wait_AI_C_AddDSLog_Params
	{
	public:
		class FString                                              LogText;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EDSLogVerbosity                                            Verbosity;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.CastAndStoreParams
	 */
	struct UBP_Action_Wait_AI_C_CastAndStoreParams_Params
	{
	public:
		class UCustomActionParamsBase*                             BaseParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QHL6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.SetupMovementLogger
	 */
	struct UBP_Action_Wait_AI_C_SetupMovementLogger_Params
	{	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.SetPeekedCardOverrideByConsoleCommand
	 */
	struct UBP_Action_Wait_AI_C_SetPeekedCardOverrideByConsoleCommand_Params
	{	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.DisablePeekedCardCheck
	 */
	struct UBP_Action_Wait_AI_C_DisablePeekedCardCheck_Params
	{	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.SelectedPeekedCardsValid
	 */
	struct UBP_Action_Wait_AI_C_SelectedPeekedCardsValid_Params
	{	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.EnablePeekedCardCheck
	 */
	struct UBP_Action_Wait_AI_C_EnablePeekedCardCheck_Params
	{	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnBeginEarly
	 */
	struct UBP_Action_Wait_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M348[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.CalculateMaxDuration
	 */
	struct UBP_Action_Wait_AI_C_CalculateMaxDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.CalculateMinDuration
	 */
	struct UBP_Action_Wait_AI_C_CalculateMinDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EQRR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnPeekedCardIsDifferent
	 */
	struct UBP_Action_Wait_AI_C_OnPeekedCardIsDifferent_Params
	{	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnMaxWaitDurationOver
	 */
	struct UBP_Action_Wait_AI_C_OnMaxWaitDurationOver_Params
	{	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.SetupDurationRequirement
	 */
	struct UBP_Action_Wait_AI_C_SetupDurationRequirement_Params
	{	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnMinWaitDurationOver
	 */
	struct UBP_Action_Wait_AI_C_OnMinWaitDurationOver_Params
	{	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.DetermineIfWaitShouldEnd
	 */
	struct UBP_Action_Wait_AI_C_DetermineIfWaitShouldEnd_Params
	{	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnBegin
	 */
	struct UBP_Action_Wait_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnEnd
	 */
	struct UBP_Action_Wait_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnHasCombatTargetCancellationExpressionChanged
	 */
	struct UBP_Action_Wait_AI_C_OnHasCombatTargetCancellationExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnTick
	 */
	struct UBP_Action_Wait_AI_C_OnTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.ExecuteUbergraph_BP_Action_Wait_AI
	 */
	struct UBP_Action_Wait_AI_C_ExecuteUbergraph_BP_Action_Wait_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
