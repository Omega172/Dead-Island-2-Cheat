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
	 * 		Name   -> PredefinedFunction UAnimationLayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationLayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationLayers.AnimationLayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationLayers.AnimationLayerComponent.RemoveLayerRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationLayerComponent::RemoveLayerRequest(const struct FGuid& RequestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLayers.AnimationLayerComponent.RemoveLayerRequest");
		
		UAnimationLayerComponent_RemoveLayerRequest_Params params {};
		params.RequestId = RequestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationLayers.AnimationLayerComponent.RemoveLayerGroupRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationLayerComponent::RemoveLayerGroupRequest(const struct FGuid& RequestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLayers.AnimationLayerComponent.RemoveLayerGroupRequest");
		
		UAnimationLayerComponent_RemoveLayerGroupRequest_Params params {};
		params.RequestId = RequestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationLayers.AnimationLayerComponent.AddLayerProviderRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimationLayer*                             Layer                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULayerWeightProvider*                        Provider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UAnimationLayerComponent::AddLayerProviderRequest(class UAnimationLayer* Layer, const class FName& Reason, class ULayerWeightProvider* Provider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLayers.AnimationLayerComponent.AddLayerProviderRequest");
		
		UAnimationLayerComponent_AddLayerProviderRequest_Params params {};
		params.Layer = Layer;
		params.Reason = Reason;
		params.Provider = Provider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationLayers.AnimationLayerComponent.AddLayerGroupProviderRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimationLayerGroup*                        LayerGroup                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULayerWeightProvider*                        Provider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UAnimationLayerComponent::AddLayerGroupProviderRequest(class UAnimationLayerGroup* LayerGroup, const class FName& Reason, class ULayerWeightProvider* Provider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLayers.AnimationLayerComponent.AddLayerGroupProviderRequest");
		
		UAnimationLayerComponent_AddLayerGroupProviderRequest_Params params {};
		params.LayerGroup = LayerGroup;
		params.Reason = Reason;
		params.Provider = Provider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationLayers.AnimationLayerComponent.AddLayerGroupEnableRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimationLayerGroup*                        LayerGroup                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OverrideTransitionTime                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UAnimationLayerComponent::AddLayerGroupEnableRequest(class UAnimationLayerGroup* LayerGroup, const class FName& Reason, float OverrideTransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLayers.AnimationLayerComponent.AddLayerGroupEnableRequest");
		
		UAnimationLayerComponent_AddLayerGroupEnableRequest_Params params {};
		params.LayerGroup = LayerGroup;
		params.Reason = Reason;
		params.OverrideTransitionTime = OverrideTransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationLayers.AnimationLayerComponent.AddLayerGroupDisableRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimationLayerGroup*                        LayerGroup                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OverrideTransitionTime                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UAnimationLayerComponent::AddLayerGroupDisableRequest(class UAnimationLayerGroup* LayerGroup, const class FName& Reason, float OverrideTransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLayers.AnimationLayerComponent.AddLayerGroupDisableRequest");
		
		UAnimationLayerComponent_AddLayerGroupDisableRequest_Params params {};
		params.LayerGroup = LayerGroup;
		params.Reason = Reason;
		params.OverrideTransitionTime = OverrideTransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationLayers.AnimationLayerComponent.AddLayerEnableRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimationLayer*                             Layer                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OverrideTransitionTime                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UAnimationLayerComponent::AddLayerEnableRequest(class UAnimationLayer* Layer, const class FName& Reason, float OverrideTransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLayers.AnimationLayerComponent.AddLayerEnableRequest");
		
		UAnimationLayerComponent_AddLayerEnableRequest_Params params {};
		params.Layer = Layer;
		params.Reason = Reason;
		params.OverrideTransitionTime = OverrideTransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationLayers.AnimationLayerComponent.AddLayerDisableRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimationLayer*                             Layer                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OverrideTransitionTime                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UAnimationLayerComponent::AddLayerDisableRequest(class UAnimationLayer* Layer, const class FName& Reason, float OverrideTransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLayers.AnimationLayerComponent.AddLayerDisableRequest");
		
		UAnimationLayerComponent_AddLayerDisableRequest_Params params {};
		params.Layer = Layer;
		params.Reason = Reason;
		params.OverrideTransitionTime = OverrideTransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationLayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationLayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationLayers.AnimationLayerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationLayerGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationLayerGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationLayers.AnimationLayerGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationLayers.AnimNotifyState_AnimLayerBase.OnActorEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimNotifyState_AnimLayerBase::OnActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLayers.AnimNotifyState_AnimLayerBase.OnActorEndPlay");
		
		UAnimNotifyState_AnimLayerBase_OnActorEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_AnimLayerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_AnimLayerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationLayers.AnimNotifyState_AnimLayerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationLayers.AnimNotifyState_AnimLayerGroupBase.OnActorEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimNotifyState_AnimLayerGroupBase::OnActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLayers.AnimNotifyState_AnimLayerGroupBase.OnActorEndPlay");
		
		UAnimNotifyState_AnimLayerGroupBase_OnActorEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_AnimLayerGroupBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_AnimLayerGroupBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationLayers.AnimNotifyState_AnimLayerGroupBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULayeredAnimInstanceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULayeredAnimInstanceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationLayers.LayeredAnimInstanceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULayerWeightProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULayerWeightProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationLayers.LayerWeightProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationLayers.LinearBlendLayerWeightProvider.SetTransitionTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InTransitionTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULinearBlendLayerWeightProvider::SetTransitionTime(float InTransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLayers.LinearBlendLayerWeightProvider.SetTransitionTime");
		
		ULinearBlendLayerWeightProvider_SetTransitionTime_Params params {};
		params.InTransitionTime = InTransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinearBlendLayerWeightProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinearBlendLayerWeightProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationLayers.LinearBlendLayerWeightProvider");
		return ptr;
	}

}


