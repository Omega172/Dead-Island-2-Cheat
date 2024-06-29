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
	 * 		RVA    -> 0x00FAD1A0
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceExitCondition.Setup
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UScriptedSequenceStage*                      InOwningStage                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScriptedSequenceExitCondition::Setup(class UScriptedSequenceStage* InOwningStage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceExitCondition.Setup");
		
		UScriptedSequenceExitCondition_Setup_Params params {};
		params.InOwningStage = InOwningStage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF9840
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceExitCondition.Reset
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UScriptedSequenceExitCondition::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceExitCondition.Reset");
		
		UScriptedSequenceExitCondition_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FACEE0
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceExitCondition.IsConditionMet
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	bool UScriptedSequenceExitCondition::IsConditionMet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceExitCondition.IsConditionMet");
		
		UScriptedSequenceExitCondition_IsConditionMet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCC200
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceExitCondition.GetLinkedActors
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	TArray<class AActor*> UScriptedSequenceExitCondition::GetLinkedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceExitCondition.GetLinkedActors");
		
		UScriptedSequenceExitCondition_GetLinkedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FACE30
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceExitCondition.GetDebuggingText
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	class FString UScriptedSequenceExitCondition::GetDebuggingText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceExitCondition.GetDebuggingText");
		
		UScriptedSequenceExitCondition_GetDebuggingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptedSequenceExitCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptedSequenceExitCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ScriptedSequences.ScriptedSequenceExitCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FAD0D0
	 * 		Name   -> Function ScriptedSequences.BaseScriptedSequenceStage.OnTick
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseScriptedSequenceStage::OnTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.BaseScriptedSequenceStage.OnTick");
		
		UBaseScriptedSequenceStage_OnTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FAD030
	 * 		Name   -> Function ScriptedSequences.BaseScriptedSequenceStage.OnRequestStartStage
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InOwningActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBaseScriptedSequenceStage::OnRequestStartStage(class AActor* InOwningActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.BaseScriptedSequenceStage.OnRequestStartStage");
		
		UBaseScriptedSequenceStage_OnRequestStartStage_Params params {};
		params.InOwningActor = InOwningActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FACEE0
	 * 		Name   -> Function ScriptedSequences.BaseScriptedSequenceStage.OnRequestEndStage
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	bool UBaseScriptedSequenceStage::OnRequestEndStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.BaseScriptedSequenceStage.OnRequestEndStage");
		
		UBaseScriptedSequenceStage_OnRequestEndStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FACF40
	 * 		Name   -> Function ScriptedSequences.BaseScriptedSequenceStage.OnGetFactsWithDescriptions
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent, Const)
	 */
	TMap<class FName, class FString> UBaseScriptedSequenceStage::OnGetFactsWithDescriptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.BaseScriptedSequenceStage.OnGetFactsWithDescriptions");
		
		UBaseScriptedSequenceStage_OnGetFactsWithDescriptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCC110
	 * 		Name   -> Function ScriptedSequences.BaseScriptedSequenceStage.OnGetDebuggingText
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent, Const)
	 */
	TArray<class FString> UBaseScriptedSequenceStage::OnGetDebuggingText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.BaseScriptedSequenceStage.OnGetDebuggingText");
		
		UBaseScriptedSequenceStage_OnGetDebuggingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF9840
	 * 		Name   -> Function ScriptedSequences.BaseScriptedSequenceStage.OnCleanUp
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UBaseScriptedSequenceStage::OnCleanUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.BaseScriptedSequenceStage.OnCleanUp");
		
		UBaseScriptedSequenceStage_OnCleanUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseScriptedSequenceStage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseScriptedSequenceStage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ScriptedSequences.BaseScriptedSequenceStage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptedComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptedComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ScriptedSequences.ScriptedComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FAD180
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceComponent.RequestStopSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UScriptedSequenceComponent::RequestStopSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceComponent.RequestStopSequence");
		
		UScriptedSequenceComponent_RequestStopSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FAD150
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceComponent.RequestStartSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UScriptedSequenceComponent::RequestStartSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceComponent.RequestStartSequence");
		
		UScriptedSequenceComponent_RequestStartSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FACF10
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceComponent.IsSequenceActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UScriptedSequenceComponent::IsSequenceActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceComponent.IsSequenceActive");
		
		UScriptedSequenceComponent_IsSequenceActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FACEB0
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceComponent.HasOverriddenStages
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UScriptedSequenceComponent::HasOverriddenStages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceComponent.HasOverriddenStages");
		
		UScriptedSequenceComponent_HasOverriddenStages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FACD80
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceComponent.GatherComponentBlueprintLinks
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<struct FComponentLinkInformation>           ComponentLinks                                             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UScriptedSequenceComponent::GatherComponentBlueprintLinks(TArray<struct FComponentLinkInformation>* ComponentLinks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceComponent.GatherComponentBlueprintLinks");
		
		UScriptedSequenceComponent_GatherComponentBlueprintLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComponentLinks != nullptr)
			*ComponentLinks = params.ComponentLinks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptedSequenceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptedSequenceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ScriptedSequences.ScriptedSequenceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptedSequenceDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptedSequenceDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ScriptedSequences.ScriptedSequenceDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptedSequenceExitCondition_Compound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptedSequenceExitCondition_Compound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ScriptedSequences.ScriptedSequenceExitCondition_Compound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptedSequenceStage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptedSequenceStage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ScriptedSequences.ScriptedSequenceStage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptedStateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptedStateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ScriptedSequences.ScriptedStateComponent");
		return ptr;
	}

}


