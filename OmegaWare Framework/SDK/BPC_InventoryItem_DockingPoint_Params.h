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
	 * Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.GetDockableArchetypes
	 */
	struct UBPC_InventoryItem_DockingPoint_C_GetDockableArchetypes_Params
	{
	public:
		TArray<class UItemArchetype*>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.ShouldLockActor
	 */
	struct UBPC_InventoryItem_DockingPoint_C_ShouldLockActor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.UpdateInteractionState
	 */
	struct UBPC_InventoryItem_DockingPoint_C_UpdateInteractionState_Params
	{
	public:
		bool                                                       HasDocked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B5WI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.ReceiveBeginPlay
	 */
	struct UBPC_InventoryItem_DockingPoint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.OnInteractionComplete_Server_Event
	 */
	struct UBPC_InventoryItem_DockingPoint_C_OnInteractionComplete_Server_Event_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MI27[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.BlueprintOnDocked
	 */
	struct UBPC_InventoryItem_DockingPoint_C_BlueprintOnDocked_Params
	{
	public:
		class AItemPickupActor*                                    Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.BlueprintOnUndocked
	 */
	struct UBPC_InventoryItem_DockingPoint_C_BlueprintOnUndocked_Params
	{
	public:
		class AItemPickupActor*                                    Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.ExecuteUbergraph_BPC_InventoryItem_DockingPoint
	 */
	struct UBPC_InventoryItem_DockingPoint_C_ExecuteUbergraph_BPC_InventoryItem_DockingPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.ActorDocked__DelegateSignature
	 */
	struct UBPC_InventoryItem_DockingPoint_C_ActorDocked__DelegateSignature_Params
	{
	public:
		class ABP_Base_ItemPickup_C*                               DockedActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
