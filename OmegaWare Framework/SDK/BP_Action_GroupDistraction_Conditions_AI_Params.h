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
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.CancellationConditionExpressionsMet
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_CancellationConditionExpressionsMet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.AddDSLog
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_AddDSLog_Params
	{
	public:
		class FString                                              DebugText;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EDSLogVerbosity                                            Verbosity;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.SetupDistractionLogger
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_SetupDistractionLogger_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.StartCooldown
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_StartCooldown_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.IsStimOffCooldown
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_IsStimOffCooldown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.RemoveThresholdTrackingEntry
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_RemoveThresholdTrackingEntry_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.OnInterruptionConditionsMet
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_OnInterruptionConditionsMet_Params
	{
	public:
		bool                                                       DamageRequirementMet;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StabilityDamageMet;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.SetupInterruptionEntries
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_SetupInterruptionEntries_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.RemoveSelfFromDistractionCoordinator
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_RemoveSelfFromDistractionCoordinator_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.OnTryAddParticipantCompleteDelegate
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_OnTryAddParticipantCompleteDelegate_Params
	{
	public:
		bool                                                       ParticipantAdded;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DBFE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.AddLifetimeFactsWhenConditionsSucceed
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_AddLifetimeFactsWhenConditionsSucceed_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.RemoveLifetimeFactsWhenConditionsSucceeded
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_RemoveLifetimeFactsWhenConditionsSucceeded_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.UnbindCancellationExpressions
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_UnbindCancellationExpressions_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.OnCancellationExpressionChanged
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_OnCancellationExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.BindCancellationExpressions
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_BindCancellationExpressions_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.UnbindAndEndDistractionStateMachineAction
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_UnbindAndEndDistractionStateMachineAction_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.RequestStateMachineAction
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_RequestStateMachineAction_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.OnStateMachineActionEnded
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_OnStateMachineActionEnded_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.OnBeginEarly
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_30MN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.OnEnd
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.OnBegin
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C.ExecuteUbergraph_BP_Action_GroupDistraction_Conditions_AI
	 */
	struct UBP_Action_GroupDistraction_Conditions_AI_C_ExecuteUbergraph_BP_Action_GroupDistraction_Conditions_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
