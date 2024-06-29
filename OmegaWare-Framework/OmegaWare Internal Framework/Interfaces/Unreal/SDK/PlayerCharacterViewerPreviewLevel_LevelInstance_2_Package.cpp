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
	 * 		Name   -> PredefinedFunction APlayerCharacterViewerPreviewLevel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerCharacterViewerPreviewLevel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCharacterViewerPreviewLevel_LevelInstance_2.PlayerCharacterViewerPreviewLevel_C");
		return ptr;
	}

}


