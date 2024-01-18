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
	 * 		Name   -> Function BP_Action_Base_Distraction_Movement_UseAllysCombatData_AI.BP_Action_Base_Distraction_Movement_UseAllysCombatData_AI_C.OnBeginEarly
	 * 		Flags  -> ()
	 */
	bool UBP_Action_Base_Distraction_Movement_UseAllysCombatData_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Distraction_Movement_UseAllysCombatData_AI.BP_Action_Base_Distraction_Movement_UseAllysCombatData_AI_C.OnBeginEarly");
		
		UBP_Action_Base_Distraction_Movement_UseAllysCombatData_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Base_Distraction_Movement_UseAllysCombatData_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Base_Distraction_Movement_UseAllysCombatData_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Base_Distraction_Movement_UseAllysCombatData_AI.BP_Action_Base_Distraction_Movement_UseAllysCombatData_AI_C");
		return ptr;
	}

}


