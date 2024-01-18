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
	 * 		Name   -> Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.GetBlueprintDescription
	 * 		Flags  -> ()
	 */
	class FString UBP_CardGenerator_Latent_HasCombatTarget_C::GetBlueprintDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.GetBlueprintDescription");
		
		UBP_CardGenerator_Latent_HasCombatTarget_C_GetBlueprintDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.OnInitialise
	 * 		Flags  -> ()
	 */
	void UBP_CardGenerator_Latent_HasCombatTarget_C::OnInitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.OnInitialise");
		
		UBP_CardGenerator_Latent_HasCombatTarget_C_OnInitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.OnCombatTargetChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CardGenerator_Latent_HasCombatTarget_C::OnCombatTargetChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.OnCombatTargetChanged");
		
		UBP_CardGenerator_Latent_HasCombatTarget_C_OnCombatTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.OnUninitialise
	 * 		Flags  -> ()
	 */
	void UBP_CardGenerator_Latent_HasCombatTarget_C::OnUninitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.OnUninitialise");
		
		UBP_CardGenerator_Latent_HasCombatTarget_C_OnUninitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.ExecuteUbergraph_BP_CardGenerator_Latent_HasCombatTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CardGenerator_Latent_HasCombatTarget_C::ExecuteUbergraph_BP_CardGenerator_Latent_HasCombatTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.ExecuteUbergraph_BP_CardGenerator_Latent_HasCombatTarget");
		
		UBP_CardGenerator_Latent_HasCombatTarget_C_ExecuteUbergraph_BP_CardGenerator_Latent_HasCombatTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CardGenerator_Latent_HasCombatTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CardGenerator_Latent_HasCombatTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C");
		return ptr;
	}

}


