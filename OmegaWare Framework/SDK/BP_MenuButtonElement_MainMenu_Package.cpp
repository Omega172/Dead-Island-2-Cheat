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
	 * 		Name   -> Function BP_MenuButtonElement_MainMenu.BP_MenuButtonElement_MainMenu_C.BlueprintOpen
	 * 		Flags  -> ()
	 */
	void UBP_MenuButtonElement_MainMenu_C::BlueprintOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuButtonElement_MainMenu.BP_MenuButtonElement_MainMenu_C.BlueprintOpen");
		
		UBP_MenuButtonElement_MainMenu_C_BlueprintOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MenuButtonElement_MainMenu.BP_MenuButtonElement_MainMenu_C.ExecuteUbergraph_BP_MenuButtonElement_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MenuButtonElement_MainMenu_C::ExecuteUbergraph_BP_MenuButtonElement_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuButtonElement_MainMenu.BP_MenuButtonElement_MainMenu_C.ExecuteUbergraph_BP_MenuButtonElement_MainMenu");
		
		UBP_MenuButtonElement_MainMenu_C_ExecuteUbergraph_BP_MenuButtonElement_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MenuButtonElement_MainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MenuButtonElement_MainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuButtonElement_MainMenu.BP_MenuButtonElement_MainMenu_C");
		return ptr;
	}

}


