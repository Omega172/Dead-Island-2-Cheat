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
	 * 		Name   -> Function BP_ActorGroupFilter_HostileToPlayersOnly.BP_ActorGroupFilter_HostileToPlayersOnly_C.CanBeAdded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_ActorGroupFilter_HostileToPlayersOnly_C::CanBeAdded(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActorGroupFilter_HostileToPlayersOnly.BP_ActorGroupFilter_HostileToPlayersOnly_C.CanBeAdded");
		
		UBP_ActorGroupFilter_HostileToPlayersOnly_C_CanBeAdded_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ActorGroupFilter_HostileToPlayersOnly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ActorGroupFilter_HostileToPlayersOnly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActorGroupFilter_HostileToPlayersOnly.BP_ActorGroupFilter_HostileToPlayersOnly_C");
		return ptr;
	}

}


