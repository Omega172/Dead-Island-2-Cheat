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
	 * BlueprintGeneratedClass BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C
	 * Size -> 0x00B8 (FullSize[0x0568] - InheritedSize[0x04B0])
	 */
	class UBP_Action_Scream_Screamer_Electric_C : public UBP_Action_Scream_Screamer_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class ADICharacter*>                                Zombies;                                                 // 0x04B8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ADICharacter*>                                Players;                                                 // 0x04C8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      ElectrocuteAccumulationInterval;                         // 0x04D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XD1Q[0x4];                                   // 0x04DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSElecticScreamAccumlationByDistanceParams>  ZombieElectrocuteAccumulationValueByDistance;            // 0x04E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FSElecticScreamAccumlationByDistanceParams>  PlayerElectrocuteAccumulationValueByDistance;            // 0x04F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FTimerHandle                                        ElectrocuteAccumulationTimer;                            // 0x0500(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FAccumulatingEffectTypeAndValue                     PlayerElectrocuteAccumulationMaxValue;                   // 0x0508(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_Q91V[0x4];                                   // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UKnowledgeBaseComponent*>                     ZombieKnowledgeBases;                                    // 0x0518(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FKnowledgeBaseFactKey                               ElectricScreamerElectrocutionFact;                       // 0x0528(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      FacingTargetAngleToAddElectrocuteAccumulation;           // 0x0534(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C* ArcFromScreamComponent;                                  // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ADICharacter*>                                ZombiesInsideCone;                                       // 0x0540(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class UParticleSystemComponent*                            ScreamAdditiveLightnings;                                // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStimTemplate*                                       CommandStimTemplate;                                     // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPC_Distraction_GroupCoordinator_C*                 DistractionGroupCoordinator;                             // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool OnBeginEarly();
		void EndStim();
		void SpawnStim();
		void PlayCE_OnEnd(ECharacterActionEndedReason ExitReason);
		void PlayCE_OnBegin();
		void UnintialiseScreamEffects(ECharacterActionEndedReason ExitReason);
		void IntialiseScreamEffects();
		void DeactivateArcFromScream();
		void ActivateArcFromScream();
		void EndSphereOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp);
		class UStatusEffectInstance* AddHostileStatusEffect(class UObject* OverlappedCharacter, class UStatusEffectComponent* StatusEffectComponent);
		void AddFriendlyStatusEffect(class UObject* OverlappedCharacter, class UStatusEffectComponent* StatusEffectComponent, class UStatusEffectInstance** OutputPin);
		void RemoveElectrocuteStatusEffect(class ADICharacter* Zombie);
		void DecrementElectricScreamerElectrocutionFact(class ADICharacter* TargetCharacter);
		void IncrementElectricScreamerElectrocutionFact(class ADICharacter* TargetCharacter);
		void AddElectrocuteAccumulation(class AActor* DamagedActor, EComparisonOperator RangeComparisonOperator, TArray<struct FSElecticScreamAccumlationByDistanceParams> AccumulatingEffectByDistance);
		void IncreaseElectrocuteAccumulation();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Scream_Screamer_Electric(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
