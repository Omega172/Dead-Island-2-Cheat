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
	 * 		Name   -> PredefinedFunction ABP_HitReactNetworkCoordinator_Shared_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HitReactNetworkCoordinator_Shared_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HitReactNetworkCoordinator_Shared.BP_HitReactNetworkCoordinator_Shared_C");
		return ptr;
	}

}


