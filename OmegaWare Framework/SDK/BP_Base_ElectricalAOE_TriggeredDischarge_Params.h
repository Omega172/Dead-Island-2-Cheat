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
	 * Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.GetNoDestructionFilters
	 */
	struct ABP_Base_ElectricalAOE_TriggeredDischarge_C_GetNoDestructionFilters_Params
	{
	public:
		TArray<struct FKnowledgeBaseFactKey>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.GetNoImpulseFilters
	 */
	struct ABP_Base_ElectricalAOE_TriggeredDischarge_C_GetNoImpulseFilters_Params
	{
	public:
		TArray<struct FKnowledgeBaseFactKey>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_1_OnRadialImpactEventReceivedDelegate__DelegateSignature
	 */
	struct ABP_Base_ElectricalAOE_TriggeredDischarge_C_BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_1_OnRadialImpactEventReceivedDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRadialImpactEventResult                            ImpactEvent;                                             // 0x0008(0x0278)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.AddRadialImpulse
	 */
	struct ABP_Base_ElectricalAOE_TriggeredDischarge_C_AddRadialImpulse_Params
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
	 * Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.AddImpulseAtLocation
	 */
	struct ABP_Base_ElectricalAOE_TriggeredDischarge_C_AddImpulseAtLocation_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Impulse;                                                 // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.ExecuteUbergraph_BP_Base_ElectricalAOE_TriggeredDischarge
	 */
	struct ABP_Base_ElectricalAOE_TriggeredDischarge_C_ExecuteUbergraph_BP_Base_ElectricalAOE_TriggeredDischarge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FXAV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
