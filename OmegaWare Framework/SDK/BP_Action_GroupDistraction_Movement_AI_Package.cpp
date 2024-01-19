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
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.GetQueryParams
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	TMap<class FName, float> UBP_Action_GroupDistraction_Movement_AI_C::GetQueryParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.GetQueryParams");
		
		UBP_Action_GroupDistraction_Movement_AI_C_GetQueryParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.GetDryRunQueryParams
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	TMap<class FName, float> UBP_Action_GroupDistraction_Movement_AI_C::GetDryRunQueryParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.GetDryRunQueryParams");
		
		UBP_Action_GroupDistraction_Movement_AI_C_GetDryRunQueryParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.EndRunQueryState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_GroupDistraction_Movement_AI_C::EndRunQueryState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.EndRunQueryState");
		
		UBP_Action_GroupDistraction_Movement_AI_C_EndRunQueryState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.EndDryRunQueryState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_GroupDistraction_Movement_AI_C::EndDryRunQueryState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.EndDryRunQueryState");
		
		UBP_Action_GroupDistraction_Movement_AI_C_EndDryRunQueryState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.OnBeginEarly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_GroupDistraction_Movement_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.OnBeginEarly");
		
		UBP_Action_GroupDistraction_Movement_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.OnQuerySucceeded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_GroupDistraction_Movement_AI_C::OnQuerySucceeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.OnQuerySucceeded");
		
		UBP_Action_GroupDistraction_Movement_AI_C_OnQuerySucceeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.GetMoveTargetDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UBP_Action_GroupDistraction_Movement_AI_C::GetMoveTargetDirection(const struct FVector& From)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.GetMoveTargetDirection");
		
		UBP_Action_GroupDistraction_Movement_AI_C_GetMoveTargetDirection_Params params {};
		params.From = From;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.BeginRunQueryState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_GroupDistraction_Movement_AI_C::BeginRunQueryState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.BeginRunQueryState");
		
		UBP_Action_GroupDistraction_Movement_AI_C_BeginRunQueryState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.BeginDryRunQueryState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_GroupDistraction_Movement_AI_C::BeginDryRunQueryState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.BeginDryRunQueryState");
		
		UBP_Action_GroupDistraction_Movement_AI_C_BeginDryRunQueryState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.IsAbleToUseActivity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UBP_Action_GroupDistraction_Movement_AI_C::IsAbleToUseActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.IsAbleToUseActivity");
		
		UBP_Action_GroupDistraction_Movement_AI_C_IsAbleToUseActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_GroupDistraction_Movement_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_GroupDistraction_Movement_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C");
		return ptr;
	}

}


