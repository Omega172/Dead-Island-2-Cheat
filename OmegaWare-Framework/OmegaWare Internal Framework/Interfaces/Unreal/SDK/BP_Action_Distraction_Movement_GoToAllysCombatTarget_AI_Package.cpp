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
	 * 		Name   -> Function BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI.BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C.GetTargetActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C::GetTargetActor(class AActor** TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI.BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C.GetTargetActor");
		
		UBP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C_GetTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetActor != nullptr)
			*TargetActor = params.TargetActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI.BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C.GetTargetLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C::GetTargetLocation(struct FVector* TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI.BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C.GetTargetLocation");
		
		UBP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C_GetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI.BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C.OnBeginEarly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI.BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C.OnBeginEarly");
		
		UBP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI.BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C");
		return ptr;
	}

}


