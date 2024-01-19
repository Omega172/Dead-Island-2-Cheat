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
	 * 		Name   -> Function BP_EQSGenerator_ReturnContextLocations.BP_EQSGenerator_ReturnContextLocations_C.DoItemGeneration
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		TArray<struct FVector>                             ContextLocations                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_EQSGenerator_ReturnContextLocations_C::DoItemGeneration(TArray<struct FVector> ContextLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EQSGenerator_ReturnContextLocations.BP_EQSGenerator_ReturnContextLocations_C.DoItemGeneration");
		
		UBP_EQSGenerator_ReturnContextLocations_C_DoItemGeneration_Params params {};
		params.ContextLocations = ContextLocations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_EQSGenerator_ReturnContextLocations_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EQSGenerator_ReturnContextLocations_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EQSGenerator_ReturnContextLocations.BP_EQSGenerator_ReturnContextLocations_C");
		return ptr;
	}

}


