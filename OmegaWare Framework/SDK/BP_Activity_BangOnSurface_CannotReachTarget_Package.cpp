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
	 * 		Name   -> Function BP_Activity_BangOnSurface_CannotReachTarget.BP_Activity_BangOnSurface_CannotReachTarget_C.OnActivityFinishedDestroySelf
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActivityEndedReason                               EndReason                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Activity_BangOnSurface_CannotReachTarget_C::OnActivityFinishedDestroySelf(class AActivityActor* Activity, EActivityEndedReason EndReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Activity_BangOnSurface_CannotReachTarget.BP_Activity_BangOnSurface_CannotReachTarget_C.OnActivityFinishedDestroySelf");
		
		ABP_Activity_BangOnSurface_CannotReachTarget_C_OnActivityFinishedDestroySelf_Params params {};
		params.Activity = Activity;
		params.EndReason = EndReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Activity_BangOnSurface_CannotReachTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Activity_BangOnSurface_CannotReachTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Activity_BangOnSurface_CannotReachTarget.BP_Activity_BangOnSurface_CannotReachTarget_C");
		return ptr;
	}

}


