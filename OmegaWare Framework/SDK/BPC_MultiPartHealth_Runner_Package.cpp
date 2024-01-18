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
	 * 		Name   -> PredefinedFunction UBPC_MultiPartHealth_Runner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_MultiPartHealth_Runner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MultiPartHealth_Runner.BPC_MultiPartHealth_Runner_C");
		return ptr;
	}

}


