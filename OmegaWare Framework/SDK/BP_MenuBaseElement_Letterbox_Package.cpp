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
	 * 		Name   -> Function BP_MenuBaseElement_Letterbox.BP_MenuBaseElement_Letterbox_C.BlueprintOpen
	 * 		Flags  -> ()
	 */
	void UBP_MenuBaseElement_Letterbox_C::BlueprintOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuBaseElement_Letterbox.BP_MenuBaseElement_Letterbox_C.BlueprintOpen");
		
		UBP_MenuBaseElement_Letterbox_C_BlueprintOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MenuBaseElement_Letterbox.BP_MenuBaseElement_Letterbox_C.ExecuteUbergraph_BP_MenuBaseElement_Letterbox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MenuBaseElement_Letterbox_C::ExecuteUbergraph_BP_MenuBaseElement_Letterbox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuBaseElement_Letterbox.BP_MenuBaseElement_Letterbox_C.ExecuteUbergraph_BP_MenuBaseElement_Letterbox");
		
		UBP_MenuBaseElement_Letterbox_C_ExecuteUbergraph_BP_MenuBaseElement_Letterbox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MenuBaseElement_Letterbox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MenuBaseElement_Letterbox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuBaseElement_Letterbox.BP_MenuBaseElement_Letterbox_C");
		return ptr;
	}

}


