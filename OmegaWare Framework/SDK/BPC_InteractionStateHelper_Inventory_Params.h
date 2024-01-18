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
	 * Function BPC_InteractionStateHelper_Inventory.BPC_InteractionStateHelper_Inventory_C.GetInventoryRequirements
	 */
	struct UBPC_InteractionStateHelper_Inventory_C_GetInventoryRequirements_Params
	{
	public:
		class UItemArchetype*                                      Archetype;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_InteractionStateHelper_Inventory.BPC_InteractionStateHelper_Inventory_C.SetInventoryRequirements
	 */
	struct UBPC_InteractionStateHelper_Inventory_C_SetInventoryRequirements_Params
	{
	public:
		class UItemArchetype*                                      Archetype;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemCount;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_InteractionStateHelper_Inventory.BPC_InteractionStateHelper_Inventory_C.InventoryRequirementsSet__DelegateSignature
	 */
	struct UBPC_InteractionStateHelper_Inventory_C_InventoryRequirementsSet__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
