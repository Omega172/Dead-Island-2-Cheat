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
	 * 		Name   -> PredefinedFunction UPrototypeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrototypeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrototypeTools.PrototypeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrototypeToolsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrototypeToolsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrototypeTools.PrototypeToolsManager");
		return ptr;
	}

}


