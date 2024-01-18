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
	 * 		Name   -> Function Tutorial_BP_Interface.Tutorial_BP_Interface_C.TutorialSampleFunction
	 * 		Flags  -> ()
	 */
	void UTutorial_BP_Interface_C::TutorialSampleFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial_BP_Interface.Tutorial_BP_Interface_C.TutorialSampleFunction");
		
		UTutorial_BP_Interface_C_TutorialSampleFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorial_BP_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorial_BP_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_BP_Interface.Tutorial_BP_Interface_C");
		return ptr;
	}

}


