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
	 * 		Name   -> Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.TryRemoveAgainstWallFact
	 * 		Flags  -> ()
	 */
	void UBP_Action_WaitMoving_FaceCombatTarget_AI_C::TryRemoveAgainstWallFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.TryRemoveAgainstWallFact");
		
		UBP_Action_WaitMoving_FaceCombatTarget_AI_C_TryRemoveAgainstWallFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.RemoveMovement
	 * 		Flags  -> ()
	 */
	void UBP_Action_WaitMoving_FaceCombatTarget_AI_C::RemoveMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.RemoveMovement");
		
		UBP_Action_WaitMoving_FaceCombatTarget_AI_C_RemoveMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.AddMovement
	 * 		Flags  -> ()
	 */
	void UBP_Action_WaitMoving_FaceCombatTarget_AI_C::AddMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.AddMovement");
		
		UBP_Action_WaitMoving_FaceCombatTarget_AI_C_AddMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.RemoveMoveTarget
	 * 		Flags  -> ()
	 */
	void UBP_Action_WaitMoving_FaceCombatTarget_AI_C::RemoveMoveTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.RemoveMoveTarget");
		
		UBP_Action_WaitMoving_FaceCombatTarget_AI_C_RemoveMoveTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.UpdateMoveTarget
	 * 		Flags  -> ()
	 */
	void UBP_Action_WaitMoving_FaceCombatTarget_AI_C::UpdateMoveTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.UpdateMoveTarget");
		
		UBP_Action_WaitMoving_FaceCombatTarget_AI_C_UpdateMoveTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.CombatTargetChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMoving_FaceCombatTarget_AI_C::CombatTargetChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.CombatTargetChanged");
		
		UBP_Action_WaitMoving_FaceCombatTarget_AI_C_CombatTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.ExecuteUbergraph_BP_Action_WaitMoving_FaceCombatTarget_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMoving_FaceCombatTarget_AI_C::ExecuteUbergraph_BP_Action_WaitMoving_FaceCombatTarget_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.ExecuteUbergraph_BP_Action_WaitMoving_FaceCombatTarget_AI");
		
		UBP_Action_WaitMoving_FaceCombatTarget_AI_C_ExecuteUbergraph_BP_Action_WaitMoving_FaceCombatTarget_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_WaitMoving_FaceCombatTarget_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_WaitMoving_FaceCombatTarget_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C");
		return ptr;
	}

}


