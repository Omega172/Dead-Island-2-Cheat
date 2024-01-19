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
	 * 		Name   -> Function BP_AutoplayDataExtractionInterface.BP_AutoplayDataExtractionInterface_C.GetData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Data                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_AutoplayDataExtractionInterface_C::GetData(class FString* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AutoplayDataExtractionInterface.BP_AutoplayDataExtractionInterface_C.GetData");
		
		UBP_AutoplayDataExtractionInterface_C_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AutoplayDataExtractionInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AutoplayDataExtractionInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AutoplayDataExtractionInterface.BP_AutoplayDataExtractionInterface_C");
		return ptr;
	}

}


