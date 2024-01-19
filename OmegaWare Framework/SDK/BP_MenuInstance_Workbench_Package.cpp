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
	 * 		Name   -> Function BP_MenuInstance_Workbench.BP_MenuInstance_Workbench_C.BlueprintOpenMenu
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_MenuInstance_Workbench_C::BlueprintOpenMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuInstance_Workbench.BP_MenuInstance_Workbench_C.BlueprintOpenMenu");
		
		UBP_MenuInstance_Workbench_C_BlueprintOpenMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_MenuInstance_Workbench.BP_MenuInstance_Workbench_C.BlueprintCloseMenu
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_MenuInstance_Workbench_C::BlueprintCloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuInstance_Workbench.BP_MenuInstance_Workbench_C.BlueprintCloseMenu");
		
		UBP_MenuInstance_Workbench_C_BlueprintCloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_MenuInstance_Workbench.BP_MenuInstance_Workbench_C.OnLocalPlayerFailStateSet_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFailState*                                  FailState                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MenuInstance_Workbench_C::OnLocalPlayerFailStateSet_Event(class UFailState* FailState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuInstance_Workbench.BP_MenuInstance_Workbench_C.OnLocalPlayerFailStateSet_Event");
		
		UBP_MenuInstance_Workbench_C_OnLocalPlayerFailStateSet_Event_Params params {};
		params.FailState = FailState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_MenuInstance_Workbench.BP_MenuInstance_Workbench_C.ExecuteUbergraph_BP_MenuInstance_Workbench
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MenuInstance_Workbench_C::ExecuteUbergraph_BP_MenuInstance_Workbench(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuInstance_Workbench.BP_MenuInstance_Workbench_C.ExecuteUbergraph_BP_MenuInstance_Workbench");
		
		UBP_MenuInstance_Workbench_C_ExecuteUbergraph_BP_MenuInstance_Workbench_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MenuInstance_Workbench_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MenuInstance_Workbench_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuInstance_Workbench.BP_MenuInstance_Workbench_C");
		return ptr;
	}

}


