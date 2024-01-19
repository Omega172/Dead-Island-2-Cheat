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
	 * 		Name   -> PredefinedFunction UFSR2Settings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFSR2Settings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSR2TemporalUpscaling.FSR2Settings");
		return ptr;
	}

}


