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
	 * 		Name   -> Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.GetModifiedHealthCap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FirstInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBP_StatusEffectParams_Afflicted_C*          Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ModifiedCap                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffectTypeState_Afflicted_C::GetModifiedHealthCap(bool FirstInstance, class UBP_StatusEffectParams_Afflicted_C* Params, float* ModifiedCap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.GetModifiedHealthCap");
		
		UBP_StatusEffectTypeState_Afflicted_C_GetModifiedHealthCap_Params params {};
		params.FirstInstance = FirstInstance;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedCap != nullptr)
			*ModifiedCap = params.ModifiedCap;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.ResetHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffectTypeState_Afflicted_C::ResetHealth(float Health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.ResetHealth");
		
		UBP_StatusEffectTypeState_Afflicted_C_ResetHealth_Params params {};
		params.Health = Health;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.OnHealthUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LastHealth                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffectTypeState_Afflicted_C::OnHealthUpdated(class AActor* DamagedActor, float LastHealth, float CurrentHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.OnHealthUpdated");
		
		UBP_StatusEffectTypeState_Afflicted_C_OnHealthUpdated_Params params {};
		params.DamagedActor = DamagedActor;
		params.LastHealth = LastHealth;
		params.CurrentHealth = CurrentHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.KeepHurt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthCap                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffectTypeState_Afflicted_C::KeepHurt(float HealthCap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.KeepHurt");
		
		UBP_StatusEffectTypeState_Afflicted_C_KeepHurt_Params params {};
		params.HealthCap = HealthCap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.ExecuteUbergraph_BP_StatusEffectTypeState_Afflicted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffectTypeState_Afflicted_C::ExecuteUbergraph_BP_StatusEffectTypeState_Afflicted(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.ExecuteUbergraph_BP_StatusEffectTypeState_Afflicted");
		
		UBP_StatusEffectTypeState_Afflicted_C_ExecuteUbergraph_BP_StatusEffectTypeState_Afflicted_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_StatusEffectTypeState_Afflicted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_StatusEffectTypeState_Afflicted_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C");
		return ptr;
	}

}


