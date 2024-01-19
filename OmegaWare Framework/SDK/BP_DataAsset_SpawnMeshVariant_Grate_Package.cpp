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
	 * 		Name   -> Function BP_DataAsset_SpawnMeshVariant_Grate.BP_DataAsset_SpawnMeshVariant_Grate_C.GetErrorsToOutput
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		TArray<class FText>                                Errors                                                     (Parm, OutParm)
	 */
	void UBP_DataAsset_SpawnMeshVariant_Grate_C::GetErrorsToOutput(TArray<class FText>* Errors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DataAsset_SpawnMeshVariant_Grate.BP_DataAsset_SpawnMeshVariant_Grate_C.GetErrorsToOutput");
		
		UBP_DataAsset_SpawnMeshVariant_Grate_C_GetErrorsToOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Errors != nullptr)
			*Errors = params.Errors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_DataAsset_SpawnMeshVariant_Grate.BP_DataAsset_SpawnMeshVariant_Grate_C.IsValidInternal
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UBP_DataAsset_SpawnMeshVariant_Grate_C::IsValidInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DataAsset_SpawnMeshVariant_Grate.BP_DataAsset_SpawnMeshVariant_Grate_C.IsValidInternal");
		
		UBP_DataAsset_SpawnMeshVariant_Grate_C_IsValidInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DataAsset_SpawnMeshVariant_Grate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DataAsset_SpawnMeshVariant_Grate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DataAsset_SpawnMeshVariant_Grate.BP_DataAsset_SpawnMeshVariant_Grate_C");
		return ptr;
	}

}


