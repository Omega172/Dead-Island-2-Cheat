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
	 * 		Name   -> PredefinedFunction USectorBreadcrumbTrail.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USectorBreadcrumbTrail::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SectorSystem.SectorBreadcrumbTrail");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USectorData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USectorData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SectorSystem.SectorData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USectorDatabaseData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USectorDatabaseData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SectorSystem.SectorDatabaseData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASectorGateway.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASectorGateway::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SectorSystem.SectorGateway");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CED890
	 * 		Name   -> Function SectorSystem.SectorGatewayComponent.RemoveDisableReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USectorGatewayComponent::RemoveDisableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorSystem.SectorGatewayComponent.RemoveDisableReason");
		
		USectorGatewayComponent_RemoveDisableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CED860
	 * 		Name   -> Function SectorSystem.SectorGatewayComponent.IsDisabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USectorGatewayComponent::IsDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorSystem.SectorGatewayComponent.IsDisabled");
		
		USectorGatewayComponent_IsDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CED840
	 * 		Name   -> Function SectorSystem.SectorGatewayComponent.InternalOnDisableReasonsCleared
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USectorGatewayComponent::InternalOnDisableReasonsCleared()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorSystem.SectorGatewayComponent.InternalOnDisableReasonsCleared");
		
		USectorGatewayComponent_InternalOnDisableReasonsCleared_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CED820
	 * 		Name   -> Function SectorSystem.SectorGatewayComponent.InternalOnDisableReasonsActivated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USectorGatewayComponent::InternalOnDisableReasonsActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorSystem.SectorGatewayComponent.InternalOnDisableReasonsActivated");
		
		USectorGatewayComponent_InternalOnDisableReasonsActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CED720
	 * 		Name   -> Function SectorSystem.SectorGatewayComponent.AddDisableReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USectorGatewayComponent::AddDisableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorSystem.SectorGatewayComponent.AddDisableReason");
		
		USectorGatewayComponent_AddDisableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USectorGatewayComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USectorGatewayComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SectorSystem.SectorGatewayComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USectorGroupingArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USectorGroupingArea::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SectorSystem.SectorGroupingArea");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CED7A0
	 * 		Name   -> Function SectorSystem.SectorManager.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ASectorManager* ASectorManager::STATIC_Get(class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorSystem.SectorManager.Get");
		
		ASectorManager_Get_Params params {};
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASectorManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASectorManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SectorSystem.SectorManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USectorTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USectorTrackerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SectorSystem.SectorTrackerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USectorTrackerPersistentState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USectorTrackerPersistentState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SectorSystem.SectorTrackerPersistentState");
		return ptr;
	}

}


