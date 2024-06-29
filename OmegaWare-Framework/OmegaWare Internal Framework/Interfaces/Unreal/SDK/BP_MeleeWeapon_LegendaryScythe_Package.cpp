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
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.SetInstigatedImpactsFactInWeaponKB
	 * 		Flags  -> ()
	 */
	void ABP_MeleeWeapon_LegendaryScythe_C::SetInstigatedImpactsFactInWeaponKB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.SetInstigatedImpactsFactInWeaponKB");
		
		ABP_MeleeWeapon_LegendaryScythe_C_SetInstigatedImpactsFactInWeaponKB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.CheckCurrentStateInKB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentImpacts                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_LegendaryScythe_C::CheckCurrentStateInKB(int32_t* CurrentImpacts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.CheckCurrentStateInKB");
		
		ABP_MeleeWeapon_LegendaryScythe_C_CheckCurrentStateInKB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentImpacts != nullptr)
			*CurrentImpacts = params.CurrentImpacts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.EvaluateStage
	 * 		Flags  -> ()
	 */
	void ABP_MeleeWeapon_LegendaryScythe_C::EvaluateStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.EvaluateStage");
		
		ABP_MeleeWeapon_LegendaryScythe_C_EvaluateStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ActionStarts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActionType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_LegendaryScythe_C::ActionStarts(const struct FGuid& RequestId, const class FName& ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ActionStarts");
		
		ABP_MeleeWeapon_LegendaryScythe_C_ActionStarts_Params params {};
		params.RequestId = RequestId;
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ActionEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActionType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterActionEndedReason                        Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_LegendaryScythe_C::ActionEnd(const struct FGuid& RequestId, const class FName& ActionType, ECharacterActionEndedReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ActionEnd");
		
		ABP_MeleeWeapon_LegendaryScythe_C_ActionEnd_Params params {};
		params.RequestId = RequestId;
		params.ActionType = ActionType;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_LegendaryScythe_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ReceiveEndPlay");
		
		ABP_MeleeWeapon_LegendaryScythe_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.DeferredBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MeleeWeapon_LegendaryScythe_C::DeferredBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.DeferredBeginPlay");
		
		ABP_MeleeWeapon_LegendaryScythe_C_DeferredBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ImpactInstigated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointImpactEventResult                     RecordedImpact                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void ABP_MeleeWeapon_LegendaryScythe_C::ImpactInstigated(const struct FPointImpactEventResult& RecordedImpact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ImpactInstigated");
		
		ABP_MeleeWeapon_LegendaryScythe_C_ImpactInstigated_Params params {};
		params.RecordedImpact = RecordedImpact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ExecuteUbergraph_BP_MeleeWeapon_LegendaryScythe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_LegendaryScythe_C::ExecuteUbergraph_BP_MeleeWeapon_LegendaryScythe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ExecuteUbergraph_BP_MeleeWeapon_LegendaryScythe");
		
		ABP_MeleeWeapon_LegendaryScythe_C_ExecuteUbergraph_BP_MeleeWeapon_LegendaryScythe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeleeWeapon_LegendaryScythe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeleeWeapon_LegendaryScythe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C");
		return ptr;
	}

}


