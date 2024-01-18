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
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceExitCondition.Setup
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceExitCondition.Reset
	 * 		Flags  -> ()
	 */
	void UScriptedSequenceExitCondition::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceExitCondition.Reset");
		
		UScriptedSequenceExitCondition_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceExitCondition.IsConditionMet
	 * 		Flags  -> ()
	 */
	bool UScriptedSequenceExitCondition::IsConditionMet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceExitCondition.IsConditionMet");
		
		UScriptedSequenceExitCondition_IsConditionMet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceExitCondition.GetLinkedActors
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> UScriptedSequenceExitCondition::GetLinkedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceExitCondition.GetLinkedActors");
		
		UScriptedSequenceExitCondition_GetLinkedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceExitCondition.GetDebuggingText
	 * 		Flags  -> ()
	 */
	class FString UScriptedSequenceExitCondition::GetDebuggingText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceExitCondition.GetDebuggingText");
		
		UScriptedSequenceExitCondition_GetDebuggingText_Params params {};
		
		auto flags = fn->FunctionFlags;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.BaseScriptedSequenceStage.OnTick
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.BaseScriptedSequenceStage.OnRequestStartStage
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.BaseScriptedSequenceStage.OnRequestEndStage
	 * 		Flags  -> ()
	 */
	bool UBaseScriptedSequenceStage::OnRequestEndStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.BaseScriptedSequenceStage.OnRequestEndStage");
		
		UBaseScriptedSequenceStage_OnRequestEndStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.BaseScriptedSequenceStage.OnGetFactsWithDescriptions
	 * 		Flags  -> ()
	 */
	TMap<class FName, class FString> UBaseScriptedSequenceStage::OnGetFactsWithDescriptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.BaseScriptedSequenceStage.OnGetFactsWithDescriptions");
		
		UBaseScriptedSequenceStage_OnGetFactsWithDescriptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.BaseScriptedSequenceStage.OnGetDebuggingText
	 * 		Flags  -> ()
	 */
	TArray<class FString> UBaseScriptedSequenceStage::OnGetDebuggingText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.BaseScriptedSequenceStage.OnGetDebuggingText");
		
		UBaseScriptedSequenceStage_OnGetDebuggingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.BaseScriptedSequenceStage.OnCleanUp
	 * 		Flags  -> ()
	 */
	void UBaseScriptedSequenceStage::OnCleanUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.BaseScriptedSequenceStage.OnCleanUp");
		
		UBaseScriptedSequenceStage_OnCleanUp_Params params {};
		
		auto flags = fn->FunctionFlags;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceComponent.RequestStopSequence
	 * 		Flags  -> ()
	 */
	void UScriptedSequenceComponent::RequestStopSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceComponent.RequestStopSequence");
		
		UScriptedSequenceComponent_RequestStopSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceComponent.RequestStartSequence
	 * 		Flags  -> ()
	 */
	bool UScriptedSequenceComponent::RequestStartSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceComponent.RequestStartSequence");
		
		UScriptedSequenceComponent_RequestStartSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceComponent.IsSequenceActive
	 * 		Flags  -> ()
	 */
	bool UScriptedSequenceComponent::IsSequenceActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceComponent.IsSequenceActive");
		
		UScriptedSequenceComponent_IsSequenceActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceComponent.HasOverriddenStages
	 * 		Flags  -> ()
	 */
	bool UScriptedSequenceComponent::HasOverriddenStages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedSequences.ScriptedSequenceComponent.HasOverriddenStages");
		
		UScriptedSequenceComponent_HasOverriddenStages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedSequences.ScriptedSequenceComponent.GatherComponentBlueprintLinks
	 * 		Flags  -> ()
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


