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
	 * Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.UserExitedRange
	 */
	struct UBP_InteractionState_Dockable_C_UserExitedRange_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.UserEnteredRange
	 */
	struct UBP_InteractionState_Dockable_C_UserEnteredRange_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.CacheRequiredComponents
	 */
	struct UBP_InteractionState_Dockable_C_CacheRequiredComponents_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.UnbindPaperDollUpdate
	 */
	struct UBP_InteractionState_Dockable_C_UnbindPaperDollUpdate_Params
	{
	public:
		class UPaperDollSlot*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.BindPaperDollUpdate
	 */
	struct UBP_InteractionState_Dockable_C_BindPaperDollUpdate_Params
	{
	public:
		class UPaperDollSlot*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.GetUserCarrySlot
	 */
	struct UBP_InteractionState_Dockable_C_GetUserCarrySlot_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPaperDollSlot*                                      Slot;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.CheckHands
	 */
	struct UBP_InteractionState_Dockable_C_CheckHands_Params
	{
	public:
		class UPaperDollSlot*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Output_Get;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.OnPaperDollSlotUpdated
	 */
	struct UBP_InteractionState_Dockable_C_OnPaperDollSlotUpdated_Params
	{
	public:
		class UEquippableComponent*                                PreviousItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UEquippableComponent*                                NewItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.ExecuteUbergraph_BP_InteractionState_Dockable
	 */
	struct UBP_InteractionState_Dockable_C_ExecuteUbergraph_BP_InteractionState_Dockable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
