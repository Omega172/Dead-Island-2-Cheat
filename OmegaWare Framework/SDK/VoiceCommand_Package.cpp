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
	 * 		Name   -> Function VoiceCommand.VoiceCommandHandlerManager.IsDoingUserInitiatedCapture
	 * 		Flags  -> ()
	 */
	bool AVoiceCommandHandlerManager::IsDoingUserInitiatedCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VoiceCommand.VoiceCommandHandlerManager.IsDoingUserInitiatedCapture");
		
		AVoiceCommandHandlerManager_IsDoingUserInitiatedCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVoiceCommandHandlerManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoiceCommandHandlerManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoiceCommand.VoiceCommandHandlerManager");
		return ptr;
	}

}


