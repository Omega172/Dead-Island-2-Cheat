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
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.CollectBlueprintLinks
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class AActor*> ABP_OBJ_CinematicCutscene_C::CollectBlueprintLinks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.CollectBlueprintLinks");
		
		ABP_OBJ_CinematicCutscene_C_CollectBlueprintLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.AllowInteraction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractiveComponent*                       InteractiveComponent                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_OBJ_CinematicCutscene_C::AllowInteraction(class APawn* User, class UInteractiveComponent* InteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.AllowInteraction");
		
		ABP_OBJ_CinematicCutscene_C_AllowInteraction_Params params {};
		params.User = User;
		params.InteractiveComponent = InteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.GetInteractIconClass
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractiveComponent*                       InteractiveComponent                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UClass* ABP_OBJ_CinematicCutscene_C::GetInteractIconClass(class UInteractiveComponent* InteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.GetInteractIconClass");
		
		ABP_OBJ_CinematicCutscene_C_GetInteractIconClass_Params params {};
		params.InteractiveComponent = InteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.EnableAutoTriggerCutsceneDoOnce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_CinematicCutscene_C::EnableAutoTriggerCutsceneDoOnce(class APawn* Interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.EnableAutoTriggerCutsceneDoOnce");
		
		ABP_OBJ_CinematicCutscene_C_EnableAutoTriggerCutsceneDoOnce_Params params {};
		params.Interactor = Interactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.EnableOverriddenInteractionWhileStreaming
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::EnableOverriddenInteractionWhileStreaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.EnableOverriddenInteractionWhileStreaming");
		
		ABP_OBJ_CinematicCutscene_C_EnableOverriddenInteractionWhileStreaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.DisableOverriddenInteractionWhileStreaming
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::DisableOverriddenInteractionWhileStreaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.DisableOverriddenInteractionWhileStreaming");
		
		ABP_OBJ_CinematicCutscene_C_DisableOverriddenInteractionWhileStreaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OverrideInteractionCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OverrideInteractionCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OverrideInteractionCheck");
		
		ABP_OBJ_CinematicCutscene_C_OverrideInteractionCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnGatherCancel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OnGatherCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnGatherCancel");
		
		ABP_OBJ_CinematicCutscene_C_OnGatherCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.DiscardPreCutsceneFade
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::DiscardPreCutsceneFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.DiscardPreCutsceneFade");
		
		ABP_OBJ_CinematicCutscene_C_DiscardPreCutsceneFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StartPreCutsceneFade
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::StartPreCutsceneFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StartPreCutsceneFade");
		
		ABP_OBJ_CinematicCutscene_C_StartPreCutsceneFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.RemoveGatherInteractState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractiveComponent*                       Interact                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_CinematicCutscene_C::RemoveGatherInteractState(class UInteractiveComponent* Interact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.RemoveGatherInteractState");
		
		ABP_OBJ_CinematicCutscene_C_RemoveGatherInteractState_Params params {};
		params.Interact = Interact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.AddGatherInteractState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractiveComponent*                       Interact                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_CinematicCutscene_C::AddGatherInteractState(class UInteractiveComponent* Interact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.AddGatherInteractState");
		
		ABP_OBJ_CinematicCutscene_C_AddGatherInteractState_Params params {};
		params.Interact = Interact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.RestoreOverriddenInteractionCategory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractiveComponent*                       InteractiveComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_CinematicCutscene_C::RestoreOverriddenInteractionCategory(class UInteractiveComponent* InteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.RestoreOverriddenInteractionCategory");
		
		ABP_OBJ_CinematicCutscene_C_RestoreOverriddenInteractionCategory_Params params {};
		params.InteractiveComponent = InteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.SetOverriddenInteractionCategory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractiveComponent*                       InteractiveComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_CinematicCutscene_C::SetOverriddenInteractionCategory(class UInteractiveComponent* InteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.SetOverriddenInteractionCategory");
		
		ABP_OBJ_CinematicCutscene_C_SetOverriddenInteractionCategory_Params params {};
		params.InteractiveComponent = InteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.AddNewOverriddenInteraction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_CinematicCutscene_C::AddNewOverriddenInteraction(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.AddNewOverriddenInteraction");
		
		ABP_OBJ_CinematicCutscene_C_AddNewOverriddenInteraction_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.SpawnGatherActor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::SpawnGatherActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.SpawnGatherActor");
		
		ABP_OBJ_CinematicCutscene_C_SpawnGatherActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnGatherStatusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGatherState                                       NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGatherState                                       PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_CinematicCutscene_C::OnGatherStatusChanged(EGatherState NewState, EGatherState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnGatherStatusChanged");
		
		ABP_OBJ_CinematicCutscene_C_OnGatherStatusChanged_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.GatherComplete
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::GatherComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.GatherComplete");
		
		ABP_OBJ_CinematicCutscene_C_GatherComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.UnprocessStatefulActivity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::UnprocessStatefulActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.UnprocessStatefulActivity");
		
		ABP_OBJ_CinematicCutscene_C_UnprocessStatefulActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ProcessStatefulActivity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_StatefulActivity_SingleParticipant_C*    StatefulActivityRef                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_CinematicCutscene_C::ProcessStatefulActivity(class ABP_StatefulActivity_SingleParticipant_C* StatefulActivityRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ProcessStatefulActivity");
		
		ABP_OBJ_CinematicCutscene_C_ProcessStatefulActivity_Params params {};
		params.StatefulActivityRef = StatefulActivityRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StatefulActivityParticipantReleased
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_CinematicCutscene_C::StatefulActivityParticipantReleased(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StatefulActivityParticipantReleased");
		
		ABP_OBJ_CinematicCutscene_C_StatefulActivityParticipantReleased_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StatefulActivityParticipantReceived
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_CinematicCutscene_C::StatefulActivityParticipantReceived(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StatefulActivityParticipantReceived");
		
		ABP_OBJ_CinematicCutscene_C_StatefulActivityParticipantReceived_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.Check Participant Is Received
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_OBJ_CinematicCutscene_C::CheckParticipantIsReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.Check Participant Is Received");
		
		ABP_OBJ_CinematicCutscene_C_CheckParticipantIsReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StreamingTimeout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::StreamingTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StreamingTimeout");
		
		ABP_OBJ_CinematicCutscene_C_StreamingTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.CancelStreamingTimeoutTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::CancelStreamingTimeoutTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.CancelStreamingTimeoutTimer");
		
		ABP_OBJ_CinematicCutscene_C_CancelStreamingTimeoutTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StartStreamingTimeoutTimer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::StartStreamingTimeoutTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StartStreamingTimeoutTimer");
		
		ABP_OBJ_CinematicCutscene_C_StartStreamingTimeoutTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OverrideInteraction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OverrideInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OverrideInteraction");
		
		ABP_OBJ_CinematicCutscene_C_OverrideInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ReleaseOverriddenInteractions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::ReleaseOverriddenInteractions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ReleaseOverriddenInteractions");
		
		ABP_OBJ_CinematicCutscene_C_ReleaseOverriddenInteractions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.Unprocess Cutscene Activity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::UnprocessCutsceneActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.Unprocess Cutscene Activity");
		
		ABP_OBJ_CinematicCutscene_C_UnprocessCutsceneActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ProcessCutsceneActivity
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::ProcessCutsceneActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ProcessCutsceneActivity");
		
		ABP_OBJ_CinematicCutscene_C_ProcessCutsceneActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StartGather
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OBJ_CinematicCutscene_C::StartGather(bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StartGather");
		
		ABP_OBJ_CinematicCutscene_C_StartGather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OutlineFade__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OutlineFade__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OutlineFade__FinishedFunc");
		
		ABP_OBJ_CinematicCutscene_C_OutlineFade__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OutlineFade__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OutlineFade__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OutlineFade__UpdateFunc");
		
		ABP_OBJ_CinematicCutscene_C_OutlineFade__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnObjectiveStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OnObjectiveStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnObjectiveStarted");
		
		ABP_OBJ_CinematicCutscene_C_OnObjectiveStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ReceiveBeginPlay");
		
		ABP_OBJ_CinematicCutscene_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnObjectiveEnded
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OnObjectiveEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnObjectiveEnded");
		
		ABP_OBJ_CinematicCutscene_C_OnObjectiveEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnWaitingStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OnWaitingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnWaitingStarted");
		
		ABP_OBJ_CinematicCutscene_C_OnWaitingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StartCutscene
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::StartCutscene()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StartCutscene");
		
		ABP_OBJ_CinematicCutscene_C_StartCutscene_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.LevelStreamingCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::LevelStreamingCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.LevelStreamingCompleted");
		
		ABP_OBJ_CinematicCutscene_C_LevelStreamingCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.InteractWithNPCComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_CinematicCutscene_C::InteractWithNPCComplete(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.InteractWithNPCComplete");
		
		ABP_OBJ_CinematicCutscene_C_InteractWithNPCComplete_Params params {};
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
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.InteractWithActorComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_CinematicCutscene_C::InteractWithActorComplete(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.InteractWithActorComplete");
		
		ABP_OBJ_CinematicCutscene_C_InteractWithActorComplete_Params params {};
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
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.BndEvt__Interactive_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_CinematicCutscene_C::BndEvt__Interactive_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.BndEvt__Interactive_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature");
		
		ABP_OBJ_CinematicCutscene_C_BndEvt__Interactive_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.Override Interaction Components
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OverrideInteractionComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.Override Interaction Components");
		
		ABP_OBJ_CinematicCutscene_C_OverrideInteractionComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnCutsceneStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OnCutsceneStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnCutsceneStarted");
		
		ABP_OBJ_CinematicCutscene_C_OnCutsceneStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnCutsceneEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OnCutsceneEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnCutsceneEnded");
		
		ABP_OBJ_CinematicCutscene_C_OnCutsceneEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OutlineFadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OutlineFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OutlineFadeOut");
		
		ABP_OBJ_CinematicCutscene_C_OutlineFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OutlineFadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OutlineFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OutlineFadeIn");
		
		ABP_OBJ_CinematicCutscene_C_OutlineFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ExecuteUbergraph_BP_OBJ_CinematicCutscene
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_CinematicCutscene_C::ExecuteUbergraph_BP_OBJ_CinematicCutscene(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ExecuteUbergraph_BP_OBJ_CinematicCutscene");
		
		ABP_OBJ_CinematicCutscene_C_ExecuteUbergraph_BP_OBJ_CinematicCutscene_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnFadeUpComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OnFadeUpComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnFadeUpComplete__DelegateSignature");
		
		ABP_OBJ_CinematicCutscene_C_OnFadeUpComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnFadeDownComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OBJ_CinematicCutscene_C::OnFadeDownComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnFadeDownComplete__DelegateSignature");
		
		ABP_OBJ_CinematicCutscene_C_OnFadeDownComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OBJ_CinematicCutscene_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OBJ_CinematicCutscene_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C");
		return ptr;
	}

}


