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
	 * 		RVA    -> 0x03D5D2F0
	 * 		Name   -> Function DSCore.ManagerCollection.K2_GetManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UScriptStruct*                               Defintion                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UManagerCollection::K2_GetManager(class UScriptStruct* Defintion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSCore.ManagerCollection.K2_GetManager");
		
		UManagerCollection_K2_GetManager_Params params {};
		params.Defintion = Defintion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UManagerCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UManagerCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSCore.ManagerCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UManagerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UManagerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSCore.ManagerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UManagersDatabase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UManagersDatabase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSCore.ManagersDatabase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D5E970
	 * 		Name   -> Function DSCore.ManagerInitialisation.Initialise
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UManagerCollection*                          Collection                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UManagerInitialisation::Initialise(class UManagerCollection* Collection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSCore.ManagerInitialisation.Initialise");
		
		UManagerInitialisation_Initialise_Params params {};
		params.Collection = Collection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UManagerInitialisation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UManagerInitialisation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSCore.ManagerInitialisation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeSteppable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeSteppable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSCore.TimeSteppable");
		return ptr;
	}

}


