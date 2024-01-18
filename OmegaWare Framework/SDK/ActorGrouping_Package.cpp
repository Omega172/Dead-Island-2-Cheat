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
	 * 		Name   -> PredefinedFunction UActorGroupFeederObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorGroupFeederObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorGrouping.ActorGroupFeederObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorGrouping.ActorGroupFeederObject_Spatial.OnEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTriggerInteractorComponent*                 Interactor                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActorGroupFeederObject_Spatial::OnEndOverlap(class UTriggerInteractorComponent* Interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorGrouping.ActorGroupFeederObject_Spatial.OnEndOverlap");
		
		UActorGroupFeederObject_Spatial_OnEndOverlap_Params params {};
		params.Interactor = Interactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorGrouping.ActorGroupFeederObject_Spatial.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTriggerInteractorComponent*                 Interactor                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActorGroupFeederObject_Spatial::OnBeginOverlap(class UTriggerInteractorComponent* Interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorGrouping.ActorGroupFeederObject_Spatial.OnBeginOverlap");
		
		UActorGroupFeederObject_Spatial_OnBeginOverlap_Params params {};
		params.Interactor = Interactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorGroupFeederObject_Spatial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorGroupFeederObject_Spatial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorGrouping.ActorGroupFeederObject_Spatial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorGrouping.ActorGroupFilter.CanBeAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UActorGroupFilter::CanBeAdded(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorGrouping.ActorGroupFilter.CanBeAdded");
		
		UActorGroupFilter_CanBeAdded_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorGroupFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorGroupFilter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorGrouping.ActorGroupFilter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorGroupFilter_True.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorGroupFilter_True::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorGrouping.ActorGroupFilter_True");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorGroupFilter_False.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorGroupFilter_False::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorGrouping.ActorGroupFilter_False");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorGroupMemberComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorGroupMemberComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorGrouping.ActorGroupMemberComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorGrouping.ActorGroupOwnerComponent.RemoveListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ActorGroupCallback                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EActorGroupCallbackType                            ActorGroupCallbackType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActorGroupOwnerComponent::RemoveListener(const class FScriptDelegate& ActorGroupCallback, EActorGroupCallbackType ActorGroupCallbackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorGrouping.ActorGroupOwnerComponent.RemoveListener");
		
		UActorGroupOwnerComponent_RemoveListener_Params params {};
		params.ActorGroupCallback = ActorGroupCallback;
		params.ActorGroupCallbackType = ActorGroupCallbackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorGrouping.ActorGroupOwnerComponent.RemoveAllListenersOfCallbackType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EActorGroupCallbackType                            ActorGroupCallbackType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActorGroupOwnerComponent::RemoveAllListenersOfCallbackType(class UObject* Object, EActorGroupCallbackType ActorGroupCallbackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorGrouping.ActorGroupOwnerComponent.RemoveAllListenersOfCallbackType");
		
		UActorGroupOwnerComponent_RemoveAllListenersOfCallbackType_Params params {};
		params.Object = Object;
		params.ActorGroupCallbackType = ActorGroupCallbackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorGrouping.ActorGroupOwnerComponent.RemoveAllListeners
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActorGroupOwnerComponent::RemoveAllListeners(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorGrouping.ActorGroupOwnerComponent.RemoveAllListeners");
		
		UActorGroupOwnerComponent_RemoveAllListeners_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorGrouping.ActorGroupOwnerComponent.IsActorInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UActorGroupOwnerComponent::IsActorInGroup(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorGrouping.ActorGroupOwnerComponent.IsActorInGroup");
		
		UActorGroupOwnerComponent_IsActorInGroup_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorGrouping.ActorGroupOwnerComponent.GetNumberOfMembers
	 * 		Flags  -> ()
	 */
	int32_t UActorGroupOwnerComponent::GetNumberOfMembers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorGrouping.ActorGroupOwnerComponent.GetNumberOfMembers");
		
		UActorGroupOwnerComponent_GetNumberOfMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorGrouping.ActorGroupOwnerComponent.DisbandGroup
	 * 		Flags  -> ()
	 */
	void UActorGroupOwnerComponent::DisbandGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorGrouping.ActorGroupOwnerComponent.DisbandGroup");
		
		UActorGroupOwnerComponent_DisbandGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorGrouping.ActorGroupOwnerComponent.ApplyToAllMembersDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ForEachMemberCallback                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UActorGroupOwnerComponent::ApplyToAllMembersDelegate(const class FScriptDelegate& ForEachMemberCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorGrouping.ActorGroupOwnerComponent.ApplyToAllMembersDelegate");
		
		UActorGroupOwnerComponent_ApplyToAllMembersDelegate_Params params {};
		params.ForEachMemberCallback = ForEachMemberCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorGrouping.ActorGroupOwnerComponent.AddListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ActorGroupCallback                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EActorGroupCallbackType                            ActorGroupCallbackType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActorGroupOwnerComponent::AddListener(const class FScriptDelegate& ActorGroupCallback, EActorGroupCallbackType ActorGroupCallbackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorGrouping.ActorGroupOwnerComponent.AddListener");
		
		UActorGroupOwnerComponent_AddListener_Params params {};
		params.ActorGroupCallback = ActorGroupCallback;
		params.ActorGroupCallbackType = ActorGroupCallbackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorGrouping.ActorGroupOwnerComponent.AddGameEventStateResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameEventStateResponse*                     StateResponse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActorGroupOwnerComponent::AddGameEventStateResponse(class UGameEventStateResponse* StateResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorGrouping.ActorGroupOwnerComponent.AddGameEventStateResponse");
		
		UActorGroupOwnerComponent_AddGameEventStateResponse_Params params {};
		params.StateResponse = StateResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorGroupOwnerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorGroupOwnerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorGrouping.ActorGroupOwnerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorGrouping.ActorSpatialGroupOwnerComponent.SetTriggerComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTriggerShapeComponent*                      InTriggerComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActorSpatialGroupOwnerComponent::SetTriggerComponent(class UTriggerShapeComponent* InTriggerComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorGrouping.ActorSpatialGroupOwnerComponent.SetTriggerComponent");
		
		UActorSpatialGroupOwnerComponent_SetTriggerComponent_Params params {};
		params.InTriggerComponent = InTriggerComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorSpatialGroupOwnerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorSpatialGroupOwnerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorGrouping.ActorSpatialGroupOwnerComponent");
		return ptr;
	}

}


