﻿/**
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
	 * 		Name   -> Function BP_MenuInstance_Vendor.BP_MenuInstance_Vendor_C.BlueprintOpenMenu
	 * 		Flags  -> ()
	 */
	void UBP_MenuInstance_Vendor_C::BlueprintOpenMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuInstance_Vendor.BP_MenuInstance_Vendor_C.BlueprintOpenMenu");
		
		UBP_MenuInstance_Vendor_C_BlueprintOpenMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MenuInstance_Vendor.BP_MenuInstance_Vendor_C.BlueprintCloseMenu
	 * 		Flags  -> ()
	 */
	void UBP_MenuInstance_Vendor_C::BlueprintCloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuInstance_Vendor.BP_MenuInstance_Vendor_C.BlueprintCloseMenu");
		
		UBP_MenuInstance_Vendor_C_BlueprintCloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MenuInstance_Vendor.BP_MenuInstance_Vendor_C.OnLocalPlayerFailStateSet_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFailState*                                  FailState                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MenuInstance_Vendor_C::OnLocalPlayerFailStateSet_Event(class UFailState* FailState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuInstance_Vendor.BP_MenuInstance_Vendor_C.OnLocalPlayerFailStateSet_Event");
		
		UBP_MenuInstance_Vendor_C_OnLocalPlayerFailStateSet_Event_Params params {};
		params.FailState = FailState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MenuInstance_Vendor.BP_MenuInstance_Vendor_C.ExecuteUbergraph_BP_MenuInstance_Vendor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MenuInstance_Vendor_C::ExecuteUbergraph_BP_MenuInstance_Vendor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuInstance_Vendor.BP_MenuInstance_Vendor_C.ExecuteUbergraph_BP_MenuInstance_Vendor");
		
		UBP_MenuInstance_Vendor_C_ExecuteUbergraph_BP_MenuInstance_Vendor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MenuInstance_Vendor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MenuInstance_Vendor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuInstance_Vendor.BP_MenuInstance_Vendor_C");
		return ptr;
	}

}


