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
	 * 		Name   -> Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.GetCurrentState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_Blocked_C::GetCurrentState(bool* bStateActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.GetCurrentState");
		
		UBP_InteractionState_Blocked_C_GetCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bStateActive != nullptr)
			*bStateActive = params.bStateActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.UnbindToStateDelegates
	 * 		Flags  -> ()
	 */
	void UBP_InteractionState_Blocked_C::UnbindToStateDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.UnbindToStateDelegates");
		
		UBP_InteractionState_Blocked_C_UnbindToStateDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.CacheRequiredComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_Blocked_C::CacheRequiredComponents(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.CacheRequiredComponents");
		
		UBP_InteractionState_Blocked_C_CacheRequiredComponents_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.BindToStateDelegates
	 * 		Flags  -> ()
	 */
	void UBP_InteractionState_Blocked_C::BindToStateDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.BindToStateDelegates");
		
		UBP_InteractionState_Blocked_C_BindToStateDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.OnEnterState
	 * 		Flags  -> ()
	 */
	void UBP_InteractionState_Blocked_C::OnEnterState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.OnEnterState");
		
		UBP_InteractionState_Blocked_C_OnEnterState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.OnLeaveState
	 * 		Flags  -> ()
	 */
	void UBP_InteractionState_Blocked_C::OnLeaveState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.OnLeaveState");
		
		UBP_InteractionState_Blocked_C_OnLeaveState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.ExecuteUbergraph_BP_InteractionState_Blocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_Blocked_C::ExecuteUbergraph_BP_InteractionState_Blocked(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.ExecuteUbergraph_BP_InteractionState_Blocked");
		
		UBP_InteractionState_Blocked_C_ExecuteUbergraph_BP_InteractionState_Blocked_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InteractionState_Blocked_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InteractionState_Blocked_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractionState_Blocked.BP_InteractionState_Blocked_C");
		return ptr;
	}

}


