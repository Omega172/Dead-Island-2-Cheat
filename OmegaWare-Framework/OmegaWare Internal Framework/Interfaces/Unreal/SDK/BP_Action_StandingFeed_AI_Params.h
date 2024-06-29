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
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnInterruptionConditionsMet
	 */
	struct UBP_Action_StandingFeed_AI_C_OnInterruptionConditionsMet_Params
	{
	public:
		bool                                                       DamageRequirementMet;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StabilityDamageMet;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.ResetArmMeatFact
	 */
	struct UBP_Action_StandingFeed_AI_C_ResetArmMeatFact_Params
	{	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.HasMeatOnArms
	 */
	struct UBP_Action_StandingFeed_AI_C_HasMeatOnArms_Params
	{
	public:
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.UnbindActionListeners
	 */
	struct UBP_Action_StandingFeed_AI_C_UnbindActionListeners_Params
	{
	public:
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      OnEndActionDelegate;                                     // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnCancelledAction;                                       // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnActionResolved;                                        // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.BindActionListeners
	 */
	struct UBP_Action_StandingFeed_AI_C_BindActionListeners_Params
	{
	public:
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      OnEndActionDelegate;                                     // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnCancelledAction;                                       // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnActionResolved;                                        // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.WasFeastingSuccessful
	 */
	struct UBP_Action_StandingFeed_AI_C_WasFeastingSuccessful_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GEN3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.ModifyDeckCounters
	 */
	struct UBP_Action_StandingFeed_AI_C_ModifyDeckCounters_Params
	{
	public:
		ECharacterActionEndedReason                                ReasonForEnding;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnCombatTargetChanged
	 */
	struct UBP_Action_StandingFeed_AI_C_OnCombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.EndAnimSetAction
	 */
	struct UBP_Action_StandingFeed_AI_C_EndAnimSetAction_Params
	{	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnAnimSetActionResolved
	 */
	struct UBP_Action_StandingFeed_AI_C_OnAnimSetActionResolved_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnAnimSetActionCancelled
	 */
	struct UBP_Action_StandingFeed_AI_C_OnAnimSetActionCancelled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnCancelledParams                   Params;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnAnimSetActionEnded
	 */
	struct UBP_Action_StandingFeed_AI_C_OnAnimSetActionEnded_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.RequestAnimSetAction
	 */
	struct UBP_Action_StandingFeed_AI_C_RequestAnimSetAction_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               ArmToFeastFromFact;                                      // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.UnbindListeners
	 */
	struct UBP_Action_StandingFeed_AI_C_UnbindListeners_Params
	{	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.BindListeners
	 */
	struct UBP_Action_StandingFeed_AI_C_BindListeners_Params
	{	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.SetRegenRate
	 */
	struct UBP_Action_StandingFeed_AI_C_SetRegenRate_Params
	{
	public:
		float                                                      NewRegenRate;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnHealthUpdated
	 */
	struct UBP_Action_StandingFeed_AI_C_OnHealthUpdated_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LastHealth;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentHealth;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnBeginEarly
	 */
	struct UBP_Action_StandingFeed_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnBegin
	 */
	struct UBP_Action_StandingFeed_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.BeginFeastingNextAnim
	 */
	struct UBP_Action_StandingFeed_AI_C_BeginFeastingNextAnim_Params
	{	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnEnd
	 */
	struct UBP_Action_StandingFeed_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.ExecuteUbergraph_BP_Action_StandingFeed_AI
	 */
	struct UBP_Action_StandingFeed_AI_C_ExecuteUbergraph_BP_Action_StandingFeed_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
