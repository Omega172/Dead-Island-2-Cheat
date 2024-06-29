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
	 * BlueprintGeneratedClass BP_StatusEffectParams_Draining.BP_StatusEffectParams_Draining_C
	 * Size -> 0x0004 (FullSize[0x00EC] - InheritedSize[0x00E8])
	 */
	class UBP_StatusEffectParams_Draining_C : public UBP_StatusEffectParams_DamageOverTime_C
	{
	public:
		float                                                      HealthAwardPercentage;                                   // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
