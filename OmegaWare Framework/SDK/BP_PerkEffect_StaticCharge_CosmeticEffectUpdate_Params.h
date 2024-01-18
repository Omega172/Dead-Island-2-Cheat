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
	 * Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.CacheEquippedVisualWeapon
	 */
	struct UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_CacheEquippedVisualWeapon_Params
	{
	public:
		class ABP_Base_Player_C*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.UpdateMaterialOnWeapon
	 */
	struct UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_UpdateMaterialOnWeapon_Params
	{
	public:
		int32_t                                                    StackCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnStackCountUpdated
	 */
	struct UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_OnStackCountUpdated_Params
	{
	public:
		int32_t                                                    NewStackCount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnEnd
	 */
	struct UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_OnEnd_Params
	{
	public:
		struct FPerkEffectEndParams                                Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnWeaponChanged
	 */
	struct UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_OnWeaponChanged_Params
	{
	public:
		class UEquippableComponent*                                PreviousItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UEquippableComponent*                                CurrentItem;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnWeaponAttached
	 */
	struct UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_OnWeaponAttached_Params
	{
	public:
		class AActor*                                              NewActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPerspective                                               Perspective;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnStart
	 */
	struct UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.ExecuteUbergraph_BP_PerkEffect_StaticCharge_CosmeticEffectUpdate
	 */
	struct UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_ExecuteUbergraph_BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
