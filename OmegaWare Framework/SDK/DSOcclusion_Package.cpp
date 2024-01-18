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
	 * 		Name   -> PredefinedFunction ABlocker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABlocker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSOcclusion.Blocker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARuntimeBlocker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARuntimeBlocker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSOcclusion.RuntimeBlocker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlockerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlockerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSOcclusion.BlockerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URuntimeBlockerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URuntimeBlockerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSOcclusion.RuntimeBlockerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADSOcclusionLevelSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADSOcclusionLevelSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSOcclusion.DSOcclusionLevelSettings");
		return ptr;
	}

}


