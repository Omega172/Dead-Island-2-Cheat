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
	 * BlueprintGeneratedClass BP_StatusEffectParams_Blinded.BP_StatusEffectParams_Blinded_C
	 * Size -> 0x0007 (FullSize[0x00F0] - InheritedSize[0x00E9])
	 */
	class UBP_StatusEffectParams_Blinded_C : public UBP_Base_StatusEffectParams_ApplyDebuff_C
	{
	public:
		unsigned char                                              UnknownData_O8XI[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AccuracyReduction;                                       // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void GetModifiers(TArray<struct FSStatusEffectDebuffTypesAndValues>* StatusEffectsAndValues);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
