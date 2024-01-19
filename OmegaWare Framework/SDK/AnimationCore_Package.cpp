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
	 * 		Name   -> PredefinedFunction UAnimationDataSourceRegistry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationDataSourceRegistry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationCore.AnimationDataSourceRegistry");
		return ptr;
	}

}


