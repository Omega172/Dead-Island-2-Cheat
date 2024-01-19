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
	 * 		Name   -> Function BP_Base_StatusEffect_Stun.BP_Base_StatusEffect_Stun_C.ReceiveEnd
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_Stun_C::ReceiveEnd(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Stun.BP_Base_StatusEffect_Stun_C.ReceiveEnd");
		
		UBP_Base_StatusEffect_Stun_C_ReceiveEnd_Params params {};
		params.Component = Component;
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatusEffect_Stun.BP_Base_StatusEffect_Stun_C.ReceiveBegin
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       FirstInstance                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_Stun_C::ReceiveBegin(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* FirstInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Stun.BP_Base_StatusEffect_Stun_C.ReceiveBegin");
		
		UBP_Base_StatusEffect_Stun_C_ReceiveBegin_Params params {};
		params.Component = Component;
		params.TypeState = TypeState;
		params.FirstInstance = FirstInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatusEffect_Stun.BP_Base_StatusEffect_Stun_C.ConstructActionParams
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     NewParams                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_Stun_C::ConstructActionParams(class UCustomActionParamsBase** NewParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Stun.BP_Base_StatusEffect_Stun_C.ConstructActionParams");
		
		UBP_Base_StatusEffect_Stun_C_ConstructActionParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParams != nullptr)
			*NewParams = params.NewParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatusEffect_Stun.BP_Base_StatusEffect_Stun_C.GetModifiedDurationFromInstigator
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UStatusEffectParams*                         InstanceParams                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              UnmodifiedDuration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ModifiedDuration                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_Stun_C::GetModifiedDurationFromInstigator(class UStatusEffectParams* InstanceParams, float UnmodifiedDuration, float* ModifiedDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Stun.BP_Base_StatusEffect_Stun_C.GetModifiedDurationFromInstigator");
		
		UBP_Base_StatusEffect_Stun_C_GetModifiedDurationFromInstigator_Params params {};
		params.InstanceParams = InstanceParams;
		params.UnmodifiedDuration = UnmodifiedDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedDuration != nullptr)
			*ModifiedDuration = params.ModifiedDuration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatusEffect_Stun.BP_Base_StatusEffect_Stun_C.ReturnValueWithVariation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              OriginalValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              VariationPercentage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_Stun_C::ReturnValueWithVariation(float OriginalValue, float VariationPercentage, float* NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Stun.BP_Base_StatusEffect_Stun_C.ReturnValueWithVariation");
		
		UBP_Base_StatusEffect_Stun_C_ReturnValueWithVariation_Params params {};
		params.OriginalValue = OriginalValue;
		params.VariationPercentage = VariationPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewValue != nullptr)
			*NewValue = params.NewValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatusEffect_Stun.BP_Base_StatusEffect_Stun_C.ReceiveBeginInstance
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       Instance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_Stun_C::ReceiveBeginInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Stun.BP_Base_StatusEffect_Stun_C.ReceiveBeginInstance");
		
		UBP_Base_StatusEffect_Stun_C_ReceiveBeginInstance_Params params {};
		params.Component = Component;
		params.TypeState = TypeState;
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Base_StatusEffect_Stun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Base_StatusEffect_Stun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_StatusEffect_Stun.BP_Base_StatusEffect_Stun_C");
		return ptr;
	}

}


