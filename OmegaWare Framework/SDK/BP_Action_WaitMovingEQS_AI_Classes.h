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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C
	 * Size -> 0x0160 (FullSize[0x0338] - InheritedSize[0x01D8])
	 */
	class UBP_Action_WaitMovingEQS_AI_C : public UBP_Action_WaitMoving_AI_C
	{
	public:
		struct FTimerHandle                                        UpdateMovementTimer;                                     // 0x01D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UBP_ActionParams_WaitMovingEQS_AI_C*                 MovementParams;                                          // 0x01E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            OwnerHasMovedExpression;                                 // 0x01E8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FVector                                             NewMoveTargetLocation;                                   // 0x0220(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CurrentMoveTargetLocation;                               // 0x022C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQueryInstanceBlueprintWrapper*                   ActiveQuery;                                             // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CombatTargetsLastKnowLocation;                           // 0x0240(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               HasTargetSearchLocationFact;                             // 0x024C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMoving;                                                // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RCS6[0x3];                                   // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OwnerLastKnowLocation;                                   // 0x025C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasMoved;                                                // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EWaitMovingEQSStates                                       CurrentState;                                            // 0x0269(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZFLO[0x6];                                   // 0x026A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EWaitMovingEQSStates, EWaitMovingEQSStates>           StateTransitions;                                        // 0x0270(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             QueryLocationResult;                                     // 0x02C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MoveTargetDirectionAtDestination;                        // 0x02CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterActionEndReason                                  EndActionReason;                                         // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ValidatedMoveTarget;                                     // 0x02D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MovementSucceeded;                                       // 0x02DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1Q51[0x1];                                   // 0x02DB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ProjectedOwnerEQSStartLocation;                          // 0x02DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnteredLeniencyRadius;                                   // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EWaitMovingEQSStates                                       LastMoveTargetTypeUsed;                                  // 0x02E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AddedLeniencyFinishMovementExpressionListener;           // 0x02EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OVUD[0x1];                                   // 0x02EB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EQSIndex;                                                // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        MovementUpdateOnMaintainLastMoveTargetTimer;             // 0x02F0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       MoveTargetAdded;                                         // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DryRunStateLocationsDataAdded;                           // 0x02F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DoesNotRequireTargetActor;                               // 0x02FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EWaitMovingEQSStates                                       LastQueryTypeUsed;                                       // 0x02FB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QYZZ[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        QueryDurationTimer;                                      // 0x0300(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       RangedMovementDebug;                                     // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AddedCurrentQueryTargetFact;                             // 0x0309(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L1J6[0x2];                                   // 0x030A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseFactKey                               CurrentQueryTargetFact;                                  // 0x030C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       HasTargetSearchLocationFactAdded;                        // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FocusSet;                                                // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MXHP[0x2];                                   // 0x031A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseFactKey                               IsEarlyRepathingFact;                                    // 0x031C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                IsEarlyRepathingInvokerName;                             // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsEarlyRepathingFactAdded;                               // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5YEN[0x3];                                   // 0x0331(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumberOfTimers;                                          // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DSLogNumberOfTimers(bool Increase, bool Decrease);
		void ClearMovementUpdateTimer();
		void RemoveIsEarlyRepathingFact();
		void AddIsEarlyRepathingFact();
		void TryUseCurrentLocationAsBackup(struct FVector* CurrentLocation, bool* OnQueryFailFallbackToCurrentLocation);
		void SetMovementFocus();
		struct FVector GetDesiredDirection(const struct FVector& From);
		void RemoveHasTargetSearchLocationFact();
		void AddHasTargetSearchLocationFact();
		bool IsTurningRequired();
		void UpdateMovementData();
		void ExportMovementData();
		void TryImportCachedMovementData(bool* Success);
		float CalculateTraceScore(EScoringEquation* ScoringType, const struct FHitResult& Hit, float* MaxTraceScore, float* TraceRadius, float* CurrentItemScore, bool MustBlockingHit);
		void RemoveCurrentQueryTargetFact();
		void AddCurrentQueryTargetFact();
		void SetupMovementLogger();
		void TraceDebugChosenLocation(const struct FVector& SelectedLocation);
		EDrawDebugTrace TraceDebugActorPotentialLocation(const struct FVector& EQSLocation, const struct FVector& StartLocation);
		TArray<struct FVector> GetEQSLocations(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, bool* Success);
		bool CastAndStoreParams(class UCustomActionParamsBase* BaseParams);
		void OnEarlyEndMovement();
		void OnCharacterUnpossessed();
		void ResetMovement(bool* Success);
		void StartQueryMaxDuration();
		void RemovedStateBasedFact();
		void AddStateBasedFact();
		void IsQueryLocationBetweenOwnerAndTargetLocation(float MaxFacingAngle, bool* Result);
		void SetDryRunQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery);
		void GetFollowingMoveTargetDirection(struct FVector* MoveTargetDirectionAtDestination);
		void GetTargetLocation(struct FVector* TargetLocation);
		void GetTargetActor(class AActor** TargetActor);
		void TryRemoveDryRunLocationsData();
		void TryAddDryRunLocationsData(TArray<struct FVector>* Value);
		void TryGoToNextQueryState();
		EWaitMovingEQSStates GetNextQueryState();
		void EndDryRunQueryState();
		void BeginDryRunQueryState();
		bool IsRunningMovementUpdates();
		void SetFocusAsCombatTarget(ECombatState CombatState);
		void ClearFocus();
		void TryDisableCombatTargetAsFocus();
		void TryEnableCombatTargetAsFocus();
		void ForceMovementUpdate();
		bool IsPreciseMovementRequired();
		int32_t GetNextVaildMovementIndex(int32_t OverrideIndex);
		void FindNextValidMovementParams(int32_t OverrideIndex, bool* Success);
		struct FSWaitMovingMovementParams GetCurrentQueryMovementParams();
		bool IsWithinLeniencyMovementRadius();
		void OnLeniencyFinishMovementExpressionChanged(bool bResult);
		void RemoveLeniencyFinishMovementExpressionListener();
		void AddLeniencyFinishMovementExpressionListener();
		bool IsLenientMovementRequired();
		bool ProjectPointToNavmesh(const struct FVector& Point, const struct FVector& QueryExtent, bool bNearestDistance2D, struct FVector* ProjectedLocation);
		bool IsCharacterOffTheNavmesh(struct FVector* ProjectedOwnerLocation);
		bool IsTurningMoveTargetOffTheNavmesh();
		void SetDataOnMovementSuccess();
		void DSLogUpdateIntervals();
		EWaitMovingEQSStates DetermineEndState();
		float MoveTargetAcceptanceRadius(float DefaultMoveTargetAcceptanceRadius);
		struct FMoveTargetParams StandardMoveTargetParams();
		EWaitMovingEQSStates GetMoveTargetState(bool IsOffNavmesh);
		void EndMaintainLastMoveTargetState();
		void BeginMaintainLastMoveTargetState();
		void OnCombatTargetChanged(class UCombatTargetComponent* NewTarget);
		void UnbindListeners();
		void BindListeners();
		void EndTurningMoveTargetState();
		void BeginTurningMoveTargetState();
		struct FMoveTargetParams FollowingMoveTargetParams(EMoveTargetBasisBehaviourMode BasisBehaviourMode, float BasisBehaviourMaxDistanceToFace);
		void EndFollowingMoveTargetState();
		void EndStandardMoveTargetState();
		void OnMoveTargetFailed();
		void OnMoveTargetSucceeded();
		void CancelActiveQuery();
		bool DetermineIfMovementIsTurn();
		void OnQueryFailed();
		void OnQuerySucceeded();
		void ProcessQueryResult(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus, bool* Success);
		void OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		void GoToNextState();
		bool GetNextState(EWaitMovingEQSStates* NextState);
		void GoToState(EWaitMovingEQSStates NewState);
		void EndState();
		void BeginState();
		void OnOwnerMovingExpression(bool bResult);
		void SetQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery);
		void EndRunQueryState();
		void BeginRunQueryState();
		void ApplyCounterModification(const struct FCardDealerCounterModification& CounterModification);
		void ValidateReachedMoveTarget(EWaitMovingEQSStates* NextState);
		void MoveTargetResult(EMoveTargetEvent MoveTargetState);
		void OnMoveTargetChanged(EMoveTargetEvent Event);
		bool IsMovementRequired();
		struct FVector GetMoveTargetDirection(const struct FVector& From);
		void RemoveMoveTargetDelegate();
		void AddMoveTargetDelegate();
		void BeginFollowingMoveTargetState();
		void BeginStandardMoveTargetState();
		void RequestMovementUpdateTimer();
		void RequestMovementUpdate();
		void RemoveMoveTarget();
		void RemoveMovement();
		void AddMovement();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
