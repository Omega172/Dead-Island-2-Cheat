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
	 * 		Name   -> Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.GetCurrentState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_Entitlement_C::GetCurrentState(bool* bStateActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.GetCurrentState");
		
		UBP_InteractionState_Entitlement_C_GetCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bStateActive != nullptr)
			*bStateActive = params.bStateActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.UnbindToStateDelegates
	 * 		Flags  -> ()
	 */
	void UBP_InteractionState_Entitlement_C::UnbindToStateDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.UnbindToStateDelegates");
		
		UBP_InteractionState_Entitlement_C_UnbindToStateDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.UpdateText
	 * 		Flags  -> ()
	 */
	void UBP_InteractionState_Entitlement_C::UpdateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.UpdateText");
		
		UBP_InteractionState_Entitlement_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.UpdateInteractionState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsBlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_Entitlement_C::UpdateInteractionState(bool bIsBlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.UpdateInteractionState");
		
		UBP_InteractionState_Entitlement_C_UpdateInteractionState_Params params {};
		params.bIsBlocked = bIsBlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.OnEntitlementStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHasAllRequiredEntitlements                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_Entitlement_C::OnEntitlementStateChanged(bool bHasAllRequiredEntitlements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.OnEntitlementStateChanged");
		
		UBP_InteractionState_Entitlement_C_OnEntitlementStateChanged_Params params {};
		params.bHasAllRequiredEntitlements = bHasAllRequiredEntitlements;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.BindToStateDelegates
	 * 		Flags  -> ()
	 */
	void UBP_InteractionState_Entitlement_C::BindToStateDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.BindToStateDelegates");
		
		UBP_InteractionState_Entitlement_C_BindToStateDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.CacheRequiredComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_Entitlement_C::CacheRequiredComponents(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.CacheRequiredComponents");
		
		UBP_InteractionState_Entitlement_C_CacheRequiredComponents_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.OnEnterState
	 * 		Flags  -> ()
	 */
	void UBP_InteractionState_Entitlement_C::OnEnterState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.OnEnterState");
		
		UBP_InteractionState_Entitlement_C_OnEnterState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.ExecuteUbergraph_BP_InteractionState_Entitlement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_Entitlement_C::ExecuteUbergraph_BP_InteractionState_Entitlement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.ExecuteUbergraph_BP_InteractionState_Entitlement");
		
		UBP_InteractionState_Entitlement_C_ExecuteUbergraph_BP_InteractionState_Entitlement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InteractionState_Entitlement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InteractionState_Entitlement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C");
		return ptr;
	}

}


