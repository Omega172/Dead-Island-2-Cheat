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
	 * 		Name   -> Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.SetTargetAndTargetImpactComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCombatTargetComponent*                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C::SetTargetAndTargetImpactComponent(class UCombatTargetComponent* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.SetTargetAndTargetImpactComponent");
		
		UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C_SetTargetAndTargetImpactComponent_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.OnCombatTargetChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C::OnCombatTargetChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.OnCombatTargetChanged");
		
		UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C_OnCombatTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.OnImpactReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C::OnImpactReceived(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.OnImpactReceived");
		
		UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C_OnImpactReceived_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.UnbindImpactComponent
	 * 		Flags  -> ()
	 */
	void UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C::UnbindImpactComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.UnbindImpactComponent");
		
		UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C_UnbindImpactComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.ExecuteUbergraph_BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C::ExecuteUbergraph_BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.ExecuteUbergraph_BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data");
		
		UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C_ExecuteUbergraph_BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C");
		return ptr;
	}

}


