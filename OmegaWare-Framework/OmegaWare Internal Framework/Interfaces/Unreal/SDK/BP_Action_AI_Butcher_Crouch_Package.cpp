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
	 * 		Name   -> Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.OnCancellationExpressionChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_AI_Butcher_Crouch_C::OnCancellationExpressionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.OnCancellationExpressionChanged");
		
		UBP_Action_AI_Butcher_Crouch_C_OnCancellationExpressionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.RemoveCancellationExpression
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_AI_Butcher_Crouch_C::RemoveCancellationExpression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.RemoveCancellationExpression");
		
		UBP_Action_AI_Butcher_Crouch_C_RemoveCancellationExpression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.AddCancellationExpression
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_AI_Butcher_Crouch_C::AddCancellationExpression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.AddCancellationExpression");
		
		UBP_Action_AI_Butcher_Crouch_C_AddCancellationExpression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.OnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_AI_Butcher_Crouch_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.OnBegin");
		
		UBP_Action_AI_Butcher_Crouch_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.OnConstruct
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     InitParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_AI_Butcher_Crouch_C::OnConstruct(class UCustomActionParamsBase* InitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.OnConstruct");
		
		UBP_Action_AI_Butcher_Crouch_C_OnConstruct_Params params {};
		params.InitParams = InitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.EndRequestedBy
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       QueuedActionId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_AI_Butcher_Crouch_C::EndRequestedBy(const struct FGuid& QueuedActionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.EndRequestedBy");
		
		UBP_Action_AI_Butcher_Crouch_C_EndRequestedBy_Params params {};
		params.QueuedActionId = QueuedActionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.OnEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_AI_Butcher_Crouch_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.OnEnd");
		
		UBP_Action_AI_Butcher_Crouch_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.ExecuteUbergraph_BP_Action_AI_Butcher_Crouch
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_AI_Butcher_Crouch_C::ExecuteUbergraph_BP_Action_AI_Butcher_Crouch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.ExecuteUbergraph_BP_Action_AI_Butcher_Crouch");
		
		UBP_Action_AI_Butcher_Crouch_C_ExecuteUbergraph_BP_Action_AI_Butcher_Crouch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_AI_Butcher_Crouch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_AI_Butcher_Crouch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C");
		return ptr;
	}

}


