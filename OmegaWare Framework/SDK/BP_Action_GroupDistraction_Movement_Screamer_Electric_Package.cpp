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
	 * 		Name   -> Function BP_Action_GroupDistraction_Movement_Screamer_Electric.BP_Action_GroupDistraction_Movement_Screamer_Electric_C.GetMoveTargetDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UBP_Action_GroupDistraction_Movement_Screamer_Electric_C::GetMoveTargetDirection(const struct FVector& From)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_GroupDistraction_Movement_Screamer_Electric.BP_Action_GroupDistraction_Movement_Screamer_Electric_C.GetMoveTargetDirection");
		
		UBP_Action_GroupDistraction_Movement_Screamer_Electric_C_GetMoveTargetDirection_Params params {};
		params.From = From;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_GroupDistraction_Movement_Screamer_Electric_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_GroupDistraction_Movement_Screamer_Electric_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_GroupDistraction_Movement_Screamer_Electric.BP_Action_GroupDistraction_Movement_Screamer_Electric_C");
		return ptr;
	}

}


