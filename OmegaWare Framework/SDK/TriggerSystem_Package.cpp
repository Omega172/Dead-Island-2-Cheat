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
	 * 		Name   -> Function TriggerSystem.TriggerAreaManager.GetTriggerAreaManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ATriggerAreaManager* ATriggerAreaManager::GetTriggerAreaManager(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerSystem.TriggerAreaManager.GetTriggerAreaManager");
		
		ATriggerAreaManager_GetTriggerAreaManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerSystem.TriggerAreaManager.GetInteractorsInArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTriggerShapeComponent*                      Area                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UTriggerInteractorComponent*> ATriggerAreaManager::GetInteractorsInArea(class UTriggerShapeComponent* Area, class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerSystem.TriggerAreaManager.GetInteractorsInArea");
		
		ATriggerAreaManager_GetInteractorsInArea_Params params {};
		params.Area = Area;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerSystem.TriggerAreaManager.GetInteractorCountInArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTriggerShapeComponent*                      Area                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ATriggerAreaManager::GetInteractorCountInArea(class UTriggerShapeComponent* Area, class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerSystem.TriggerAreaManager.GetInteractorCountInArea");
		
		ATriggerAreaManager_GetInteractorCountInArea_Params params {};
		params.Area = Area;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerSystem.TriggerAreaManager.GetAreasForInteractor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTriggerInteractorComponent*                 Interactor                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UTriggerShapeComponent*> ATriggerAreaManager::GetAreasForInteractor(class UTriggerInteractorComponent* Interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerSystem.TriggerAreaManager.GetAreasForInteractor");
		
		ATriggerAreaManager_GetAreasForInteractor_Params params {};
		params.Interactor = Interactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerSystem.TriggerAreaManager.GetAreaCountForInteractor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTriggerInteractorComponent*                 Interactor                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ATriggerAreaManager::GetAreaCountForInteractor(class UTriggerInteractorComponent* Interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerSystem.TriggerAreaManager.GetAreaCountForInteractor");
		
		ATriggerAreaManager_GetAreaCountForInteractor_Params params {};
		params.Interactor = Interactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerSystem.TriggerAreaManager.GetActorsInArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTriggerShapeComponent*                      Area                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ATriggerAreaManager::GetActorsInArea(class UTriggerShapeComponent* Area, class UClass* Class, TArray<class AActor*>* OutActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerSystem.TriggerAreaManager.GetActorsInArea");
		
		ATriggerAreaManager_GetActorsInArea_Params params {};
		params.Area = Area;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerSystem.TriggerAreaManager.GetActorCountInArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTriggerShapeComponent*                      Area                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ATriggerAreaManager::GetActorCountInArea(class UTriggerShapeComponent* Area, class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerSystem.TriggerAreaManager.GetActorCountInArea");
		
		ATriggerAreaManager_GetActorCountInArea_Params params {};
		params.Area = Area;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATriggerAreaManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATriggerAreaManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TriggerSystem.TriggerAreaManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTriggerInteractorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTriggerInteractorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TriggerSystem.TriggerInteractorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerSystem.TriggerShapeActor.GetTriggerShapeComponent
	 * 		Flags  -> ()
	 */
	class UTriggerShapeComponent* ATriggerShapeActor::GetTriggerShapeComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerSystem.TriggerShapeActor.GetTriggerShapeComponent");
		
		ATriggerShapeActor_GetTriggerShapeComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATriggerShapeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATriggerShapeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TriggerSystem.TriggerShapeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerSystem.TriggerShapeComponent.SetTriggerActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTriggerShapeComponent::SetTriggerActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerSystem.TriggerShapeComponent.SetTriggerActive");
		
		UTriggerShapeComponent_SetTriggerActive_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerSystem.TriggerShapeComponent.OnRep_IsShapeActive
	 * 		Flags  -> ()
	 */
	void UTriggerShapeComponent::OnRep_IsShapeActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerSystem.TriggerShapeComponent.OnRep_IsShapeActive");
		
		UTriggerShapeComponent_OnRep_IsShapeActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerSystem.TriggerShapeComponent.IsTriggerActive
	 * 		Flags  -> ()
	 */
	bool UTriggerShapeComponent::IsTriggerActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerSystem.TriggerShapeComponent.IsTriggerActive");
		
		UTriggerShapeComponent_IsTriggerActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerSystem.TriggerShapeComponent.GetNumberOfInteractorsInArea
	 * 		Flags  -> ()
	 */
	int32_t UTriggerShapeComponent::GetNumberOfInteractorsInArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerSystem.TriggerShapeComponent.GetNumberOfInteractorsInArea");
		
		UTriggerShapeComponent_GetNumberOfInteractorsInArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerSystem.TriggerShapeComponent.GetActorsInShape
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UTriggerShapeComponent::GetActorsInShape(TArray<class AActor*>* OutActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerSystem.TriggerShapeComponent.GetActorsInShape");
		
		UTriggerShapeComponent_GetActorsInShape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTriggerShapeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTriggerShapeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TriggerSystem.TriggerShapeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerSystem.TriggerShapeNotifyConditionObject.PassesCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTriggerShapeNotifyConditionObject::PassesCondition(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerSystem.TriggerShapeNotifyConditionObject.PassesCondition");
		
		UTriggerShapeNotifyConditionObject_PassesCondition_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTriggerShapeNotifyConditionObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTriggerShapeNotifyConditionObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TriggerSystem.TriggerShapeNotifyConditionObject");
		return ptr;
	}

}


