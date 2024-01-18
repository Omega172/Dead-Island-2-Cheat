﻿/**
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
	 * 		Name   -> Function BP_Action_Base_Meatbait_AI.BP_Action_Base_Meatbait_AI_C.InterestLost
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_Meatbait_AI_C::InterestLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Meatbait_AI.BP_Action_Base_Meatbait_AI_C.InterestLost");
		
		UBP_Action_Base_Meatbait_AI_C_InterestLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_Meatbait_AI.BP_Action_Base_Meatbait_AI_C.StartInterestTimer
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_Meatbait_AI_C::StartInterestTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Meatbait_AI.BP_Action_Base_Meatbait_AI_C.StartInterestTimer");
		
		UBP_Action_Base_Meatbait_AI_C_StartInterestTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_Meatbait_AI.BP_Action_Base_Meatbait_AI_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_Meatbait_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Meatbait_AI.BP_Action_Base_Meatbait_AI_C.OnEnd");
		
		UBP_Action_Base_Meatbait_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_Meatbait_AI.BP_Action_Base_Meatbait_AI_C.LaunchParticipantWithActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InputActivityActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Meatbait_AI_C::LaunchParticipantWithActor(class AActor* InputActivityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Meatbait_AI.BP_Action_Base_Meatbait_AI_C.LaunchParticipantWithActor");
		
		UBP_Action_Base_Meatbait_AI_C_LaunchParticipantWithActor_Params params {};
		params.InputActivityActor = InputActivityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_Meatbait_AI.BP_Action_Base_Meatbait_AI_C.ExecuteUbergraph_BP_Action_Base_Meatbait_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Meatbait_AI_C::ExecuteUbergraph_BP_Action_Base_Meatbait_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Meatbait_AI.BP_Action_Base_Meatbait_AI_C.ExecuteUbergraph_BP_Action_Base_Meatbait_AI");
		
		UBP_Action_Base_Meatbait_AI_C_ExecuteUbergraph_BP_Action_Base_Meatbait_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Base_Meatbait_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Base_Meatbait_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Base_Meatbait_AI.BP_Action_Base_Meatbait_AI_C");
		return ptr;
	}

}

