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
	 * BlueprintGeneratedClass BP_StatusEffectParams_Stun.BP_StatusEffectParams_Stun_C
	 * Size -> 0x0004 (FullSize[0x00EC] - InheritedSize[0x00E8])
	 */
	class UBP_StatusEffectParams_Stun_C : public UStatusEffectParams
	{
	public:
		float                                                      DurationVariationPercentage;                             // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
