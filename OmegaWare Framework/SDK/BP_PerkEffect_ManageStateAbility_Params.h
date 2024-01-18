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
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.AddDSLog
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_AddDSLog_Params
	{
	public:
		class FString                                              LogText;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EDSLogVerbosity                                            Verbosity;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.SetupDistractionLogger
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_SetupDistractionLogger_Params
	{	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.UnbindActionDelegates
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_UnbindActionDelegates_Params
	{
	public:
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      OnCancelledDelegate;                                     // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnResolvedDelegate;                                      // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnEndDelegate;                                           // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.BindActionDelegates
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_BindActionDelegates_Params
	{
	public:
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      OnCancelledDelegate;                                     // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnResolvedDelegate;                                      // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnEndDelegate;                                           // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.ConstructStateDrivenExpression
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_ConstructStateDrivenExpression_Params
	{
	public:
		struct FKnowledgeBaseExpression                            ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnActivateBlockExpressionChanged
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_OnActivateBlockExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStateAbilityEmpoweredFactChanged
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_OnStateAbilityEmpoweredFactChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.UnbindOnActionEnded
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_UnbindOnActionEnded_Params
	{	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStateAbilityActionOnResolved
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_OnStateAbilityActionOnResolved_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStateAbilityActionOnCancelled
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_OnStateAbilityActionOnCancelled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnCancelledParams                   Params;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.UnbindAnyImpactDelegate
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_UnbindAnyImpactDelegate_Params
	{	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.BindAnyImpactDelegate
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_BindAnyImpactDelegate_Params
	{	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStateAbilityActionEnded
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_OnStateAbilityActionEnded_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnAnyImpactReceived
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_OnAnyImpactReceived_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.RequestStateAbilityAction
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_RequestStateAbilityAction_Params
	{	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnEnd
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_OnEnd_Params
	{
	public:
		struct FPerkEffectEndParams                                Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStart
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.ExecuteUbergraph_BP_PerkEffect_ManageStateAbility
	 */
	struct UBP_PerkEffect_ManageStateAbility_C_ExecuteUbergraph_BP_PerkEffect_ManageStateAbility_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_03N0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
