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
	 * 		Name   -> Function BP_BTTask_GetDirectionBetweenActors.BP_BTTask_GetDirectionBetweenActors_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BTTask_GetDirectionBetweenActors_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BTTask_GetDirectionBetweenActors.BP_BTTask_GetDirectionBetweenActors_C.ReceiveExecuteAI");
		
		UBP_BTTask_GetDirectionBetweenActors_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BTTask_GetDirectionBetweenActors.BP_BTTask_GetDirectionBetweenActors_C.ExecuteUbergraph_BP_BTTask_GetDirectionBetweenActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BTTask_GetDirectionBetweenActors_C::ExecuteUbergraph_BP_BTTask_GetDirectionBetweenActors(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BTTask_GetDirectionBetweenActors.BP_BTTask_GetDirectionBetweenActors_C.ExecuteUbergraph_BP_BTTask_GetDirectionBetweenActors");
		
		UBP_BTTask_GetDirectionBetweenActors_C_ExecuteUbergraph_BP_BTTask_GetDirectionBetweenActors_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BTTask_GetDirectionBetweenActors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BTTask_GetDirectionBetweenActors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTTask_GetDirectionBetweenActors.BP_BTTask_GetDirectionBetweenActors_C");
		return ptr;
	}

}


