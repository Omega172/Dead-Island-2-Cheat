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
	 * 		Name   -> PredefinedFunction ABP_Emergent_SimpleDirector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Emergent_SimpleDirector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Emergent_SimpleDirector.BP_Emergent_SimpleDirector_C");
		return ptr;
	}

}


