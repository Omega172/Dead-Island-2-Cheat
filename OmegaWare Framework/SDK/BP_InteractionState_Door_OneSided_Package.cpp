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
	 * 		Name   -> Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.GetCurrentState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_Door_OneSided_C::GetCurrentState(bool* bStateActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.GetCurrentState");
		
		UBP_InteractionState_Door_OneSided_C_GetCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bStateActive != nullptr)
			*bStateActive = params.bStateActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.UnbindToStateDelegates
	 * 		Flags  -> ()
	 */
	void UBP_InteractionState_Door_OneSided_C::UnbindToStateDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.UnbindToStateDelegates");
		
		UBP_InteractionState_Door_OneSided_C_UnbindToStateDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.OnDoorOpened
	 * 		Flags  -> ()
	 */
	void UBP_InteractionState_Door_OneSided_C::OnDoorOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.OnDoorOpened");
		
		UBP_InteractionState_Door_OneSided_C_OnDoorOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.OnDoorClosed
	 * 		Flags  -> ()
	 */
	void UBP_InteractionState_Door_OneSided_C::OnDoorClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.OnDoorClosed");
		
		UBP_InteractionState_Door_OneSided_C_OnDoorClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.OnDoorStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOpenableState                                     NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_Door_OneSided_C::OnDoorStateChanged(EOpenableState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.OnDoorStateChanged");
		
		UBP_InteractionState_Door_OneSided_C_OnDoorStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.BindToStateDelegates
	 * 		Flags  -> ()
	 */
	void UBP_InteractionState_Door_OneSided_C::BindToStateDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.BindToStateDelegates");
		
		UBP_InteractionState_Door_OneSided_C_BindToStateDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.CacheRequiredComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_Door_OneSided_C::CacheRequiredComponents(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.CacheRequiredComponents");
		
		UBP_InteractionState_Door_OneSided_C_CacheRequiredComponents_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InteractionState_Door_OneSided_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InteractionState_Door_OneSided_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C");
		return ptr;
	}

}


