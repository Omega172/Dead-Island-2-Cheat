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
	 * 		Name   -> Function BP_CardGenerator_Base_Latent.BP_CardGenerator_Base_Latent_C.OnInitialise
	 * 		Flags  -> ()
	 */
	void UBP_CardGenerator_Base_Latent_C::OnInitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Base_Latent.BP_CardGenerator_Base_Latent_C.OnInitialise");
		
		UBP_CardGenerator_Base_Latent_C_OnInitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CardGenerator_Base_Latent.BP_CardGenerator_Base_Latent_C.ExecuteUbergraph_BP_CardGenerator_Base_Latent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CardGenerator_Base_Latent_C::ExecuteUbergraph_BP_CardGenerator_Base_Latent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Base_Latent.BP_CardGenerator_Base_Latent_C.ExecuteUbergraph_BP_CardGenerator_Base_Latent");
		
		UBP_CardGenerator_Base_Latent_C_ExecuteUbergraph_BP_CardGenerator_Base_Latent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CardGenerator_Base_Latent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CardGenerator_Base_Latent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CardGenerator_Base_Latent.BP_CardGenerator_Base_Latent_C");
		return ptr;
	}

}


