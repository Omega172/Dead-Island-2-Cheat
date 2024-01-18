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
	 * 		Name   -> PredefinedFunction UBP_CompassBarIcon_CoopPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CompassBarIcon_CoopPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CompassBarIcon_CoopPlayer.BP_CompassBarIcon_CoopPlayer_C");
		return ptr;
	}

}


