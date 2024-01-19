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
	 * Function BP_PerkCondition_PlayerSwappedWeapon_Data.BP_PerkCondition_PlayerSwappedWeapon_Data_C.OnWeaponChanged
	 */
	struct UBP_PerkCondition_PlayerSwappedWeapon_Data_C_OnWeaponChanged_Params
	{
	public:
		class UEquippableComponent*                                PreviousItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UEquippableComponent*                                CurrentItem;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_PlayerSwappedWeapon_Data.BP_PerkCondition_PlayerSwappedWeapon_Data_C.ExecuteUbergraph_BP_PerkCondition_PlayerSwappedWeapon_Data
	 */
	struct UBP_PerkCondition_PlayerSwappedWeapon_Data_C_ExecuteUbergraph_BP_PerkCondition_PlayerSwappedWeapon_Data_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TWLY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
