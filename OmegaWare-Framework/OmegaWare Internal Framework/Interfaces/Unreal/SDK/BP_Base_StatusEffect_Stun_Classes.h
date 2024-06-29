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
	 * BlueprintGeneratedClass BP_Base_StatusEffect_Stun.BP_Base_StatusEffect_Stun_C
	 * Size -> 0x0038 (FullSize[0x00C8] - InheritedSize[0x0090])
	 */
	class UBP_Base_StatusEffect_Stun_C : public UBP_Base_StatusEffect_C
	{
	public:
		TArray<struct FKnowledgeBaseFactKey>                       FactKeysToApplyWithAction;                               // 0x0090(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UAnimMontage*                                        ActionMontageOverride;                                   // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                IntoAnimSet;                                             // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                OutroAnimSet;                                            // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimPlayRateVariationPercentage;                         // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MNWK[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UModifiableValueDefinition*                          DurationModifier;                                        // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveEnd(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState);
		void ReceiveBegin(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* FirstInstance);
		void ConstructActionParams(class UCustomActionParamsBase** NewParams);
		void GetModifiedDurationFromInstigator(class UStatusEffectParams* InstanceParams, float UnmodifiedDuration, float* ModifiedDuration);
		void ReturnValueWithVariation(float OriginalValue, float VariationPercentage, float* NewValue);
		void ReceiveBeginInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
