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
	 * 		Name   -> Function BP_Action_Distraction_LookAtAllysCombatTarget_AI.BP_Action_Distraction_LookAtAllysCombatTarget_AI_C.GetAllysController
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ADIAIController*                             AsDIAIController                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_LookAtAllysCombatTarget_AI_C::GetAllysController(class ADIAIController** AsDIAIController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_LookAtAllysCombatTarget_AI.BP_Action_Distraction_LookAtAllysCombatTarget_AI_C.GetAllysController");
		
		UBP_Action_Distraction_LookAtAllysCombatTarget_AI_C_GetAllysController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsDIAIController != nullptr)
			*AsDIAIController = params.AsDIAIController;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_LookAtAllysCombatTarget_AI.BP_Action_Distraction_LookAtAllysCombatTarget_AI_C.GetLookAtTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               FoundLookAtTarget                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             GetLookAtComponent                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     GetLookatLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_LookAtAllysCombatTarget_AI_C::GetLookAtTarget(bool* FoundLookAtTarget, class USceneComponent** GetLookAtComponent, struct FVector* GetLookatLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_LookAtAllysCombatTarget_AI.BP_Action_Distraction_LookAtAllysCombatTarget_AI_C.GetLookAtTarget");
		
		UBP_Action_Distraction_LookAtAllysCombatTarget_AI_C_GetLookAtTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundLookAtTarget != nullptr)
			*FoundLookAtTarget = params.FoundLookAtTarget;
		if (GetLookAtComponent != nullptr)
			*GetLookAtComponent = params.GetLookAtComponent;
		if (GetLookatLocation != nullptr)
			*GetLookatLocation = params.GetLookatLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Distraction_LookAtAllysCombatTarget_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Distraction_LookAtAllysCombatTarget_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Distraction_LookAtAllysCombatTarget_AI.BP_Action_Distraction_LookAtAllysCombatTarget_AI_C");
		return ptr;
	}

}


