/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.GetNoDestructionFilters
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	TArray<struct FKnowledgeBaseFactKey> ABP_Base_ElectricalAOE_TriggeredDischarge_C::GetNoDestructionFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.GetNoDestructionFilters");
		
		ABP_Base_ElectricalAOE_TriggeredDischarge_C_GetNoDestructionFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.GetNoImpulseFilters
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	TArray<struct FKnowledgeBaseFactKey> ABP_Base_ElectricalAOE_TriggeredDischarge_C::GetNoImpulseFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.GetNoImpulseFilters");
		
		ABP_Base_ElectricalAOE_TriggeredDischarge_C_GetNoImpulseFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_1_OnRadialImpactEventReceivedDelegate__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRadialImpactEventResult                    ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ABP_Base_ElectricalAOE_TriggeredDischarge_C::BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_1_OnRadialImpactEventReceivedDelegate__DelegateSignature(class AActor* Actor, const struct FRadialImpactEventResult& ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_1_OnRadialImpactEventReceivedDelegate__DelegateSignature");
		
		ABP_Base_ElectricalAOE_TriggeredDischarge_C_BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_1_OnRadialImpactEventReceivedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.AddRadialImpulse
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Origin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERadialImpulseFalloff                              Falloff                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bVelChange                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_ElectricalAOE_TriggeredDischarge_C::AddRadialImpulse(class UPrimitiveComponent* Component, const struct FVector& Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.AddRadialImpulse");
		
		ABP_Base_ElectricalAOE_TriggeredDischarge_C_AddRadialImpulse_Params params {};
		params.Component = Component;
		params.Origin = Origin;
		params.Radius = Radius;
		params.Strength = Strength;
		params.Falloff = Falloff;
		params.bVelChange = bVelChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.AddImpulseAtLocation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_ElectricalAOE_TriggeredDischarge_C::AddImpulseAtLocation(class UPrimitiveComponent* Component, const struct FVector& Impulse, const struct FVector& Location, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.AddImpulseAtLocation");
		
		ABP_Base_ElectricalAOE_TriggeredDischarge_C_AddImpulseAtLocation_Params params {};
		params.Component = Component;
		params.Impulse = Impulse;
		params.Location = Location;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.ExecuteUbergraph_BP_Base_ElectricalAOE_TriggeredDischarge
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_ElectricalAOE_TriggeredDischarge_C::ExecuteUbergraph_BP_Base_ElectricalAOE_TriggeredDischarge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C.ExecuteUbergraph_BP_Base_ElectricalAOE_TriggeredDischarge");
		
		ABP_Base_ElectricalAOE_TriggeredDischarge_C_ExecuteUbergraph_BP_Base_ElectricalAOE_TriggeredDischarge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_ElectricalAOE_TriggeredDischarge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_ElectricalAOE_TriggeredDischarge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C");
		return ptr;
	}

}


