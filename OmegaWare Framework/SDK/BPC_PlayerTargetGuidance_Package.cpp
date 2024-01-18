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
	 * 		Name   -> Function BPC_PlayerTargetGuidance.BPC_PlayerTargetGuidance_C.DisableAimGuildance
	 * 		Flags  -> ()
	 */
	void UBPC_PlayerTargetGuidance_C::DisableAimGuildance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetGuidance.BPC_PlayerTargetGuidance_C.DisableAimGuildance");
		
		UBPC_PlayerTargetGuidance_C_DisableAimGuildance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerTargetGuidance.BPC_PlayerTargetGuidance_C.EnableAimGuidance
	 * 		Flags  -> ()
	 */
	void UBPC_PlayerTargetGuidance_C::EnableAimGuidance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetGuidance.BPC_PlayerTargetGuidance_C.EnableAimGuidance");
		
		UBPC_PlayerTargetGuidance_C_EnableAimGuidance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerTargetGuidance.BPC_PlayerTargetGuidance_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_PlayerTargetGuidance_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetGuidance.BPC_PlayerTargetGuidance_C.ReceiveBeginPlay");
		
		UBPC_PlayerTargetGuidance_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerTargetGuidance.BPC_PlayerTargetGuidance_C.ExecuteUbergraph_BPC_PlayerTargetGuidance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerTargetGuidance_C::ExecuteUbergraph_BPC_PlayerTargetGuidance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetGuidance.BPC_PlayerTargetGuidance_C.ExecuteUbergraph_BPC_PlayerTargetGuidance");
		
		UBPC_PlayerTargetGuidance_C_ExecuteUbergraph_BPC_PlayerTargetGuidance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_PlayerTargetGuidance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_PlayerTargetGuidance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_PlayerTargetGuidance.BPC_PlayerTargetGuidance_C");
		return ptr;
	}

}


