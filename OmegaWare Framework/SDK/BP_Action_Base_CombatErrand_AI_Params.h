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
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.TryRemoveReturnToTargetFact
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_TryRemoveReturnToTargetFact_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.TryAddReturnToTargetFact
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_TryAddReturnToTargetFact_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ModifyCounterBasedOnState
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_ModifyCounterBasedOnState_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.IsActionRunning
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_IsActionRunning_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GM5K[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ClearFireAndForgetActionDelegates
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_ClearFireAndForgetActionDelegates_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnFireAndForgetActionEnd
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnFireAndForgetActionEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnFireAndForgetActionResolved
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnFireAndForgetActionResolved_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnFireAndForgetActionCancelled
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnFireAndForgetActionCancelled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnCancelledParams                   Params;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RerequestFireAndForgetAction
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_RerequestFireAndForgetAction_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RemoveAllLifetimeFactsAdded
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_RemoveAllLifetimeFactsAdded_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.UpdateLifetimeFacts
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_UpdateLifetimeFacts_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnReturnToTargetEnded
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnReturnToTargetEnded_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnReturnToTargetResolved
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnReturnToTargetResolved_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnReturnToTargetCancelled
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnReturnToTargetCancelled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnCancelledParams                   Params;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.UnbindActionDelegates
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_UnbindActionDelegates_Params
	{
	public:
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      OnCancelledDelegate;                                     // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnResolvedDelegate;                                      // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnEndedDelegate;                                         // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BindActionDelegates
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_BindActionDelegates_Params
	{
	public:
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      OnCancelledDelegate;                                     // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnResolvedDelegate;                                      // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnEndedDelegate;                                         // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnTaskEnded
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnTaskEnded_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnTaskResolved
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnTaskResolved_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnTaskCancelled
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnTaskCancelled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnCancelledParams                   Params;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnErrandIntroEnded
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnErrandIntroEnded_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnErrandIntroResolved
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnErrandIntroResolved_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnErrandIntroCancelled
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnErrandIntroCancelled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnCancelledParams                   Params;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.CancelActiveQuery
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_CancelActiveQuery_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnErrandDestinationQueryFinished
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnErrandDestinationQueryFinished_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RequestStateBasedFireAndForgetAction
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_RequestStateBasedFireAndForgetAction_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ApplyStateCosmeticEffects
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_ApplyStateCosmeticEffects_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.GoToNextState
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_GoToNextState_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.GoToState
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_GoToState_Params
	{
	public:
		EErrandStates                                              NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.GetNextState
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_GetNextState_Params
	{
	public:
		EErrandStates                                              NextState;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndReturnToTarget
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_EndReturnToTarget_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndTask
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_EndTask_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndConditionsCheck
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_EndConditionsCheck_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndState
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_EndState_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginReturnToTarget
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_BeginReturnToTarget_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginTask
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_BeginTask_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginConditionsCheck
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_BeginConditionsCheck_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginState
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_BeginState_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnBeginEarly
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KBBV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RememberTargetModifier
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_RememberTargetModifier_Params
	{
	public:
		bool                                                       AddModifier;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LGAT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ErrandIntroConditions
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_ErrandIntroConditions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndErrandIntro
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_EndErrandIntro_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginErrandIntro
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_BeginErrandIntro_Params
	{	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.GetReason
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_GetReason_Params
	{
	public:
		struct FCharacterActionOnEndParams                         CharacterActionOnEndParams;                              // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class FString                                              ActionName;                                              // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ECharacterActionEndReason                                  ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RequestSubAction
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_RequestSubAction_Params
	{
	public:
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UActionDefinition*                                   Definition;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnEnd
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnBegin
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ExecuteUbergraph_BP_Action_Base_CombatErrand_AI
	 */
	struct UBP_Action_Base_CombatErrand_AI_C_ExecuteUbergraph_BP_Action_Base_CombatErrand_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
