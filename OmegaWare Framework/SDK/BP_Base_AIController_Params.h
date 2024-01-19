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
	 * Function BP_Base_AIController.BP_Base_AIController_C.ResetCannotReachTargetCounters
	 */
	struct ABP_Base_AIController_C_ResetCannotReachTargetCounters_Params
	{	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.GetAllFactToApplyForThisState
	 */
	struct ABP_Base_AIController_C_GetAllFactToApplyForThisState_Params
	{
	public:
		ECombatState                                               State;                                                   // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KUWO[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_HAHW[0x56];                                  // 0x0002(0x0056) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.AddLifetimeFactsBasedCombatState
	 */
	struct ABP_Base_AIController_C_AddLifetimeFactsBasedCombatState_Params
	{
	public:
		ECombatState                                               CurrentState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QT0L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.CombatState
	 */
	struct ABP_Base_AIController_C_CombatState_Params
	{	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.SearchState
	 */
	struct ABP_Base_AIController_C_SearchState_Params
	{	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.AlertState
	 */
	struct ABP_Base_AIController_C_AlertState_Params
	{	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.CalmState
	 */
	struct ABP_Base_AIController_C_CalmState_Params
	{	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.OnCombatStateChanged
	 */
	struct ABP_Base_AIController_C_OnCombatStateChanged_Params
	{
	public:
		ECombatState                                               NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.OnCrawlerExpressionChanged
	 */
	struct ABP_Base_AIController_C_OnCrawlerExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7DQR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.EndMaintainingAggressorFacts
	 */
	struct ABP_Base_AIController_C_EndMaintainingAggressorFacts_Params
	{	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.BeginMaintainingAggressorFacts
	 */
	struct ABP_Base_AIController_C_BeginMaintainingAggressorFacts_Params
	{	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.OnDesiredEngagementRingIsInner
	 */
	struct ABP_Base_AIController_C_OnDesiredEngagementRingIsInner_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5S59[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.ResetCombatCounters
	 */
	struct ABP_Base_AIController_C_ResetCombatCounters_Params
	{	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.DetermineIfVulnerableDebug
	 */
	struct ABP_Base_AIController_C_DetermineIfVulnerableDebug_Params
	{
	public:
		class FString                                              PlayerWeaponClass;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UnknownWeaponClass;                                      // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.RemoveAllDateTimeFacts
	 */
	struct ABP_Base_AIController_C_RemoveAllDateTimeFacts_Params
	{	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.RemoveDateTimeFacts
	 */
	struct ABP_Base_AIController_C_RemoveDateTimeFacts_Params
	{
	public:
		class FString                                              Containing;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.RemoveCombatDateTimeFactListeners
	 */
	struct ABP_Base_AIController_C_RemoveCombatDateTimeFactListeners_Params
	{	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.BeginAttackRulesWarmUp
	 */
	struct ABP_Base_AIController_C_BeginAttackRulesWarmUp_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.UpdateDateTimeFacts
	 */
	struct ABP_Base_AIController_C_UpdateDateTimeFacts_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               BaseFactKey;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.UpdateTargetOuterRingAggressorsFact
	 */
	struct ABP_Base_AIController_C_UpdateTargetOuterRingAggressorsFact_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.OnStopExpressionChanged
	 */
	struct ABP_Base_AIController_C_OnStopExpressionChanged_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.SetSubTrees
	 */
	struct ABP_Base_AIController_C_SetSubTrees_Params
	{	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.GetMovementLineColour
	 */
	struct ABP_Base_AIController_C_GetMovementLineColour_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.RegisterKnowledgeBaseCounter
	 */
	struct ABP_Base_AIController_C_RegisterKnowledgeBaseCounter_Params
	{
	public:
		class FName                                                FactName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.SetSubtree
	 */
	struct ABP_Base_AIController_C_SetSubtree_Params
	{
	public:
		class FName                                                BlackboardKey;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBehaviorTree*                                       BehaviourTree;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.MiscDebugDraw
	 */
	struct ABP_Base_AIController_C_MiscDebugDraw_Params
	{	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.ReceivePossess
	 */
	struct ABP_Base_AIController_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.ReceiveUnPossess
	 */
	struct ABP_Base_AIController_C_ReceiveUnPossess_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.PerformMiscDebugDraw
	 */
	struct ABP_Base_AIController_C_PerformMiscDebugDraw_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.OnCombatTargetChanged
	 */
	struct ABP_Base_AIController_C_OnCombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.OnStopCombatTimers
	 */
	struct ABP_Base_AIController_C_OnStopCombatTimers_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.InnerRingEntered
	 */
	struct ABP_Base_AIController_C_InnerRingEntered_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.AddCombatDateTimeFactListeners
	 */
	struct ABP_Base_AIController_C_AddCombatDateTimeFactListeners_Params
	{	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.OuterRingEntered
	 */
	struct ABP_Base_AIController_C_OuterRingEntered_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.EitherRingEntered
	 */
	struct ABP_Base_AIController_C_EitherRingEntered_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.ExecuteUbergraph_BP_Base_AIController
	 */
	struct ABP_Base_AIController_C_ExecuteUbergraph_BP_Base_AIController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AIController.BP_Base_AIController_C.OnPossessedDelegate__DelegateSignature
	 */
	struct ABP_Base_AIController_C_OnPossessedDelegate__DelegateSignature_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
