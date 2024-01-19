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
	 * 		Name   -> Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_PlayerCharacter_1P_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.AnimGraph");
		
		UABP_PlayerCharacter_1P_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.WeaponHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Defender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_Base_MeleeWeapon_C*                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_PlayerCharacter_1P_C::WeaponHit(class AActor* Attacker, class AActor* Defender, class ABP_Base_MeleeWeapon_C* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.WeaponHit");
		
		UABP_PlayerCharacter_1P_C_WeaponHit_Params params {};
		params.Attacker = Attacker;
		params.Defender = Defender;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.AnimNotify_AttackDecisionEntered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UABP_PlayerCharacter_1P_C::AnimNotify_AttackDecisionEntered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.AnimNotify_AttackDecisionEntered");
		
		UABP_PlayerCharacter_1P_C_AnimNotify_AttackDecisionEntered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.ExecuteUbergraph_ABP_PlayerCharacter_1P
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_PlayerCharacter_1P_C::ExecuteUbergraph_ABP_PlayerCharacter_1P(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.ExecuteUbergraph_ABP_PlayerCharacter_1P");
		
		UABP_PlayerCharacter_1P_C_ExecuteUbergraph_ABP_PlayerCharacter_1P_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.ThrowWeapon__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UABP_PlayerCharacter_1P_C::ThrowWeapon__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.ThrowWeapon__DelegateSignature");
		
		UABP_PlayerCharacter_1P_C_ThrowWeapon__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.Knockback__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UABP_PlayerCharacter_1P_C::Knockback__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.Knockback__DelegateSignature");
		
		UABP_PlayerCharacter_1P_C_Knockback__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.WeaponSwinging__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UABP_PlayerCharacter_1P_C::WeaponSwinging__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.WeaponSwinging__DelegateSignature");
		
		UABP_PlayerCharacter_1P_C_WeaponSwinging__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_PlayerCharacter_1P_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_PlayerCharacter_1P_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C");
		return ptr;
	}

}


