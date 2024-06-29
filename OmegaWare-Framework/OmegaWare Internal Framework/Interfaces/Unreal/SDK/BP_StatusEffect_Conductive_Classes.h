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
	 * BlueprintGeneratedClass BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C
	 * Size -> 0x0058 (FullSize[0x0160] - InheritedSize[0x0108])
	 */
	class UBP_StatusEffect_Conductive_C : public UBP_Base_StatusEffect_ApplyDebuff_C
	{
	public:
		TArray<class UClass*>                                      StatusEffectsToRemove;                                   // 0x0108(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<EAccumulatingEffectType>                            AccumulatingEffectsToRemove;                             // 0x0118(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FKnowledgeBaseExpression                            BurndownModifierNumericExpression;                       // 0x0128(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash

	public:
		void ReceiveBegin(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* FirstInstance);
		void RemoveBurndownModifier(class UStatusEffectComponent* StatusEffectComponent, class UStatusEffectInstance* Instance);
		void ReceiveEndInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance);
		void AddBurndownModifier(class UStatusEffectComponent* StatusEffectComponent, class UStatusEffectInstance* Instance);
		void ReceiveBeginInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
