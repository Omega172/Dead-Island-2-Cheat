﻿/**
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
	 * 		Name   -> Function BP_Action_Dodge_AI.BP_Action_Dodge_AI_C.OnBeginEarly
	 * 		Flags  -> ()
	 */
	bool UBP_Action_Dodge_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Dodge_AI.BP_Action_Dodge_AI_C.OnBeginEarly");
		
		UBP_Action_Dodge_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Dodge_AI.BP_Action_Dodge_AI_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Dodge_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Dodge_AI.BP_Action_Dodge_AI_C.OnEnd");
		
		UBP_Action_Dodge_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Dodge_AI.BP_Action_Dodge_AI_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Dodge_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Dodge_AI.BP_Action_Dodge_AI_C.OnBegin");
		
		UBP_Action_Dodge_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Dodge_AI.BP_Action_Dodge_AI_C.ExecuteUbergraph_BP_Action_Dodge_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Dodge_AI_C::ExecuteUbergraph_BP_Action_Dodge_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Dodge_AI.BP_Action_Dodge_AI_C.ExecuteUbergraph_BP_Action_Dodge_AI");
		
		UBP_Action_Dodge_AI_C_ExecuteUbergraph_BP_Action_Dodge_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Dodge_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Dodge_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Dodge_AI.BP_Action_Dodge_AI_C");
		return ptr;
	}

}


