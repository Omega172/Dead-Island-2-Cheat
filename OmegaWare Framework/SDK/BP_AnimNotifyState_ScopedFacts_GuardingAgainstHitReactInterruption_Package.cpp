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
	 * 		Name   -> Function BP_AnimNotifyState_ScopedFacts_GuardingAgainstHitReactInterruption.BP_AnimNotifyState_ScopedFacts_GuardingAgainstHitReactInterruption_C.GetNotifyName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UBP_AnimNotifyState_ScopedFacts_GuardingAgainstHitReactInterruption_C::GetNotifyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_ScopedFacts_GuardingAgainstHitReactInterruption.BP_AnimNotifyState_ScopedFacts_GuardingAgainstHitReactInterruption_C.GetNotifyName");
		
		UBP_AnimNotifyState_ScopedFacts_GuardingAgainstHitReactInterruption_C_GetNotifyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AnimNotifyState_ScopedFacts_GuardingAgainstHitReactInterruption_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AnimNotifyState_ScopedFacts_GuardingAgainstHitReactInterruption_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyState_ScopedFacts_GuardingAgainstHitReactInterruption.BP_AnimNotifyState_ScopedFacts_GuardingAgainstHitReactInterruption_C");
		return ptr;
	}

}


