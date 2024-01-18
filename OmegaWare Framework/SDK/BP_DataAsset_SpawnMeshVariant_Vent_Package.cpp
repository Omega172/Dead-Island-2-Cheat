﻿/**
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
	 * 		Name   -> Function BP_DataAsset_SpawnMeshVariant_Vent.BP_DataAsset_SpawnMeshVariant_Vent_C.GetErrorsToOutput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                Errors                                                     (Parm, OutParm)
	 */
	void UBP_DataAsset_SpawnMeshVariant_Vent_C::GetErrorsToOutput(TArray<class FText>* Errors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DataAsset_SpawnMeshVariant_Vent.BP_DataAsset_SpawnMeshVariant_Vent_C.GetErrorsToOutput");
		
		UBP_DataAsset_SpawnMeshVariant_Vent_C_GetErrorsToOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Errors != nullptr)
			*Errors = params.Errors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DataAsset_SpawnMeshVariant_Vent.BP_DataAsset_SpawnMeshVariant_Vent_C.IsValidInternal
	 * 		Flags  -> ()
	 */
	bool UBP_DataAsset_SpawnMeshVariant_Vent_C::IsValidInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DataAsset_SpawnMeshVariant_Vent.BP_DataAsset_SpawnMeshVariant_Vent_C.IsValidInternal");
		
		UBP_DataAsset_SpawnMeshVariant_Vent_C_IsValidInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DataAsset_SpawnMeshVariant_Vent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DataAsset_SpawnMeshVariant_Vent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DataAsset_SpawnMeshVariant_Vent.BP_DataAsset_SpawnMeshVariant_Vent_C");
		return ptr;
	}

}

