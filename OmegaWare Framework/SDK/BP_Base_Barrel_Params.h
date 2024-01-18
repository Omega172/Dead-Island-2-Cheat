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
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.GetNoDestructionFilters
	 */
	struct ABP_Base_Barrel_C_GetNoDestructionFilters_Params
	{
	public:
		TArray<struct FKnowledgeBaseFactKey>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.GetNoImpulseFilters
	 */
	struct ABP_Base_Barrel_C_GetNoImpulseFilters_Params
	{
	public:
		TArray<struct FKnowledgeBaseFactKey>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.ResetImpactData
	 */
	struct ABP_Base_Barrel_C_ResetImpactData_Params
	{	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.InvalidateImpactResetTimer
	 */
	struct ABP_Base_Barrel_C_InvalidateImpactResetTimer_Params
	{	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.UpdateImpactData
	 */
	struct ABP_Base_Barrel_C_UpdateImpactData_Params
	{
	public:
		struct FEventInstigator                                    Instigator;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.EnableImpacts
	 */
	struct ABP_Base_Barrel_C_EnableImpacts_Params
	{	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.DisableImpacts
	 */
	struct ABP_Base_Barrel_C_DisableImpacts_Params
	{	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.SetupImpactOnCollisionDetection
	 */
	struct ABP_Base_Barrel_C_SetupImpactOnCollisionDetection_Params
	{	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.EndStim
	 */
	struct ABP_Base_Barrel_C_EndStim_Params
	{	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.RadialThresholdReached
	 */
	struct ABP_Base_Barrel_C_RadialThresholdReached_Params
	{	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.GetDamageEvents
	 */
	struct ABP_Base_Barrel_C_GetDamageEvents_Params
	{
	public:
		struct FRadialImpactEventResult                            RadialImpactEventResult;                                 // 0x0000(0x0278)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<struct FDamageTypeAndQuantity>                      DamageEventsToApply;                                     // 0x0278(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.ImpactReceived
	 */
	struct ABP_Base_Barrel_C_ImpactReceived_Params
	{
	public:
		struct FPointImpactEventResult                             ImpactEvent;                                             // 0x0000(0x0300)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x0300(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CBSY[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.ReceiveBeginPlay
	 */
	struct ABP_Base_Barrel_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.TriggerBrokenAction
	 */
	struct ABP_Base_Barrel_C_TriggerBrokenAction_Params
	{	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.TriggerPouringAction
	 */
	struct ABP_Base_Barrel_C_TriggerPouringAction_Params
	{	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.BlueprintOnBeginAction
	 */
	struct ABP_Base_Barrel_C_BlueprintOnBeginAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActionType;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.BlueprintOnEndAction
	 */
	struct ABP_Base_Barrel_C_BlueprintOnEndAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActionType;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterActionEndedReason                                Reason;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.UnTriggerPouringAction
	 */
	struct ABP_Base_Barrel_C_UnTriggerPouringAction_Params
	{	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.ProcessImpactResponse
	 */
	struct ABP_Base_Barrel_C_ProcessImpactResponse_Params
	{
	public:
		bool                                                       WasThrown;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.ReceiveEndPlay
	 */
	struct ABP_Base_Barrel_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__BPC_StateTransmitter_K2Node_ComponentBoundEvent_0_ServerActivated__DelegateSignature
	 */
	struct ABP_Base_Barrel_C_BndEvt__BPC_StateTransmitter_K2Node_ComponentBoundEvent_0_ServerActivated__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__BPC_StateTransmitter_K2Node_ComponentBoundEvent_1_ServerDeactivated__DelegateSignature
	 */
	struct ABP_Base_Barrel_C_BndEvt__BPC_StateTransmitter_K2Node_ComponentBoundEvent_1_ServerDeactivated__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_2_OnRadialImpactEventReceivedDelegate__DelegateSignature
	 */
	struct ABP_Base_Barrel_C_BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_2_OnRadialImpactEventReceivedDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRadialImpactEventResult                            ImpactEvent;                                             // 0x0008(0x0278)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.ReceivePostInitializeComponents
	 */
	struct ABP_Base_Barrel_C_ReceivePostInitializeComponents_Params
	{	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.AddRadialImpulse
	 */
	struct ABP_Base_Barrel_C_AddRadialImpulse_Params
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
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.AddImpulseAtLocation
	 */
	struct ABP_Base_Barrel_C_AddImpulseAtLocation_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Impulse;                                                 // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnAnyImpactEventReceivedDelegate__DelegateSignature
	 */
	struct ABP_Base_Barrel_C_BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnAnyImpactEventReceivedDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentSleepSignature__DelegateSignature
	 */
	struct ABP_Base_Barrel_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentSleepSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 SleepingComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Barrel.BP_Base_Barrel_C.ExecuteUbergraph_BP_Base_Barrel
	 */
	struct ABP_Base_Barrel_C_ExecuteUbergraph_BP_Base_Barrel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
