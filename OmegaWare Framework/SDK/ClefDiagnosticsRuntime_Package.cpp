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
	 * 		Name   -> PredefinedFunction UDiagnosticsSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiagnosticsSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClefDiagnosticsRuntime.DiagnosticsSubsystem");
		return ptr;
	}

}


