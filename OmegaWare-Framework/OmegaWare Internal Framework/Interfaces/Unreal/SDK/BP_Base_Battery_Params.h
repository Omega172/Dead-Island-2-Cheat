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
	 * Function BP_Base_Battery.BP_Base_Battery_C.GetNoDestructionFilters
	 */
	struct ABP_Base_Battery_C_GetNoDestructionFilters_Params
	{
	public:
		TArray<struct FKnowledgeBaseFactKey>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.GetNoImpulseFilters
	 */
	struct ABP_Base_Battery_C_GetNoImpulseFilters_Params
	{
	public:
		TArray<struct FKnowledgeBaseFactKey>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.OnRep_CurrentCarrier
	 */
	struct ABP_Base_Battery_C_OnRep_CurrentCarrier_Params
	{	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.SetupImpactOnCollisionDetection
	 */
	struct ABP_Base_Battery_C_SetupImpactOnCollisionDetection_Params
	{	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.ResetImpactData
	 */
	struct ABP_Base_Battery_C_ResetImpactData_Params
	{	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.OnBeginHolding
	 */
	struct ABP_Base_Battery_C_OnBeginHolding_Params
	{	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.UpdateImpactData
	 */
	struct ABP_Base_Battery_C_UpdateImpactData_Params
	{
	public:
		struct FEventInstigator                                    Instigator;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.IsCarrierLocal
	 */
	struct ABP_Base_Battery_C_IsCarrierLocal_Params
	{
	public:
		bool                                                       bOutIsLocal;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.InvalidateImpactResetTimer
	 */
	struct ABP_Base_Battery_C_InvalidateImpactResetTimer_Params
	{	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.EndImpactOnCollisionDetection
	 */
	struct ABP_Base_Battery_C_EndImpactOnCollisionDetection_Params
	{	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.EnableImpacts
	 */
	struct ABP_Base_Battery_C_EnableImpacts_Params
	{	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.DisableImpacts
	 */
	struct ABP_Base_Battery_C_DisableImpacts_Params
	{	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.SetupActionHelpers
	 */
	struct ABP_Base_Battery_C_SetupActionHelpers_Params
	{	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.UserConstructionScript
	 */
	struct ABP_Base_Battery_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__SpatialTick_K2Node_ComponentBoundEvent_0_OnSpatialCellDeativatedSignature__DelegateSignature
	 */
	struct ABP_Base_Battery_C_BndEvt__SpatialTick_K2Node_ComponentBoundEvent_0_OnSpatialCellDeativatedSignature__DelegateSignature_Params
	{
	public:
		class USpatialTickComponent*                               Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__SpatialTick_K2Node_ComponentBoundEvent_1_OnSpatialCellActivatedSignature__DelegateSignature
	 */
	struct ABP_Base_Battery_C_BndEvt__SpatialTick_K2Node_ComponentBoundEvent_1_OnSpatialCellActivatedSignature__DelegateSignature_Params
	{
	public:
		class USpatialTickComponent*                               Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.AddRadialImpulse
	 */
	struct ABP_Base_Battery_C_AddRadialImpulse_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Origin;                                                  // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Strength;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERadialImpulseFalloff                                      Falloff;                                                 // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bVelChange;                                              // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.AddImpulseAtLocation
	 */
	struct ABP_Base_Battery_C_AddImpulseAtLocation_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Impulse;                                                 // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_3_PaperDollEventMulticastDelegate__DelegateSignature
	 */
	struct ABP_Base_Battery_C_BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_3_PaperDollEventMulticastDelegate__DelegateSignature_Params
	{
	public:
		class UPaperDollSlot*                                      PaperDollSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__BPC_CarryableInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature
	 */
	struct ABP_Base_Battery_C_BndEvt__BPC_CarryableInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DPM1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_6_ComponentSleepSignature__DelegateSignature
	 */
	struct ABP_Base_Battery_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_6_ComponentSleepSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 SleepingComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_7_ComponentDestroyedDelegate__DelegateSignature
	 */
	struct ABP_Base_Battery_C_BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_7_ComponentDestroyedDelegate__DelegateSignature_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.ReceiveBeginPlay
	 */
	struct ABP_Base_Battery_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.RequestMeleeImpactEvent
	 */
	struct ABP_Base_Battery_C_RequestMeleeImpactEvent_Params
	{
	public:
		TArray<struct FHitResult>                                  HitResults;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		struct FVector                                             SweepDirection;                                          // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AttackOrigin;                                            // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_2_SetSimulatePhysicsDelegate__DelegateSignature
	 */
	struct ABP_Base_Battery_C_BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_2_SetSimulatePhysicsDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       bSimulate;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Battery.BP_Base_Battery_C.ExecuteUbergraph_BP_Base_Battery
	 */
	struct ABP_Base_Battery_C_ExecuteUbergraph_BP_Base_Battery_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9YAX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
