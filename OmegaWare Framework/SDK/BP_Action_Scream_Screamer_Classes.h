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
	 * BlueprintGeneratedClass BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C
	 * Size -> 0x0338 (FullSize[0x04B0] - InheritedSize[0x0178])
	 */
	class UBP_Action_Scream_Screamer_C : public UAnimSetAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0178(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFactionAgentComponent*                              OwnerFaction;                                            // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_Screamer_C*                                 Screamer;                                                // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class ADICharacter*, class UStatusEffectInstance*>    InfiniteStatusEffectInstances;                           // 0x0190(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      MaxDuration;                                             // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStimID                                             StimRef;                                                 // 0x01E4(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KB;                                                      // 0x01E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCombatAggroComponent*                               Aggro;                                                   // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        MaxDurationRef;                                          // 0x01F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      MinDuration;                                             // 0x0200(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2ZII[0x4];                                   // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADICharacter*                                        CombatTarget;                                            // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxMovementSpeedModifier;                                // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScreamEffectsUpdateInterval;                             // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDIAnimInstance*                                     AnimInstance;                                            // 0x0218(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SpawnExplosionFromBone;                                  // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      YelpRadius;                                              // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlockActionsDistanceThreshold;                           // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlockActionsDirectionThreshold;                          // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceAtWhichDistanceScaleIsMax;                       // 0x0234(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStimManager*                                        StimManager;                                             // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AggressorLimit;                                          // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LingeringStatusEffectDefaultDuration;                    // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class ADICharacter*, float>                           CharacterStatusEffectStartTime;                          // 0x0248(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       ScaleLingeringAggressiveByTimeInScream;                  // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QVOB[0x3];                                   // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LingeringStatusEffectMinDuration;                        // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LingeringStatusEffectMaxDuration;                        // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L15I[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticEffectsDefinition*                          NaturalEnd_CE;                                           // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  NaturalEnd_CE_Ref;                                       // 0x02B0(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GJRA[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticEffectsDefinition*                          Interrupted_CE;                                          // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  Interrupted_CE_Ref;                                      // 0x02C0(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HJFT[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticEffectsDefinition*                          Continuous_CE;                                           // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  Continuous_CE_Ref;                                       // 0x02D0(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Continuous_CE_Offset;                                    // 0x02D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          Blood_CE;                                                // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  Blood_CE_Ref;                                            // 0x02E8(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                CE_MouthAttachSocket;                                    // 0x02EC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FacingTargetAngleForEffectiveBlock;                      // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerBlockDirectionScalarModifier;                      // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VCY0[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DirectionIntensityCurve;                                 // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         DistanceIntensityCurve;                                  // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         AngleIntensityCurve;                                     // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChangePointForAngleIntensityCurve;                       // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DYKE[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScriptedSequenceComponent*                          ScriptedSequenceComponentRef;                            // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPC_ThresholdTracking_AI_C*                         ThresholdTrackeringData;                                 // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FGuid>                                       ThresholdTrackerIDs;                                     // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      DamageThresholdForVulnerability;                         // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               VulnerabilityFact;                                       // 0x0344(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                HealthTrackingFactInvokerName;                           // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DamageThresholdReachedForHitReactVulnerability;          // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WindUpFinished;                                          // 0x0359(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BA2Y[0x6];                                   // 0x035A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        CancelationSettingsTimerRef;                             // 0x0360(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      DelayBeforeAdditionalCancellationSettings;               // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CX9D[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviourModifierComponent*                         BehaviourModifierComponent;                              // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      BehaviourModifiersToApplyDuringScream;                   // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UStatusEffectInstance*>                       AggressiveStatusEffects;                                 // 0x0388(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UStimTemplate*                                       StimTemplate;                                            // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       ScreamAnimActionHelper;                                  // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AnimSetName;                                             // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseValueSelector                         ScreamAngleFact;                                         // 0x03B0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGuid                                               ScreamAnimAction;                                        // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            BeginScreamEffectsExpression;                            // 0x0410(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            DamageOverTimeStatusEffectExpression;                    // 0x0448(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       DebugActive;                                             // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VS3Y[0x3];                                   // 0x0481(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FacingTargetAngleToRemoveBurning;                        // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FacingTargetAngleToMaintainScream;                       // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DetermineIfPrematureEndFrequency;                        // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        LoopingTimeRef;                                          // 0x0490(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        MinDurationRef;                                          // 0x0498(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FThresholdTrackingParams>                    ThresholdInterruptionParams;                             // 0x04A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnMinDurationOver();
		void DetermineIfPrematureEnd();
		void RemoveBurningAccumulation();
		void ClientSetup(class AActor* Owner);
		void SetDebugActive();
		void RemoveHealthTracking();
		bool OnBeginEarly();
		void AddNeutralStatusEffect(class UObject* OverlappedCharacter, class UStatusEffectComponent* StatusEffectComponent, class UStatusEffectInstance** OutputPin);
		void AddFriendlyStatusEffect(class UObject* OverlappedCharacter, class UStatusEffectComponent* StatusEffectComponent, class UStatusEffectInstance** OutputPin);
		class UStatusEffectInstance* AddHostileStatusEffect(class UObject* OverlappedCharacter, class UStatusEffectComponent* StatusEffectComponent);
		void EndStim();
		float GetCurveChangePoint(float MinTime, float MaxTime, float ChangeFromValue);
		void PlayCE_OnEnd(ECharacterActionEndedReason ExitReason);
		void PlayCE_OnBegin();
		void AddLingeringStatusEffect(class ADICharacter* OverlappedCharacter, class UStatusEffectComponent* StatusEffectComponent, class UStatusEffectInstance* StatusEffectInstance);
		void ShouldRequestBackup(bool* Result);
		void CancelZombieBackup();
		void EndSphereOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp);
		void SummonZombieBackup();
		class UStatusEffectInstance* AddOverlapStatusEffect(EFactionReaction FactionReaction, class UStatusEffectComponent* StatusEffectComponent, class UObject* OverlappedCharacter);
		void OnOverlapScreamSphere(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp);
		void UninitialiseScreamCollision();
		void IntialiseScreamCollision();
		void SpawnExplosion();
		void UnintialiseScreamEffects(ECharacterActionEndedReason ExitReason);
		void IntialiseScreamEffects();
		void SpawnStim();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnScreamDurationOver();
		void OnCombatStateChanged(ECosmeticCombatState NewState);
		void OnScreamEffectsBeginChanged(bool Result);
		void OnReceivingDamageOverTimeStatusEffect(bool bResult);
		void EstablishAdditionalCancelationSettings();
		void OnDamageThresholdForHitReactVulnerabilityReached(bool DamageRequirementMet, bool StabilityDamageMet);
		void ExecuteUbergraph_BP_Action_Scream_Screamer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
