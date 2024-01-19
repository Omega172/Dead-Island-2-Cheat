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
	 * 		RVA    -> 0x00B974B0
	 * 		Name   -> Function ValidatedDataAsset.BaseValidatedDataAsset.IsValidInternal
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent, Const)
	 */
	bool UBaseValidatedDataAsset::IsValidInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ValidatedDataAsset.BaseValidatedDataAsset.IsValidInternal");
		
		UBaseValidatedDataAsset_IsValidInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B973A0
	 * 		Name   -> Function ValidatedDataAsset.BaseValidatedDataAsset.GetErrorsToOutput
	 * 		Flags  -> (Native, Event, Protected, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		TArray<class FText>                                Errors                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UBaseValidatedDataAsset::GetErrorsToOutput(TArray<class FText>* Errors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ValidatedDataAsset.BaseValidatedDataAsset.GetErrorsToOutput");
		
		UBaseValidatedDataAsset_GetErrorsToOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Errors != nullptr)
			*Errors = params.Errors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseValidatedDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseValidatedDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ValidatedDataAsset.BaseValidatedDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UValidatedDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UValidatedDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ValidatedDataAsset.ValidatedDataAsset");
		return ptr;
	}

}


