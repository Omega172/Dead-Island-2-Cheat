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
	 * 		Name   -> Function BP_LED_Indicator.BP_LED_Indicator_C.UpdateLEDState
	 * 		Flags  -> ()
	 */
	void ABP_LED_Indicator_C::UpdateLEDState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LED_Indicator.BP_LED_Indicator_C.UpdateLEDState");
		
		ABP_LED_Indicator_C_UpdateLEDState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LED_Indicator.BP_LED_Indicator_C.OnRep_LEDState
	 * 		Flags  -> ()
	 */
	void ABP_LED_Indicator_C::OnRep_LEDState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LED_Indicator.BP_LED_Indicator_C.OnRep_LEDState");
		
		ABP_LED_Indicator_C_OnRep_LEDState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LED_Indicator.BP_LED_Indicator_C.SetEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LED_Indicator_C::SetEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LED_Indicator.BP_LED_Indicator_C.SetEnabled");
		
		ABP_LED_Indicator_C_SetEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LED_Indicator.BP_LED_Indicator_C.SetPowered
	 * 		Flags  -> ()
	 */
	void ABP_LED_Indicator_C::SetPowered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LED_Indicator.BP_LED_Indicator_C.SetPowered");
		
		ABP_LED_Indicator_C_SetPowered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LED_Indicator.BP_LED_Indicator_C.SetUnpowered
	 * 		Flags  -> ()
	 */
	void ABP_LED_Indicator_C::SetUnpowered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LED_Indicator.BP_LED_Indicator_C.SetUnpowered");
		
		ABP_LED_Indicator_C_SetUnpowered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LED_Indicator.BP_LED_Indicator_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_LED_Indicator_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LED_Indicator.BP_LED_Indicator_C.UserConstructionScript");
		
		ABP_LED_Indicator_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LED_Indicator.BP_LED_Indicator_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_LED_Indicator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LED_Indicator.BP_LED_Indicator_C.ReceiveBeginPlay");
		
		ABP_LED_Indicator_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LED_Indicator.BP_LED_Indicator_C.ExecuteUbergraph_BP_LED_Indicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LED_Indicator_C::ExecuteUbergraph_BP_LED_Indicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LED_Indicator.BP_LED_Indicator_C.ExecuteUbergraph_BP_LED_Indicator");
		
		ABP_LED_Indicator_C_ExecuteUbergraph_BP_LED_Indicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LED_Indicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LED_Indicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LED_Indicator.BP_LED_Indicator_C");
		return ptr;
	}

}


