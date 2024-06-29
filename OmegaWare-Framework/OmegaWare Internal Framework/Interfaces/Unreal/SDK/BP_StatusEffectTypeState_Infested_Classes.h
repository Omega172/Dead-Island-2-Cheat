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
	 * BlueprintGeneratedClass BP_StatusEffectTypeState_Infested.BP_StatusEffectTypeState_Infested_C
	 * Size -> 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
	 */
	class UBP_StatusEffectTypeState_Infested_C : public UBP_StatusEffectTypeState_DamageOverTime_C
	{
	public:
		class UStaminaComponent*                                   StaminaComponent;                                        // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
