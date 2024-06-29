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
	 * 		Name   -> Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.ReceiveBegin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       FirstInstance                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Conductive_C::ReceiveBegin(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* FirstInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.ReceiveBegin");
		
		UBP_StatusEffect_Conductive_C_ReceiveBegin_Params params {};
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
	 * 		Name   -> Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.RemoveBurndownModifier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      StatusEffectComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       Instance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Conductive_C::RemoveBurndownModifier(class UStatusEffectComponent* StatusEffectComponent, class UStatusEffectInstance* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.RemoveBurndownModifier");
		
		UBP_StatusEffect_Conductive_C_RemoveBurndownModifier_Params params {};
		params.StatusEffectComponent = StatusEffectComponent;
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.ReceiveEndInstance
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       Instance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Conductive_C::ReceiveEndInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.ReceiveEndInstance");
		
		UBP_StatusEffect_Conductive_C_ReceiveEndInstance_Params params {};
		params.Component = Component;
		params.TypeState = TypeState;
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.AddBurndownModifier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      StatusEffectComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       Instance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Conductive_C::AddBurndownModifier(class UStatusEffectComponent* StatusEffectComponent, class UStatusEffectInstance* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.AddBurndownModifier");
		
		UBP_StatusEffect_Conductive_C_AddBurndownModifier_Params params {};
		params.StatusEffectComponent = StatusEffectComponent;
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.ReceiveBeginInstance
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       Instance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Conductive_C::ReceiveBeginInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.ReceiveBeginInstance");
		
		UBP_StatusEffect_Conductive_C_ReceiveBeginInstance_Params params {};
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
	 * 		Name   -> PredefinedFunction UBP_StatusEffect_Conductive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_StatusEffect_Conductive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C");
		return ptr;
	}

}


