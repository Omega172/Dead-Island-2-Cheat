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
	 * 		Name   -> Function BP_AttackSequenceUnitAction_Melee.BP_AttackSequenceUnitAction_Melee_C.RemoveModifier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FModifierAndValue                           ModifierAndValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ADICharacter*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       RegisteredGUID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AttackSequenceUnitAction_Melee_C::RemoveModifier(const struct FModifierAndValue& ModifierAndValue, class ADICharacter* Target, const struct FGuid& RegisteredGUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AttackSequenceUnitAction_Melee.BP_AttackSequenceUnitAction_Melee_C.RemoveModifier");
		
		UBP_AttackSequenceUnitAction_Melee_C_RemoveModifier_Params params {};
		params.ModifierAndValue = ModifierAndValue;
		params.Target = Target;
		params.RegisteredGUID = RegisteredGUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_AttackSequenceUnitAction_Melee.BP_AttackSequenceUnitAction_Melee_C.ApplyModifier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FModifierAndValue                           ModifierAndValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ADICharacter*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGuid                                       ModifierRef                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AttackSequenceUnitAction_Melee_C::ApplyModifier(const struct FModifierAndValue& ModifierAndValue, class ADICharacter* Target, bool* Success, struct FGuid* ModifierRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AttackSequenceUnitAction_Melee.BP_AttackSequenceUnitAction_Melee_C.ApplyModifier");
		
		UBP_AttackSequenceUnitAction_Melee_C_ApplyModifier_Params params {};
		params.ModifierAndValue = ModifierAndValue;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ModifierRef != nullptr)
			*ModifierRef = params.ModifierRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_AttackSequenceUnitAction_Melee.BP_AttackSequenceUnitAction_Melee_C.ReceiveEndUnit
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAttackSequenceUnitState*                    State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AttackSequenceUnitAction_Melee_C::ReceiveEndUnit(bool bSuccess, class UAttackSequenceUnitState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AttackSequenceUnitAction_Melee.BP_AttackSequenceUnitAction_Melee_C.ReceiveEndUnit");
		
		UBP_AttackSequenceUnitAction_Melee_C_ReceiveEndUnit_Params params {};
		params.bSuccess = bSuccess;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_AttackSequenceUnitAction_Melee.BP_AttackSequenceUnitAction_Melee_C.ReceiveBeginUnit
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UAttackSequenceUnitState*                    State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AttackSequenceUnitAction_Melee_C::ReceiveBeginUnit(class UAttackSequenceUnitState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AttackSequenceUnitAction_Melee.BP_AttackSequenceUnitAction_Melee_C.ReceiveBeginUnit");
		
		UBP_AttackSequenceUnitAction_Melee_C_ReceiveBeginUnit_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AttackSequenceUnitAction_Melee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AttackSequenceUnitAction_Melee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AttackSequenceUnitAction_Melee.BP_AttackSequenceUnitAction_Melee_C");
		return ptr;
	}

}


