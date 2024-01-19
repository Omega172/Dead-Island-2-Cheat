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
	 * 		Name   -> Function BP_Base_StatusEffectParams_ApplyDebuff.BP_Base_StatusEffectParams_ApplyDebuff_C.GetModifiers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FSStatusEffectDebuffTypesAndValues>  StatusEffectsAndValues                                     (Parm, OutParm)
	 */
	void UBP_Base_StatusEffectParams_ApplyDebuff_C::GetModifiers(TArray<struct FSStatusEffectDebuffTypesAndValues>* StatusEffectsAndValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectParams_ApplyDebuff.BP_Base_StatusEffectParams_ApplyDebuff_C.GetModifiers");
		
		UBP_Base_StatusEffectParams_ApplyDebuff_C_GetModifiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatusEffectsAndValues != nullptr)
			*StatusEffectsAndValues = params.StatusEffectsAndValues;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Base_StatusEffectParams_ApplyDebuff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Base_StatusEffectParams_ApplyDebuff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_StatusEffectParams_ApplyDebuff.BP_Base_StatusEffectParams_ApplyDebuff_C");
		return ptr;
	}

}


