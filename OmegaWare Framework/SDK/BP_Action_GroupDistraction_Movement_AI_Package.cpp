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
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.GetQueryParams
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.GetDryRunQueryParams
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.EndRunQueryState
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.EndDryRunQueryState
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.OnBeginEarly
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.OnQuerySucceeded
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.GetMoveTargetDirection
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.BeginRunQueryState
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.BeginDryRunQueryState
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.IsAbleToUseActivity
	 * 		Flags  -> ()
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


