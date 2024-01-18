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
	 * BlueprintGeneratedClass BP_StatusEffectTypeState_Infested.BP_StatusEffectTypeState_Infested_C
	 * Size -> 0x000C (FullSize[0x0108] - InheritedSize[0x00FC])
	 */
	class UBP_StatusEffectTypeState_Infested_C : public UBP_StatusEffectTypeState_DamageOverTime_C
	{
	public:
		unsigned char                                              UnknownData_HQYD[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaminaComponent*                                   StaminaComponent;                                        // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
