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
	 * 		Name   -> Function BP_Activity_Feasting.BP_Activity_Feasting_C.TrySpawnMeatpileIfNoCorpseToFeastOn
	 * 		Flags  -> ()
	 */
	void ABP_Activity_Feasting_C::TrySpawnMeatpileIfNoCorpseToFeastOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Activity_Feasting.BP_Activity_Feasting_C.TrySpawnMeatpileIfNoCorpseToFeastOn");
		
		ABP_Activity_Feasting_C_TrySpawnMeatpileIfNoCorpseToFeastOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Activity_Feasting.BP_Activity_Feasting_C.DoesPlayDeadActivityMetFeastingRequirements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Base_SpawnActivity_C*                    FeastingTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Activity_Feasting_C::DoesPlayDeadActivityMetFeastingRequirements(class ABP_Base_SpawnActivity_C* FeastingTarget, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Activity_Feasting.BP_Activity_Feasting_C.DoesPlayDeadActivityMetFeastingRequirements");
		
		ABP_Activity_Feasting_C_DoesPlayDeadActivityMetFeastingRequirements_Params params {};
		params.FeastingTarget = FeastingTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Activity_Feasting.BP_Activity_Feasting_C.GetFeastingTargetsWithinRadius
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> ABP_Activity_Feasting_C::GetFeastingTargetsWithinRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Activity_Feasting.BP_Activity_Feasting_C.GetFeastingTargetsWithinRadius");
		
		ABP_Activity_Feasting_C_GetFeastingTargetsWithinRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Activity_Feasting.BP_Activity_Feasting_C.OnActivityStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Activity_Feasting_C::OnActivityStarted(class AActivityActor* Activity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Activity_Feasting.BP_Activity_Feasting_C.OnActivityStarted");
		
		ABP_Activity_Feasting_C_OnActivityStarted_Params params {};
		params.Activity = Activity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Activity_Feasting.BP_Activity_Feasting_C.OnActivityEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActivityEndedReason                               EndReason                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Activity_Feasting_C::OnActivityEnded(class AActivityActor* Activity, EActivityEndedReason EndReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Activity_Feasting.BP_Activity_Feasting_C.OnActivityEnded");
		
		ABP_Activity_Feasting_C_OnActivityEnded_Params params {};
		params.Activity = Activity;
		params.EndReason = EndReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Activity_Feasting.BP_Activity_Feasting_C.ExecuteUbergraph_BP_Activity_Feasting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Activity_Feasting_C::ExecuteUbergraph_BP_Activity_Feasting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Activity_Feasting.BP_Activity_Feasting_C.ExecuteUbergraph_BP_Activity_Feasting");
		
		ABP_Activity_Feasting_C_ExecuteUbergraph_BP_Activity_Feasting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Activity_Feasting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Activity_Feasting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Activity_Feasting.BP_Activity_Feasting_C");
		return ptr;
	}

}


