﻿/**
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
	 * 		Name   -> PredefinedFunction UBP_StatGatherer_PointOfInterest_Hol_HollywoodMetro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_StatGatherer_PointOfInterest_Hol_HollywoodMetro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StatGatherer_PointOfInterest_Hol_HollywoodMetro.BP_StatGatherer_PointOfInterest_Hol_HollywoodMetro_C");
		return ptr;
	}

}

