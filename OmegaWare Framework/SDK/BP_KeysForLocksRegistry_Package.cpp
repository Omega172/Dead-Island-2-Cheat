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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_KeysForLocksRegistry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_KeysForLocksRegistry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_KeysForLocksRegistry.BP_KeysForLocksRegistry_C");
		return ptr;
	}

}


