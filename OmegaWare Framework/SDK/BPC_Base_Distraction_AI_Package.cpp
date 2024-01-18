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
	 * 		Name   -> Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.HasValidDistractionWander
	 * 		Flags  -> ()
	 */
	bool UBPC_Base_Distraction_AI_C::HasValidDistractionWander()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.HasValidDistractionWander");
		
		UBPC_Base_Distraction_AI_C_HasValidDistractionWander_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.GetHighestDistractionWander
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGuid                                       DistractionWanderID                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSDistractionWanderParams                   Interest                                                   (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBPC_Base_Distraction_AI_C::GetHighestDistractionWander(bool* Success, struct FGuid* DistractionWanderID, struct FSDistractionWanderParams* Interest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.GetHighestDistractionWander");
		
		UBPC_Base_Distraction_AI_C_GetHighestDistractionWander_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DistractionWanderID != nullptr)
			*DistractionWanderID = params.DistractionWanderID;
		if (Interest != nullptr)
			*Interest = params.Interest;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.RemoveDistractionWander
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       WanderInterestID                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_Distraction_AI_C::RemoveDistractionWander(const struct FGuid& WanderInterestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.RemoveDistractionWander");
		
		UBPC_Base_Distraction_AI_C_RemoveDistractionWander_Params params {};
		params.WanderInterestID = WanderInterestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.AddDistractionWander
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSDistractionWanderParams                   InterestParams                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		struct FGuid                                       WanderInterestID                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_Distraction_AI_C::AddDistractionWander(const struct FSDistractionWanderParams& InterestParams, struct FGuid* WanderInterestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.AddDistractionWander");
		
		UBPC_Base_Distraction_AI_C_AddDistractionWander_Params params {};
		params.InterestParams = InterestParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WanderInterestID != nullptr)
			*WanderInterestID = params.WanderInterestID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.GetStimGlobalCooldownTimeStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStimTemplate*                               StimTemplate                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBPC_Base_Distraction_AI_C::GetStimGlobalCooldownTimeStamp(class UStimTemplate* StimTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.GetStimGlobalCooldownTimeStamp");
		
		UBPC_Base_Distraction_AI_C_GetStimGlobalCooldownTimeStamp_Params params {};
		params.StimTemplate = StimTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.AddStimToGlobalCooldownList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStimTemplate*                               StimTemplate                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Timestamp                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_Distraction_AI_C::AddStimToGlobalCooldownList(class UStimTemplate* StimTemplate, float Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.AddStimToGlobalCooldownList");
		
		UBPC_Base_Distraction_AI_C_AddStimToGlobalCooldownList_Params params {};
		params.StimTemplate = StimTemplate;
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_Base_Distraction_AI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.ReceiveBeginPlay");
		
		UBPC_Base_Distraction_AI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.ExecuteUbergraph_BPC_Base_Distraction_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_Distraction_AI_C::ExecuteUbergraph_BPC_Base_Distraction_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.ExecuteUbergraph_BPC_Base_Distraction_AI");
		
		UBPC_Base_Distraction_AI_C_ExecuteUbergraph_BPC_Base_Distraction_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.OnDistractionWanderChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasValidDistractionWander                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Base_Distraction_AI_C::OnDistractionWanderChanged__DelegateSignature(bool HasValidDistractionWander)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.OnDistractionWanderChanged__DelegateSignature");
		
		UBPC_Base_Distraction_AI_C_OnDistractionWanderChanged__DelegateSignature_Params params {};
		params.HasValidDistractionWander = HasValidDistractionWander;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Base_Distraction_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Base_Distraction_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C");
		return ptr;
	}

}


