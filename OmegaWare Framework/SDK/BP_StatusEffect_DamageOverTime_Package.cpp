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
	 * 		Name   -> Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.IsFriendlyFireAllowed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_StatusEffect_DamageOverTime_C::IsFriendlyFireAllowed(class UStatusEffectTypeState* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.IsFriendlyFireAllowed");
		
		UBP_StatusEffect_DamageOverTime_C_IsFriendlyFireAllowed_Params params {};
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.EstimateDamageToOwner
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageToApply                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWeakEventInstigator                        Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageEstimate                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_DamageOverTime_C::EstimateDamageToOwner(class AActor* Owner, float DamageToApply, const struct FWeakEventInstigator& Instigator, class AActor* DamageCauser, float* DamageEstimate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.EstimateDamageToOwner");
		
		UBP_StatusEffect_DamageOverTime_C_EstimateDamageToOwner_Params params {};
		params.Owner = Owner;
		params.DamageToApply = DamageToApply;
		params.Instigator = Instigator;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEstimate != nullptr)
			*DamageEstimate = params.DamageEstimate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ReceiveBeginInstance
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       Instance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_DamageOverTime_C::ReceiveBeginInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ReceiveBeginInstance");
		
		UBP_StatusEffect_DamageOverTime_C_ReceiveBeginInstance_Params params {};
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
	 * 		Name   -> Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.Begin Propagation Effect
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FName                                        EffectName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectComponent*                      StatusEffectComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       StatusEffectInstance                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_StatusEffectTypeState_DamageOverTime_C*  TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_DamageOverTime_C::BeginPropagationEffect(const class FName& EffectName, class UStatusEffectComponent* StatusEffectComponent, class UStatusEffectInstance* StatusEffectInstance, class UBP_StatusEffectTypeState_DamageOverTime_C* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.Begin Propagation Effect");
		
		UBP_StatusEffect_DamageOverTime_C_BeginPropagationEffect_Params params {};
		params.EffectName = EffectName;
		params.StatusEffectComponent = StatusEffectComponent;
		params.StatusEffectInstance = StatusEffectInstance;
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.BeginCosmeticEffect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UBP_StatusEffectTypeState_DamageOverTime_C*  TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_DamageOverTime_C::BeginCosmeticEffect(class UBP_StatusEffectTypeState_DamageOverTime_C* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.BeginCosmeticEffect");
		
		UBP_StatusEffect_DamageOverTime_C_BeginCosmeticEffect_Params params {};
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ReceiveTick
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UStatusEffectInstance*>               Instances                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_DamageOverTime_C::ReceiveTick(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, TArray<class UStatusEffectInstance*> Instances, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ReceiveTick");
		
		UBP_StatusEffect_DamageOverTime_C_ReceiveTick_Params params {};
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.GetInstanceTickDamageFromCurve
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UStatusEffectInstance*                       StatusEffectInstance                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageToApply                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_DamageOverTime_C::GetInstanceTickDamageFromCurve(class UStatusEffectInstance* StatusEffectInstance, float DeltaTime, float* DamageToApply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.GetInstanceTickDamageFromCurve");
		
		UBP_StatusEffect_DamageOverTime_C_GetInstanceTickDamageFromCurve_Params params {};
		params.StatusEffectInstance = StatusEffectInstance;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageToApply != nullptr)
			*DamageToApply = params.DamageToApply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.AddPerkToOwner
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UBP_StatusEffectTypeState_DamageOverTime_C*  StatusEffectState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADICharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_DamageOverTime_C::AddPerkToOwner(class UBP_StatusEffectTypeState_DamageOverTime_C* StatusEffectState, class ADICharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.AddPerkToOwner");
		
		UBP_StatusEffect_DamageOverTime_C_AddPerkToOwner_Params params {};
		params.StatusEffectState = StatusEffectState;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.StopCosmeticEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UBP_StatusEffectTypeState_DamageOverTime_C*  TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_DamageOverTime_C::StopCosmeticEffect(class UBP_StatusEffectTypeState_DamageOverTime_C* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.StopCosmeticEffect");
		
		UBP_StatusEffect_DamageOverTime_C_StopCosmeticEffect_Params params {};
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ApplyDamageToOwner
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageToApply                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWeakEventInstigator                        Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageCauserClass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FriendlyFireAllowed                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_StatusEffect_DamageOverTime_C::ApplyDamageToOwner(class AActor* Owner, float DamageToApply, const struct FWeakEventInstigator& Instigator, class AActor* DamageCauser, class UClass* DamageCauserClass, bool FriendlyFireAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ApplyDamageToOwner");
		
		UBP_StatusEffect_DamageOverTime_C_ApplyDamageToOwner_Params params {};
		params.Owner = Owner;
		params.DamageToApply = DamageToApply;
		params.Instigator = Instigator;
		params.DamageCauser = DamageCauser;
		params.DamageCauserClass = DamageCauserClass;
		params.FriendlyFireAllowed = FriendlyFireAllowed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ReceiveEnd
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_DamageOverTime_C::ReceiveEnd(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ReceiveEnd");
		
		UBP_StatusEffect_DamageOverTime_C_ReceiveEnd_Params params {};
		params.Component = Component;
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ReceiveBegin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       FirstInstance                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_DamageOverTime_C::ReceiveBegin(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* FirstInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ReceiveBegin");
		
		UBP_StatusEffect_DamageOverTime_C_ReceiveBegin_Params params {};
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
	 * 		Name   -> PredefinedFunction UBP_StatusEffect_DamageOverTime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_StatusEffect_DamageOverTime_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C");
		return ptr;
	}

}


