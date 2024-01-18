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
	 * 		Name   -> PredefinedFunction USpawnableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpawnHandler.SpawnableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpawnHandlerManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpawnHandlerManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpawnHandler.SpawnHandlerManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpawnHandler.SpawnHandlerLibrary.RequestSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSpawnParams                                SpawnParams                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SpawnCallback                                              (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USpawnHandlerLibrary::RequestSpawn(class UObject* WorldContext, const struct FSpawnParams& SpawnParams, const class FScriptDelegate& SpawnCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnHandler.SpawnHandlerLibrary.RequestSpawn");
		
		USpawnHandlerLibrary_RequestSpawn_Params params {};
		params.WorldContext = WorldContext;
		params.SpawnParams = SpawnParams;
		params.SpawnCallback = SpawnCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpawnHandler.SpawnHandlerLibrary.RequestBatchSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBatchSpawnRequestItem>              SpawnsAndParams                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SpawnCallback                                              (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USpawnHandlerLibrary::RequestBatchSpawn(class UObject* WorldContext, TArray<struct FBatchSpawnRequestItem> SpawnsAndParams, const class FScriptDelegate& SpawnCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnHandler.SpawnHandlerLibrary.RequestBatchSpawn");
		
		USpawnHandlerLibrary_RequestBatchSpawn_Params params {};
		params.WorldContext = WorldContext;
		params.SpawnsAndParams = SpawnsAndParams;
		params.SpawnCallback = SpawnCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnHandlerLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnHandlerLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpawnHandler.SpawnHandlerLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpawnHandler.SpawnUserData");
		return ptr;
	}

}


