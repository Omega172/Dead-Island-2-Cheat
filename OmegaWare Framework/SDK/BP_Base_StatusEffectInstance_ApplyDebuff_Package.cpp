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
	 * 		Name   -> Function BP_Base_StatusEffectInstance_ApplyDebuff.BP_Base_StatusEffectInstance_ApplyDebuff_C.SetBurndownRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BurndownRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffectInstance_ApplyDebuff_C::SetBurndownRate(float BurndownRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance_ApplyDebuff.BP_Base_StatusEffectInstance_ApplyDebuff_C.SetBurndownRate");
		
		UBP_Base_StatusEffectInstance_ApplyDebuff_C_SetBurndownRate_Params params {};
		params.BurndownRate = BurndownRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffectInstance_ApplyDebuff.BP_Base_StatusEffectInstance_ApplyDebuff_C.UpdateModifiableValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModifiableValuesComponent*                  ModifiableValuesComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       ModifierGUID                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UModifiableValueDefinition*                  ModifierValueType                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ModifierValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Successful                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Base_StatusEffectInstance_ApplyDebuff_C::UpdateModifiableValues(class UModifiableValuesComponent* ModifiableValuesComponent, struct FGuid* ModifierGUID, class UModifiableValueDefinition* ModifierValueType, float ModifierValue, bool* Successful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance_ApplyDebuff.BP_Base_StatusEffectInstance_ApplyDebuff_C.UpdateModifiableValues");
		
		UBP_Base_StatusEffectInstance_ApplyDebuff_C_UpdateModifiableValues_Params params {};
		params.ModifiableValuesComponent = ModifiableValuesComponent;
		params.ModifierValueType = ModifierValueType;
		params.ModifierValue = ModifierValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifierGUID != nullptr)
			*ModifierGUID = params.ModifierGUID;
		if (Successful != nullptr)
			*Successful = params.Successful;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffectInstance_ApplyDebuff.BP_Base_StatusEffectInstance_ApplyDebuff_C.RemoveModifiableValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModifiableValuesComponent*                  ModifiableValuesComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffectInstance_ApplyDebuff_C::RemoveModifiableValues(class UModifiableValuesComponent* ModifiableValuesComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance_ApplyDebuff.BP_Base_StatusEffectInstance_ApplyDebuff_C.RemoveModifiableValues");
		
		UBP_Base_StatusEffectInstance_ApplyDebuff_C_RemoveModifiableValues_Params params {};
		params.ModifiableValuesComponent = ModifiableValuesComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffectInstance_ApplyDebuff.BP_Base_StatusEffectInstance_ApplyDebuff_C.ApplyModifiableValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModifiableValuesComponent*                  ModifiableValuesComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSStatusEffectDebuffTypesAndValues>  ModifiersToApply                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               SetValueNow                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        SourceName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffectInstance_ApplyDebuff_C::ApplyModifiableValues(class UModifiableValuesComponent* ModifiableValuesComponent, TArray<struct FSStatusEffectDebuffTypesAndValues>* ModifiersToApply, bool SetValueNow, const class FName& SourceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance_ApplyDebuff.BP_Base_StatusEffectInstance_ApplyDebuff_C.ApplyModifiableValues");
		
		UBP_Base_StatusEffectInstance_ApplyDebuff_C_ApplyModifiableValues_Params params {};
		params.ModifiableValuesComponent = ModifiableValuesComponent;
		params.SetValueNow = SetValueNow;
		params.SourceName = SourceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiersToApply != nullptr)
			*ModifiersToApply = params.ModifiersToApply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Base_StatusEffectInstance_ApplyDebuff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Base_StatusEffectInstance_ApplyDebuff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_StatusEffectInstance_ApplyDebuff.BP_Base_StatusEffectInstance_ApplyDebuff_C");
		return ptr;
	}

}


