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
	 * 		Name   -> PredefinedFunction UBP_AgentRemovalHandler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AgentRemovalHandler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AgentRemovalHandler.BP_AgentRemovalHandler_C");
		return ptr;
	}

}


