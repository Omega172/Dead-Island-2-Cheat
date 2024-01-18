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
	 * 		Name   -> Function BP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI.BP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C.GetTargetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C::GetTargetLocation(struct FVector* TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI.BP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C.GetTargetLocation");
		
		UBP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C_GetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI.BP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C.GetTargetActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C::GetTargetActor(class AActor** TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI.BP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C.GetTargetActor");
		
		UBP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C_GetTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetActor != nullptr)
			*TargetActor = params.TargetActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI.BP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C");
		return ptr;
	}

}


