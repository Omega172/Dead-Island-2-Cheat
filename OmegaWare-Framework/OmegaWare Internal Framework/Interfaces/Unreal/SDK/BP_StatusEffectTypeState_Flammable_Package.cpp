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
	 * 		Name   -> Function BP_StatusEffectTypeState_Flammable.BP_StatusEffectTypeState_Flammable_C.FlammableStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAccumulatingEffectComponent*                AccumulatingEffectsComponent                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFlammable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_StatusEffectTypeState_Flammable_C::FlammableStateChanged(class UAccumulatingEffectComponent* AccumulatingEffectsComponent, bool IsFlammable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffectTypeState_Flammable.BP_StatusEffectTypeState_Flammable_C.FlammableStateChanged");
		
		UBP_StatusEffectTypeState_Flammable_C_FlammableStateChanged_Params params {};
		params.AccumulatingEffectsComponent = AccumulatingEffectsComponent;
		params.IsFlammable = IsFlammable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffectTypeState_Flammable.BP_StatusEffectTypeState_Flammable_C.OnAccumulatingEffectValueUpdated
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAccumulatingEffectType                            EffectType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RequestedValue                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffectTypeState_Flammable_C::OnAccumulatingEffectValueUpdated(EAccumulatingEffectType EffectType, float RequestedValue, class AController* Instigator, const struct FVector& HitLocation, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffectTypeState_Flammable.BP_StatusEffectTypeState_Flammable_C.OnAccumulatingEffectValueUpdated");
		
		UBP_StatusEffectTypeState_Flammable_C_OnAccumulatingEffectValueUpdated_Params params {};
		params.EffectType = EffectType;
		params.RequestedValue = RequestedValue;
		params.Instigator = Instigator;
		params.HitLocation = HitLocation;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatusEffectTypeState_Flammable.BP_StatusEffectTypeState_Flammable_C.ExecuteUbergraph_BP_StatusEffectTypeState_Flammable
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffectTypeState_Flammable_C::ExecuteUbergraph_BP_StatusEffectTypeState_Flammable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffectTypeState_Flammable.BP_StatusEffectTypeState_Flammable_C.ExecuteUbergraph_BP_StatusEffectTypeState_Flammable");
		
		UBP_StatusEffectTypeState_Flammable_C_ExecuteUbergraph_BP_StatusEffectTypeState_Flammable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_StatusEffectTypeState_Flammable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_StatusEffectTypeState_Flammable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StatusEffectTypeState_Flammable.BP_StatusEffectTypeState_Flammable_C");
		return ptr;
	}

}


