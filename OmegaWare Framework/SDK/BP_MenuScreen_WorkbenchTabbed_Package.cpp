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
	 * 		Name   -> Function BP_MenuScreen_WorkbenchTabbed.BP_MenuScreen_WorkbenchTabbed_C.BlueprintLeaveScreen
	 * 		Flags  -> ()
	 */
	void UBP_MenuScreen_WorkbenchTabbed_C::BlueprintLeaveScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuScreen_WorkbenchTabbed.BP_MenuScreen_WorkbenchTabbed_C.BlueprintLeaveScreen");
		
		UBP_MenuScreen_WorkbenchTabbed_C_BlueprintLeaveScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MenuScreen_WorkbenchTabbed.BP_MenuScreen_WorkbenchTabbed_C.ExecuteUbergraph_BP_MenuScreen_WorkbenchTabbed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MenuScreen_WorkbenchTabbed_C::ExecuteUbergraph_BP_MenuScreen_WorkbenchTabbed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuScreen_WorkbenchTabbed.BP_MenuScreen_WorkbenchTabbed_C.ExecuteUbergraph_BP_MenuScreen_WorkbenchTabbed");
		
		UBP_MenuScreen_WorkbenchTabbed_C_ExecuteUbergraph_BP_MenuScreen_WorkbenchTabbed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MenuScreen_WorkbenchTabbed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MenuScreen_WorkbenchTabbed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuScreen_WorkbenchTabbed.BP_MenuScreen_WorkbenchTabbed_C");
		return ptr;
	}

}


