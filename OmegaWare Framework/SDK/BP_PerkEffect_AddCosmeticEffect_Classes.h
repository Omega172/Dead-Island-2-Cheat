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
	 * BlueprintGeneratedClass BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C
	 * Size -> 0x0120 (FullSize[0x0170] - InheritedSize[0x0050])
	 */
	class UBP_PerkEffect_AddCosmeticEffect_C : public UInstancedPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0050(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCosmeticEffectsDefinition*                          CosmeticEffect;                                          // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CE_AttachSocket;                                         // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LocationOffsetFromActor;                                 // 0x0068(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            RotationOffsetFromActor;                                 // 0x0074(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DelayBeforeStarting;                                     // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartDelayDeviation;                                     // 0x0084(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CosmeticLifespan;                                        // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DestroyActorOnOwnerDeath;                                // 0x008C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D113[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DestroyWithDelay;                                        // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  CE_Ref;                                                  // 0x0094(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ActorTarget;                                             // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TimerRef;                                                // 0x00A0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UDamageableComponent*                                DamageableComponent;                                     // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        DelayStartTimer;                                         // 0x00B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<struct FKnowledgeBaseFactKey, class FName>            CosmeticEffectParamsSetByFact;                           // 0x00B8(0x0050) Edit, BlueprintVisible
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, struct FSFloatRangeMapClamped>           CosmeticEffectParamsScaling;                             // 0x0118(0x0050) Edit, BlueprintVisible
		class AActor*                                              TargetActor;                                             // 0x0168(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BindOnActorKilled();
		void StopListeningToParamFacts();
		void StartListeningToParamFacts();
		void OnParamFactChanged(const struct FKnowledgeBaseFactKey& FactKey, class UKnowledgeBaseComponent* KnowledgeBaseComponent, EKnowledgeBaseFactChangeType FactChangeType);
		void AttachToActor();
		void AttachToSkeletalMesh();
		void LifeSpan();
		void DestroySpawnedActor(class AActor* Target);
		void AttachCosmeticToActor();
		void OnEnd(const struct FPerkEffectEndParams& Params);
		void AttachCosmeticToSkeletalMesh();
		void OnStart(const struct FPerkEffectStartParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_AddCosmeticEffect(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
