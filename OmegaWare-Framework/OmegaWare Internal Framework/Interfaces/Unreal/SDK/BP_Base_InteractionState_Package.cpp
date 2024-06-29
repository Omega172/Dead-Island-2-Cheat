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
	 * 		Name   -> Function BP_Base_InteractionState.BP_Base_InteractionState_C.GetCurrentState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bStateActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Base_InteractionState_C::GetCurrentState(bool* bStateActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState.BP_Base_InteractionState_C.GetCurrentState");
		
		UBP_Base_InteractionState_C_GetCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bStateActive != nullptr)
			*bStateActive = params.bStateActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState.BP_Base_InteractionState_C.CacheRequiredComponents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_C::CacheRequiredComponents(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState.BP_Base_InteractionState_C.CacheRequiredComponents");
		
		UBP_Base_InteractionState_C_CacheRequiredComponents_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState.BP_Base_InteractionState_C.UpdateInteractionState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsBlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Base_InteractionState_C::UpdateInteractionState(bool bIsBlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState.BP_Base_InteractionState_C.UpdateInteractionState");
		
		UBP_Base_InteractionState_C_UpdateInteractionState_Params params {};
		params.bIsBlocked = bIsBlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState.BP_Base_InteractionState_C.UnbindToStateDelegates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Base_InteractionState_C::UnbindToStateDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState.BP_Base_InteractionState_C.UnbindToStateDelegates");
		
		UBP_Base_InteractionState_C_UnbindToStateDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState.BP_Base_InteractionState_C.BindToStateDelegates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Base_InteractionState_C::BindToStateDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState.BP_Base_InteractionState_C.BindToStateDelegates");
		
		UBP_Base_InteractionState_C_BindToStateDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState.BP_Base_InteractionState_C.Initialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractiveComponent*                       InInteractiveComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_C::Initialize(class UInteractiveComponent* InInteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState.BP_Base_InteractionState_C.Initialize");
		
		UBP_Base_InteractionState_C_Initialize_Params params {};
		params.InInteractiveComponent = InInteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState.BP_Base_InteractionState_C.Uninitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_Base_InteractionState_C::Uninitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState.BP_Base_InteractionState_C.Uninitialize");
		
		UBP_Base_InteractionState_C_Uninitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState.BP_Base_InteractionState_C.ExecuteUbergraph_BP_Base_InteractionState
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_C::ExecuteUbergraph_BP_Base_InteractionState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState.BP_Base_InteractionState_C.ExecuteUbergraph_BP_Base_InteractionState");
		
		UBP_Base_InteractionState_C_ExecuteUbergraph_BP_Base_InteractionState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Base_InteractionState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Base_InteractionState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_InteractionState.BP_Base_InteractionState_C");
		return ptr;
	}

}


