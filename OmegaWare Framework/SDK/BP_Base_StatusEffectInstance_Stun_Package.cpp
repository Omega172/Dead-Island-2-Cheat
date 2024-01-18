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
	 * 		Name   -> Function BP_Base_StatusEffectInstance_Stun.BP_Base_StatusEffectInstance_Stun_C.OnCounterable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Counterable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Base_StatusEffectInstance_Stun_C::OnCounterable(bool Counterable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance_Stun.BP_Base_StatusEffectInstance_Stun_C.OnCounterable");
		
		UBP_Base_StatusEffectInstance_Stun_C_OnCounterable_Params params {};
		params.Counterable = Counterable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffectInstance_Stun.BP_Base_StatusEffectInstance_Stun_C.SetupActionListeners
	 * 		Flags  -> ()
	 */
	void UBP_Base_StatusEffectInstance_Stun_C::SetupActionListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance_Stun.BP_Base_StatusEffectInstance_Stun_C.SetupActionListeners");
		
		UBP_Base_StatusEffectInstance_Stun_C_SetupActionListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffectInstance_Stun.BP_Base_StatusEffectInstance_Stun_C.ExecuteUbergraph_BP_Base_StatusEffectInstance_Stun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffectInstance_Stun_C::ExecuteUbergraph_BP_Base_StatusEffectInstance_Stun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance_Stun.BP_Base_StatusEffectInstance_Stun_C.ExecuteUbergraph_BP_Base_StatusEffectInstance_Stun");
		
		UBP_Base_StatusEffectInstance_Stun_C_ExecuteUbergraph_BP_Base_StatusEffectInstance_Stun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Base_StatusEffectInstance_Stun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Base_StatusEffectInstance_Stun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_StatusEffectInstance_Stun.BP_Base_StatusEffectInstance_Stun_C");
		return ptr;
	}

}


