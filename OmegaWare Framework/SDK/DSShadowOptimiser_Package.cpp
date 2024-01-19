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
	 * 		Name   -> PredefinedFunction AShadowOptimiserBuildVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShadowOptimiserBuildVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSShadowOptimiser.ShadowOptimiserBuildVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShadowOptimiserBuildVolumeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShadowOptimiserBuildVolumeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSShadowOptimiser.ShadowOptimiserBuildVolumeComponent");
		return ptr;
	}

}


