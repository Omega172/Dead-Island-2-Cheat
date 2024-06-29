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
	 * 		Name   -> Function BP_StatusEffectParams_Slowed_Screamer.BP_StatusEffectParams_Slowed_Screamer_C.GetModifiers
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FSStatusEffectDebuffTypesAndValues>  StatusEffectsAndValues                                     (Parm, OutParm)
	 */
	void UBP_StatusEffectParams_Slowed_Screamer_C::GetModifiers(TArray<struct FSStatusEffectDebuffTypesAndValues>* StatusEffectsAndValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffectParams_Slowed_Screamer.BP_StatusEffectParams_Slowed_Screamer_C.GetModifiers");
		
		UBP_StatusEffectParams_Slowed_Screamer_C_GetModifiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatusEffectsAndValues != nullptr)
			*StatusEffectsAndValues = params.StatusEffectsAndValues;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_StatusEffectParams_Slowed_Screamer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_StatusEffectParams_Slowed_Screamer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StatusEffectParams_Slowed_Screamer.BP_StatusEffectParams_Slowed_Screamer_C");
		return ptr;
	}

}


