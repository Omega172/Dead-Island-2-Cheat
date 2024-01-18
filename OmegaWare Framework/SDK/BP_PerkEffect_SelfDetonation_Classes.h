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
	 * BlueprintGeneratedClass BP_PerkEffect_SelfDetonation.BP_PerkEffect_SelfDetonation_C
	 * Size -> 0x00B8 (FullSize[0x0108] - InheritedSize[0x0050])
	 */
	class UBP_PerkEffect_SelfDetonation_C : public UInstancedPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0050(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USplatterMeshComponent*                              BPCSplatterMeshAI;                                       // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KnowledgeBase;                                           // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIAICharacter*                                      Character;                                               // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        CEBloodTimer;                                            // 0x0078(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      DetonationDelay;                                         // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       KillOwningCharacter;                                     // 0x0084(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AddCorpseCannotBeFeastedOnFact;                          // 0x0085(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HideCorpse;                                              // 0x0086(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9TJN[0x1];                                   // 0x0087(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCosmeticEffectsDefinition*>                  DebrisSplatterSets;                                      // 0x0088(0x0010) Edit, BlueprintVisible
		TArray<class UClass*>                                      DebrisActors;                                            // 0x0098(0x0010) Edit, BlueprintVisible
		class UCosmeticEffectsDefinition*                          BloodCosmeticEffect;                                     // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BloodCosmeticEffectFromActor;                            // 0x00B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H277[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DebugTagString;                                          // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FTimerHandle                                        DetonationTimer;                                         // 0x00D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FKnowledgeBaseFactKey>                       FactsToIncrement;                                        // 0x00E0(0x0010) Edit, BlueprintVisible
		bool                                                       DeathTriggered;                                          // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BloodSplatterComplete;                                   // 0x00F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XQGZ[0x6];                                   // 0x00F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPC_Base_MultiPartHealth_AI_C*                      MultiPartHealth;                                         // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UExplosionActionArchetype*                           PhysicsExplosionOnSplatterApplied;                       // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TryRemoveCorpseCannotBeFeastedOn();
		void TryAddCorpseCannotBeFeastedOn();
		void IncrementFacts();
		void DecrementFacts();
		void KillCharacter();
		void OnStart(const struct FPerkEffectStartParams& Params);
		void Spawn_Blood_Delay();
		void OnEnd(const struct FPerkEffectEndParams& Params);
		void Detonation();
		void SplatterIsApplied();
		void ExecuteUbergraph_BP_PerkEffect_SelfDetonation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
