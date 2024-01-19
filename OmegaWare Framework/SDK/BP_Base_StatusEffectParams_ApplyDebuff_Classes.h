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
	 * BlueprintGeneratedClass BP_Base_StatusEffectParams_ApplyDebuff.BP_Base_StatusEffectParams_ApplyDebuff_C
	 * Size -> 0x0001 (FullSize[0x00E9] - InheritedSize[0x00E8])
	 */
	class UBP_Base_StatusEffectParams_ApplyDebuff_C : public UStatusEffectParams
	{
	public:
		bool                                                       ApplyDebuffOnBeginInstance;                              // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void GetModifiers(TArray<struct FSStatusEffectDebuffTypesAndValues>* StatusEffectsAndValues);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
