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
	 * Function BP_InteractionState_InventoryCheck.BP_InteractionState_InventoryCheck_C.CheckInventory
	 */
	struct UBP_InteractionState_InventoryCheck_C_CheckInventory_Params
	{	};

	/**
	 * Function BP_InteractionState_InventoryCheck.BP_InteractionState_InventoryCheck_C.GetItemArchetype
	 */
	struct UBP_InteractionState_InventoryCheck_C_GetItemArchetype_Params
	{
	public:
		class UItemArchetype*                                      ItemArchetype;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_InventoryCheck.BP_InteractionState_InventoryCheck_C.CacheRequiredComponents
	 */
	struct UBP_InteractionState_InventoryCheck_C_CacheRequiredComponents_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_InventoryCheck.BP_InteractionState_InventoryCheck_C.SetDisplayAction
	 */
	struct UBP_InteractionState_InventoryCheck_C_SetDisplayAction_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
