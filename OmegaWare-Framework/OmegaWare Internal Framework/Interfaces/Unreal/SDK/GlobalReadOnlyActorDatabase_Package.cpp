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
	 * 		Name   -> PredefinedFunction UGlobalActorDatabaseData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalActorDatabaseData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlobalReadOnlyActorDatabase.GlobalActorDatabaseData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalActorDatabaseCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalActorDatabaseCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlobalReadOnlyActorDatabase.GlobalActorDatabaseCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalActorDatabaseDataContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalActorDatabaseDataContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlobalReadOnlyActorDatabase.GlobalActorDatabaseDataContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalActorDatabaseDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalActorDatabaseDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlobalReadOnlyActorDatabase.GlobalActorDatabaseDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B96EB0
	 * 		Name   -> Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetGlobalReadOnlyActorDatabaseManager
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AGlobalReadOnlyActorDatabaseRuntimeManager* AGlobalReadOnlyActorDatabaseRuntimeManager::STATIC_GetGlobalReadOnlyActorDatabaseManager(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetGlobalReadOnlyActorDatabaseManager");
		
		AGlobalReadOnlyActorDatabaseRuntimeManager_GetGlobalReadOnlyActorDatabaseManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B96D60
	 * 		Name   -> Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetAllActorDataInLevel_BP
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      InMapPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<struct FSoftObjectPath, class UGlobalActorDatabaseDataContainer*> OutActorData                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool AGlobalReadOnlyActorDatabaseRuntimeManager::GetAllActorDataInLevel_BP(const class FString& InMapPath, TMap<struct FSoftObjectPath, class UGlobalActorDatabaseDataContainer*>* OutActorData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetAllActorDataInLevel_BP");
		
		AGlobalReadOnlyActorDatabaseRuntimeManager_GetAllActorDataInLevel_BP_Params params {};
		params.InMapPath = InMapPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActorData != nullptr)
			*OutActorData = params.OutActorData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B96990
	 * 		Name   -> Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetActorDataOfTypeInLevel_BP
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      InMapURL                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<struct FSoftObjectPath, class UGlobalActorDatabaseData*> OutActorData                                               (ConstParm, Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool AGlobalReadOnlyActorDatabaseRuntimeManager::GetActorDataOfTypeInLevel_BP(const class FString& InMapURL, class UClass* InClass, TMap<struct FSoftObjectPath, class UGlobalActorDatabaseData*> OutActorData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetActorDataOfTypeInLevel_BP");
		
		AGlobalReadOnlyActorDatabaseRuntimeManager_GetActorDataOfTypeInLevel_BP_Params params {};
		params.InMapURL = InMapURL;
		params.InClass = InClass;
		params.OutActorData = OutActorData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B96B10
	 * 		Name   -> Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetActorDataOfType_BP
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<struct FSoftObjectPath, class UGlobalActorDatabaseData*> OutActorData                                               (ConstParm, Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool AGlobalReadOnlyActorDatabaseRuntimeManager::GetActorDataOfType_BP(class UClass* InClass, TMap<struct FSoftObjectPath, class UGlobalActorDatabaseData*> OutActorData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetActorDataOfType_BP");
		
		AGlobalReadOnlyActorDatabaseRuntimeManager_GetActorDataOfType_BP_Params params {};
		params.InClass = InClass;
		params.OutActorData = OutActorData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B96C60
	 * 		Name   -> Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetActorData_BP
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGlobalActorDatabaseDataContainer* AGlobalReadOnlyActorDatabaseRuntimeManager::GetActorData_BP(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetActorData_BP");
		
		AGlobalReadOnlyActorDatabaseRuntimeManager_GetActorData_BP_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGlobalReadOnlyActorDatabaseRuntimeManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGlobalReadOnlyActorDatabaseRuntimeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager");
		return ptr;
	}

}


