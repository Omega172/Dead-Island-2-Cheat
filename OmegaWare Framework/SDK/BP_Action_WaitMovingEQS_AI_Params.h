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
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.DSLogNumberOfTimers
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_DSLogNumberOfTimers_Params
	{
	public:
		bool                                                       Increase;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Decrease;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z436[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ClearMovementUpdateTimer
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_ClearMovementUpdateTimer_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveIsEarlyRepathingFact
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_RemoveIsEarlyRepathingFact_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddIsEarlyRepathingFact
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_AddIsEarlyRepathingFact_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryUseCurrentLocationAsBackup
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_TryUseCurrentLocationAsBackup_Params
	{
	public:
		struct FVector                                             CurrentLocation;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OnQueryFailFallbackToCurrentLocation;                    // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D0DK[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetMovementFocus
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_SetMovementFocus_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetDesiredDirection
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_GetDesiredDirection_Params
	{
	public:
		struct FVector                                             From;                                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveHasTargetSearchLocationFact
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_RemoveHasTargetSearchLocationFact_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddHasTargetSearchLocationFact
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_AddHasTargetSearchLocationFact_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsTurningRequired
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_IsTurningRequired_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DNF9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.UpdateMovementData
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_UpdateMovementData_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ExportMovementData
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_ExportMovementData_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryImportCachedMovementData
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_TryImportCachedMovementData_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R30T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.CalculateTraceScore
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_CalculateTraceScore_Params
	{
	public:
		EScoringEquation                                           ScoringType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XEV8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0008(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		float                                                      MaxTraceScore;                                           // 0x00B8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TraceRadius;                                             // 0x00BC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentItemScore;                                        // 0x00C0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       MustBlockingHit;                                         // 0x00C4(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DJZT[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveCurrentQueryTargetFact
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_RemoveCurrentQueryTargetFact_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddCurrentQueryTargetFact
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_AddCurrentQueryTargetFact_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetupMovementLogger
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_SetupMovementLogger_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TraceDebugChosenLocation
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_TraceDebugChosenLocation_Params
	{
	public:
		struct FVector                                             SelectedLocation;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TraceDebugActorPotentialLocation
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_TraceDebugActorPotentialLocation_Params
	{
	public:
		struct FVector                                             EQSLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             StartLocation;                                           // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDrawDebugTrace                                            ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N0AA[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetEQSLocations
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_GetEQSLocations_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm)
		bool                                                       Success;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.CastAndStoreParams
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_CastAndStoreParams_Params
	{
	public:
		class UCustomActionParamsBase*                             BaseParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MWZV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnEarlyEndMovement
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_OnEarlyEndMovement_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnCharacterUnpossessed
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_OnCharacterUnpossessed_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ResetMovement
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_ResetMovement_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.StartQueryMaxDuration
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_StartQueryMaxDuration_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemovedStateBasedFact
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_RemovedStateBasedFact_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddStateBasedFact
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_AddStateBasedFact_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsQueryLocationBetweenOwnerAndTargetLocation
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_IsQueryLocationBetweenOwnerAndTargetLocation_Params
	{
	public:
		float                                                      MaxFacingAngle;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SFAD[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetDryRunQueryParams
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_SetDryRunQueryParams_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   ActiveQuery;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetFollowingMoveTargetDirection
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_GetFollowingMoveTargetDirection_Params
	{
	public:
		struct FVector                                             MoveTargetDirectionAtDestination;                        // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetTargetLocation
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_GetTargetLocation_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetTargetActor
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_GetTargetActor_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryRemoveDryRunLocationsData
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_TryRemoveDryRunLocationsData_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryAddDryRunLocationsData
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_TryAddDryRunLocationsData_Params
	{
	public:
		TArray<struct FVector>                                     Value;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryGoToNextQueryState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_TryGoToNextQueryState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetNextQueryState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_GetNextQueryState_Params
	{
	public:
		EWaitMovingEQSStates                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8QKD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndDryRunQueryState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_EndDryRunQueryState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginDryRunQueryState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_BeginDryRunQueryState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsRunningMovementUpdates
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_IsRunningMovementUpdates_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H1HC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetFocusAsCombatTarget
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_SetFocusAsCombatTarget_Params
	{
	public:
		ECombatState                                               CombatState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DEP4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ClearFocus
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_ClearFocus_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryDisableCombatTargetAsFocus
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_TryDisableCombatTargetAsFocus_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryEnableCombatTargetAsFocus
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_TryEnableCombatTargetAsFocus_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ForceMovementUpdate
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_ForceMovementUpdate_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsPreciseMovementRequired
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_IsPreciseMovementRequired_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetNextVaildMovementIndex
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_GetNextVaildMovementIndex_Params
	{
	public:
		int32_t                                                    OverrideIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.FindNextValidMovementParams
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_FindNextValidMovementParams_Params
	{
	public:
		int32_t                                                    OverrideIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetCurrentQueryMovementParams
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_GetCurrentQueryMovementParams_Params
	{
	public:
		struct FSWaitMovingMovementParams                          ReturnValue;                                             // 0x0000(0x00F0)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsWithinLeniencyMovementRadius
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_IsWithinLeniencyMovementRadius_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UZOW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnLeniencyFinishMovementExpressionChanged
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_OnLeniencyFinishMovementExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveLeniencyFinishMovementExpressionListener
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_RemoveLeniencyFinishMovementExpressionListener_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddLeniencyFinishMovementExpressionListener
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_AddLeniencyFinishMovementExpressionListener_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsLenientMovementRequired
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_IsLenientMovementRequired_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EVU9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ProjectPointToNavmesh
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_ProjectPointToNavmesh_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             QueryExtent;                                             // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bNearestDistance2D;                                      // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1Q7U[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ProjectedLocation;                                       // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UL2I[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsCharacterOffTheNavmesh
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_IsCharacterOffTheNavmesh_Params
	{
	public:
		struct FVector                                             ProjectedOwnerLocation;                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4HHM[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsTurningMoveTargetOffTheNavmesh
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_IsTurningMoveTargetOffTheNavmesh_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_40IR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetDataOnMovementSuccess
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_SetDataOnMovementSuccess_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.DSLogUpdateIntervals
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_DSLogUpdateIntervals_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.DetermineEndState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_DetermineEndState_Params
	{
	public:
		EWaitMovingEQSStates                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.MoveTargetAcceptanceRadius
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_MoveTargetAcceptanceRadius_Params
	{
	public:
		float                                                      DefaultMoveTargetAcceptanceRadius;                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.StandardMoveTargetParams
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_StandardMoveTargetParams_Params
	{
	public:
		struct FMoveTargetParams                                   ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetMoveTargetState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_GetMoveTargetState_Params
	{
	public:
		bool                                                       IsOffNavmesh;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EWaitMovingEQSStates                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VBKI[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndMaintainLastMoveTargetState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_EndMaintainLastMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginMaintainLastMoveTargetState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_BeginMaintainLastMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnCombatTargetChanged
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_OnCombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.UnbindListeners
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_UnbindListeners_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BindListeners
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_BindListeners_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndTurningMoveTargetState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_EndTurningMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginTurningMoveTargetState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_BeginTurningMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.FollowingMoveTargetParams
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_FollowingMoveTargetParams_Params
	{
	public:
		EMoveTargetBasisBehaviourMode                              BasisBehaviourMode;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ERHF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      BasisBehaviourMaxDistanceToFace;                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMoveTargetParams                                   ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndFollowingMoveTargetState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_EndFollowingMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndStandardMoveTargetState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_EndStandardMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnMoveTargetFailed
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_OnMoveTargetFailed_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnMoveTargetSucceeded
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_OnMoveTargetSucceeded_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.CancelActiveQuery
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_CancelActiveQuery_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.DetermineIfMovementIsTurn
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_DetermineIfMovementIsTurn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M47X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnQueryFailed
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_OnQueryFailed_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnQuerySucceeded
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_OnQuerySucceeded_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ProcessQueryResult
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_ProcessQueryResult_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnQueryFinished
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_OnQueryFinished_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GoToNextState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_GoToNextState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetNextState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_GetNextState_Params
	{
	public:
		EWaitMovingEQSStates                                       NextState;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GoToState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_GoToState_Params
	{
	public:
		EWaitMovingEQSStates                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JKCN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_EndState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_BeginState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnOwnerMovingExpression
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_OnOwnerMovingExpression_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetQueryParams
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_SetQueryParams_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   ActiveQuery;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndRunQueryState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_EndRunQueryState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginRunQueryState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_BeginRunQueryState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ApplyCounterModification
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_ApplyCounterModification_Params
	{
	public:
		struct FCardDealerCounterModification                      CounterModification;                                     // 0x0000(0x00A0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ValidateReachedMoveTarget
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_ValidateReachedMoveTarget_Params
	{
	public:
		EWaitMovingEQSStates                                       NextState;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_062P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.MoveTargetResult
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_MoveTargetResult_Params
	{
	public:
		EMoveTargetEvent                                           MoveTargetState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnMoveTargetChanged
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_OnMoveTargetChanged_Params
	{
	public:
		EMoveTargetEvent                                           Event;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_20N0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsMovementRequired
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_IsMovementRequired_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetMoveTargetDirection
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_GetMoveTargetDirection_Params
	{
	public:
		struct FVector                                             From;                                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveMoveTargetDelegate
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_RemoveMoveTargetDelegate_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddMoveTargetDelegate
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_AddMoveTargetDelegate_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginFollowingMoveTargetState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_BeginFollowingMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginStandardMoveTargetState
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_BeginStandardMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RequestMovementUpdateTimer
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_RequestMovementUpdateTimer_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RequestMovementUpdate
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_RequestMovementUpdate_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveMoveTarget
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_RemoveMoveTarget_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveMovement
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_RemoveMovement_Params
	{	};

	/**
	 * Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddMovement
	 */
	struct UBP_Action_WaitMovingEQS_AI_C_AddMovement_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
