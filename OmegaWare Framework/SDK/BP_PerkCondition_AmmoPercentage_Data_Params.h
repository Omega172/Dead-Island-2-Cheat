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
	 * Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.GetAmmoInfo
	 */
	struct UBP_PerkCondition_AmmoPercentage_Data_C_GetAmmoInfo_Params
	{
	public:
		class ARangedWeaponItemActor*                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LocalAmmoCount;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LocalAmmoCapacity;                                       // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReserveAmmoCount;                                        // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.GetTarget
	 */
	struct UBP_PerkCondition_AmmoPercentage_Data_C_GetTarget_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NKJY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.Equipped
	 */
	struct UBP_PerkCondition_AmmoPercentage_Data_C_Equipped_Params
	{
	public:
		class UPaperDollSlot*                                      PaperDollSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.ShotEnded
	 */
	struct UBP_PerkCondition_AmmoPercentage_Data_C_ShotEnded_Params
	{
	public:
		class UModularShotHandler*                                 ShotHandler;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.CheckAmmoPercentage
	 */
	struct UBP_PerkCondition_AmmoPercentage_Data_C_CheckAmmoPercentage_Params
	{	};

	/**
	 * Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.ExecuteUbergraph_BP_PerkCondition_AmmoPercentage_Data
	 */
	struct UBP_PerkCondition_AmmoPercentage_Data_C_ExecuteUbergraph_BP_PerkCondition_AmmoPercentage_Data_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IUPN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
