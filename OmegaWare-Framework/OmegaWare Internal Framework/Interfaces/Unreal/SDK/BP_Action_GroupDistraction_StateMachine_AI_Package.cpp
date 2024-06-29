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
	 * 		Name   -> Function BP_Action_GroupDistraction_StateMachine_AI.BP_Action_GroupDistraction_StateMachine_AI_C.ClearAssignedActivity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_GroupDistraction_StateMachine_AI_C::ClearAssignedActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_StateMachine_AI.BP_Action_GroupDistraction_StateMachine_AI_C.ClearAssignedActivity");
		
		UBP_Action_GroupDistraction_StateMachine_AI_C_ClearAssignedActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_GroupDistraction_StateMachine_AI.BP_Action_GroupDistraction_StateMachine_AI_C.OnBeginEarly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_GroupDistraction_StateMachine_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_StateMachine_AI.BP_Action_GroupDistraction_StateMachine_AI_C.OnBeginEarly");
		
		UBP_Action_GroupDistraction_StateMachine_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_GroupDistraction_StateMachine_AI.BP_Action_GroupDistraction_StateMachine_AI_C.Begin Investigation State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_GroupDistraction_StateMachine_AI_C::BeginInvestigationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_StateMachine_AI.BP_Action_GroupDistraction_StateMachine_AI_C.Begin Investigation State");
		
		UBP_Action_GroupDistraction_StateMachine_AI_C_BeginInvestigationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_GroupDistraction_StateMachine_AI.BP_Action_GroupDistraction_StateMachine_AI_C.AddHardDistractionTimer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_GroupDistraction_StateMachine_AI_C::AddHardDistractionTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_StateMachine_AI.BP_Action_GroupDistraction_StateMachine_AI_C.AddHardDistractionTimer");
		
		UBP_Action_GroupDistraction_StateMachine_AI_C_AddHardDistractionTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_GroupDistraction_StateMachine_AI.BP_Action_GroupDistraction_StateMachine_AI_C.OnEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_GroupDistraction_StateMachine_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_StateMachine_AI.BP_Action_GroupDistraction_StateMachine_AI_C.OnEnd");
		
		UBP_Action_GroupDistraction_StateMachine_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_GroupDistraction_StateMachine_AI.BP_Action_GroupDistraction_StateMachine_AI_C.ExecuteUbergraph_BP_Action_GroupDistraction_StateMachine_AI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_GroupDistraction_StateMachine_AI_C::ExecuteUbergraph_BP_Action_GroupDistraction_StateMachine_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_StateMachine_AI.BP_Action_GroupDistraction_StateMachine_AI_C.ExecuteUbergraph_BP_Action_GroupDistraction_StateMachine_AI");
		
		UBP_Action_GroupDistraction_StateMachine_AI_C_ExecuteUbergraph_BP_Action_GroupDistraction_StateMachine_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_GroupDistraction_StateMachine_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_GroupDistraction_StateMachine_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_GroupDistraction_StateMachine_AI.BP_Action_GroupDistraction_StateMachine_AI_C");
		return ptr;
	}

}


