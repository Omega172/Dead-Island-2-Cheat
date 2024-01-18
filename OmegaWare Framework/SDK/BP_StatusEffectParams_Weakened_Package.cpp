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
	 * 		Name   -> Function BP_StatusEffectParams_Weakened.BP_StatusEffectParams_Weakened_C.GetModifiers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSStatusEffectDebuffTypesAndValues>  StatusEffectsAndValues                                     (Parm, OutParm)
	 */
	void UBP_StatusEffectParams_Weakened_C::GetModifiers(TArray<struct FSStatusEffectDebuffTypesAndValues>* StatusEffectsAndValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffectParams_Weakened.BP_StatusEffectParams_Weakened_C.GetModifiers");
		
		UBP_StatusEffectParams_Weakened_C_GetModifiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatusEffectsAndValues != nullptr)
			*StatusEffectsAndValues = params.StatusEffectsAndValues;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_StatusEffectParams_Weakened_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_StatusEffectParams_Weakened_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StatusEffectParams_Weakened.BP_StatusEffectParams_Weakened_C");
		return ptr;
	}

}


