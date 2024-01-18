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
	 * 		Name   -> Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.TogglePassiveStim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStimTemplate*                               StimTemplate                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Human_StimEmitter_C::TogglePassiveStim(class UStimTemplate* StimTemplate, bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.TogglePassiveStim");
		
		UBPC_Human_StimEmitter_C_TogglePassiveStim_Params params {};
		params.StimTemplate = StimTemplate;
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.DisablePassiveStims
	 * 		Flags  -> ()
	 */
	void UBPC_Human_StimEmitter_C::DisablePassiveStims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.DisablePassiveStims");
		
		UBPC_Human_StimEmitter_C_DisablePassiveStims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.EnablePassiveStims
	 * 		Flags  -> ()
	 */
	void UBPC_Human_StimEmitter_C::EnablePassiveStims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.EnablePassiveStims");
		
		UBPC_Human_StimEmitter_C_EnablePassiveStims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.UnbindListeners
	 * 		Flags  -> ()
	 */
	void UBPC_Human_StimEmitter_C::UnbindListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.UnbindListeners");
		
		UBPC_Human_StimEmitter_C_UnbindListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.BindListeners
	 * 		Flags  -> ()
	 */
	void UBPC_Human_StimEmitter_C::BindListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.BindListeners");
		
		UBPC_Human_StimEmitter_C_BindListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.OnSurvivorStimExpressionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Human_StimEmitter_C::OnSurvivorStimExpressionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.OnSurvivorStimExpressionChanged");
		
		UBPC_Human_StimEmitter_C_OnSurvivorStimExpressionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_Human_StimEmitter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.ReceiveBeginPlay");
		
		UBPC_Human_StimEmitter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Human_StimEmitter_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.ReceiveEndPlay");
		
		UBPC_Human_StimEmitter_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.ExecuteUbergraph_BPC_Human_StimEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Human_StimEmitter_C::ExecuteUbergraph_BPC_Human_StimEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Human_StimEmitter.BPC_Human_StimEmitter_C.ExecuteUbergraph_BPC_Human_StimEmitter");
		
		UBPC_Human_StimEmitter_C_ExecuteUbergraph_BPC_Human_StimEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Human_StimEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Human_StimEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Human_StimEmitter.BPC_Human_StimEmitter_C");
		return ptr;
	}

}


