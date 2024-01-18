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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_PerkEffect_RemoveStatusEffect.BP_PerkEffect_RemoveStatusEffect_C.RemoveStatusEffectByClass
	 */
	struct UBP_PerkEffect_RemoveStatusEffect_C_RemoveStatusEffectByClass_Params
	{
	public:
		class ADIPlayerCharacter*                                  Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UClass*>                                      TypeClassArray;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PerkEffect_RemoveStatusEffect.BP_PerkEffect_RemoveStatusEffect_C.OnStart
	 */
	struct UBP_PerkEffect_RemoveStatusEffect_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_RemoveStatusEffect.BP_PerkEffect_RemoveStatusEffect_C.ExecuteUbergraph_BP_PerkEffect_RemoveStatusEffect
	 */
	struct UBP_PerkEffect_RemoveStatusEffect_C_ExecuteUbergraph_BP_PerkEffect_RemoveStatusEffect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
