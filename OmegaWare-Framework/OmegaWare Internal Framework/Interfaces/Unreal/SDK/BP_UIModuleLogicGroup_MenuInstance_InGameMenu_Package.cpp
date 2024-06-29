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
	 * 		Name   -> PredefinedFunction UBP_UIModuleLogicGroup_MenuInstance_InGameMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UIModuleLogicGroup_MenuInstance_InGameMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UIModuleLogicGroup_MenuInstance_InGameMenu.BP_UIModuleLogicGroup_MenuInstance_InGameMenu_C");
		return ptr;
	}

}


