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
	 * BlueprintGeneratedClass BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C
	 * Size -> 0x0140 (FullSize[0x01A0] - InheritedSize[0x0060])
	 */
	class UBP_PerkEffect_TrackProjectileAccuracy_AI_C : public UInstancedPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADIAICharacter*                                      Character;                                               // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URangedWeaponModulesComponent*                       RangedWeaponModule;                                      // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugActive;                                             // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WEGF[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             CharacterKB;                                             // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIAIController*                                     AIController;                                            // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              CombatTarget;                                            // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CombatTargetLocation;                                    // 0x00A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OHIQ[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        FireModeIdentifier;                                      // 0x00B0(0x0010) Edit, BlueprintVisible
		struct FVector                                             CharacterLocation;                                       // 0x00C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ShootingDirection;                                       // 0x00CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseRawDistanceForAccuracyCalculation;                    // 0x00D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0B67[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         AccuracyErrorToleranceToClassifyAsMissRange;             // 0x00DC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HKE6[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCardDealerCounterModification                      CountersToModifyOnImpactMiss;                            // 0x00F0(0x00A0) Edit, BlueprintVisible
		bool                                                       TrackingProjectile;                                      // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IWNL[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ProjectileFiredTimer;                                    // 0x0198(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void ProjectileTrackingAddedDebug();
		void EvaluateImpactAccuracy(const struct FVector& ActualHitLocation, bool* IsAccurate);
		void InitialiseVariables(const struct FPerkEffectStartParams& PerkEffectStartParams);
		void OnStart(const struct FPerkEffectStartParams& Params);
		void OnCombatTargetChanged(class UCombatTargetComponent* NewTarget);
		void OnProjectileCreated(class UActorProjectileSpawnModule* ProjectileSpawnModule, class AModularProjectileActor* ModularProjectileActor);
		void OnProjectileHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ProjectileHasNotLandedAfterExcessiveDuration();
		void OnModulesInitialized();
		void ExecuteUbergraph_BP_PerkEffect_TrackProjectileAccuracy_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
