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
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.GetNextState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterActionEndedReason                        ActionEndReason                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EScreamStates                                      NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::GetNextState(ECharacterActionEndedReason ActionEndReason, EScreamStates* NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.GetNextState");
		
		UBP_Action_ScreamStateMachine_Screamer_C_GetNextState_Params params {};
		params.ActionEndReason = ActionEndReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextState != nullptr)
			*NextState = params.NextState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.CancelRunningAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterActionEndReason                          Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::CancelRunningAction(const struct FGuid& RequestId, ECharacterActionEndReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.CancelRunningAction");
		
		UBP_Action_ScreamStateMachine_Screamer_C_CancelRunningAction_Params params {};
		params.RequestId = RequestId;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.UnbindEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::UnbindEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.UnbindEvents");
		
		UBP_Action_ScreamStateMachine_Screamer_C_UnbindEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.EndOutroState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::EndOutroState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.EndOutroState");
		
		UBP_Action_ScreamStateMachine_Screamer_C_EndOutroState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.EndScreamState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::EndScreamState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.EndScreamState");
		
		UBP_Action_ScreamStateMachine_Screamer_C_EndScreamState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.EndWindUpState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::EndWindUpState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.EndWindUpState");
		
		UBP_Action_ScreamStateMachine_Screamer_C_EndWindUpState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.EndState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::EndState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.EndState");
		
		UBP_Action_ScreamStateMachine_Screamer_C_EndState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.BeginState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::BeginState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.BeginState");
		
		UBP_Action_ScreamStateMachine_Screamer_C_BeginState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.SetState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScreamStates                                      NextState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::SetState(EScreamStates NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.SetState");
		
		UBP_Action_ScreamStateMachine_Screamer_C_SetState_Params params {};
		params.NextState = NextState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnBeginEarly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_ScreamStateMachine_Screamer_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnBeginEarly");
		
		UBP_Action_ScreamStateMachine_Screamer_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.GetCombatTargetsDirectionAngleResolutionFact
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FFactConfigurationHelper UBP_Action_ScreamStateMachine_Screamer_C::GetCombatTargetsDirectionAngleResolutionFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.GetCombatTargetsDirectionAngleResolutionFact");
		
		UBP_Action_ScreamStateMachine_Screamer_C_GetCombatTargetsDirectionAngleResolutionFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnActionEnded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::OnActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnActionEnded");
		
		UBP_Action_ScreamStateMachine_Screamer_C_OnActionEnded_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.BeginOutroState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::BeginOutroState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.BeginOutroState");
		
		UBP_Action_ScreamStateMachine_Screamer_C_BeginOutroState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.BeginScreamState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::BeginScreamState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.BeginScreamState");
		
		UBP_Action_ScreamStateMachine_Screamer_C_BeginScreamState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.BeginWindUpState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       SelectedFactKey                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::BeginWindUpState(const struct FKnowledgeBaseFactKey& SelectedFactKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.BeginWindUpState");
		
		UBP_Action_ScreamStateMachine_Screamer_C_BeginWindUpState_Params params {};
		params.SelectedFactKey = SelectedFactKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnBegin");
		
		UBP_Action_ScreamStateMachine_Screamer_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnEnd");
		
		UBP_Action_ScreamStateMachine_Screamer_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnCombatTargetChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::OnCombatTargetChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnCombatTargetChanged");
		
		UBP_Action_ScreamStateMachine_Screamer_C_OnCombatTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.ExecuteUbergraph_BP_Action_ScreamStateMachine_Screamer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_ScreamStateMachine_Screamer_C::ExecuteUbergraph_BP_Action_ScreamStateMachine_Screamer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.ExecuteUbergraph_BP_Action_ScreamStateMachine_Screamer");
		
		UBP_Action_ScreamStateMachine_Screamer_C_ExecuteUbergraph_BP_Action_ScreamStateMachine_Screamer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_ScreamStateMachine_Screamer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_ScreamStateMachine_Screamer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C");
		return ptr;
	}

}


