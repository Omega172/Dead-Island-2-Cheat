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
	 * BlueprintGeneratedClass BP_Base_StatusEffect.BP_Base_StatusEffect_C
	 * Size -> 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
	 */
	class UBP_Base_StatusEffect_C : public UStatusEffectType
	{
	public:
		class UActionDefinition*                                   StatusEffectActionDefinition;                            // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          BurstCosmeticEffectDefinition;                           // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          AudioChimeCosmeticEffect;                                // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          AudioStartCosmeticEffect;                                // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnCosmeticEffectChime(class UActorComponent* Component, class UBP_Base_StatusEffectTypeState_C* TypeState, class UStatusEffectInstance* Instance);
		void SetupActionBindings(class UStatusEffectComponent* Component, class UBP_Base_StatusEffectTypeState_C* TypeState, class UStatusEffectInstance* Instance);
		void RemoveStatusEffectCosmeticEffect(class UObject* Component, class UBP_Base_StatusEffectTypeState_C* TypeState);
		void EndAction(class UActorComponent* Component, class UBP_Base_StatusEffectTypeState_C* TypeState);
		void SpawnStatusEffectCosmeticEffect(class UActorComponent* Component, class UBP_Base_StatusEffectTypeState_C* TypeState);
		void RequestAction(class ADICharacter* OwningCharacter, class UStatusEffectComponent* Component, class UBP_Base_StatusEffectTypeState_C* TypeState);
		void SpawnBurstCosmeticEffect(class AActor* OwningActor, const struct FTargetPointInfo& ImpactOrigin);
		void ReceiveEnd(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState);
		void SetupTypeState(class UBP_Base_StatusEffectTypeState_C* TypeState, class ADICharacter* StatusEffectOwner);
		void ReceiveBeginInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance);
		void ConstructActionParams(class UCustomActionParamsBase** NewParams);
		void ReceiveBegin(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* FirstInstance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
