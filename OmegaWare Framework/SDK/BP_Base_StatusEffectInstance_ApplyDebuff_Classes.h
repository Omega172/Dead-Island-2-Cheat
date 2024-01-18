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
	 * BlueprintGeneratedClass BP_Base_StatusEffectInstance_ApplyDebuff.BP_Base_StatusEffectInstance_ApplyDebuff_C
	 * Size -> 0x0011 (FullSize[0x00E1] - InheritedSize[0x00D0])
	 */
	class UBP_Base_StatusEffectInstance_ApplyDebuff_C : public UBP_Base_StatusEffectInstance_C
	{
	public:
		TArray<struct FGuid>                                       ModifiableValueGuids;                                    // 0x00D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		EDuplicateModifierPolicy                                   ModifiableValuePolicy;                                   // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetBurndownRate(float BurndownRate);
		void UpdateModifiableValues(class UModifiableValuesComponent* ModifiableValuesComponent, struct FGuid* ModifierGUID, class UModifiableValueDefinition* ModifierValueType, float ModifierValue, bool* Successful);
		void RemoveModifiableValues(class UModifiableValuesComponent* ModifiableValuesComponent);
		void ApplyModifiableValues(class UModifiableValuesComponent* ModifiableValuesComponent, TArray<struct FSStatusEffectDebuffTypesAndValues>* ModifiersToApply, bool SetValueNow, const class FName& SourceName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
