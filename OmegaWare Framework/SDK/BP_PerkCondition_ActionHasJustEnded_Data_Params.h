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
	 * Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.ActionHasEnded
	 */
	struct UBP_PerkCondition_ActionHasJustEnded_Data_C_ActionHasEnded_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActionType;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterActionEndedReason                                Reason;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.UnbindFromEndAction
	 */
	struct UBP_PerkCondition_ActionHasJustEnded_Data_C_UnbindFromEndAction_Params
	{	};

	/**
	 * Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.ListenToItemBeingEquipped
	 */
	struct UBP_PerkCondition_ActionHasJustEnded_Data_C_ListenToItemBeingEquipped_Params
	{
	public:
		class UWeaponEquippableComponent*                          OnEquippable;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.EquippableAssigned
	 */
	struct UBP_PerkCondition_ActionHasJustEnded_Data_C_EquippableAssigned_Params
	{
	public:
		class UPaperDollSlot*                                      PaperDollSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.BindToEndAction
	 */
	struct UBP_PerkCondition_ActionHasJustEnded_Data_C_BindToEndAction_Params
	{	};

	/**
	 * Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.ExecuteUbergraph_BP_PerkCondition_ActionHasJustEnded_Data
	 */
	struct UBP_PerkCondition_ActionHasJustEnded_Data_C_ExecuteUbergraph_BP_PerkCondition_ActionHasJustEnded_Data_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
