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
	 * BlueprintGeneratedClass BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C
	 * Size -> 0x048D (FullSize[0x055D] - InheritedSize[0x00D0])
	 */
	class UBP_Action_Base_Task_AI_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADIAICharacter*                                      Character;                                               // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		TArray<struct FThresholdTrackingParams>                    InterruptionParamsDuringTraversal;                       // 0x00E8(0x0010) Edit, BlueprintVisible
		TArray<struct FThresholdTrackingParams>                    InterruptionParamsDuringActivityReached;                 // 0x00F8(0x0010) Edit, BlueprintVisible
		float                                                      HealthPortionRequiredToRequestTaskExit;                  // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InterruptTaskOnCombatTargetChanged;                      // 0x010C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QEFW[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADIAIController*                                     Controller;                                              // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCombatAggroComponent*                               Aggro;                                                   // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USimpleHealthComponent*                              HealthComponent;                                         // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAgentComponent*                                     AgentComponent;                                          // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActivityActor*                                      ActivityActor;                                           // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQuery*                                           EnvQuery;                                                // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEnvQueryRunMode                                           RunMode;                                                 // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BC17[0x3];                                   // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumberTimesToLookForEmptyActivity;                       // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RerunQueryTrys;                                          // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ValidInterrupt;                                          // 0x014C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CYK0[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseComponent*                             KB;                                                      // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       FailedToLaunchActivity;                                  // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_BRWL[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DebugTagString;                                          // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               ActivitySuccessfullyLaunchedAttackRulesFact;             // 0x0170(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               ActivityFailedToLaunchAttackRulesFact;                   // 0x017C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		class FName                                                FactInvokerName;                                         // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               NumberOfTimesActivitySuccessfullyCompletedFact;          // 0x0190(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               NumberOfTimesActivityWasInterruptedFact;                 // 0x019C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FCardDealerCounterModification                      CardDealerCounterModifierOnSuccess;                      // 0x01A8(0x00A0) Edit, BlueprintVisible
		struct FCardDealerCounterModification                      CardDealerCounterModifierOnCancellation;                 // 0x0248(0x00A0) Edit, BlueprintVisible
		bool                                                       EndActivityOnActionEnd;                                  // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VVNM[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              CombatTarget;                                            // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIMovementComponent*                                AIMovementComponent;                                     // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UObservableComponent*                                CombatTargetObservableComponent;                         // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObserverComponent*                                  AIObserverComponent;                                     // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FParticipantLaunchParameters                        DefaultParticipantLaunchParameters;                      // 0x0318(0x0018) Edit, BlueprintVisible, NoDestructor
		class UBPC_ThresholdTracking_AI_C*                         ThresholdTrackingComponent;                              // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FGuid>                                       ThresholdTrackingIDs;                                    // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UCardDealerComponent*                                CardDealerComponent;                                     // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumHealthPortionRequiredForSuccess;                  // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      StandardRegenerationRate;                                // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            RegenerationRateModifier;                                // 0x0358(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		float                                                      EfficiencyDecreasePerModIncrement;                       // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxEfficiencyDecrease;                                   // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               CurrentRegenRateFact;                                    // 0x0398(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ELF2[0x4];                                   // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseComponent*                             LinkedActorKB;                                           // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCardDealerCounterModification                      SuccessfullyLaunchedActivityCounterModification;         // 0x03B0(0x00A0) Edit, BlueprintVisible
		struct FCardDealerCounterModification                      FailedToLaunchActivityCounterModification;               // 0x0450(0x00A0) Edit, BlueprintVisible
		class UBP_ActionParams_Task_AI_C*                          TaskParams;                                              // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              ActivityDistance;                                        // 0x04F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<float, class AActivityActor*>                         ActivityByDistance;                                      // 0x0508(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       AllowedToFailToPlayActivity;                             // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ActivityIsAllowedToAbort;                                // 0x0559(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       InterruptionCountsAsSuccess;                             // 0x055A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DoNotLaunchActivityOnBegin;                              // 0x055B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ActivateAttackRules;                                     // 0x055C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool OnBeginEarly();
		void GetOverrideParticipantParameters(struct FParticipantLaunchParameters* ParticipantLaunchParameters);
		void LeaveCurrentActivity();
		void OnSelectedActivityFromParams(class AActor* ActivityActorOwner, class AActivityActor* SelectedActivity);
		void LaunchActivityByParamsOrEQS();
		void FindClosestActivity(bool* LaunchedActivitySuccessfully, class AActivityActor** LaunchedActivity);
		void CacheAllActivityDistances(class AActivityActor* Activity);
		void ActivityActorsToTry(class AActor* OwnerActivityActor, TArray<class AActivityActor*>* ActivityActor);
		void LaunchActivityDirectly(class AActor* InputActivityActor, bool* ActivitySuccess, class AActivityActor** ActivityActor);
		void SetActivityActorAndBindings(class AActivityActor* ActivityActor);
		void CommitAttackRules();
		bool RequiresSuccesssfulAndFailureFactSetup();
		void SetupRegenRate(float NewRegenRateMod);
		void WasActionSuccessful(bool* Success);
		void ModifyDeckCounters(ECharacterActionEndedReason ReasonForEnding);
		void IncrementIntergerFact(const struct FKnowledgeBaseFactKey& FactKey);
		void LogIfInterruptIsInvalid(EActivityEndedReason ActivityEndReason);
		void RequestCurrentActivityToUninitialise();
		void FindAndLaunchActivity(class UEnvQueryInstanceBlueprintWrapper* EQS_QueryInstance, bool* ActivitySuccess, class AActivityActor** ActivityActor);
		void CombatTargetChanged(class UCombatTargetComponent* NewTarget);
		void HealthUpdated(class AActor* DamagedActor, float LastHealth, float CurrentHealth);
		void OnActivityReached(class AActivityActor* Activity);
		void ActivityExitReason(class AActivityActor* Activity, EActivityEndedReason EndReason);
		void OnThresholdTrackingRequrementMet(bool DamageRequirementMet, bool StabilityDamageMet);
		void RunQuery();
		void QueryComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		void RerunQuery();
		void LaunchParticipantWithActor(class AActor* InputActivityActor);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Base_Task_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
