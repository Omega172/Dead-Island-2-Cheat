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
	 * 		Name   -> Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.UnbindSuiciderDetonationActionListeners
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimsetStateMachine_Suicider_C::UnbindSuiciderDetonationActionListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.UnbindSuiciderDetonationActionListeners");
		
		UBP_Action_Distraction_AnimsetStateMachine_Suicider_C_UnbindSuiciderDetonationActionListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.OnSuiciderDetonationActionEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Distraction_AnimsetStateMachine_Suicider_C::OnSuiciderDetonationActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.OnSuiciderDetonationActionEnded");
		
		UBP_Action_Distraction_AnimsetStateMachine_Suicider_C_OnSuiciderDetonationActionEnded_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.TryBeginSuiciderDetonationAction
	 * 		Flags  -> ()
	 */
	bool UBP_Action_Distraction_AnimsetStateMachine_Suicider_C::TryBeginSuiciderDetonationAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.TryBeginSuiciderDetonationAction");
		
		UBP_Action_Distraction_AnimsetStateMachine_Suicider_C_TryBeginSuiciderDetonationAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Distraction_AnimsetStateMachine_Suicider_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.OnBegin");
		
		UBP_Action_Distraction_AnimsetStateMachine_Suicider_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Distraction_AnimsetStateMachine_Suicider_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.OnEnd");
		
		UBP_Action_Distraction_AnimsetStateMachine_Suicider_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.ExecuteUbergraph_BP_Action_Distraction_AnimsetStateMachine_Suicider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_AnimsetStateMachine_Suicider_C::ExecuteUbergraph_BP_Action_Distraction_AnimsetStateMachine_Suicider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.ExecuteUbergraph_BP_Action_Distraction_AnimsetStateMachine_Suicider");
		
		UBP_Action_Distraction_AnimsetStateMachine_Suicider_C_ExecuteUbergraph_BP_Action_Distraction_AnimsetStateMachine_Suicider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Distraction_AnimsetStateMachine_Suicider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Distraction_AnimsetStateMachine_Suicider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C");
		return ptr;
	}

}


