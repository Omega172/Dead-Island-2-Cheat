/**
 * Name: Dead_Island_2
 * Version: Cracked
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnUnpossessed
	 * 		Flags  -> ()
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::OnUnpossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnUnpossessed");
		
		UBP_Action_ForceSearchForHostiles_AI_C_OnUnpossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.ClearTimers
	 * 		Flags  -> ()
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::ClearTimers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.ClearTimers");
		
		UBP_Action_ForceSearchForHostiles_AI_C_ClearTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.RemoveToHostilesList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_ForceSearchForHostiles_AI_C::RemoveToHostilesList(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.RemoveToHostilesList");
		
		UBP_Action_ForceSearchForHostiles_AI_C_RemoveToHostilesList_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.RemoveForceSearchBehaviourStim
	 * 		Flags  -> ()
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::RemoveForceSearchBehaviourStim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.RemoveForceSearchBehaviourStim");
		
		UBP_Action_ForceSearchForHostiles_AI_C_RemoveForceSearchBehaviourStim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.ForceMovementToUpdate
	 * 		Flags  -> ()
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::ForceMovementToUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.ForceMovementToUpdate");
		
		UBP_Action_ForceSearchForHostiles_AI_C_ForceMovementToUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.UnbindListeners
	 * 		Flags  -> ()
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::UnbindListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.UnbindListeners");
		
		UBP_Action_ForceSearchForHostiles_AI_C_UnbindListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.StartSearchBehaviourUpdate
	 * 		Flags  -> ()
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::StartSearchBehaviourUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.StartSearchBehaviourUpdate");
		
		UBP_Action_ForceSearchForHostiles_AI_C_StartSearchBehaviourUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.StartPendingStimReceiverRegistrationCheck
	 * 		Flags  -> ()
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::StartPendingStimReceiverRegistrationCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.StartPendingStimReceiverRegistrationCheck");
		
		UBP_Action_ForceSearchForHostiles_AI_C_StartPendingStimReceiverRegistrationCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.CheckIfStimReceiverRegistered
	 * 		Flags  -> ()
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::CheckIfStimReceiverRegistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.CheckIfStimReceiverRegistered");
		
		UBP_Action_ForceSearchForHostiles_AI_C_CheckIfStimReceiverRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.GlobalUpdateForceSearchBehaviour
	 * 		Flags  -> ()
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::GlobalUpdateForceSearchBehaviour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.GlobalUpdateForceSearchBehaviour");
		
		UBP_Action_ForceSearchForHostiles_AI_C_GlobalUpdateForceSearchBehaviour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.AddForceSearchBehaviourStim
	 * 		Flags  -> ()
	 */
	bool UBP_Action_ForceSearchForHostiles_AI_C::AddForceSearchBehaviourStim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.AddForceSearchBehaviourStim");
		
		UBP_Action_ForceSearchForHostiles_AI_C_AddForceSearchBehaviourStim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.IsStimUpdateRequired
	 * 		Flags  -> ()
	 */
	bool UBP_Action_ForceSearchForHostiles_AI_C::IsStimUpdateRequired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.IsStimUpdateRequired");
		
		UBP_Action_ForceSearchForHostiles_AI_C_IsStimUpdateRequired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.CanUseSearchBehaviour
	 * 		Flags  -> ()
	 */
	bool UBP_Action_ForceSearchForHostiles_AI_C::CanUseSearchBehaviour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.CanUseSearchBehaviour");
		
		UBP_Action_ForceSearchForHostiles_AI_C_CanUseSearchBehaviour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.GetClosestHostile
	 * 		Flags  -> ()
	 */
	class ADICharacter* UBP_Action_ForceSearchForHostiles_AI_C::GetClosestHostile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.GetClosestHostile");
		
		UBP_Action_ForceSearchForHostiles_AI_C_GetClosestHostile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.AddToHostilesList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::AddToHostilesList(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.AddToHostilesList");
		
		UBP_Action_ForceSearchForHostiles_AI_C_AddToHostilesList_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.GetAllHostilesWithAreaShape
	 * 		Flags  -> ()
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::GetAllHostilesWithAreaShape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.GetAllHostilesWithAreaShape");
		
		UBP_Action_ForceSearchForHostiles_AI_C_GetAllHostilesWithAreaShape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnInteractorOverlapEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTriggerInteractorComponent*                 Interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::OnInteractorOverlapEnd(class UTriggerInteractorComponent* Interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnInteractorOverlapEnd");
		
		UBP_Action_ForceSearchForHostiles_AI_C_OnInteractorOverlapEnd_Params params {};
		params.Interactor = Interactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnInteractorOverlapBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTriggerInteractorComponent*                 Interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::OnInteractorOverlapBegin(class UTriggerInteractorComponent* Interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnInteractorOverlapBegin");
		
		UBP_Action_ForceSearchForHostiles_AI_C_OnInteractorOverlapBegin_Params params {};
		params.Interactor = Interactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.BindListeners
	 * 		Flags  -> ()
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::BindListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.BindListeners");
		
		UBP_Action_ForceSearchForHostiles_AI_C_BindListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnBeginEarly
	 * 		Flags  -> ()
	 */
	bool UBP_Action_ForceSearchForHostiles_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnBeginEarly");
		
		UBP_Action_ForceSearchForHostiles_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnBegin");
		
		UBP_Action_ForceSearchForHostiles_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnEnd");
		
		UBP_Action_ForceSearchForHostiles_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.ExecuteUbergraph_BP_Action_ForceSearchForHostiles_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_ForceSearchForHostiles_AI_C::ExecuteUbergraph_BP_Action_ForceSearchForHostiles_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.ExecuteUbergraph_BP_Action_ForceSearchForHostiles_AI");
		
		UBP_Action_ForceSearchForHostiles_AI_C_ExecuteUbergraph_BP_Action_ForceSearchForHostiles_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_ForceSearchForHostiles_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_ForceSearchForHostiles_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C");
		return ptr;
	}

}


