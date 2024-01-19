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
	 * 		Name   -> Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.CanAffectTarget
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTrue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Base_AOE_DamageOverTime_C::CanAffectTarget(class AActor* TargetActor, bool* IsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.CanAffectTarget");
		
		UBP_Base_AOE_DamageOverTime_C_CanAffectTarget_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTrue != nullptr)
			*IsTrue = params.IsTrue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.IsTargetActorAlive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAlive                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Base_AOE_DamageOverTime_C::IsTargetActorAlive(class AActor* TargetActor, bool* IsAlive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.IsTargetActorAlive");
		
		UBP_Base_AOE_DamageOverTime_C_IsTargetActorAlive_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAlive != nullptr)
			*IsAlive = params.IsAlive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.CanApplyDamage
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsTrue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Base_AOE_DamageOverTime_C::CanApplyDamage(bool* IsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.CanApplyDamage");
		
		UBP_Base_AOE_DamageOverTime_C_CanApplyDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTrue != nullptr)
			*IsTrue = params.IsTrue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.RequestImpactOnTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Base_AOE_DamageOverTime_C::RequestImpactOnTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.RequestImpactOnTarget");
		
		UBP_Base_AOE_DamageOverTime_C_RequestImpactOnTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.IsTargetActorAlsoOwner
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTrue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Base_AOE_DamageOverTime_C::IsTargetActorAlsoOwner(class AActor* TargetActor, bool* IsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.IsTargetActorAlsoOwner");
		
		UBP_Base_AOE_DamageOverTime_C_IsTargetActorAlsoOwner_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTrue != nullptr)
			*IsTrue = params.IsTrue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.UpdateActorAffected
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_AOE_DamageOverTime_C::UpdateActorAffected(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.UpdateActorAffected");
		
		UBP_Base_AOE_DamageOverTime_C_UpdateActorAffected_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.ExecuteUbergraph_BP_Base_AOE_DamageOverTime
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_AOE_DamageOverTime_C::ExecuteUbergraph_BP_Base_AOE_DamageOverTime(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.ExecuteUbergraph_BP_Base_AOE_DamageOverTime");
		
		UBP_Base_AOE_DamageOverTime_C_ExecuteUbergraph_BP_Base_AOE_DamageOverTime_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Base_AOE_DamageOverTime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Base_AOE_DamageOverTime_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C");
		return ptr;
	}

}


