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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.OnObjectiveStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_OBJ_ScriptedSequence_C::OnObjectiveStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.OnObjectiveStarted");
		
		ABP_OBJ_ScriptedSequence_C_OnObjectiveStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.SequenceEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UScriptedSequenceComponent*                  EndedSequence                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_ScriptedSequence_C::SequenceEnded(class UScriptedSequenceComponent* EndedSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.SequenceEnded");
		
		ABP_OBJ_ScriptedSequence_C_SequenceEnded_Params params {};
		params.EndedSequence = EndedSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.OnObjectiveEnded
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_OBJ_ScriptedSequence_C::OnObjectiveEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.OnObjectiveEnded");
		
		ABP_OBJ_ScriptedSequence_C_OnObjectiveEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_OBJ_ScriptedSequence_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.ReceiveBeginPlay");
		
		ABP_OBJ_ScriptedSequence_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_ScriptedSequence_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.ReceiveEndPlay");
		
		ABP_OBJ_ScriptedSequence_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.ExecuteUbergraph_BP_OBJ_ScriptedSequence
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_ScriptedSequence_C::ExecuteUbergraph_BP_OBJ_ScriptedSequence(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.ExecuteUbergraph_BP_OBJ_ScriptedSequence");
		
		ABP_OBJ_ScriptedSequence_C_ExecuteUbergraph_BP_OBJ_ScriptedSequence_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OBJ_ScriptedSequence_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OBJ_ScriptedSequence_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C");
		return ptr;
	}

}


