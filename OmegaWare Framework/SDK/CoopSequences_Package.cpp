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
	 * 		Name   -> Function CoopSequences.CoopSequenceManager.GetWorldCoopSequenceState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ACoopSequenceState* ACoopSequenceManager::GetWorldCoopSequenceState(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopSequences.CoopSequenceManager.GetWorldCoopSequenceState");
		
		ACoopSequenceManager_GetWorldCoopSequenceState_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopSequences.CoopSequenceManager.GetLocalPlayerCoopSequenceState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ACoopSequenceState* ACoopSequenceManager::GetLocalPlayerCoopSequenceState(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopSequences.CoopSequenceManager.GetLocalPlayerCoopSequenceState");
		
		ACoopSequenceManager_GetLocalPlayerCoopSequenceState_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopSequences.CoopSequenceState.ServerRequestSequence
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopSequences.CoopSequenceState.ServerReplicateState
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopSequences.CoopSequenceState.ServerEndSequence
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopSequences.CoopSequenceState.ServerAcknowledgeSequence
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopSequences.CoopSequenceState.OnTaskReplicateState
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopSequences.CoopSequenceState.OnTaskInterrupted
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopSequences.CoopSequenceState.OnTaskCompleted
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopSequences.CoopSequenceState.ClientRequestSequence
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopSequences.CoopSequenceState.ClientRefuseSequence
	 * 		Flags  -> ()
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


