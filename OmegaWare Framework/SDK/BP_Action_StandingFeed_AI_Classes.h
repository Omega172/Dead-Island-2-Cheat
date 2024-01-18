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
	 * BlueprintGeneratedClass BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C
	 * Size -> 0x03A8 (FullSize[0x0478] - InheritedSize[0x00D0])
	 */
	class UBP_Action_StandingFeed_AI_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKnowledgeBaseComponent*                             KB;                                                      // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCardDealerComponent*                                CardDealerComponent;                                     // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIAICharacter*                                      Character;                                               // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCardDealerCounterModification                      CounterSetAndModifiyOnFailedToMove;                      // 0x00F0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		class USimpleHealthComponent*                              HealthComponent;                                         // 0x0190(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPC_ThresholdTracking_AI_C*                         ThresholdTrackingComponent;                              // 0x0198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealthPortionRequiredToCompleteFeasting;                 // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumHealthPortionRequiredForSuccess;                  // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StandardRegenerationRate;                                // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YEY6[0x4];                                   // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            RegenerationRateModifier;                                // 0x01B8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		float                                                      EfficiencyDecreasePerModIncrement;                       // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxEfficiencyDecrease;                                   // 0x01F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               CurrentRegenRateFact;                                    // 0x01F8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WKBR[0x4];                                   // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FThresholdTrackingParams>                    InterruptionParams;                                      // 0x0208(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      InterruptFeastingOnHealthPortionLost;                    // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I3D5[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGuid>                                       ThresholdTrackingIDs;                                    // 0x0220(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       InterruptTaskOnCombatTargetChanged;                      // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InterruptionCountsAsSuccess;                             // 0x0231(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GM7O[0x6];                                   // 0x0232(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterActionRequestHelper*                       AnimSetActionHelper;                                     // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               AnimSetActionID;                                         // 0x0240(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCombatAggroComponent*                               AggroComponent;                                          // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               NumberOfTimesActivitySuccessfullyCompletedFact;          // 0x0258(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               NumberOfTimesActivityWasInterruptedFact;                 // 0x0264(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FCardDealerCounterModification                      CardDealerCounterModifierOnCancellation;                 // 0x0270(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCardDealerCounterModification                      CardDealerCounterModifierOnSuccess;                      // 0x0310(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        RetryFeastingNextFrameTimer;                             // 0x03B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            RightArmMeatCountExpression;                             // 0x03B8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            LeftArmMeatCountExpression;                              // 0x03F0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            EitherArmHasMeatCountExpression;                         // 0x0428(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       ResetArmMeatCountOnEnd;                                  // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D33M[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKnowledgeBaseFactKey>                       ArmMeatCountFacts;                                       // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnInterruptionConditionsMet(bool DamageRequirementMet, bool StabilityDamageMet);
		void ResetArmMeatFact();
		bool HasMeatOnArms(const struct FKnowledgeBaseExpression& Expression);
		void UnbindActionListeners(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnEndActionDelegate, const class FScriptDelegate& OnCancelledAction, const class FScriptDelegate& OnActionResolved);
		void BindActionListeners(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnEndActionDelegate, const class FScriptDelegate& OnCancelledAction, const class FScriptDelegate& OnActionResolved);
		bool WasFeastingSuccessful();
		void ModifyDeckCounters(ECharacterActionEndedReason ReasonForEnding);
		void OnCombatTargetChanged(class UCombatTargetComponent* NewTarget);
		void EndAnimSetAction();
		void OnAnimSetActionResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params);
		void OnAnimSetActionCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params);
		void OnAnimSetActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void RequestAnimSetAction(const struct FKnowledgeBaseFactKey& ArmToFeastFromFact);
		void UnbindListeners();
		void BindListeners();
		void SetRegenRate(float NewRegenRate);
		void OnHealthUpdated(class AActor* DamagedActor, float LastHealth, float CurrentHealth);
		bool OnBeginEarly();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void BeginFeastingNextAnim();
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_StandingFeed_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
