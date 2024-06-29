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
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.OnRep_bIsIconVisible
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_OnRep_bIsIconVisible_Params
	{	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.ResetImpactData
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_ResetImpactData_Params
	{	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.OnBeginHolding
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_OnBeginHolding_Params
	{	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.InvalidateImpactResetTimer
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_InvalidateImpactResetTimer_Params
	{	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.BindExpressionListener
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_BindExpressionListener_Params
	{	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.SetupIcon
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_SetupIcon_Params
	{	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.UserConstructionScript
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.ReceivePostInitializeComponents
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_ReceivePostInitializeComponents_Params
	{	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.ReceiveBeginPlay
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_0_PaperDollEventMulticastDelegate__DelegateSignature
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_0_PaperDollEventMulticastDelegate__DelegateSignature_Params
	{
	public:
		class UPaperDollSlot*                                      PaperDollSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_1_PaperDollEventMulticastDelegate__DelegateSignature
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_1_PaperDollEventMulticastDelegate__DelegateSignature_Params
	{
	public:
		class UPaperDollSlot*                                      PaperDollSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.ExpressionUpdated
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_ExpressionUpdated_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.BndEvt__BPC_CarryableInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_BndEvt__BPC_CarryableInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PGWV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnAnyImpactEventReceivedDelegate__DelegateSignature
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnAnyImpactEventReceivedDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_6_ComponentSleepSignature__DelegateSignature
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_6_ComponentSleepSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 SleepingComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.RequestMeleeImpactEvent
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_RequestMeleeImpactEvent_Params
	{
	public:
		TArray<struct FHitResult>                                  HitResults;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		struct FVector                                             SweepDirection;                                          // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AttackOrigin;                                            // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.BndEvt__Dockable_K2Node_ComponentBoundEvent_3_DockableComponentMulticast__DelegateSignature
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_BndEvt__Dockable_K2Node_ComponentBoundEvent_3_DockableComponentMulticast__DelegateSignature_Params
	{
	public:
		class UDockableComponent*                                  Dockable;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDockComponent*                                      Dock;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.BndEvt__Dockable_K2Node_ComponentBoundEvent_4_DockableComponentMulticast__DelegateSignature
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_BndEvt__Dockable_K2Node_ComponentBoundEvent_4_DockableComponentMulticast__DelegateSignature_Params
	{
	public:
		class UDockableComponent*                                  Dockable;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDockComponent*                                      Dock;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C.ExecuteUbergraph_BP_Base_CarryableActor_SkeletalMesh
	 */
	struct ABP_Base_CarryableActor_SkeletalMesh_C_ExecuteUbergraph_BP_Base_CarryableActor_SkeletalMesh_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
