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
	 * 		Name   -> Function DSTelemetryGame.PacingVolume.SetExpectedPacing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPacingValue                                       Pacing                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APacingVolume::SetExpectedPacing(EPacingValue Pacing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetryGame.PacingVolume.SetExpectedPacing");
		
		APacingVolume_SetExpectedPacing_Params params {};
		params.Pacing = Pacing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APacingVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APacingVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSTelemetryGame.PacingVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTelemetryGameSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTelemetryGameSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSTelemetryGame.TelemetryGameSettings");
		return ptr;
	}

}


