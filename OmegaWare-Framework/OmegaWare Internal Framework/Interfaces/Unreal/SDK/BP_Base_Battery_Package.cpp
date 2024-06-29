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
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.GetNoDestructionFilters
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	TArray<struct FKnowledgeBaseFactKey> ABP_Base_Battery_C::GetNoDestructionFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.GetNoDestructionFilters");
		
		ABP_Base_Battery_C_GetNoDestructionFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.GetNoImpulseFilters
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	TArray<struct FKnowledgeBaseFactKey> ABP_Base_Battery_C::GetNoImpulseFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.GetNoImpulseFilters");
		
		ABP_Base_Battery_C_GetNoImpulseFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.OnRep_CurrentCarrier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Battery_C::OnRep_CurrentCarrier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.OnRep_CurrentCarrier");
		
		ABP_Base_Battery_C_OnRep_CurrentCarrier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.SetupImpactOnCollisionDetection
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Battery_C::SetupImpactOnCollisionDetection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.SetupImpactOnCollisionDetection");
		
		ABP_Base_Battery_C_SetupImpactOnCollisionDetection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.ResetImpactData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Battery_C::ResetImpactData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.ResetImpactData");
		
		ABP_Base_Battery_C_ResetImpactData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.OnBeginHolding
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Battery_C::OnBeginHolding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.OnBeginHolding");
		
		ABP_Base_Battery_C_OnBeginHolding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.UpdateImpactData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FEventInstigator                            Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_Base_Battery_C::UpdateImpactData(struct FEventInstigator* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.UpdateImpactData");
		
		ABP_Base_Battery_C_UpdateImpactData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instigator != nullptr)
			*Instigator = params.Instigator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.IsCarrierLocal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bOutIsLocal                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Battery_C::IsCarrierLocal(bool* bOutIsLocal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.IsCarrierLocal");
		
		ABP_Base_Battery_C_IsCarrierLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutIsLocal != nullptr)
			*bOutIsLocal = params.bOutIsLocal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.InvalidateImpactResetTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Battery_C::InvalidateImpactResetTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.InvalidateImpactResetTimer");
		
		ABP_Base_Battery_C_InvalidateImpactResetTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.EndImpactOnCollisionDetection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Battery_C::EndImpactOnCollisionDetection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.EndImpactOnCollisionDetection");
		
		ABP_Base_Battery_C_EndImpactOnCollisionDetection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.EnableImpacts
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Battery_C::EnableImpacts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.EnableImpacts");
		
		ABP_Base_Battery_C_EnableImpacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.DisableImpacts
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Battery_C::DisableImpacts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.DisableImpacts");
		
		ABP_Base_Battery_C_DisableImpacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.SetupActionHelpers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Battery_C::SetupActionHelpers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.SetupActionHelpers");
		
		ABP_Base_Battery_C_SetupActionHelpers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Battery_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.UserConstructionScript");
		
		ABP_Base_Battery_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__SpatialTick_K2Node_ComponentBoundEvent_0_OnSpatialCellDeativatedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class USpatialTickComponent*                       Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Battery_C::BndEvt__SpatialTick_K2Node_ComponentBoundEvent_0_OnSpatialCellDeativatedSignature__DelegateSignature(class USpatialTickComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__SpatialTick_K2Node_ComponentBoundEvent_0_OnSpatialCellDeativatedSignature__DelegateSignature");
		
		ABP_Base_Battery_C_BndEvt__SpatialTick_K2Node_ComponentBoundEvent_0_OnSpatialCellDeativatedSignature__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__SpatialTick_K2Node_ComponentBoundEvent_1_OnSpatialCellActivatedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class USpatialTickComponent*                       Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Battery_C::BndEvt__SpatialTick_K2Node_ComponentBoundEvent_1_OnSpatialCellActivatedSignature__DelegateSignature(class USpatialTickComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__SpatialTick_K2Node_ComponentBoundEvent_1_OnSpatialCellActivatedSignature__DelegateSignature");
		
		ABP_Base_Battery_C_BndEvt__SpatialTick_K2Node_ComponentBoundEvent_1_OnSpatialCellActivatedSignature__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.AddRadialImpulse
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Origin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERadialImpulseFalloff                              Falloff                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bVelChange                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Battery_C::AddRadialImpulse(class UPrimitiveComponent* Component, const struct FVector& Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.AddRadialImpulse");
		
		ABP_Base_Battery_C_AddRadialImpulse_Params params {};
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
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.AddImpulseAtLocation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Battery_C::AddImpulseAtLocation(class UPrimitiveComponent* Component, const struct FVector& Impulse, const struct FVector& Location, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.AddImpulseAtLocation");
		
		ABP_Base_Battery_C_AddImpulseAtLocation_Params params {};
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
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_3_PaperDollEventMulticastDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPaperDollSlot*                              PaperDollSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Battery_C::BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_3_PaperDollEventMulticastDelegate__DelegateSignature(class UPaperDollSlot* PaperDollSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_3_PaperDollEventMulticastDelegate__DelegateSignature");
		
		ABP_Base_Battery_C_BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_3_PaperDollEventMulticastDelegate__DelegateSignature_Params params {};
		params.PaperDollSlot = PaperDollSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__BPC_CarryableInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Battery_C::BndEvt__BPC_CarryableInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__BPC_CarryableInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature");
		
		ABP_Base_Battery_C_BndEvt__BPC_CarryableInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature_Params params {};
		params.User = User;
		params.Mode = Mode;
		params.CustomParams = CustomParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_6_ComponentSleepSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         SleepingComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Battery_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_6_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_6_ComponentSleepSignature__DelegateSignature");
		
		ABP_Base_Battery_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_6_ComponentSleepSignature__DelegateSignature_Params params {};
		params.SleepingComponent = SleepingComponent;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_7_ComponentDestroyedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Battery_C::BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_7_ComponentDestroyedDelegate__DelegateSignature(class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_7_ComponentDestroyedDelegate__DelegateSignature");
		
		ABP_Base_Battery_C_BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_7_ComponentDestroyedDelegate__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Base_Battery_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.ReceiveBeginPlay");
		
		ABP_Base_Battery_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.RequestMeleeImpactEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FHitResult>                          HitResults                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		struct FVector                                     SweepDirection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AttackOrigin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Battery_C::RequestMeleeImpactEvent(TArray<struct FHitResult> HitResults, const struct FVector& SweepDirection, const struct FVector& AttackOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.RequestMeleeImpactEvent");
		
		ABP_Base_Battery_C_RequestMeleeImpactEvent_Params params {};
		params.HitResults = HitResults;
		params.SweepDirection = SweepDirection;
		params.AttackOrigin = AttackOrigin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_2_SetSimulatePhysicsDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSimulate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Battery_C::BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_2_SetSimulatePhysicsDelegate__DelegateSignature(bool bSimulate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_2_SetSimulatePhysicsDelegate__DelegateSignature");
		
		ABP_Base_Battery_C_BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_2_SetSimulatePhysicsDelegate__DelegateSignature_Params params {};
		params.bSimulate = bSimulate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Battery.BP_Base_Battery_C.ExecuteUbergraph_BP_Base_Battery
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Battery_C::ExecuteUbergraph_BP_Base_Battery(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Battery.BP_Base_Battery_C.ExecuteUbergraph_BP_Base_Battery");
		
		ABP_Base_Battery_C_ExecuteUbergraph_BP_Base_Battery_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_Battery_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_Battery_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_Battery.BP_Base_Battery_C");
		return ptr;
	}

}


