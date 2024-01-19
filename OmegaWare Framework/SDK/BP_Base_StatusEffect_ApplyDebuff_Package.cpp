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
	 * 		Name   -> Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.GetModifiableValueSourceName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class FName UBP_Base_StatusEffect_ApplyDebuff_C::GetModifiableValueSourceName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.GetModifiableValueSourceName");
		
		UBP_Base_StatusEffect_ApplyDebuff_C_GetModifiableValueSourceName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.DestroyCosmeticStatusEffectSK
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectTypeState*                      Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_ApplyDebuff_C::DestroyCosmeticStatusEffectSK(class UStatusEffectTypeState* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.DestroyCosmeticStatusEffectSK");
		
		UBP_Base_StatusEffect_ApplyDebuff_C_DestroyCosmeticStatusEffectSK_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.CreateCosmeticStatusEffectSK
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectTypeState*                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_ApplyDebuff_C::CreateCosmeticStatusEffectSK(class UStatusEffectTypeState* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.CreateCosmeticStatusEffectSK");
		
		UBP_Base_StatusEffect_ApplyDebuff_C_CreateCosmeticStatusEffectSK_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.DestroyCosmeticEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OverrideCosmeticEffectBlend                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BlendOutTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ParameterName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LerpTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECosmeticEffectLerpType                            LerpType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TimeToDestroyCE                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_ApplyDebuff_C::DestroyCosmeticEffect(class AActor* TargetActor, class UStatusEffectTypeState* TypeState, bool OverrideCosmeticEffectBlend, float BlendOutTime, const class FName& ParameterName, float LerpTime, ECosmeticEffectLerpType LerpType, float Delay, float TimeToDestroyCE)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.DestroyCosmeticEffect");
		
		UBP_Base_StatusEffect_ApplyDebuff_C_DestroyCosmeticEffect_Params params {};
		params.TargetActor = TargetActor;
		params.TypeState = TypeState;
		params.OverrideCosmeticEffectBlend = OverrideCosmeticEffectBlend;
		params.BlendOutTime = BlendOutTime;
		params.ParameterName = ParameterName;
		params.LerpTime = LerpTime;
		params.LerpType = LerpType;
		params.Delay = Delay;
		params.TimeToDestroyCE = TimeToDestroyCE;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.CreateCosmeticEffect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCosmeticEffectsDefinition*                  _1stPersonCE                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCosmeticEffectsDefinition*                  _3rdPersonCE                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OverrideCosmeticEffectBlend                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BlendInTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECosmeticEffectLerpType                            LerpType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ParameterName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ParameterMaxValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TryAttachToSkeleton                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Base_StatusEffect_ApplyDebuff_C::CreateCosmeticEffect(class AActor* TargetActor, class UStatusEffectTypeState* TypeState, class UCosmeticEffectsDefinition* _1stPersonCE, class UCosmeticEffectsDefinition* _3rdPersonCE, bool OverrideCosmeticEffectBlend, float BlendInTime, ECosmeticEffectLerpType LerpType, const class FName& ParameterName, float ParameterMaxValue, float Delay, bool TryAttachToSkeleton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.CreateCosmeticEffect");
		
		UBP_Base_StatusEffect_ApplyDebuff_C_CreateCosmeticEffect_Params params {};
		params.TargetActor = TargetActor;
		params.TypeState = TypeState;
		params._1stPersonCE = _1stPersonCE;
		params._3rdPersonCE = _3rdPersonCE;
		params.OverrideCosmeticEffectBlend = OverrideCosmeticEffectBlend;
		params.BlendInTime = BlendInTime;
		params.LerpType = LerpType;
		params.ParameterName = ParameterName;
		params.ParameterMaxValue = ParameterMaxValue;
		params.Delay = Delay;
		params.TryAttachToSkeleton = TryAttachToSkeleton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.ReceiveEnd
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_ApplyDebuff_C::ReceiveEnd(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.ReceiveEnd");
		
		UBP_Base_StatusEffect_ApplyDebuff_C_ReceiveEnd_Params params {};
		params.Component = Component;
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.ReceiveBegin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       FirstInstance                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_ApplyDebuff_C::ReceiveBegin(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* FirstInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.ReceiveBegin");
		
		UBP_Base_StatusEffect_ApplyDebuff_C_ReceiveBegin_Params params {};
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
	 * 		Name   -> Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.ReceiveEndInstance
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       Instance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_ApplyDebuff_C::ReceiveEndInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.ReceiveEndInstance");
		
		UBP_Base_StatusEffect_ApplyDebuff_C_ReceiveEndInstance_Params params {};
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
	 * 		Name   -> Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.ReceiveBeginInstance
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       Instance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffect_ApplyDebuff_C::ReceiveBeginInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C.ReceiveBeginInstance");
		
		UBP_Base_StatusEffect_ApplyDebuff_C_ReceiveBeginInstance_Params params {};
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
	 * 		Name   -> PredefinedFunction UBP_Base_StatusEffect_ApplyDebuff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Base_StatusEffect_ApplyDebuff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C");
		return ptr;
	}

}


