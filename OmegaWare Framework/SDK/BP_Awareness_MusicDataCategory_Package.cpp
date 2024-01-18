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
	 * 		Name   -> PredefinedFunction UBP_Awareness_MusicDataCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Awareness_MusicDataCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Awareness_MusicDataCategory.BP_Awareness_MusicDataCategory_C");
		return ptr;
	}

}


