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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperActionFilterDefinition.IsActionFiltered
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperActionFilterDefinition.GetFilterPriority
	 * 		Flags  -> ()
	 */
	int32_t UInputMapperActionFilterDefinition::GetFilterPriority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperActionFilterDefinition.GetFilterPriority");
		
		UInputMapperActionFilterDefinition_GetFilterPriority_Params params {};
		
		auto flags = fn->FunctionFlags;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperActionFilterInstance.IsEnabledWithReason
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperActionFilterInstance.IsEnabled
	 * 		Flags  -> ()
	 */
	bool UInputMapperActionFilterInstance::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperActionFilterInstance.IsEnabled");
		
		UInputMapperActionFilterInstance_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperActionFilterInstance.IsActive
	 * 		Flags  -> ()
	 */
	bool UInputMapperActionFilterInstance::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperActionFilterInstance.IsActive");
		
		UInputMapperActionFilterInstance_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperActionFilterInstance.EnableFilter
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperActionFilterInstance.DisableFilterAllReasons
	 * 		Flags  -> ()
	 */
	void UInputMapperActionFilterInstance::DisableFilterAllReasons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputMapper.InputMapperActionFilterInstance.DisableFilterAllReasons");
		
		UInputMapperActionFilterInstance_DisableFilterAllReasons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperActionFilterInstance.DisableFilter
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperAction.GetFirstKeysForInputType
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperComponent.SwitchToActionOverrideConfig
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperComponent.OnFilterChanged
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperComponent.IsActionFiltered
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperComponent.GetKeysForAction
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperComponent.GetAllKeysForAction
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeyReplies != nullptr)
			*OutKeyReplies = params.OutKeyReplies;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperComponent.GetActionInstance
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperComponent.GetActionFilter
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperComponent.EnableInputMapperForObject
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputMapper.InputMapperComponent.DisableInputMapperForObject
	 * 		Flags  -> ()
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


