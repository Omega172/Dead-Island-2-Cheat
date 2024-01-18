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
	 * 		Name   -> Function BP_Walker_InsectSwarm.BP_Walker_InsectSwarm_C.SetSwarmLocationBasedIfCrawler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Walker_InsectSwarm_C::SetSwarmLocationBasedIfCrawler(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Walker_InsectSwarm.BP_Walker_InsectSwarm_C.SetSwarmLocationBasedIfCrawler");
		
		ABP_Walker_InsectSwarm_C_SetSwarmLocationBasedIfCrawler_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Walker_InsectSwarm.BP_Walker_InsectSwarm_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Walker_InsectSwarm_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Walker_InsectSwarm.BP_Walker_InsectSwarm_C.ReceiveBeginPlay");
		
		ABP_Walker_InsectSwarm_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Walker_InsectSwarm.BP_Walker_InsectSwarm_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Walker_InsectSwarm_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Walker_InsectSwarm.BP_Walker_InsectSwarm_C.ReceiveEndPlay");
		
		ABP_Walker_InsectSwarm_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Walker_InsectSwarm.BP_Walker_InsectSwarm_C.ExecuteUbergraph_BP_Walker_InsectSwarm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Walker_InsectSwarm_C::ExecuteUbergraph_BP_Walker_InsectSwarm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Walker_InsectSwarm.BP_Walker_InsectSwarm_C.ExecuteUbergraph_BP_Walker_InsectSwarm");
		
		ABP_Walker_InsectSwarm_C_ExecuteUbergraph_BP_Walker_InsectSwarm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Walker_InsectSwarm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Walker_InsectSwarm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Walker_InsectSwarm.BP_Walker_InsectSwarm_C");
		return ptr;
	}

}


