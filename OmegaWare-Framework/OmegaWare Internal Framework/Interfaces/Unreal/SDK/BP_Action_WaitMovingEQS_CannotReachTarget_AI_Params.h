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
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.ShouldAddAgainstWallFact
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_ShouldAddAgainstWallFact_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.OnCombatTargetChanged
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_OnCombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CastAndStoreParams
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_CastAndStoreParams_Params
	{
	public:
		class UCustomActionParamsBase*                             BaseParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MC5U[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CanSeeCombatTarget
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_CanSeeCombatTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CanSkipMovementConditionsBasedOnCounters
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_CanSkipMovementConditionsBasedOnCounters_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.RangedCombatParams
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_RangedCombatParams_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.MeleeCombatParams
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_MeleeCombatParams_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CombatMovementParams
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_CombatMovementParams_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsWithinAttackRange
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_IsWithinAttackRange_Params
	{
	public:
		float                                                      ZDistanceFromCombatTarget;                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWithinRange;                                           // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MovementRequired;                                        // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsVerticalDotWithinLimits
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_IsVerticalDotWithinLimits_Params
	{
	public:
		float                                                      ZDistanceFromCombatTarget;                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinDot;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxDot;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PI6U[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CanSkipMovementConditions
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_CanSkipMovementConditions_Params
	{
	public:
		EWaitMovingEQSStates                                       MoveTargetType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOffNavmesh;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsOwnerOnNavmeshEdgeFacingCombatTarget
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_IsOwnerOnNavmeshEdgeFacingCombatTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CFA8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetDistanceToSearchLocation
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_GetDistanceToSearchLocation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.OnBeginEarly
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CX5E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetMoveTargetState
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_GetMoveTargetState_Params
	{
	public:
		bool                                                       IsOffNavmesh;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EWaitMovingEQSStates                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9U7C[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsCombatMovementRequired
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_IsCombatMovementRequired_Params
	{
	public:
		float                                                      ZDistanceFromCombatTarget;                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EWaitMovingEQSCombattHeightLevel                           CombatTargetsHeightLevel;                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TN4Z[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsWithinRangedRange
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_IsWithinRangedRange_Params
	{
	public:
		float                                                      ZDistanceFromCombatTarget;                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                                       MovementRequired;                                        // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KX93[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetVerticalDistanceToSearchLocation
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_GetVerticalDistanceToSearchLocation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsWithinMeleeRange
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_IsWithinMeleeRange_Params
	{
	public:
		float                                                      ZDistanceFromCombatTarget;                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WN5A[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetAbsoluteVerticalDistanceToSearchLocation
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_GetAbsoluteVerticalDistanceToSearchLocation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetMaxDistanceAllowedFromSearchLocation
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_GetMaxDistanceAllowedFromSearchLocation_Params
	{
	public:
		float                                                      ZDistanceFromCombatTarget;                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HardDistanceLimit;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OwnerNeedToMove;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PSAG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.SetQueryParams
	 */
	struct UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_SetQueryParams_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   ActiveQuery;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
