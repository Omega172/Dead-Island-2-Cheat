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
	 * 		Name   -> Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.IsFriendlyFireAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Base_StatusEffect_Electrocute_C::IsFriendlyFireAllowed(class UStatusEffectTypeState* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.IsFriendlyFireAllowed");
		
		UBP_Base_StatusEffect_Electrocute_C_IsFriendlyFireAllowed_Params params {};
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.CheckStunnedActionConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_StatusEffectTypeState_Electrocute_C*     ElecTypeState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Base_StatusEffect_Electrocute_C::CheckStunnedActionConditions(class UBP_StatusEffectTypeState_Electrocute_C* ElecTypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.CheckStunnedActionConditions");
		
		UBP_Base_StatusEffect_Electrocute_C_CheckStunnedActionConditions_Params params {};
		params.ElecTypeState = ElecTypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.StopCosmeticEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_StatusEffectTypeState_DamageOverTime_C*  TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_Electrocute_C::StopCosmeticEffect(class UBP_StatusEffectTypeState_DamageOverTime_C* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.StopCosmeticEffect");
		
		UBP_Base_StatusEffect_Electrocute_C_StopCosmeticEffect_Params params {};
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.BeginCosmeticEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_StatusEffectTypeState_DamageOverTime_C*  TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_Electrocute_C::BeginCosmeticEffect(class UBP_StatusEffectTypeState_DamageOverTime_C* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.BeginCosmeticEffect");
		
		UBP_Base_StatusEffect_Electrocute_C_BeginCosmeticEffect_Params params {};
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.AttemptToRequestStunnedAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_Electrocute_C::AttemptToRequestStunnedAction(class AActor* Owner, class UStatusEffectTypeState* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.AttemptToRequestStunnedAction");
		
		UBP_Base_StatusEffect_Electrocute_C_AttemptToRequestStunnedAction_Params params {};
		params.Owner = Owner;
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UStatusEffectInstance*>               Instances                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_Electrocute_C::ReceiveTick(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, TArray<class UStatusEffectInstance*> Instances, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.ReceiveTick");
		
		UBP_Base_StatusEffect_Electrocute_C_ReceiveTick_Params params {};
		params.Component = Component;
		params.TypeState = TypeState;
		params.Instances = Instances;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.ReceiveEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_Electrocute_C::ReceiveEnd(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.ReceiveEnd");
		
		UBP_Base_StatusEffect_Electrocute_C_ReceiveEnd_Params params {};
		params.Component = Component;
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.ReceiveBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       FirstInstance                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_Electrocute_C::ReceiveBegin(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* FirstInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C.ReceiveBegin");
		
		UBP_Base_StatusEffect_Electrocute_C_ReceiveBegin_Params params {};
		params.Component = Component;
		params.TypeState = TypeState;
		params.FirstInstance = FirstInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Base_StatusEffect_Electrocute_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Base_StatusEffect_Electrocute_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C");
		return ptr;
	}

}


