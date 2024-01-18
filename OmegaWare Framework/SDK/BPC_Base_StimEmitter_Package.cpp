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
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.BeginAndEndStim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStimTemplate*                               StimTemplate                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSStimOverrideParams                        StimParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStimID                                     StimID                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_StimEmitter_C::BeginAndEndStim(class UStimTemplate* StimTemplate, const struct FSStimOverrideParams& StimParams, float Duration, struct FStimID* StimID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.BeginAndEndStim");
		
		UBPC_Base_StimEmitter_C_BeginAndEndStim_Params params {};
		params.StimTemplate = StimTemplate;
		params.StimParams = StimParams;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StimID != nullptr)
			*StimID = params.StimID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.EndStim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStimID                                     StimID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_StimEmitter_C::EndStim(const struct FStimID& StimID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.EndStim");
		
		UBPC_Base_StimEmitter_C_EndStim_Params params {};
		params.StimID = StimID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.BeginStim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStimTemplate*                               StimTemplate                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSStimOverrideParams                        StimParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		struct FStimID                                     StimID                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_StimEmitter_C::BeginStim(class UStimTemplate* StimTemplate, const struct FSStimOverrideParams& StimParams, struct FStimID* StimID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.BeginStim");
		
		UBPC_Base_StimEmitter_C_BeginStim_Params params {};
		params.StimTemplate = StimTemplate;
		params.StimParams = StimParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StimID != nullptr)
			*StimID = params.StimID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_StimEmitter_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ReceiveEndPlay");
		
		UBPC_Base_StimEmitter_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ExecuteUbergraph_BPC_Base_StimEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_StimEmitter_C::ExecuteUbergraph_BPC_Base_StimEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ExecuteUbergraph_BPC_Base_StimEmitter");
		
		UBPC_Base_StimEmitter_C_ExecuteUbergraph_BPC_Base_StimEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Base_StimEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Base_StimEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Base_StimEmitter.BPC_Base_StimEmitter_C");
		return ptr;
	}

}


