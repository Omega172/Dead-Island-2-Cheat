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
	 * Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.CollectBlueprintLinks
	 */
	struct ABP_Base_InventoryItemHolder_C_CollectBlueprintLinks_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.MoveTo150cmOffTheGround
	 */
	struct ABP_Base_InventoryItemHolder_C_MoveTo150cmOffTheGround_Params
	{	};

	/**
	 * Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.StopPoweredAudio
	 */
	struct ABP_Base_InventoryItemHolder_C_StopPoweredAudio_Params
	{	};

	/**
	 * Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.StartPoweredAudio
	 */
	struct ABP_Base_InventoryItemHolder_C_StartPoweredAudio_Params
	{	};

	/**
	 * Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.PowerStatusChanged
	 */
	struct ABP_Base_InventoryItemHolder_C_PowerStatusChanged_Params
	{
	public:
		bool                                                       IsPowered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.UserConstructionScript
	 */
	struct ABP_Base_InventoryItemHolder_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.DoorCloseTL__FinishedFunc
	 */
	struct ABP_Base_InventoryItemHolder_C_DoorCloseTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.DoorCloseTL__UpdateFunc
	 */
	struct ABP_Base_InventoryItemHolder_C_DoorCloseTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.ReceiveBeginPlay
	 */
	struct ABP_Base_InventoryItemHolder_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.CloseDoor
	 */
	struct ABP_Base_InventoryItemHolder_C_CloseDoor_Params
	{	};

	/**
	 * Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.BndEvt__BPC_InventoryItem_DockingPoint_K2Node_ComponentBoundEvent_0_InventoryItemDockComponentMulticast__DelegateSignature
	 */
	struct ABP_Base_InventoryItemHolder_C_BndEvt__BPC_InventoryItem_DockingPoint_K2Node_ComponentBoundEvent_0_InventoryItemDockComponentMulticast__DelegateSignature_Params
	{
	public:
		class AItemPickupActor*                                    Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDockStateChangeSource                                     Source;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.BndEvt__BPC_InventoryItem_DockingPoint_K2Node_ComponentBoundEvent_1_InventoryItemDockComponentMulticast__DelegateSignature
	 */
	struct ABP_Base_InventoryItemHolder_C_BndEvt__BPC_InventoryItem_DockingPoint_K2Node_ComponentBoundEvent_1_InventoryItemDockComponentMulticast__DelegateSignature_Params
	{
	public:
		class AItemPickupActor*                                    Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDockStateChangeSource                                     Source;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.ExecuteUbergraph_BP_Base_InventoryItemHolder
	 */
	struct ABP_Base_InventoryItemHolder_C_ExecuteUbergraph_BP_Base_InventoryItemHolder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.PowerChanged__DelegateSignature
	 */
	struct ABP_Base_InventoryItemHolder_C_PowerChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsPowered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
