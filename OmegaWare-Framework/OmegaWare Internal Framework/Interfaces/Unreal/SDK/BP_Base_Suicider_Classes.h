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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Base_Suicider.BP_Base_Suicider_C
	 * Size -> 0x00FC (FullSize[0x11A4] - InheritedSize[0x10A8])
	 */
	class ABP_Base_Suicider_C : public ABP_Base_Zombie_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWrinkleComponent*                                   Wrinkle;                                                 // 0x10B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USphereComponent*                                    ExplosionExecutionSphere;                                // 0x10B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      ArmingIntensity_ArmingSpeed_3CBAF76841BB0B0071A029A8B3DBD571; // 0x10C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmingIntensity_ArmingWeight_3CBAF76841BB0B0071A029A8B3DBD571; // 0x10C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         ArmingIntensity__Direction_3CBAF76841BB0B0071A029A8B3DBD571; // 0x10C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IU8W[0x7];                                   // 0x10C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ArmingIntensity;                                         // 0x10D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SuiciderDebug;                                           // 0x10D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EC0S[0x7];                                   // 0x10D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UABP_ZombieWalker_C*                                 AnimationInstance;                                       // 0x10E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Arming_WeightCurve;                                      // 0x10E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Arming_SpeedCurve;                                       // 0x10F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExplosionSphereRadius;                                   // 0x10F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmingDuration;                                          // 0x10FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmingCooldown;                                          // 0x1100(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamagePortionToIntensityBoost;                           // 0x1104(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageIntensityBoostCap;                                 // 0x1108(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FastTrackArmingDuration;                                 // 0x110C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CautiousIntensityBoost;                                  // 0x1110(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y2SU[0x4];                                   // 0x1114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        DebugTextIdentifiers;                                    // 0x1118(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class AAIController*                                       SelfController;                                          // 0x1128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              CombatTarget;                                            // 0x1130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      DebrisActors;                                            // 0x1138(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UCosmeticEffectsDefinition*>                  DebrisSplatterSets;                                      // 0x1148(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              AkArming[0x28];                                          // 0x1158(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    AkArmingPlayingId;                                       // 0x1180(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentArmingIntensity;                                  // 0x1184(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               TriggerSuicideAnticipationFact;                          // 0x1188(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               MorphTargetsRequestID;                                   // 0x1194(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitialiseArmingAudio();
		void AttemptRequestSuicideExecution(bool TargetConditionNotRequired, bool* Success);
		void RemoveAllSuiciderDebugText();
		void AddSuiciderDebugText(const class FString& Text, const struct FLinearColor& Colour, const class FString& Identifier, float Duration);
		void UserConstructionScript();
		void ArmingIntensity__FinishedFunc();
		void ArmingIntensity__UpdateFunc();
		void ReceiveBeginPlay();
		void TriggerDeath();
		void SetArming(bool Active, float Duration);
		void SetSuiciderDebug(bool Active);
		void OnActionEnd(const struct FGuid& RequestId, const class FName& ActionType, ECharacterActionEndedReason Reason);
		void OnDamageReceived(class AActor* DamagedActor, float OriginalDamage, float DamageTaken, const struct FDamageEvent& DamageEvent, const struct FEventInstigator& InstigatedBy, class AActor* DamageCauser, const struct FDSDamageData& DSDamageData);
		void BoostIntensity(float IntensityPortionChange, float IntensityLimit);
		void OnActionBegin(const struct FGuid& RequestId, const class FName& ActionType);
		void BndEvt__ExplosionExecutionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ArmingIntensityFastTrack();
		void CombatStateChanged(ECosmeticCombatState NewState);
		void ExecuteStateResponse();
		void PauseArming();
		void OnCombatTargetChanged(class UCombatTargetComponent* NewTarget);
		void ReceivePossessed(class AController* NewController);
		void OnAlternativeDeathConditions(bool bResult);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnDead(bool bResult);
		void ExecuteUbergraph_BP_Base_Suicider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
