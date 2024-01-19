/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatusEffect_Draining.BP_Base_StatusEffect_Draining_C.StopCosmeticEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UBP_StatusEffectTypeState_DamageOverTime_C*  TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_Draining_C::StopCosmeticEffect(class UBP_StatusEffectTypeState_DamageOverTime_C* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Draining.BP_Base_StatusEffect_Draining_C.StopCosmeticEffect");
		
		UBP_Base_StatusEffect_Draining_C_StopCosmeticEffect_Params params {};
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatusEffect_Draining.BP_Base_StatusEffect_Draining_C.BeginCosmeticEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UBP_StatusEffectTypeState_DamageOverTime_C*  TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_Draining_C::BeginCosmeticEffect(class UBP_StatusEffectTypeState_DamageOverTime_C* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Draining.BP_Base_StatusEffect_Draining_C.BeginCosmeticEffect");
		
		UBP_Base_StatusEffect_Draining_C_BeginCosmeticEffect_Params params {};
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Base_StatusEffect_Draining_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Base_StatusEffect_Draining_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_StatusEffect_Draining.BP_Base_StatusEffect_Draining_C");
		return ptr;
	}

}


