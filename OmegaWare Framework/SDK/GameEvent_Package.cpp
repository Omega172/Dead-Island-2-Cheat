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
	 * 		Name   -> Function GameEvent.BaseGameEvent.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOwningActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseGameEvent::Setup(class AActor* InOwningActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.BaseGameEvent.Setup");
		
		UBaseGameEvent_Setup_Params params {};
		params.InOwningActor = InOwningActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.BaseGameEvent.GatherBlueprintLinks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              ActorsToPointTo                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UBaseGameEvent::GatherBlueprintLinks(TArray<class AActor*>* ActorsToPointTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.BaseGameEvent.GatherBlueprintLinks");
		
		UBaseGameEvent_GatherBlueprintLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsToPointTo != nullptr)
			*ActorsToPointTo = params.ActorsToPointTo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseGameEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseGameEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.BaseGameEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.BaseGameEventResponse.GetOwningActor
	 * 		Flags  -> ()
	 */
	class AActor* UBaseGameEventResponse::GetOwningActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.BaseGameEventResponse.GetOwningActor");
		
		UBaseGameEventResponse_GetOwningActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.BaseGameEventResponse.GetLinkedActors
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> UBaseGameEventResponse::GetLinkedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.BaseGameEventResponse.GetLinkedActors");
		
		UBaseGameEventResponse_GetLinkedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.BaseGameEventResponse.GetDebugText
	 * 		Flags  -> ()
	 */
	TArray<class FString> UBaseGameEventResponse::GetDebugText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.BaseGameEventResponse.GetDebugText");
		
		UBaseGameEventResponse_GetDebugText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseGameEventResponse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseGameEventResponse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.BaseGameEventResponse");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.GameEvent.RemoveResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameEventResponse*                          GameEventResponse                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameEvent::RemoveResponse(class UGameEventResponse* GameEventResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.GameEvent.RemoveResponse");
		
		UGameEvent_RemoveResponse_Params params {};
		params.GameEventResponse = GameEventResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.GameEvent.Execute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ContextualActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameEvent::Execute(class AActor* ContextualActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.GameEvent.Execute");
		
		UGameEvent_Execute_Params params {};
		params.ContextualActor = ContextualActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.GameEvent.AddResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameEventResponse*                          GameEventResponse                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameEvent::AddResponse(class UGameEventResponse* GameEventResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.GameEvent.AddResponse");
		
		UGameEvent_AddResponse_Params params {};
		params.GameEventResponse = GameEventResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.GameEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEventDebugComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventDebugComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.GameEventDebugComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.GameEventFunctionLibrary.HasTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseGameEventResponse*                      Response                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameEventTags                                     Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameEventFunctionLibrary::HasTag(class UBaseGameEventResponse* Response, EGameEventTags Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.GameEventFunctionLibrary.HasTag");
		
		UGameEventFunctionLibrary_HasTag_Params params {};
		params.Response = Response;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.GameEventFunctionLibrary.AddGameEventStateResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OwningActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGameEventState*                             GameEventState                                             (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGameEventStateResponse*                     Response                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameEventFunctionLibrary::AddGameEventStateResponse(class UObject* WorldContextObject, class AActor* OwningActor, class UGameEventState** GameEventState, class UGameEventStateResponse* Response)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.GameEventFunctionLibrary.AddGameEventStateResponse");
		
		UGameEventFunctionLibrary_AddGameEventStateResponse_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.OwningActor = OwningActor;
		params.Response = Response;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameEventState != nullptr)
			*GameEventState = params.GameEventState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.GameEventFunctionLibrary.AddGameEventResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OwningActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGameEvent*                                  GameEvent                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGameEventResponse*                          Response                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameEventFunctionLibrary::AddGameEventResponse(class UObject* WorldContextObject, class AActor* OwningActor, class UGameEvent** GameEvent, class UGameEventResponse* Response)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.GameEventFunctionLibrary.AddGameEventResponse");
		
		UGameEventFunctionLibrary_AddGameEventResponse_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.OwningActor = OwningActor;
		params.Response = Response;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameEvent != nullptr)
			*GameEvent = params.GameEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEventFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.GameEventFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameEventManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameEventManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.GameEventManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.GameEventResponse.Execute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ContextualActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameEventResponse::Execute(class AActor* ContextualActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.GameEventResponse.Execute");
		
		UGameEventResponse_Execute_Params params {};
		params.ContextualActor = ContextualActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEventResponse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventResponse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.GameEventResponse");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEventResponse_WithNestedGameEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventResponse_WithNestedGameEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.GameEventResponse_WithNestedGameEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEventResponse_Delay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventResponse_Delay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.GameEventResponse_Delay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEventResponse_RandomChance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventResponse_RandomChance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.GameEventResponse_RandomChance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.GameEventState.StateEnd
	 * 		Flags  -> ()
	 */
	void UGameEventState::StateEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.GameEventState.StateEnd");
		
		UGameEventState_StateEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.GameEventState.StateBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ContextualActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameEventState::StateBegin(class AActor* ContextualActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.GameEventState.StateBegin");
		
		UGameEventState_StateBegin_Params params {};
		params.ContextualActor = ContextualActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.GameEventState.RemoveStateResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameEventStateResponse*                     GameEventStateResponse                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameEventState::RemoveStateResponse(class UGameEventStateResponse* GameEventStateResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.GameEventState.RemoveStateResponse");
		
		UGameEventState_RemoveStateResponse_Params params {};
		params.GameEventStateResponse = GameEventStateResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.GameEventState.OnEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameEventState::OnEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.GameEventState.OnEndPlay");
		
		UGameEventState_OnEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.GameEventState.AddStateResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameEventStateResponse*                     GameEventStateResponse                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameEventState::AddStateResponse(class UGameEventStateResponse* GameEventStateResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.GameEventState.AddStateResponse");
		
		UGameEventState_AddStateResponse_Params params {};
		params.GameEventStateResponse = GameEventStateResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEventState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.GameEventState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.GameEventStateResponse.StateEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ContextualActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameEventStateResponse::StateEnd(class AActor* ContextualActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.GameEventStateResponse.StateEnd");
		
		UGameEventStateResponse_StateEnd_Params params {};
		params.ContextualActor = ContextualActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.GameEventStateResponse.StateBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ContextualActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameEventStateResponse::StateBegin(class AActor* ContextualActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.GameEventStateResponse.StateBegin");
		
		UGameEventStateResponse_StateBegin_Params params {};
		params.ContextualActor = ContextualActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEventStateResponse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventStateResponse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.GameEventStateResponse");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEventStateResponse_DelayedStart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventStateResponse_DelayedStart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.GameEventStateResponse_DelayedStart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEventStateResponse_WithNestedGameEventState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventStateResponse_WithNestedGameEventState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.GameEventStateResponse_WithNestedGameEventState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.MultiActorGameEventStateHandler.StateEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ContextualActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiActorGameEventStateHandler::StateEnd(class AActor* ContextualActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.MultiActorGameEventStateHandler.StateEnd");
		
		UMultiActorGameEventStateHandler_StateEnd_Params params {};
		params.ContextualActor = ContextualActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.MultiActorGameEventStateHandler.StateBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ContextualActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiActorGameEventStateHandler::StateBegin(class AActor* ContextualActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.MultiActorGameEventStateHandler.StateBegin");
		
		UMultiActorGameEventStateHandler_StateBegin_Params params {};
		params.ContextualActor = ContextualActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.MultiActorGameEventStateHandler.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameEventState*                             State                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiActorGameEventStateHandler::Setup(class UGameEventState* State, class AActor* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.MultiActorGameEventStateHandler.Setup");
		
		UMultiActorGameEventStateHandler_Setup_Params params {};
		params.State = State;
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEvent.MultiActorGameEventStateHandler.EndAllStates
	 * 		Flags  -> ()
	 */
	void UMultiActorGameEventStateHandler::EndAllStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEvent.MultiActorGameEventStateHandler.EndAllStates");
		
		UMultiActorGameEventStateHandler_EndAllStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiActorGameEventStateHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiActorGameEventStateHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEvent.MultiActorGameEventStateHandler");
		return ptr;
	}

}


