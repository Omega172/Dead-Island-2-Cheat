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
	 * 		Name   -> Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.FindTargets
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_Base_AI_C*>                       FoundTargets                                               (Parm, OutParm)
	 */
	void UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C::FindTargets(class AActor* Actor, TArray<class ABP_Base_AI_C*>* FoundTargets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.FindTargets");
		
		UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C_FindTargets_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundTargets != nullptr)
			*FoundTargets = params.FoundTargets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.FindActiveStatusEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C::FindActiveStatusEffects(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.FindActiveStatusEffects");
		
		UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C_FindActiveStatusEffects_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.ApplyStatusEffectAccumualtion
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C::ApplyStatusEffectAccumualtion(class AActor* Actor, class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.ApplyStatusEffectAccumualtion");
		
		UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C_ApplyStatusEffectAccumualtion_Params params {};
		params.Actor = Actor;
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.OnStart
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.OnStart");
		
		UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.ExecuteUbergraph_BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C::ExecuteUbergraph_BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.ExecuteUbergraph_BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets");
		
		UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C_ExecuteUbergraph_BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C");
		return ptr;
	}

}


