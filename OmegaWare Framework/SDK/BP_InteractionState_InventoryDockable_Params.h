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
	 * Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.UserExitedRange
	 */
	struct UBP_InteractionState_InventoryDockable_C_UserExitedRange_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.UserEnteredRange
	 */
	struct UBP_InteractionState_InventoryDockable_C_UserEnteredRange_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.CacheRequiredComponents
	 */
	struct UBP_InteractionState_InventoryDockable_C_CacheRequiredComponents_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.InventoryUpdatedCheck
	 */
	struct UBP_InteractionState_InventoryDockable_C_InventoryUpdatedCheck_Params
	{
	public:
		class UItemArchetype*                                      InputPin;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.SetInteractAction
	 */
	struct UBP_InteractionState_InventoryDockable_C_SetInteractAction_Params
	{	};

	/**
	 * Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.CheckInventory
	 */
	struct UBP_InteractionState_InventoryDockable_C_CheckInventory_Params
	{
	public:
		class ADICharacter*                                        UserIn;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ItemFound;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.OnInventoryUpdated
	 */
	struct UBP_InteractionState_InventoryDockable_C_OnInventoryUpdated_Params
	{
	public:
		class UItemArchetype*                                      ItemArchetype;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AItemActor*                                          Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewCount;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Delta;                                                   // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.OnInteractionComplete_Server
	 */
	struct UBP_InteractionState_InventoryDockable_C_OnInteractionComplete_Server_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CZXP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.Initialize
	 */
	struct UBP_InteractionState_InventoryDockable_C_Initialize_Params
	{
	public:
		class UInteractiveComponent*                               InInteractiveComponent;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.ExecuteUbergraph_BP_InteractionState_InventoryDockable
	 */
	struct UBP_InteractionState_InventoryDockable_C_ExecuteUbergraph_BP_InteractionState_InventoryDockable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0YGB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
