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
	 * 		Name   -> Function BP_Feasting_Meatpile.BP_Feasting_Meatpile_C.RemoveFromDespawnManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Feasting_Meatpile_C::RemoveFromDespawnManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Feasting_Meatpile.BP_Feasting_Meatpile_C.RemoveFromDespawnManager");
		
		ABP_Feasting_Meatpile_C_RemoveFromDespawnManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Feasting_Meatpile.BP_Feasting_Meatpile_C.AddToDespawnManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Feasting_Meatpile_C::AddToDespawnManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Feasting_Meatpile.BP_Feasting_Meatpile_C.AddToDespawnManager");
		
		ABP_Feasting_Meatpile_C_AddToDespawnManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Feasting_Meatpile.BP_Feasting_Meatpile_C.SetDecalFadeOut
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              StartDelay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Feasting_Meatpile_C::SetDecalFadeOut(float StartDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Feasting_Meatpile.BP_Feasting_Meatpile_C.SetDecalFadeOut");
		
		ABP_Feasting_Meatpile_C_SetDecalFadeOut_Params params {};
		params.StartDelay = StartDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Feasting_Meatpile.BP_Feasting_Meatpile_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Feasting_Meatpile_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Feasting_Meatpile.BP_Feasting_Meatpile_C.UserConstructionScript");
		
		ABP_Feasting_Meatpile_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Feasting_Meatpile.BP_Feasting_Meatpile_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Feasting_Meatpile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Feasting_Meatpile.BP_Feasting_Meatpile_C.ReceiveBeginPlay");
		
		ABP_Feasting_Meatpile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Feasting_Meatpile.BP_Feasting_Meatpile_C.ExecuteUbergraph_BP_Feasting_Meatpile
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Feasting_Meatpile_C::ExecuteUbergraph_BP_Feasting_Meatpile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Feasting_Meatpile.BP_Feasting_Meatpile_C.ExecuteUbergraph_BP_Feasting_Meatpile");
		
		ABP_Feasting_Meatpile_C_ExecuteUbergraph_BP_Feasting_Meatpile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Feasting_Meatpile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Feasting_Meatpile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Feasting_Meatpile.BP_Feasting_Meatpile_C");
		return ptr;
	}

}


