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
	 * 		Name   -> PredefinedFunction UClefAudioPlaybackConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClefAudioPlaybackConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClefAudioPlaybackRuntime.ClefAudioPlaybackConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClefAudioPlaybackStreamerSoundWave.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClefAudioPlaybackStreamerSoundWave::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClefAudioPlaybackRuntime.ClefAudioPlaybackStreamerSoundWave");
		return ptr;
	}

}


