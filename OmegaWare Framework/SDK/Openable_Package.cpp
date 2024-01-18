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
	 * 		Name   -> Function Openable.OpenableComponent.SetOverrideSpeedModifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpeedModifier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenableComponent::SetOverrideSpeedModifier(float NewSpeedModifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableComponent.SetOverrideSpeedModifier");
		
		UOpenableComponent_SetOverrideSpeedModifier_Params params {};
		params.NewSpeedModifier = NewSpeedModifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableComponent.SetControlObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UOpenableControlObject*                      Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOpenableComponent::SetControlObject(class UOpenableControlObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableComponent.SetControlObject");
		
		UOpenableComponent_SetControlObject_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableComponent.SetAssetCollection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOpenableDataAssetCollection                InAssetCollection                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOpenableComponent::SetAssetCollection(const struct FOpenableDataAssetCollection& InAssetCollection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableComponent.SetAssetCollection");
		
		UOpenableComponent_SetAssetCollection_Params params {};
		params.InAssetCollection = InAssetCollection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableComponent.RequestOpen
	 * 		Flags  -> ()
	 */
	bool UOpenableComponent::RequestOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableComponent.RequestOpen");
		
		UOpenableComponent_RequestOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableComponent.RequestClose
	 * 		Flags  -> ()
	 */
	bool UOpenableComponent::RequestClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableComponent.RequestClose");
		
		UOpenableComponent_RequestClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableComponent.RemoveDisableOpenReason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenableComponent::RemoveDisableOpenReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableComponent.RemoveDisableOpenReason");
		
		UOpenableComponent_RemoveDisableOpenReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableComponent.RemoveControlObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UOpenableControlObject*                      Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenableComponent::RemoveControlObject(class UOpenableControlObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableComponent.RemoveControlObject");
		
		UOpenableComponent_RemoveControlObject_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableComponent.OnEndAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECharacterActionEndedReason                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenableComponent::OnEndAction(const struct FGuid& RequestId, const class FName& ActionType, ECharacterActionEndedReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableComponent.OnEndAction");
		
		UOpenableComponent_OnEndAction_Params params {};
		params.RequestId = RequestId;
		params.ActionType = ActionType;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableComponent.OnBlockMessageStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsBlocked                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenableComponent::OnBlockMessageStateChanged(bool bIsBlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableComponent.OnBlockMessageStateChanged");
		
		UOpenableComponent_OnBlockMessageStateChanged_Params params {};
		params.bIsBlocked = bIsBlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableComponent.OnBeginAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenableComponent::OnBeginAction(const struct FGuid& RequestId, const class FName& ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableComponent.OnBeginAction");
		
		UOpenableComponent_OnBeginAction_Params params {};
		params.RequestId = RequestId;
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableComponent.GetCurrentState
	 * 		Flags  -> ()
	 */
	EOpenableState UOpenableComponent::GetCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableComponent.GetCurrentState");
		
		UOpenableComponent_GetCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableComponent.AddDisableOpenReason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenableComponent::AddDisableOpenReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableComponent.AddDisableOpenReason");
		
		UOpenableComponent_AddDisableOpenReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Openable.OpenableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableControlObject.RequestOpen
	 * 		Flags  -> ()
	 */
	void UOpenableControlObject::RequestOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableControlObject.RequestOpen");
		
		UOpenableControlObject_RequestOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableControlObject.RequestClosed
	 * 		Flags  -> ()
	 */
	void UOpenableControlObject::RequestClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableControlObject.RequestClosed");
		
		UOpenableControlObject_RequestClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableControlObject.OnOpenRequested
	 * 		Flags  -> ()
	 */
	void UOpenableControlObject::OnOpenRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableControlObject.OnOpenRequested");
		
		UOpenableControlObject_OnOpenRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableControlObject.OnCloseRequested
	 * 		Flags  -> ()
	 */
	void UOpenableControlObject::OnCloseRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableControlObject.OnCloseRequested");
		
		UOpenableControlObject_OnCloseRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenableControlObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenableControlObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Openable.OpenableControlObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenableDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenableDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Openable.OpenableDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.StopMovement
	 * 		Flags  -> ()
	 */
	void UOpenableObject::StopMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.StopMovement");
		
		UOpenableObject_StopMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.StartMovement
	 * 		Flags  -> ()
	 */
	void UOpenableObject::StartMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.StartMovement");
		
		UOpenableObject_StartMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOwnerActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InOpenableObjectCallback                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UOpenableObject::Start(class AActor* InOwnerActor, const class FScriptDelegate& InOpenableObjectCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.Start");
		
		UOpenableObject_Start_Params params {};
		params.InOwnerActor = InOwnerActor;
		params.InOpenableObjectCallback = InOpenableObjectCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.RequestInformWhenPercentageThroughMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      PercentagesThrough                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UOpenableObject::RequestInformWhenPercentageThroughMovement(const class FScriptDelegate& Callback, TArray<float> PercentagesThrough)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.RequestInformWhenPercentageThroughMovement");
		
		UOpenableObject_RequestInformWhenPercentageThroughMovement_Params params {};
		params.Callback = Callback;
		params.PercentagesThrough = PercentagesThrough;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.RequestInformWhenPercentageRemainingMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      PercentagesRemaining                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UOpenableObject::RequestInformWhenPercentageRemainingMovement(const class FScriptDelegate& Callback, TArray<float> PercentagesRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.RequestInformWhenPercentageRemainingMovement");
		
		UOpenableObject_RequestInformWhenPercentageRemainingMovement_Params params {};
		params.Callback = Callback;
		params.PercentagesRemaining = PercentagesRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.RemoveAllCallbacks
	 * 		Flags  -> ()
	 */
	void UOpenableObject::RemoveAllCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.RemoveAllCallbacks");
		
		UOpenableObject_RemoveAllCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.OnRemoveAllCallbacks
	 * 		Flags  -> ()
	 */
	void UOpenableObject::OnRemoveAllCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.OnRemoveAllCallbacks");
		
		UOpenableObject_OnRemoveAllCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.OnInformWhenPercentageThroughMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      PercentagesThrough                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UOpenableObject::OnInformWhenPercentageThroughMovement(const class FScriptDelegate& Callback, TArray<float> PercentagesThrough)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.OnInformWhenPercentageThroughMovement");
		
		UOpenableObject_OnInformWhenPercentageThroughMovement_Params params {};
		params.Callback = Callback;
		params.PercentagesThrough = PercentagesThrough;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.OnInformWhenPercentageRemainingMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      PercentagesRemaining                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UOpenableObject::OnInformWhenPercentageRemainingMovement(const class FScriptDelegate& Callback, TArray<float> PercentagesRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.OnInformWhenPercentageRemainingMovement");
		
		UOpenableObject_OnInformWhenPercentageRemainingMovement_Params params {};
		params.Callback = Callback;
		params.PercentagesRemaining = PercentagesRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.OnGetPercentageThroughMovement
	 * 		Flags  -> ()
	 */
	float UOpenableObject::OnGetPercentageThroughMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.OnGetPercentageThroughMovement");
		
		UOpenableObject_OnGetPercentageThroughMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.OnGetPercentageRemainingMovement
	 * 		Flags  -> ()
	 */
	float UOpenableObject::OnGetPercentageRemainingMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.OnGetPercentageRemainingMovement");
		
		UOpenableObject_OnGetPercentageRemainingMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.InformMovementFinished
	 * 		Flags  -> ()
	 */
	void UOpenableObject::InformMovementFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.InformMovementFinished");
		
		UOpenableObject_InformMovementFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.GetPercentageThroughMovement
	 * 		Flags  -> ()
	 */
	float UOpenableObject::GetPercentageThroughMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.GetPercentageThroughMovement");
		
		UOpenableObject_GetPercentageThroughMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.GetPercentageRemainingMovement
	 * 		Flags  -> ()
	 */
	float UOpenableObject::GetPercentageRemainingMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.GetPercentageRemainingMovement");
		
		UOpenableObject_GetPercentageRemainingMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.GetOwningActor
	 * 		Flags  -> ()
	 */
	class AActor* UOpenableObject::GetOwningActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.GetOwningActor");
		
		UOpenableObject_GetOwningActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObject.ForceStop
	 * 		Flags  -> ()
	 */
	void UOpenableObject::ForceStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObject.ForceStop");
		
		UOpenableObject_ForceStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenableObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenableObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Openable.OpenableObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenableObjectActionParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenableObjectActionParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Openable.OpenableObjectActionParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObjectAction.RequestInformWhenPercentageThroughMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      PercentagesThrough                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UOpenableObjectAction::RequestInformWhenPercentageThroughMovement(const class FScriptDelegate& Callback, TArray<float> PercentagesThrough)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObjectAction.RequestInformWhenPercentageThroughMovement");
		
		UOpenableObjectAction_RequestInformWhenPercentageThroughMovement_Params params {};
		params.Callback = Callback;
		params.PercentagesThrough = PercentagesThrough;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObjectAction.RequestInformWhenPercentageRemainingMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      PercentagesRemaining                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UOpenableObjectAction::RequestInformWhenPercentageRemainingMovement(const class FScriptDelegate& Callback, TArray<float> PercentagesRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObjectAction.RequestInformWhenPercentageRemainingMovement");
		
		UOpenableObjectAction_RequestInformWhenPercentageRemainingMovement_Params params {};
		params.Callback = Callback;
		params.PercentagesRemaining = PercentagesRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObjectAction.RemoveAllCallbacks
	 * 		Flags  -> ()
	 */
	void UOpenableObjectAction::RemoveAllCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObjectAction.RemoveAllCallbacks");
		
		UOpenableObjectAction_RemoveAllCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObjectAction.OnOpenableObjectMovementComponent
	 * 		Flags  -> ()
	 */
	void UOpenableObjectAction::OnOpenableObjectMovementComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObjectAction.OnOpenableObjectMovementComponent");
		
		UOpenableObjectAction_OnOpenableObjectMovementComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObjectAction.GetPercentageThroughMovement
	 * 		Flags  -> ()
	 */
	float UOpenableObjectAction::GetPercentageThroughMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObjectAction.GetPercentageThroughMovement");
		
		UOpenableObjectAction_GetPercentageThroughMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Openable.OpenableObjectAction.GetPercentageRemainingMovement
	 * 		Flags  -> ()
	 */
	float UOpenableObjectAction::GetPercentageRemainingMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Openable.OpenableObjectAction.GetPercentageRemainingMovement");
		
		UOpenableObjectAction_GetPercentageRemainingMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenableObjectAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenableObjectAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Openable.OpenableObjectAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenablePersistentDataCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenablePersistentDataCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Openable.OpenablePersistentDataCollection");
		return ptr;
	}

}


