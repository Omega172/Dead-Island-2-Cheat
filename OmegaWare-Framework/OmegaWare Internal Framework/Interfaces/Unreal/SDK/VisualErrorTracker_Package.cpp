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
	 * 		Name   -> PredefinedFunction UVisualErrorSeverityDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualErrorSeverityDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VisualErrorTracker.VisualErrorSeverityDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E0B4A0
	 * 		Name   -> Function VisualErrorTracker.VisualErrorTrackerBlueprintLibrary.ContextualLog
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ContextualActor                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDSLogChannelHandle*                         LoggerHandle                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SeverityName                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Log                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualErrorTrackerBlueprintLibrary::STATIC_ContextualLog(class AActor* ContextualActor, class UDSLogChannelHandle* LoggerHandle, const class FName& SeverityName, const class FString& Log)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VisualErrorTracker.VisualErrorTrackerBlueprintLibrary.ContextualLog");
		
		UVisualErrorTrackerBlueprintLibrary_ContextualLog_Params params {};
		params.ContextualActor = ContextualActor;
		params.LoggerHandle = LoggerHandle;
		params.SeverityName = SeverityName;
		params.Log = Log;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualErrorTrackerBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualErrorTrackerBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VisualErrorTracker.VisualErrorTrackerBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualErrorTrackerDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualErrorTrackerDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VisualErrorTracker.VisualErrorTrackerDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualErrorTrackerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualErrorTrackerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VisualErrorTracker.VisualErrorTrackerWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVisualErrorTrackingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVisualErrorTrackingManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VisualErrorTracker.VisualErrorTrackingManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E0B5F0
	 * 		Name   -> Function VisualErrorTracker.VisualErrorTrackerManagerImpl.OnActorDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualErrorTrackerManagerImpl::OnActorDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VisualErrorTracker.VisualErrorTrackerManagerImpl.OnActorDestroyed");
		
		UVisualErrorTrackerManagerImpl_OnActorDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualErrorTrackerManagerImpl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualErrorTrackerManagerImpl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VisualErrorTracker.VisualErrorTrackerManagerImpl");
		return ptr;
	}

}


