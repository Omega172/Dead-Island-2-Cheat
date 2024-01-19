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
	 * Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.GetItemArchetype
	 */
	struct UBP_Base_InteractionState_Inventory_C_GetItemArchetype_Params
	{
	public:
		class UItemArchetype*                                      ItemArchetype;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.UnbindFromInventory
	 */
	struct UBP_Base_InteractionState_Inventory_C_UnbindFromInventory_Params
	{	};

	/**
	 * Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.FindPlayerInventory
	 */
	struct UBP_Base_InteractionState_Inventory_C_FindPlayerInventory_Params
	{
	public:
		class UDIInventoryComponent*                               InventoryComponent;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.UserExitedRange
	 */
	struct UBP_Base_InteractionState_Inventory_C_UserExitedRange_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.UserEnteredRange
	 */
	struct UBP_Base_InteractionState_Inventory_C_UserEnteredRange_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.CheckInventory
	 */
	struct UBP_Base_InteractionState_Inventory_C_CheckInventory_Params
	{	};

	/**
	 * Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.InventoryModified
	 */
	struct UBP_Base_InteractionState_Inventory_C_InventoryModified_Params
	{
	public:
		class UItemArchetype*                                      ItemArchetype;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AItemActor*                                          Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewCount;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Delta;                                                   // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.Uninitialize
	 */
	struct UBP_Base_InteractionState_Inventory_C_Uninitialize_Params
	{	};

	/**
	 * Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.ExecuteUbergraph_BP_Base_InteractionState_Inventory
	 */
	struct UBP_Base_InteractionState_Inventory_C_ExecuteUbergraph_BP_Base_InteractionState_Inventory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
