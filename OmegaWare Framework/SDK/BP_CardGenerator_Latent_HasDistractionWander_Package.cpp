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
	 * 		Name   -> Function BP_CardGenerator_Latent_HasDistractionWander.BP_CardGenerator_Latent_HasDistractionWander_C.GetBlueprintDescription
	 * 		Flags  -> ()
	 */
	class FString UBP_CardGenerator_Latent_HasDistractionWander_C::GetBlueprintDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_HasDistractionWander.BP_CardGenerator_Latent_HasDistractionWander_C.GetBlueprintDescription");
		
		UBP_CardGenerator_Latent_HasDistractionWander_C_GetBlueprintDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CardGenerator_Latent_HasDistractionWander.BP_CardGenerator_Latent_HasDistractionWander_C.OnInitialise
	 * 		Flags  -> ()
	 */
	void UBP_CardGenerator_Latent_HasDistractionWander_C::OnInitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_HasDistractionWander.BP_CardGenerator_Latent_HasDistractionWander_C.OnInitialise");
		
		UBP_CardGenerator_Latent_HasDistractionWander_C_OnInitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CardGenerator_Latent_HasDistractionWander.BP_CardGenerator_Latent_HasDistractionWander_C.OnUninitialise
	 * 		Flags  -> ()
	 */
	void UBP_CardGenerator_Latent_HasDistractionWander_C::OnUninitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_HasDistractionWander.BP_CardGenerator_Latent_HasDistractionWander_C.OnUninitialise");
		
		UBP_CardGenerator_Latent_HasDistractionWander_C_OnUninitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CardGenerator_Latent_HasDistractionWander.BP_CardGenerator_Latent_HasDistractionWander_C.OnDistractionWanderChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasValidDistractionWander                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CardGenerator_Latent_HasDistractionWander_C::OnDistractionWanderChanged(bool HasValidDistractionWander)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_HasDistractionWander.BP_CardGenerator_Latent_HasDistractionWander_C.OnDistractionWanderChanged");
		
		UBP_CardGenerator_Latent_HasDistractionWander_C_OnDistractionWanderChanged_Params params {};
		params.HasValidDistractionWander = HasValidDistractionWander;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CardGenerator_Latent_HasDistractionWander.BP_CardGenerator_Latent_HasDistractionWander_C.ExecuteUbergraph_BP_CardGenerator_Latent_HasDistractionWander
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CardGenerator_Latent_HasDistractionWander_C::ExecuteUbergraph_BP_CardGenerator_Latent_HasDistractionWander(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_HasDistractionWander.BP_CardGenerator_Latent_HasDistractionWander_C.ExecuteUbergraph_BP_CardGenerator_Latent_HasDistractionWander");
		
		UBP_CardGenerator_Latent_HasDistractionWander_C_ExecuteUbergraph_BP_CardGenerator_Latent_HasDistractionWander_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CardGenerator_Latent_HasDistractionWander_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CardGenerator_Latent_HasDistractionWander_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CardGenerator_Latent_HasDistractionWander.BP_CardGenerator_Latent_HasDistractionWander_C");
		return ptr;
	}

}


