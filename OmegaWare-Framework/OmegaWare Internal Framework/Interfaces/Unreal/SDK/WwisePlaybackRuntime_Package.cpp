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
	 * 		Name   -> PredefinedFunction UWwiseAlexaAudioComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseAlexaAudioComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwisePlaybackRuntime.WwiseAlexaAudioComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClefWwisePlaybackConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClefWwisePlaybackConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwisePlaybackRuntime.ClefWwisePlaybackConfig");
		return ptr;
	}

}


