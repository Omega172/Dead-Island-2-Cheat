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
	 * 		Name   -> PredefinedFunction ULabAssistantSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULabAssistantSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSLabAssistant.LabAssistantSettings");
		return ptr;
	}

}


