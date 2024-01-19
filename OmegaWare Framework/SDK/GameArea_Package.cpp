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
	 * 		Name   -> PredefinedFunction UGameAreaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameAreaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameArea.GameAreaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscoveryAreaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscoveryAreaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameArea.DiscoveryAreaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD99A0
	 * 		Name   -> Function GameArea.GameAreaComponent.SetEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameAreaComponent::SetEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameArea.GameAreaComponent.SetEnabled");
		
		UGameAreaComponent_SetEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9980
	 * 		Name   -> Function GameArea.GameAreaComponent.OnRep_GameAreaState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGameAreaComponent::OnRep_GameAreaState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameArea.GameAreaComponent.OnRep_GameAreaState");
		
		UGameAreaComponent_OnRep_GameAreaState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameAreaComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameAreaComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameArea.GameAreaComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameAreaManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameAreaManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameArea.GameAreaManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseAreaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseAreaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameArea.KnowledgeBaseAreaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AKnowledgeBaseAreaManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKnowledgeBaseAreaManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameArea.KnowledgeBaseAreaManager");
		return ptr;
	}

}


