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
	 * 		Name   -> PredefinedFunction UBP_ActionPlayer_CoopSequenceCutscene_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ActionPlayer_CoopSequenceCutscene_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActionPlayer_CoopSequenceCutscene.BP_ActionPlayer_CoopSequenceCutscene_C");
		return ptr;
	}

}


