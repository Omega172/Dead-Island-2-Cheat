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
	 * 		Name   -> Function BPC_Hazard_StimEmitter.BPC_Hazard_StimEmitter_C.CreateAndBeginStim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSCustomHazardStimParams                    StimParams                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		struct FStimID                                     StimID                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Hazard_StimEmitter_C::CreateAndBeginStim(const struct FSCustomHazardStimParams& StimParams, struct FStimID* StimID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Hazard_StimEmitter.BPC_Hazard_StimEmitter_C.CreateAndBeginStim");
		
		UBPC_Hazard_StimEmitter_C_CreateAndBeginStim_Params params {};
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
	 * 		Name   -> Function BPC_Hazard_StimEmitter.BPC_Hazard_StimEmitter_C.EndHazardStim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStimID                                     StimID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Hazard_StimEmitter_C::EndHazardStim(const struct FStimID& StimID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Hazard_StimEmitter.BPC_Hazard_StimEmitter_C.EndHazardStim");
		
		UBPC_Hazard_StimEmitter_C_EndHazardStim_Params params {};
		params.StimID = StimID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Hazard_StimEmitter.BPC_Hazard_StimEmitter_C.BeginHazardStim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSCustomHazardStimParams                    StimParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		struct FStimID                                     StimID                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Hazard_StimEmitter_C::BeginHazardStim(const struct FSCustomHazardStimParams& StimParams, struct FStimID* StimID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Hazard_StimEmitter.BPC_Hazard_StimEmitter_C.BeginHazardStim");
		
		UBPC_Hazard_StimEmitter_C_BeginHazardStim_Params params {};
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
	 * 		Name   -> PredefinedFunction UBPC_Hazard_StimEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Hazard_StimEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Hazard_StimEmitter.BPC_Hazard_StimEmitter_C");
		return ptr;
	}

}


