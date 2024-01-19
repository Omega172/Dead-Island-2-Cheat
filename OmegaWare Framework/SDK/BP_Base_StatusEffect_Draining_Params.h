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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Base_StatusEffect_Draining.BP_Base_StatusEffect_Draining_C.StopCosmeticEffect
	 */
	struct UBP_Base_StatusEffect_Draining_C_StopCosmeticEffect_Params
	{
	public:
		class UBP_StatusEffectTypeState_DamageOverTime_C*          TypeState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffect_Draining.BP_Base_StatusEffect_Draining_C.BeginCosmeticEffect
	 */
	struct UBP_Base_StatusEffect_Draining_C_BeginCosmeticEffect_Params
	{
	public:
		class UBP_StatusEffectTypeState_DamageOverTime_C*          TypeState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
