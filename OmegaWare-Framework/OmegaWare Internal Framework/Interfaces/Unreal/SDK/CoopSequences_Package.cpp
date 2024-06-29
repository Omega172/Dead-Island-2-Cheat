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
	 * 		RVA    -> 0x00CF4160
	 * 		Name   -> Function CoopSequences.CoopSequenceManager.GetWorldCoopSequenceState
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ACoopSequenceState* ACoopSequenceManager::STATIC_GetWorldCoopSequenceState(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopSequences.CoopSequenceManager.GetWorldCoopSequenceState");
		
		ACoopSequenceManager_GetWorldCoopSequenceState_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF40E0
	 * 		Name   -> Function CoopSequences.CoopSequenceManager.GetLocalPlayerCoopSequenceState
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ACoopSequenceState* ACoopSequenceManager::STATIC_GetLocalPlayerCoopSequenceState(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopSequences.CoopSequenceManager.GetLocalPlayerCoopSequenceState");
		
		ACoopSequenceManager_GetLocalPlayerCoopSequenceState_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACoopSequenceManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoopSequenceManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoopSequences.CoopSequenceManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF4600
	 * 		Name   -> Function CoopSequences.CoopSequenceState.ServerRequestSequence
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		int32_t                                            PredictionKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TaskType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUserParamsObjectWrapper                    CustomData                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ACoopSequenceState::ServerRequestSequence(int32_t PredictionKey, class UClass* TaskType, const struct FUserParamsObjectWrapper& CustomData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopSequences.CoopSequenceState.ServerRequestSequence");
		
		ACoopSequenceState_ServerRequestSequence_Params params {};
		params.PredictionKey = PredictionKey;
		params.TaskType = TaskType;
		params.CustomData = CustomData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF4530
	 * 		Name   -> Function CoopSequences.CoopSequenceState.ServerReplicateState
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		int32_t                                            PredictionKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUserParamsObjectWrapper                    Params                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ACoopSequenceState::ServerReplicateState(int32_t PredictionKey, const struct FUserParamsObjectWrapper& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopSequences.CoopSequenceState.ServerReplicateState");
		
		ACoopSequenceState_ServerReplicateState_Params params {};
		params.PredictionKey = PredictionKey;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF4430
	 * 		Name   -> Function CoopSequences.CoopSequenceState.ServerEndSequence
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		int32_t                                            PredictionKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACoopSequenceState::ServerEndSequence(int32_t PredictionKey, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopSequences.CoopSequenceState.ServerEndSequence");
		
		ACoopSequenceState_ServerEndSequence_Params params {};
		params.PredictionKey = PredictionKey;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF43A0
	 * 		Name   -> Function CoopSequences.CoopSequenceState.ServerAcknowledgeSequence
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		int32_t                                            PredictionKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACoopSequenceState::ServerAcknowledgeSequence(int32_t PredictionKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopSequences.CoopSequenceState.ServerAcknowledgeSequence");
		
		ACoopSequenceState_ServerAcknowledgeSequence_Params params {};
		params.PredictionKey = PredictionKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF42E0
	 * 		Name   -> Function CoopSequences.CoopSequenceState.OnTaskReplicateState
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            PredictionKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCustomParamsBase*                           Params                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACoopSequenceState::OnTaskReplicateState(int32_t PredictionKey, class UCustomParamsBase* Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopSequences.CoopSequenceState.OnTaskReplicateState");
		
		ACoopSequenceState_OnTaskReplicateState_Params params {};
		params.PredictionKey = PredictionKey;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF4260
	 * 		Name   -> Function CoopSequences.CoopSequenceState.OnTaskInterrupted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoopSequenceTask*                           Task                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACoopSequenceState::OnTaskInterrupted(class UCoopSequenceTask* Task)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopSequences.CoopSequenceState.OnTaskInterrupted");
		
		ACoopSequenceState_OnTaskInterrupted_Params params {};
		params.Task = Task;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF41E0
	 * 		Name   -> Function CoopSequences.CoopSequenceState.OnTaskCompleted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoopSequenceTask*                           Task                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACoopSequenceState::OnTaskCompleted(class UCoopSequenceTask* Task)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopSequences.CoopSequenceState.OnTaskCompleted");
		
		ACoopSequenceState_OnTaskCompleted_Params params {};
		params.Task = Task;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF3FE0
	 * 		Name   -> Function CoopSequences.CoopSequenceState.ClientRequestSequence
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 * Parameters:
	 * 		int32_t                                            PredictionKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TaskType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUserParamsObjectWrapper                    CustomData                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ACoopSequenceState::ClientRequestSequence(int32_t PredictionKey, class UClass* TaskType, const struct FUserParamsObjectWrapper& CustomData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopSequences.CoopSequenceState.ClientRequestSequence");
		
		ACoopSequenceState_ClientRequestSequence_Params params {};
		params.PredictionKey = PredictionKey;
		params.TaskType = TaskType;
		params.CustomData = CustomData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF3F50
	 * 		Name   -> Function CoopSequences.CoopSequenceState.ClientRefuseSequence
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 * Parameters:
	 * 		int32_t                                            PredictionKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACoopSequenceState::ClientRefuseSequence(int32_t PredictionKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopSequences.CoopSequenceState.ClientRefuseSequence");
		
		ACoopSequenceState_ClientRefuseSequence_Params params {};
		params.PredictionKey = PredictionKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACoopSequenceState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoopSequenceState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoopSequences.CoopSequenceState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoopSequenceTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoopSequenceTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoopSequences.CoopSequenceTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoopSequenceParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoopSequenceParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoopSequences.CoopSequenceParams");
		return ptr;
	}

}


