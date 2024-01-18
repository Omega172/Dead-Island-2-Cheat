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
	 * 		Name   -> Function BP_PerkEffect_UpdateTargetsHealth.BP_PerkEffect_UpdateTargetsHealth_C.UpdateHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADICharacter*                                PlayerToUpdateHealth                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_UpdateTargetsHealth_C::UpdateHealth(class ADICharacter* PlayerToUpdateHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_UpdateTargetsHealth.BP_PerkEffect_UpdateTargetsHealth_C.UpdateHealth");
		
		UBP_PerkEffect_UpdateTargetsHealth_C_UpdateHealth_Params params {};
		params.PlayerToUpdateHealth = PlayerToUpdateHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_UpdateTargetsHealth.BP_PerkEffect_UpdateTargetsHealth_C.GetPercentageFromHealthValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USimpleHealthComponent*                      TargetHealthComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewHealthValue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_UpdateTargetsHealth_C::GetPercentageFromHealthValue(class USimpleHealthComponent* TargetHealthComponent, float* NewHealthValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_UpdateTargetsHealth.BP_PerkEffect_UpdateTargetsHealth_C.GetPercentageFromHealthValue");
		
		UBP_PerkEffect_UpdateTargetsHealth_C_GetPercentageFromHealthValue_Params params {};
		params.TargetHealthComponent = TargetHealthComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewHealthValue != nullptr)
			*NewHealthValue = params.NewHealthValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_UpdateTargetsHealth.BP_PerkEffect_UpdateTargetsHealth_C.OnStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_UpdateTargetsHealth_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_UpdateTargetsHealth.BP_PerkEffect_UpdateTargetsHealth_C.OnStart");
		
		UBP_PerkEffect_UpdateTargetsHealth_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_UpdateTargetsHealth.BP_PerkEffect_UpdateTargetsHealth_C.ExecuteUbergraph_BP_PerkEffect_UpdateTargetsHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_UpdateTargetsHealth_C::ExecuteUbergraph_BP_PerkEffect_UpdateTargetsHealth(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_UpdateTargetsHealth.BP_PerkEffect_UpdateTargetsHealth_C.ExecuteUbergraph_BP_PerkEffect_UpdateTargetsHealth");
		
		UBP_PerkEffect_UpdateTargetsHealth_C_ExecuteUbergraph_BP_PerkEffect_UpdateTargetsHealth_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_UpdateTargetsHealth_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_UpdateTargetsHealth_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_UpdateTargetsHealth.BP_PerkEffect_UpdateTargetsHealth_C");
		return ptr;
	}

}


