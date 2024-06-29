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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTremorDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTremorDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tremor.TremorDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CB9700
	 * 		Name   -> Function Tremor.TremorManager.StopTremor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGuid                                       ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATremorManager::StopTremor(struct FGuid* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tremor.TremorManager.StopTremor");
		
		ATremorManager_StopTremor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CB9660
	 * 		Name   -> Function Tremor.TremorManager.RequestTremor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UTremorDataAsset*                            DataAssetToUse                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid ATremorManager::RequestTremor(class UTremorDataAsset* DataAssetToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tremor.TremorManager.RequestTremor");
		
		ATremorManager_RequestTremor_Params params {};
		params.DataAssetToUse = DataAssetToUse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CB9640
	 * 		Name   -> Function Tremor.TremorManager.OnRep_ActiveTremorDataAsset
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ATremorManager::OnRep_ActiveTremorDataAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tremor.TremorManager.OnRep_ActiveTremorDataAsset");
		
		ATremorManager_OnRep_ActiveTremorDataAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATremorManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATremorManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tremor.TremorManager");
		return ptr;
	}

}


