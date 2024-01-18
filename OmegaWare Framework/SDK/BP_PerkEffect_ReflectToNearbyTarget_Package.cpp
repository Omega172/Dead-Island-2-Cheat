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
	 * 		Name   -> Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.FindTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ReflectToNearbyTarget_C::FindTarget(class AActor** Actor, class AActor** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.FindTarget");
		
		UBP_PerkEffect_ReflectToNearbyTarget_C_FindTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.Calculate Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImpactEventComponent*                       ImpactEventComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalDamage                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ReflectToNearbyTarget_C::CalculateDamage(class UImpactEventComponent** ImpactEventComponent, float* TotalDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.Calculate Damage");
		
		UBP_PerkEffect_ReflectToNearbyTarget_C_CalculateDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImpactEventComponent != nullptr)
			*ImpactEventComponent = params.ImpactEventComponent;
		if (TotalDamage != nullptr)
			*TotalDamage = params.TotalDamage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.BuildPointImpactRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToDamage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageToApply                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FEventInstigator                            Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPointImpactEventRequest                    Request                                                    (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBP_PerkEffect_ReflectToNearbyTarget_C::BuildPointImpactRequest(class AActor* ActorToDamage, float DamageToApply, const struct FEventInstigator& Instigator, class AActor* OwnerActor, struct FPointImpactEventRequest* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.BuildPointImpactRequest");
		
		UBP_PerkEffect_ReflectToNearbyTarget_C_BuildPointImpactRequest_Params params {};
		params.ActorToDamage = ActorToDamage;
		params.DamageToApply = DamageToApply;
		params.Instigator = Instigator;
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Request != nullptr)
			*Request = params.Request;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.OnStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ReflectToNearbyTarget_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.OnStart");
		
		UBP_PerkEffect_ReflectToNearbyTarget_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.ExecuteUbergraph_BP_PerkEffect_ReflectToNearbyTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ReflectToNearbyTarget_C::ExecuteUbergraph_BP_PerkEffect_ReflectToNearbyTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.ExecuteUbergraph_BP_PerkEffect_ReflectToNearbyTarget");
		
		UBP_PerkEffect_ReflectToNearbyTarget_C_ExecuteUbergraph_BP_PerkEffect_ReflectToNearbyTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_ReflectToNearbyTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_ReflectToNearbyTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C");
		return ptr;
	}

}


