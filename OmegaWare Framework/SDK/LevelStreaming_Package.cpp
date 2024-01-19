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
	 * 		Name   -> PredefinedFunction ALevelStreamingActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALevelStreamingActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelStreaming.LevelStreamingActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> DelegateFunction LevelStreaming.LevelStreamingComponent.StreamingSetEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelStreamingComponent::StreamingSetEvent__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LevelStreaming.LevelStreamingComponent.StreamingSetEvent__DelegateSignature");
		
		ULevelStreamingComponent_StreamingSetEvent__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FA4C40
	 * 		Name   -> Function LevelStreaming.LevelStreamingComponent.SetStreamingEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEnabledState                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelStreamingComponent::SetStreamingEnabled(EEnabledState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreaming.LevelStreamingComponent.SetStreamingEnabled");
		
		ULevelStreamingComponent_SetStreamingEnabled_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FA4C20
	 * 		Name   -> Function LevelStreaming.LevelStreamingComponent.OnRep_LevelStreamingState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULevelStreamingComponent::OnRep_LevelStreamingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreaming.LevelStreamingComponent.OnRep_LevelStreamingState");
		
		ULevelStreamingComponent_OnRep_LevelStreamingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FA4B70
	 * 		Name   -> Function LevelStreaming.LevelStreamingComponent.AreAllLevelsUnloaded
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ULevelStreamingComponent::AreAllLevelsUnloaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreaming.LevelStreamingComponent.AreAllLevelsUnloaded");
		
		ULevelStreamingComponent_AreAllLevelsUnloaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FA4B40
	 * 		Name   -> Function LevelStreaming.LevelStreamingComponent.AreAllLevelsShown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ULevelStreamingComponent::AreAllLevelsShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreaming.LevelStreamingComponent.AreAllLevelsShown");
		
		ULevelStreamingComponent_AreAllLevelsShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FA4B10
	 * 		Name   -> Function LevelStreaming.LevelStreamingComponent.AreAllLevelsLoaded
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ULevelStreamingComponent::AreAllLevelsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreaming.LevelStreamingComponent.AreAllLevelsLoaded");
		
		ULevelStreamingComponent_AreAllLevelsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> DelegateFunction LevelStreaming.LevelStreamingComponent.AllLevelsEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void ULevelStreamingComponent::AllLevelsEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LevelStreaming.LevelStreamingComponent.AllLevelsEvent__DelegateSignature");
		
		ULevelStreamingComponent_AllLevelsEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelStreamingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelStreamingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelStreaming.LevelStreamingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelStreamingEditor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelStreamingEditor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelStreaming.LevelStreamingEditor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelStreamingRuntime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelStreamingRuntime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelStreaming.LevelStreamingRuntime");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FA4C00
	 * 		Name   -> Function LevelStreaming.LevelStreamingElement.NotifyLevelUnloaded
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ULevelStreamingElement::NotifyLevelUnloaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreaming.LevelStreamingElement.NotifyLevelUnloaded");
		
		ULevelStreamingElement_NotifyLevelUnloaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FA4BE0
	 * 		Name   -> Function LevelStreaming.LevelStreamingElement.NotifyLevelShown
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ULevelStreamingElement::NotifyLevelShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreaming.LevelStreamingElement.NotifyLevelShown");
		
		ULevelStreamingElement_NotifyLevelShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FA4BC0
	 * 		Name   -> Function LevelStreaming.LevelStreamingElement.NotifyLevelLoaded
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ULevelStreamingElement::NotifyLevelLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreaming.LevelStreamingElement.NotifyLevelLoaded");
		
		ULevelStreamingElement_NotifyLevelLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FA4BA0
	 * 		Name   -> Function LevelStreaming.LevelStreamingElement.NotifyLevelHidden
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ULevelStreamingElement::NotifyLevelHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreaming.LevelStreamingElement.NotifyLevelHidden");
		
		ULevelStreamingElement_NotifyLevelHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelStreamingElement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelStreamingElement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelStreaming.LevelStreamingElement");
		return ptr;
	}

}


