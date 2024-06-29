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
	 * 		Name   -> Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.UnbindListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_ReturnToTarget_AI_C::UnbindListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.UnbindListeners");
		
		UBP_Action_ReturnToTarget_AI_C_UnbindListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnWithinSuccessDistanceChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_ReturnToTarget_AI_C::OnWithinSuccessDistanceChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnWithinSuccessDistanceChanged");
		
		UBP_Action_ReturnToTarget_AI_C_OnWithinSuccessDistanceChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnEngagementRingChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EKnowledgeBaseFactChangeType                       FactChangeType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_ReturnToTarget_AI_C::OnEngagementRingChanged(const struct FKnowledgeBaseFactKey& FactKey, class UKnowledgeBaseComponent* KnowledgeBaseComponent, EKnowledgeBaseFactChangeType FactChangeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnEngagementRingChanged");
		
		UBP_Action_ReturnToTarget_AI_C_OnEngagementRingChanged_Params params {};
		params.FactKey = FactKey;
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.FactChangeType = FactChangeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.RemoveMovementMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_ReturnToTarget_AI_C::RemoveMovementMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.RemoveMovementMode");
		
		UBP_Action_ReturnToTarget_AI_C_RemoveMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.AddMovementMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_ReturnToTarget_AI_C::AddMovementMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.AddMovementMode");
		
		UBP_Action_ReturnToTarget_AI_C_AddMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.BindListeners
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_ReturnToTarget_AI_C::BindListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.BindListeners");
		
		UBP_Action_ReturnToTarget_AI_C_BindListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnBeginEarly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_ReturnToTarget_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnBeginEarly");
		
		UBP_Action_ReturnToTarget_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_ReturnToTarget_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnEnd");
		
		UBP_Action_ReturnToTarget_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_ReturnToTarget_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnBegin");
		
		UBP_Action_ReturnToTarget_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.ExecuteUbergraph_BP_Action_ReturnToTarget_AI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_ReturnToTarget_AI_C::ExecuteUbergraph_BP_Action_ReturnToTarget_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.ExecuteUbergraph_BP_Action_ReturnToTarget_AI");
		
		UBP_Action_ReturnToTarget_AI_C_ExecuteUbergraph_BP_Action_ReturnToTarget_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_ReturnToTarget_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_ReturnToTarget_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C");
		return ptr;
	}

}


