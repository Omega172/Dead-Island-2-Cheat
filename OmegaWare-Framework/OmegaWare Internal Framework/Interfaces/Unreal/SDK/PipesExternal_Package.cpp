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
	 * 		Name   -> PredefinedFunction UGameEventResponse_StartPipeFlow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventResponse_StartPipeFlow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PipesExternal.GameEventResponse_StartPipeFlow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEventResponse_StopPipeFlow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventResponse_StopPipeFlow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PipesExternal.GameEventResponse_StopPipeFlow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FA7A70
	 * 		Name   -> Function PipesExternal.ScriptedSequenceExitCondition_PipeFlowStarted.OnPipeFlowStarted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ABasePipe*                                   Pipe                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScriptedSequenceExitCondition_PipeFlowStarted::OnPipeFlowStarted(class ABasePipe* Pipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PipesExternal.ScriptedSequenceExitCondition_PipeFlowStarted.OnPipeFlowStarted");
		
		UScriptedSequenceExitCondition_PipeFlowStarted_OnPipeFlowStarted_Params params {};
		params.Pipe = Pipe;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptedSequenceExitCondition_PipeFlowStarted.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptedSequenceExitCondition_PipeFlowStarted::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PipesExternal.ScriptedSequenceExitCondition_PipeFlowStarted");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FA7A70
	 * 		Name   -> Function PipesExternal.ScriptedSequenceExitCondition_PipeFlowStopped.OnPipeFlowStopped
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ABasePipe*                                   Pipe                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScriptedSequenceExitCondition_PipeFlowStopped::OnPipeFlowStopped(class ABasePipe* Pipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PipesExternal.ScriptedSequenceExitCondition_PipeFlowStopped.OnPipeFlowStopped");
		
		UScriptedSequenceExitCondition_PipeFlowStopped_OnPipeFlowStopped_Params params {};
		params.Pipe = Pipe;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptedSequenceExitCondition_PipeFlowStopped.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptedSequenceExitCondition_PipeFlowStopped::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PipesExternal.ScriptedSequenceExitCondition_PipeFlowStopped");
		return ptr;
	}

}


