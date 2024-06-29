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
	 * 		RVA    -> 0x00E1E380
	 * 		Name   -> Function Vision.ObservableComponent.UnregisterFromVisionManager
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UObservableComponent::UnregisterFromVisionManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vision.ObservableComponent.UnregisterFromVisionManager");
		
		UObservableComponent_UnregisterFromVisionManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E1E290
	 * 		Name   -> Function Vision.ObservableComponent.RegisterWithVisionManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UObservableComponent::RegisterWithVisionManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vision.ObservableComponent.RegisterWithVisionManager");
		
		UObservableComponent_RegisterWithVisionManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E1E250
	 * 		Name   -> Function Vision.ObservableComponent.IsRegisteredWithVisionManager
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UObservableComponent::IsRegisteredWithVisionManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vision.ObservableComponent.IsRegisteredWithVisionManager");
		
		UObservableComponent_IsRegisteredWithVisionManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E1E120
	 * 		Name   -> Function Vision.ObservableComponent.CanBeSeenBy
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObserverComponent*                          Observer                                                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UObservableComponent::CanBeSeenBy(class UObserverComponent* Observer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vision.ObservableComponent.CanBeSeenBy");
		
		UObservableComponent_CanBeSeenBy_Params params {};
		params.Observer = Observer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObservableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObservableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Vision.ObservableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E1E2B0
	 * 		Name   -> Function Vision.ObserverComponent.SeenRecently
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObservableComponent*                        Observable                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ThresholdTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UObserverComponent::SeenRecently(class UObservableComponent* Observable, float ThresholdTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vision.ObserverComponent.SeenRecently");
		
		UObserverComponent_SeenRecently_Params params {};
		params.Observable = Observable;
		params.ThresholdTime = ThresholdTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E1E1C0
	 * 		Name   -> Function Vision.ObserverComponent.CanSee
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObservableComponent*                        Observable                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UObserverComponent::CanSee(class UObservableComponent* Observable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vision.ObserverComponent.CanSee");
		
		UObserverComponent_CanSee_Params params {};
		params.Observable = Observable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObserverComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObserverComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Vision.ObserverComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULineTracerPriorityData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULineTracerPriorityData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Vision.LineTracerPriorityData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVisionManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVisionManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Vision.VisionManager");
		return ptr;
	}

}


