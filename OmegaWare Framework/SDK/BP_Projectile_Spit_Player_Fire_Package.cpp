﻿/**
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
	 * 		Name   -> Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.EnableHoming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Spit_Player_Fire_C::EnableHoming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.EnableHoming");
		
		ABP_Projectile_Spit_Player_Fire_C_EnableHoming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.Initialise
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Projectile_Spit_Player_Fire_C::Initialise(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.Initialise");
		
		ABP_Projectile_Spit_Player_Fire_C_Initialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Projectile_Spit_Player_Fire_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.ReceiveBeginPlay");
		
		ABP_Projectile_Spit_Player_Fire_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Spit_Player_Fire_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.ReceiveEndPlay");
		
		ABP_Projectile_Spit_Player_Fire_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.ExecuteUbergraph_BP_Projectile_Spit_Player_Fire
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Spit_Player_Fire_C::ExecuteUbergraph_BP_Projectile_Spit_Player_Fire(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.ExecuteUbergraph_BP_Projectile_Spit_Player_Fire");
		
		ABP_Projectile_Spit_Player_Fire_C_ExecuteUbergraph_BP_Projectile_Spit_Player_Fire_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Projectile_Spit_Player_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Projectile_Spit_Player_Fire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C");
		return ptr;
	}

}


