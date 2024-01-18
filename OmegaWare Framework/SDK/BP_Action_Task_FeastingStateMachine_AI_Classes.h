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
	 * BlueprintGeneratedClass BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C
	 * Size -> 0x02B8 (FullSize[0x0388] - InheritedSize[0x00D0])
	 */
	class UBP_Action_Task_FeastingStateMachine_AI_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADIAICharacter*                                      Character;                                               // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIAIController*                                     Controller;                                              // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIMovementComponent*                                AIMovementComponent;                                     // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MoveTargetName;                                          // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQuery*                                           FindActivityEnvQuery;                                    // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEnvQueryRunMode                                           FindActivityRunMode;                                     // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JFYQ[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnvQueryInstanceBlueprintWrapper*                   ActiveQuery;                                             // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       ActivityActionHelper;                                    // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActivityActor*                                      FeastingActivity;                                        // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DynamicTag;                                              // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                GroupDistractionTag;                                     // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               ActivityActionID;                                        // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDynamicFeastingStates                                     CurrentState;                                            // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_INCB[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EDynamicFeastingStates, EDynamicFeastingStates>       StateTransitions;                                        // 0x0148(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                BBKeyLocationName;                                       // 0x0198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQuery*                                           MovementEnvQuery;                                        // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEnvQueryRunMode                                           MovementActivityRunMode;                                 // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDynamicFeastingStates                                     StaticActivityNextState;                                 // 0x01A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDynamicFeastingStates                                     DynamicActivityNextState;                                // 0x01AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8EO3[0x5];                                   // 0x01AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPC_ThresholdTracking_AI_C*                         ThresholdTrackingComponent;                              // 0x01B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumHealthPortionRequiredForSuccess;                  // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WZIB[0x4];                                   // 0x01BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FThresholdTrackingParams>                    InterruptionParamsDuringTraversal;                       // 0x01C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FThresholdTrackingParams>                    InterruptionParamsDuringActivityReached;                 // 0x01D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FGuid>                                       ThresholdTrackingIDs;                                    // 0x01E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class USimpleHealthComponent*                              HealthComponent;                                         // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               NumberOfTimesActivitySuccessfullyCompletedFact;          // 0x01F8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               NumberOfTimesActivityWasInterruptedFact;                 // 0x0204(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            MovementSpeedExpression;                                 // 0x0210(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FGuid                                               MovementSpeedModifierGuid;                               // 0x0248(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPC_Distraction_GroupCoordinator_C*                 GroupDistractionComponent;                               // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterActionEndReason                                  EndActionReason;                                         // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K865[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnvQuery*                                           MeatbaitDistractionQuery;                                // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            CanUseActivityExpression;                                // 0x0270(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class FName                                                BBKeyInstigatorName;                                     // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   CorpseFeedingActionDefinition;                           // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   MeatbaitFeedingActionDefinition;                         // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FParticipantLaunchParameters                        ParticipantLaunchOverrideParameters;                     // 0x02C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      OverrideHealthPortionRequiredToRequestTaskExit;          // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ActivityPriorityTag;                                     // 0x02DC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2S8X[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActivityActor*>                              AvailableActivityActors;                                 // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FTimerHandle                                        TryNextActivityTimer;                                    // 0x02F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               DistractionLocationContextFact;                          // 0x0300(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       DamageThresholdReachedForHitReactVulnerability;          // 0x030C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PPP8[0x3];                                   // 0x030D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseFactKey                               VulnerabilityFact;                                       // 0x0310(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                HealthTrackingFactInvokerName;                           // 0x031C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MB1J[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DebugTagString;                                          // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       DSLogDebugEnabled;                                       // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F0C2[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        RetryActionTimer;                                        // 0x0348(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ActionPlayFailures;                                      // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumberOfActionPlayFailures;                           // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TextDebugEnabled;                                        // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M1H9[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomDebugTag;                                          // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              DebugText;                                               // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FTimerHandle                                        DebugTimer;                                              // 0x0380(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void DisableDebugText();
		void EnableDebugText();
		void UpdateDebugText();
		void BindFeastingActionEndPlay();
		void UnbindFeastingActionEndPlay();
		void EndRetryActionTimer();
		void StartRetryActionTimer();
		void RetryAction();
		void UnbindActionDelegates(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnActionCancelled, const class FScriptDelegate& OnActionResolved, const class FScriptDelegate& OnActionEndedDelegate);
		void BindActionDelegates(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnActionCancelled, const class FScriptDelegate& OnActionResolved, const class FScriptDelegate& OnActionEndedDelegate);
		void AddDSLog(const class FString& LogText, EDSLogVerbosity Verbosity, bool Condition, bool Force);
		void SetupFeastingLogger();
		void OnInterruptionConditionsMet(bool DamageRequirementMet, bool StabilityDamageMet);
		EDynamicFeastingStates GetNextStateBasedOnIfActivityIsDynamic();
		void RemoveActivitiesWithSameGroupCoordinator();
		void TryNextActivity();
		void TryNextActivityNextFrame(ECharacterActionEndReason EndActionFailureReason);
		class AActivityActor* TryGetNextBestActivityActor();
		TArray<class AActivityActor*> GetAllAvailableActivityActors(class UEnvQueryInstanceBlueprintWrapper* QueryInstance);
		class AActivityActor* GetBestActivityActor(TArray<class AActivityActor*>* ActivityActors);
		void RemoveGroupCoordinatorMovementRequest();
		void OnMoveToMeatBaitMoveTargetChanged(EMoveTargetEvent Event);
		void OnMoveToMeatBaitQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		void FindAndAssignSelfToActivityOnDistractionCoordinator(const struct FVector& TargetLocation, bool* Success);
		void TryAddParticipantCompleteDelegate(bool ParticipantAdded);
		void EndMoveToMeatBaitState();
		void BeginMoveToMeatBaitState();
		struct FVector GetMoveTargetDirection(const struct FVector& From);
		class UActionDefinition* GetFeastingActivityActionDefinition();
		class UBPC_Distraction_GroupCoordinator_C* GetGroupDistractionComponent();
		void RunQuery();
		void RemoveMovementSpeedModification();
		void AddMovementSpeedModification();
		void IncrementIntFactBasedOnActionResult(ECharacterActionEndedReason ActionEndReason);
		bool WasRegeneratingSuccessful();
		void RemoveThesholdTracking();
		void AddThresholdTracking(TArray<struct FThresholdTrackingParams>* InterruptionParams);
		void GoToState(EDynamicFeastingStates NewState);
		void CancelActiveQuery(const class FScriptDelegate& Event);
		void AdjustActivityRotation();
		void RemoveMoveTargetDelegate(const class FScriptDelegate& Delegate);
		void AddMoveTargetDelegate(const class FScriptDelegate& Delegate);
		void RemoveMoveTarget(const class FScriptDelegate& Delegate);
		void EndState();
		bool GetNextState(EDynamicFeastingStates* NextState);
		void GoToNextState();
		void BeginState();
		void OnActivityDestroyed(class AActor* Actor, EEndPlayReason EndPlayReason);
		void RemoveSelfFromDistractionCoordinator();
		void SetQueryData(const struct FVector& Location, class UObject* Instigator);
		void OnFeastingActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnFeastingActionResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params);
		void OnFeastingActionCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params);
		void EndRequestActivityParticipationState();
		void BeginRequestActivityParticipationState();
		void OnMoveToActivityMoveTargetChanged(EMoveTargetEvent Event);
		void OnMoveToActivityQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		void EndMoveToActivityState();
		void BeginMoveToActivityState();
		void OnFindActivityQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		void EndFindActivityState();
		void BeginFindActivityState();
		bool OnBeginEarly();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Task_FeastingStateMachine_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
