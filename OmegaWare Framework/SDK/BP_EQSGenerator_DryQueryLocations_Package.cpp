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
	 * 		Name   -> Function BP_EQSGenerator_DryQueryLocations.BP_EQSGenerator_DryQueryLocations_C.DoItemGeneration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             ContextLocations                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_EQSGenerator_DryQueryLocations_C::DoItemGeneration(TArray<struct FVector> ContextLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EQSGenerator_DryQueryLocations.BP_EQSGenerator_DryQueryLocations_C.DoItemGeneration");
		
		UBP_EQSGenerator_DryQueryLocations_C_DoItemGeneration_Params params {};
		params.ContextLocations = ContextLocations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_EQSGenerator_DryQueryLocations_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EQSGenerator_DryQueryLocations_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EQSGenerator_DryQueryLocations.BP_EQSGenerator_DryQueryLocations_C");
		return ptr;
	}

}


