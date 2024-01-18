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
	 * 		Name   -> PredefinedFunction UBP_BoolFiniteOptionProxy_EnabledDisabled_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BoolFiniteOptionProxy_EnabledDisabled_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BoolFiniteOptionProxy_EnabledDisabled.BP_BoolFiniteOptionProxy_EnabledDisabled_C");
		return ptr;
	}

}


