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
	 * 		Name   -> PredefinedFunction UInputMapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputMapper.InputMapper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMapperActionFilterPriorityGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapperActionFilterPriorityGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputMapper.InputMapperActionFilterPriorityGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMapperActionGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapperActionGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputMapper.InputMapperActionGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBFCF0
	 * 		Name   -> Function InputMapper.InputMapperActionFilterDefinition.IsActionFiltered
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInputMapperActionFilterDefinition::IsActionFiltered(class UInputMapperAction* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperActionFilterDefinition.IsActionFiltered");
		
		UInputMapperActionFilterDefinition_IsActionFiltered_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBFA60
	 * 		Name   -> Function InputMapper.InputMapperActionFilterDefinition.GetFilterPriority
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UInputMapperActionFilterDefinition::GetFilterPriority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperActionFilterDefinition.GetFilterPriority");
		
		UInputMapperActionFilterDefinition_GetFilterPriority_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMapperActionFilterDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapperActionFilterDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputMapper.InputMapperActionFilterDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBFE60
	 * 		Name   -> Function InputMapper.InputMapperActionFilterInstance.IsEnabledWithReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInputMapperActionFilterInstance::IsEnabledWithReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperActionFilterInstance.IsEnabledWithReason");
		
		UInputMapperActionFilterInstance_IsEnabledWithReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBFE40
	 * 		Name   -> Function InputMapper.InputMapperActionFilterInstance.IsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UInputMapperActionFilterInstance::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperActionFilterInstance.IsEnabled");
		
		UInputMapperActionFilterInstance_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBFE10
	 * 		Name   -> Function InputMapper.InputMapperActionFilterInstance.IsActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UInputMapperActionFilterInstance::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperActionFilterInstance.IsActive");
		
		UInputMapperActionFilterInstance_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBF670
	 * 		Name   -> Function InputMapper.InputMapperActionFilterInstance.EnableFilter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMapperActionFilterInstance::EnableFilter(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperActionFilterInstance.EnableFilter");
		
		UInputMapperActionFilterInstance_EnableFilter_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBF5D0
	 * 		Name   -> Function InputMapper.InputMapperActionFilterInstance.DisableFilterAllReasons
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UInputMapperActionFilterInstance::DisableFilterAllReasons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperActionFilterInstance.DisableFilterAllReasons");
		
		UInputMapperActionFilterInstance_DisableFilterAllReasons_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBF550
	 * 		Name   -> Function InputMapper.InputMapperActionFilterInstance.DisableFilter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMapperActionFilterInstance::DisableFilter(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperActionFilterInstance.DisableFilter");
		
		UInputMapperActionFilterInstance_DisableFilter_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMapperActionFilterInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapperActionFilterInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputMapper.InputMapperActionFilterInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMapperActionInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapperActionInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputMapper.InputMapperActionInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMapperActionOverride.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapperActionOverride::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputMapper.InputMapperActionOverride");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMapperActionOverrideConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapperActionOverrideConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputMapper.InputMapperActionOverrideConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMapperActionOverrideConfigGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapperActionOverrideConfigGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputMapper.InputMapperActionOverrideConfigGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBFA90
	 * 		Name   -> Function InputMapper.InputMapperAction.GetFirstKeysForInputType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bGamePad                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FActionGetKeysReply UInputMapperAction::GetFirstKeysForInputType(bool bGamePad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperAction.GetFirstKeysForInputType");
		
		UInputMapperAction_GetFirstKeysForInputType_Params params {};
		params.bGamePad = bGamePad;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMapperAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapperAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputMapper.InputMapperAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBFF70
	 * 		Name   -> Function InputMapper.InputMapperComponent.SwitchToActionOverrideConfig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInputMapperActionOverrideConfig*            Config                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMapperComponent::SwitchToActionOverrideConfig(class UInputMapperActionOverrideConfig* Config)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperComponent.SwitchToActionOverrideConfig");
		
		UInputMapperComponent_SwitchToActionOverrideConfig_Params params {};
		params.Config = Config;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBFEF0
	 * 		Name   -> Function InputMapper.InputMapperComponent.OnFilterChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UInputMapperActionFilterInstance*            Filter                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMapperComponent::OnFilterChanged(class UInputMapperActionFilterInstance* Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperComponent.OnFilterChanged");
		
		UInputMapperComponent_OnFilterChanged_Params params {};
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBFD80
	 * 		Name   -> Function InputMapper.InputMapperComponent.IsActionFiltered
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInputMapperComponent::IsActionFiltered(class UInputMapperAction* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperComponent.IsActionFiltered");
		
		UInputMapperComponent_IsActionFiltered_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBFBA0
	 * 		Name   -> Function InputMapper.InputMapperComponent.GetKeysForAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGamePad                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FActionGetKeysReply UInputMapperComponent::GetKeysForAction(class UInputMapperAction* Action, bool bGamePad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperComponent.GetKeysForAction");
		
		UInputMapperComponent_GetKeysForAction_Params params {};
		params.Action = Action;
		params.bGamePad = bGamePad;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBF890
	 * 		Name   -> Function InputMapper.InputMapperComponent.GetAllKeysForAction
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGamePad                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FActionGetKeysReply>                 OutKeyReplies                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UInputMapperComponent::GetAllKeysForAction(class UInputMapperAction* Action, bool bGamePad, TArray<struct FActionGetKeysReply>* OutKeyReplies)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperComponent.GetAllKeysForAction");
		
		UInputMapperComponent_GetAllKeysForAction_Params params {};
		params.Action = Action;
		params.bGamePad = bGamePad;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeyReplies != nullptr)
			*OutKeyReplies = params.OutKeyReplies;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBF800
	 * 		Name   -> Function InputMapper.InputMapperComponent.GetActionInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UInputMapperAction*                          ActionData                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInputMapperActionInstance* UInputMapperComponent::GetActionInstance(class UInputMapperAction* ActionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperComponent.GetActionInstance");
		
		UInputMapperComponent_GetActionInstance_Params params {};
		params.ActionData = ActionData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBF770
	 * 		Name   -> Function InputMapper.InputMapperComponent.GetActionFilter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInputMapperActionFilterDefinition*          DataAsset                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInputMapperActionFilterInstance* UInputMapperComponent::GetActionFilter(class UInputMapperActionFilterDefinition* DataAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperComponent.GetActionFilter");
		
		UInputMapperComponent_GetActionFilter_Params params {};
		params.DataAsset = DataAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBF6F0
	 * 		Name   -> Function InputMapper.InputMapperComponent.EnableInputMapperForObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMapperComponent::EnableInputMapperForObject(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperComponent.EnableInputMapperForObject");
		
		UInputMapperComponent_EnableInputMapperForObject_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FBF5F0
	 * 		Name   -> Function InputMapper.InputMapperComponent.DisableInputMapperForObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMapperComponent::DisableInputMapperForObject(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperComponent.DisableInputMapperForObject");
		
		UInputMapperComponent_DisableInputMapperForObject_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMapperComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapperComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputMapper.InputMapperComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMapperDelegateBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapperDelegateBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputMapper.InputMapperDelegateBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMapperAxisPreprocess.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapperAxisPreprocess::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputMapper.InputMapperAxisPreprocess");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMapperPreprocessProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapperPreprocessProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InputMapper.InputMapperPreprocessProfile");
		return ptr;
	}

}


