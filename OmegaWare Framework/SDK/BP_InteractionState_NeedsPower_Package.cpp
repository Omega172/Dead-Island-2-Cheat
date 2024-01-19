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
	 * 		Name   -> Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.GetCurrentState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bStateActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_NeedsPower_C::GetCurrentState(bool* bStateActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.GetCurrentState");
		
		UBP_InteractionState_NeedsPower_C_GetCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bStateActive != nullptr)
			*bStateActive = params.bStateActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.CacheRequiredComponents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_NeedsPower_C::CacheRequiredComponents(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.CacheRequiredComponents");
		
		UBP_InteractionState_NeedsPower_C_CacheRequiredComponents_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.UnbindToStateDelegates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InteractionState_NeedsPower_C::UnbindToStateDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.UnbindToStateDelegates");
		
		UBP_InteractionState_NeedsPower_C_UnbindToStateDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.BindToStateDelegates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InteractionState_NeedsPower_C::BindToStateDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.BindToStateDelegates");
		
		UBP_InteractionState_NeedsPower_C_BindToStateDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.UpdatePowerState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHasPower                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_NeedsPower_C::UpdatePowerState(bool bHasPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.UpdatePowerState");
		
		UBP_InteractionState_NeedsPower_C_UpdatePowerState_Params params {};
		params.bHasPower = bHasPower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InteractionState_NeedsPower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InteractionState_NeedsPower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C");
		return ptr;
	}

}


