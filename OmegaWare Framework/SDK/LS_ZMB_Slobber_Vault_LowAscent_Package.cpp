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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function LS_ZMB_Slobber_Vault_LowAscent.SequenceDirector_C.SequenceEvent_1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USequenceDirector_C::SequenceEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LS_ZMB_Slobber_Vault_LowAscent.SequenceDirector_C.SequenceEvent_1");
		
		USequenceDirector_C_SequenceEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequenceDirector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceDirector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LS_ZMB_Slobber_Vault_LowAscent.SequenceDirector_C");
		return ptr;
	}

}


