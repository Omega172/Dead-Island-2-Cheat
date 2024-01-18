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
	 * 		Name   -> Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.TickVariables
	 * 		Flags  -> ()
	 */
	void UBPC_PostProcess_Reticle_C::TickVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.TickVariables");
		
		UBPC_PostProcess_Reticle_C_TickVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.InitVariables
	 * 		Flags  -> ()
	 */
	void UBPC_PostProcess_Reticle_C::InitVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.InitVariables");
		
		UBPC_PostProcess_Reticle_C_InitVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.Set PostProcess
	 * 		Flags  -> ()
	 */
	void UBPC_PostProcess_Reticle_C::SetPostProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.Set PostProcess");
		
		UBPC_PostProcess_Reticle_C_SetPostProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_PostProcess_Reticle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.ReceiveBeginPlay");
		
		UBPC_PostProcess_Reticle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PostProcess_Reticle_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.ReceiveTick");
		
		UBPC_PostProcess_Reticle_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PostProcess_Reticle_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.ReceiveEndPlay");
		
		UBPC_PostProcess_Reticle_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.ExecuteUbergraph_BPC_PostProcess_Reticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PostProcess_Reticle_C::ExecuteUbergraph_BPC_PostProcess_Reticle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.ExecuteUbergraph_BPC_PostProcess_Reticle");
		
		UBPC_PostProcess_Reticle_C_ExecuteUbergraph_BPC_PostProcess_Reticle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_PostProcess_Reticle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_PostProcess_Reticle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C");
		return ptr;
	}

}


