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
	 * 		RVA    -> 0x00DDFAE0
	 * 		Name   -> Function ProductionStatusTools.ProductionStatusComponent.OpenFeatureWiki
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UProductionStatusComponent::OpenFeatureWiki()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProductionStatusTools.ProductionStatusComponent.OpenFeatureWiki");
		
		UProductionStatusComponent_OpenFeatureWiki_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProductionStatusComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProductionStatusComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProductionStatusTools.ProductionStatusComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProductionStatusDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProductionStatusDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProductionStatusTools.ProductionStatusDataAsset");
		return ptr;
	}

}


