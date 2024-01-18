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
	 * 		Name   -> Function Discovery.DiscoverableComponent.RemoveDisableReason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscoverableComponent::RemoveDisableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discovery.DiscoverableComponent.RemoveDisableReason");
		
		UDiscoverableComponent_RemoveDisableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Discovery.DiscoverableComponent.OnDiscoveryChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDiscovered                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscoverableComponent::OnDiscoveryChanged(bool bDiscovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discovery.DiscoverableComponent.OnDiscoveryChanged");
		
		UDiscoverableComponent_OnDiscoveryChanged_Params params {};
		params.bDiscovered = bDiscovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Discovery.DiscoverableComponent.AddDisableReason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscoverableComponent::AddDisableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discovery.DiscoverableComponent.AddDisableReason");
		
		UDiscoverableComponent_AddDisableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscoverableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscoverableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Discovery.DiscoverableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscoveredObjectsPersistentDataCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscoveredObjectsPersistentDataCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Discovery.DiscoveredObjectsPersistentDataCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscoveryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscoveryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Discovery.DiscoveryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Discovery.DiscoveryManager.UnRegisterDiscoveryObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDiscoveryObject*                            DiscoveryObject                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscoveryManager::UnRegisterDiscoveryObject(class UDiscoveryObject* DiscoveryObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discovery.DiscoveryManager.UnRegisterDiscoveryObject");
		
		UDiscoveryManager_UnRegisterDiscoveryObject_Params params {};
		params.DiscoveryObject = DiscoveryObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Discovery.DiscoveryManager.RegisterDiscoveryObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDiscoveryObject*                            DiscoveryObject                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscoveryManager::RegisterDiscoveryObject(class UDiscoveryObject* DiscoveryObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discovery.DiscoveryManager.RegisterDiscoveryObject");
		
		UDiscoveryManager_RegisterDiscoveryObject_Params params {};
		params.DiscoveryObject = DiscoveryObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Discovery.DiscoveryManager.Get
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDiscoveryManager* UDiscoveryManager::Get(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discovery.DiscoveryManager.Get");
		
		UDiscoveryManager_Get_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscoveryManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscoveryManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Discovery.DiscoveryManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscoveryObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscoveryObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Discovery.DiscoveryObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscoveryDatabaseData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscoveryDatabaseData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Discovery.DiscoveryDatabaseData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscoveryObjectDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscoveryObjectDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Discovery.DiscoveryObjectDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscoveryType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscoveryType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Discovery.DiscoveryType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNoDiscoveryType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoDiscoveryType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Discovery.NoDiscoveryType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpatialDiscoveryType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpatialDiscoveryType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Discovery.SpatialDiscoveryType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialDiscoveryType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialDiscoveryType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Discovery.RadialDiscoveryType");
		return ptr;
	}

}


