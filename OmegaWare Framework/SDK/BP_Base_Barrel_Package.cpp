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
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.GetNoDestructionFilters
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	TArray<struct FKnowledgeBaseFactKey> ABP_Base_Barrel_C::GetNoDestructionFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.GetNoDestructionFilters");
		
		ABP_Base_Barrel_C_GetNoDestructionFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.GetNoImpulseFilters
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	TArray<struct FKnowledgeBaseFactKey> ABP_Base_Barrel_C::GetNoImpulseFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.GetNoImpulseFilters");
		
		ABP_Base_Barrel_C_GetNoImpulseFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.ResetImpactData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Barrel_C::ResetImpactData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.ResetImpactData");
		
		ABP_Base_Barrel_C_ResetImpactData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.InvalidateImpactResetTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Barrel_C::InvalidateImpactResetTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.InvalidateImpactResetTimer");
		
		ABP_Base_Barrel_C_InvalidateImpactResetTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.UpdateImpactData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FEventInstigator                            Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_Base_Barrel_C::UpdateImpactData(struct FEventInstigator* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.UpdateImpactData");
		
		ABP_Base_Barrel_C_UpdateImpactData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instigator != nullptr)
			*Instigator = params.Instigator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.EnableImpacts
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Barrel_C::EnableImpacts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.EnableImpacts");
		
		ABP_Base_Barrel_C_EnableImpacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.DisableImpacts
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Barrel_C::DisableImpacts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.DisableImpacts");
		
		ABP_Base_Barrel_C_DisableImpacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.SetupImpactOnCollisionDetection
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Barrel_C::SetupImpactOnCollisionDetection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.SetupImpactOnCollisionDetection");
		
		ABP_Base_Barrel_C_SetupImpactOnCollisionDetection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.EndStim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Barrel_C::EndStim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.EndStim");
		
		ABP_Base_Barrel_C_EndStim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.RadialThresholdReached
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Barrel_C::RadialThresholdReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.RadialThresholdReached");
		
		ABP_Base_Barrel_C_RadialThresholdReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.GetDamageEvents
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRadialImpactEventResult                    RadialImpactEventResult                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		TArray<struct FDamageTypeAndQuantity>              DamageEventsToApply                                        (Parm, OutParm)
	 */
	void ABP_Base_Barrel_C::GetDamageEvents(const struct FRadialImpactEventResult& RadialImpactEventResult, TArray<struct FDamageTypeAndQuantity>* DamageEventsToApply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.GetDamageEvents");
		
		ABP_Base_Barrel_C_GetDamageEvents_Params params {};
		params.RadialImpactEventResult = RadialImpactEventResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEventsToApply != nullptr)
			*DamageEventsToApply = params.DamageEventsToApply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.ImpactReceived
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointImpactEventResult                     ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	bool ABP_Base_Barrel_C::ImpactReceived(const struct FPointImpactEventResult& ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.ImpactReceived");
		
		ABP_Base_Barrel_C_ImpactReceived_Params params {};
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Base_Barrel_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.ReceiveBeginPlay");
		
		ABP_Base_Barrel_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.TriggerBrokenAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Barrel_C::TriggerBrokenAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.TriggerBrokenAction");
		
		ABP_Base_Barrel_C_TriggerBrokenAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.TriggerPouringAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Barrel_C::TriggerPouringAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.TriggerPouringAction");
		
		ABP_Base_Barrel_C_TriggerPouringAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.BlueprintOnBeginAction
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActionType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Barrel_C::BlueprintOnBeginAction(const struct FGuid& RequestId, const class FName& ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.BlueprintOnBeginAction");
		
		ABP_Base_Barrel_C_BlueprintOnBeginAction_Params params {};
		params.RequestId = RequestId;
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.BlueprintOnEndAction
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActionType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterActionEndedReason                        Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Barrel_C::BlueprintOnEndAction(const struct FGuid& RequestId, const class FName& ActionType, ECharacterActionEndedReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.BlueprintOnEndAction");
		
		ABP_Base_Barrel_C_BlueprintOnEndAction_Params params {};
		params.RequestId = RequestId;
		params.ActionType = ActionType;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.UnTriggerPouringAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Barrel_C::UnTriggerPouringAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.UnTriggerPouringAction");
		
		ABP_Base_Barrel_C_UnTriggerPouringAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.ProcessImpactResponse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WasThrown                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Barrel_C::ProcessImpactResponse(bool WasThrown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.ProcessImpactResponse");
		
		ABP_Base_Barrel_C_ProcessImpactResponse_Params params {};
		params.WasThrown = WasThrown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Barrel_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.ReceiveEndPlay");
		
		ABP_Base_Barrel_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__BPC_StateTransmitter_K2Node_ComponentBoundEvent_0_ServerActivated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Base_Barrel_C::BndEvt__BPC_StateTransmitter_K2Node_ComponentBoundEvent_0_ServerActivated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__BPC_StateTransmitter_K2Node_ComponentBoundEvent_0_ServerActivated__DelegateSignature");
		
		ABP_Base_Barrel_C_BndEvt__BPC_StateTransmitter_K2Node_ComponentBoundEvent_0_ServerActivated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__BPC_StateTransmitter_K2Node_ComponentBoundEvent_1_ServerDeactivated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Base_Barrel_C::BndEvt__BPC_StateTransmitter_K2Node_ComponentBoundEvent_1_ServerDeactivated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__BPC_StateTransmitter_K2Node_ComponentBoundEvent_1_ServerDeactivated__DelegateSignature");
		
		ABP_Base_Barrel_C_BndEvt__BPC_StateTransmitter_K2Node_ComponentBoundEvent_1_ServerDeactivated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_2_OnRadialImpactEventReceivedDelegate__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRadialImpactEventResult                    ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ABP_Base_Barrel_C::BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_2_OnRadialImpactEventReceivedDelegate__DelegateSignature(class AActor* Actor, const struct FRadialImpactEventResult& ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_2_OnRadialImpactEventReceivedDelegate__DelegateSignature");
		
		ABP_Base_Barrel_C_BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_2_OnRadialImpactEventReceivedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.ReceivePostInitializeComponents
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Base_Barrel_C::ReceivePostInitializeComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.ReceivePostInitializeComponents");
		
		ABP_Base_Barrel_C_ReceivePostInitializeComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.AddRadialImpulse
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Origin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERadialImpulseFalloff                              Falloff                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bVelChange                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Barrel_C::AddRadialImpulse(class UPrimitiveComponent* Component, const struct FVector& Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.AddRadialImpulse");
		
		ABP_Base_Barrel_C_AddRadialImpulse_Params params {};
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
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.AddImpulseAtLocation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Barrel_C::AddImpulseAtLocation(class UPrimitiveComponent* Component, const struct FVector& Impulse, const struct FVector& Location, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.AddImpulseAtLocation");
		
		ABP_Base_Barrel_C_AddImpulseAtLocation_Params params {};
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
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnAnyImpactEventReceivedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Barrel_C::BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnAnyImpactEventReceivedDelegate__DelegateSignature(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnAnyImpactEventReceivedDelegate__DelegateSignature");
		
		ABP_Base_Barrel_C_BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnAnyImpactEventReceivedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentSleepSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         SleepingComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Barrel_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentSleepSignature__DelegateSignature");
		
		ABP_Base_Barrel_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentSleepSignature__DelegateSignature_Params params {};
		params.SleepingComponent = SleepingComponent;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Barrel.BP_Base_Barrel_C.ExecuteUbergraph_BP_Base_Barrel
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Barrel_C::ExecuteUbergraph_BP_Base_Barrel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Barrel.BP_Base_Barrel_C.ExecuteUbergraph_BP_Base_Barrel");
		
		ABP_Base_Barrel_C_ExecuteUbergraph_BP_Base_Barrel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_Barrel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_Barrel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_Barrel.BP_Base_Barrel_C");
		return ptr;
	}

}


