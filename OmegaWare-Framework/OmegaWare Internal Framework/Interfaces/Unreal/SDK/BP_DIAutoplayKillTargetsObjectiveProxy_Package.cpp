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
	 * 		Name   -> Function BP_DIAutoplayKillTargetsObjectiveProxy.BP_DIAutoplayKillTargetsObjectiveProxy_C.GetTargetActor
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	class AActor* UBP_DIAutoplayKillTargetsObjectiveProxy_C::GetTargetActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DIAutoplayKillTargetsObjectiveProxy.BP_DIAutoplayKillTargetsObjectiveProxy_C.GetTargetActor");
		
		UBP_DIAutoplayKillTargetsObjectiveProxy_C_GetTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DIAutoplayKillTargetsObjectiveProxy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DIAutoplayKillTargetsObjectiveProxy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DIAutoplayKillTargetsObjectiveProxy.BP_DIAutoplayKillTargetsObjectiveProxy_C");
		return ptr;
	}

}


