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
	 * 		Name   -> Function BP_PerkCondition_OwnerHasPerformedClassAbility_Data.BP_PerkCondition_OwnerHasPerformedClassAbility_Data_C.ClassAbilityPerformed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwningPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      EffectReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EClassAbilityState                                 ClassAbilityState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_OwnerHasPerformedClassAbility_Data_C::ClassAbilityPerformed(class AActor* OwningPlayer, class AActor* EffectReceiver, EClassAbilityState ClassAbilityState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_OwnerHasPerformedClassAbility_Data.BP_PerkCondition_OwnerHasPerformedClassAbility_Data_C.ClassAbilityPerformed");
		
		UBP_PerkCondition_OwnerHasPerformedClassAbility_Data_C_ClassAbilityPerformed_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.EffectReceiver = EffectReceiver;
		params.ClassAbilityState = ClassAbilityState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkCondition_OwnerHasPerformedClassAbility_Data.BP_PerkCondition_OwnerHasPerformedClassAbility_Data_C.ExecuteUbergraph_BP_PerkCondition_OwnerHasPerformedClassAbility_Data
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_OwnerHasPerformedClassAbility_Data_C::ExecuteUbergraph_BP_PerkCondition_OwnerHasPerformedClassAbility_Data(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_OwnerHasPerformedClassAbility_Data.BP_PerkCondition_OwnerHasPerformedClassAbility_Data_C.ExecuteUbergraph_BP_PerkCondition_OwnerHasPerformedClassAbility_Data");
		
		UBP_PerkCondition_OwnerHasPerformedClassAbility_Data_C_ExecuteUbergraph_BP_PerkCondition_OwnerHasPerformedClassAbility_Data_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkCondition_OwnerHasPerformedClassAbility_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkCondition_OwnerHasPerformedClassAbility_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkCondition_OwnerHasPerformedClassAbility_Data.BP_PerkCondition_OwnerHasPerformedClassAbility_Data_C");
		return ptr;
	}

}


