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
	 * 		Name   -> PredefinedFunction UBP_NavQueryFilter_Runner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_NavQueryFilter_Runner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NavQueryFilter_Runner.BP_NavQueryFilter_Runner_C");
		return ptr;
	}

}


