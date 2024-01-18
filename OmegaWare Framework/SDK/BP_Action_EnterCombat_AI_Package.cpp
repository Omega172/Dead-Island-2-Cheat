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
	 * 		Name   -> Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.CommitAttackRules
	 * 		Flags  -> ()
	 */
	void UBP_Action_EnterCombat_AI_C::CommitAttackRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.CommitAttackRules");
		
		UBP_Action_EnterCombat_AI_C_CommitAttackRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.RequestMovementModeRemoval
	 * 		Flags  -> ()
	 */
	void UBP_Action_EnterCombat_AI_C::RequestMovementModeRemoval()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.RequestMovementModeRemoval");
		
		UBP_Action_EnterCombat_AI_C_RequestMovementModeRemoval_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnCancellationExpressionsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_EnterCombat_AI_C::OnCancellationExpressionsChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnCancellationExpressionsChanged");
		
		UBP_Action_EnterCombat_AI_C_OnCancellationExpressionsChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.RemoveCancellationExpressions
	 * 		Flags  -> ()
	 */
	void UBP_Action_EnterCombat_AI_C::RemoveCancellationExpressions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.RemoveCancellationExpressions");
		
		UBP_Action_EnterCombat_AI_C_RemoveCancellationExpressions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.AddCancellationExpressions
	 * 		Flags  -> ()
	 */
	void UBP_Action_EnterCombat_AI_C::AddCancellationExpressions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.AddCancellationExpressions");
		
		UBP_Action_EnterCombat_AI_C_AddCancellationExpressions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnEnterCombatCancellationPeriodChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_EnterCombat_AI_C::OnEnterCombatCancellationPeriodChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnEnterCombatCancellationPeriodChanged");
		
		UBP_Action_EnterCombat_AI_C_OnEnterCombatCancellationPeriodChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.RequestMovementMode
	 * 		Flags  -> ()
	 */
	void UBP_Action_EnterCombat_AI_C::RequestMovementMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.RequestMovementMode");
		
		UBP_Action_EnterCombat_AI_C_RequestMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.AddEnterCombatCancellationPeriodListener
	 * 		Flags  -> ()
	 */
	void UBP_Action_EnterCombat_AI_C::AddEnterCombatCancellationPeriodListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.AddEnterCombatCancellationPeriodListener");
		
		UBP_Action_EnterCombat_AI_C_AddEnterCombatCancellationPeriodListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnBeginEarly
	 * 		Flags  -> ()
	 */
	bool UBP_Action_EnterCombat_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnBeginEarly");
		
		UBP_Action_EnterCombat_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_EnterCombat_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnEnd");
		
		UBP_Action_EnterCombat_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_EnterCombat_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnBegin");
		
		UBP_Action_EnterCombat_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.ExecuteUbergraph_BP_Action_EnterCombat_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_EnterCombat_AI_C::ExecuteUbergraph_BP_Action_EnterCombat_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.ExecuteUbergraph_BP_Action_EnterCombat_AI");
		
		UBP_Action_EnterCombat_AI_C_ExecuteUbergraph_BP_Action_EnterCombat_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_EnterCombat_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_EnterCombat_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C");
		return ptr;
	}

}


