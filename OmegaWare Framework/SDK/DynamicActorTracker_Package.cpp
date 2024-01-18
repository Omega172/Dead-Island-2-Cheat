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
	 * 		Name   -> Function DynamicActorTracker.DynamicActorTrackingManager.WriteToCSV
	 * 		Flags  -> ()
	 */
	void ADynamicActorTrackingManager::WriteToCSV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicActorTracker.DynamicActorTrackingManager.WriteToCSV");
		
		ADynamicActorTrackingManager_WriteToCSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicActorTracker.DynamicActorTrackingManager.TakeWorldSnapshot
	 * 		Flags  -> ()
	 */
	void ADynamicActorTrackingManager::TakeWorldSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicActorTracker.DynamicActorTrackingManager.TakeWorldSnapshot");
		
		ADynamicActorTrackingManager_TakeWorldSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADynamicActorTrackingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADynamicActorTrackingManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DynamicActorTracker.DynamicActorTrackingManager");
		return ptr;
	}

}


