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
	 * 		Name   -> Function BP_Action_Distaction_ControlledAnimStateMachine_AI.BP_Action_Distaction_ControlledAnimStateMachine_AI_C.EndAnimSetActionState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distaction_ControlledAnimStateMachine_AI_C::EndAnimSetActionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distaction_ControlledAnimStateMachine_AI.BP_Action_Distaction_ControlledAnimStateMachine_AI_C.EndAnimSetActionState");
		
		UBP_Action_Distaction_ControlledAnimStateMachine_AI_C_EndAnimSetActionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distaction_ControlledAnimStateMachine_AI.BP_Action_Distaction_ControlledAnimStateMachine_AI_C.BeginAnimSetActionState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distaction_ControlledAnimStateMachine_AI_C::BeginAnimSetActionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distaction_ControlledAnimStateMachine_AI.BP_Action_Distaction_ControlledAnimStateMachine_AI_C.BeginAnimSetActionState");
		
		UBP_Action_Distaction_ControlledAnimStateMachine_AI_C_BeginAnimSetActionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distaction_ControlledAnimStateMachine_AI.BP_Action_Distaction_ControlledAnimStateMachine_AI_C.GetMoveTargetDirection
	 * 		Flags  -> ()
	 */
	struct FVector UBP_Action_Distaction_ControlledAnimStateMachine_AI_C::GetMoveTargetDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distaction_ControlledAnimStateMachine_AI.BP_Action_Distaction_ControlledAnimStateMachine_AI_C.GetMoveTargetDirection");
		
		UBP_Action_Distaction_ControlledAnimStateMachine_AI_C_GetMoveTargetDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Distaction_ControlledAnimStateMachine_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Distaction_ControlledAnimStateMachine_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Distaction_ControlledAnimStateMachine_AI.BP_Action_Distaction_ControlledAnimStateMachine_AI_C");
		return ptr;
	}

}


