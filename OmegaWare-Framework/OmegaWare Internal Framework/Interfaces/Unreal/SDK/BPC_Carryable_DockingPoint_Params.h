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
	 * Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.AllowInteraction
	 */
	struct UBPC_Carryable_DockingPoint_C_AllowInteraction_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractiveComponent*                               InteractiveComponent;                                    // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G3AA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.GetInteractIconClass
	 */
	struct UBPC_Carryable_DockingPoint_C_GetInteractIconClass_Params
	{
	public:
		class UInteractiveComponent*                               InteractiveComponent;                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.ShouldLockDockable
	 */
	struct UBPC_Carryable_DockingPoint_C_ShouldLockDockable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.GetMeshOffset
	 */
	struct UBPC_Carryable_DockingPoint_C_GetMeshOffset_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.SetDockingPointActive
	 */
	struct UBPC_Carryable_DockingPoint_C_SetDockingPointActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.ReceiveBeginPlay
	 */
	struct UBPC_Carryable_DockingPoint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.BlueprintOnDocked
	 */
	struct UBPC_Carryable_DockingPoint_C_BlueprintOnDocked_Params
	{
	public:
		class AActor*                                              Dockable;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.ExecuteUbergraph_BPC_Carryable_DockingPoint
	 */
	struct UBPC_Carryable_DockingPoint_C_ExecuteUbergraph_BPC_Carryable_DockingPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1V27[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.ActorDocked__DelegateSignature
	 */
	struct UBPC_Carryable_DockingPoint_C_ActorDocked__DelegateSignature_Params
	{
	public:
		class AActor*                                              DockedActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
