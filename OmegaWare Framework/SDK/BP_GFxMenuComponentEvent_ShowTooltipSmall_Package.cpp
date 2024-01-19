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
	 * 		Name   -> PredefinedFunction UBP_GFxMenuComponentEvent_ShowTooltipSmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GFxMenuComponentEvent_ShowTooltipSmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GFxMenuComponentEvent_ShowTooltipSmall.BP_GFxMenuComponentEvent_ShowTooltipSmall_C");
		return ptr;
	}

}


