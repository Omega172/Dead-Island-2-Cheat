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
	 * 		Name   -> Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.GetKnowledgeBaseOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularCondition_EvaluateExpression_C::GetKnowledgeBaseOwner(class AActor* Actor, class AActor** TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.GetKnowledgeBaseOwner");
		
		UBP_ModularCondition_EvaluateExpression_C_GetKnowledgeBaseOwner_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetActor != nullptr)
			*TargetActor = params.TargetActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.GetImGuiText
	 * 		Flags  -> ()
	 */
	TArray<class FString> UBP_ModularCondition_EvaluateExpression_C::GetImGuiText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.GetImGuiText");
		
		UBP_ModularCondition_EvaluateExpression_C_GetImGuiText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.EvaluateConditionExpression
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ModularCondition_EvaluateExpression_C::EvaluateConditionExpression(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.EvaluateConditionExpression");
		
		UBP_ModularCondition_EvaluateExpression_C_EvaluateConditionExpression_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularCondition_EvaluateExpression_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.OnBegin");
		
		UBP_ModularCondition_EvaluateExpression_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularCondition_EvaluateExpression_C::OnEnd(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.OnEnd");
		
		UBP_ModularCondition_EvaluateExpression_C_OnEnd_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.ExecuteUbergraph_BP_ModularCondition_EvaluateExpression
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularCondition_EvaluateExpression_C::ExecuteUbergraph_BP_ModularCondition_EvaluateExpression(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.ExecuteUbergraph_BP_ModularCondition_EvaluateExpression");
		
		UBP_ModularCondition_EvaluateExpression_C_ExecuteUbergraph_BP_ModularCondition_EvaluateExpression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ModularCondition_EvaluateExpression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ModularCondition_EvaluateExpression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C");
		return ptr;
	}

}


