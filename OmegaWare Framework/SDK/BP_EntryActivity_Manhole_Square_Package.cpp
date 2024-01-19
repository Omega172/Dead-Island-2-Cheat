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
	 * 		Name   -> Function BP_EntryActivity_Manhole_Square.BP_EntryActivity_Manhole_Square_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EntryActivity_Manhole_Square_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EntryActivity_Manhole_Square.BP_EntryActivity_Manhole_Square_C.UserConstructionScript");
		
		ABP_EntryActivity_Manhole_Square_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EntryActivity_Manhole_Square_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EntryActivity_Manhole_Square_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EntryActivity_Manhole_Square.BP_EntryActivity_Manhole_Square_C");
		return ptr;
	}

}


