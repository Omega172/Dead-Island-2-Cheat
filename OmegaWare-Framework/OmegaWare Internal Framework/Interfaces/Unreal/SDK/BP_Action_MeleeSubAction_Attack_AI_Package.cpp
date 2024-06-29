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
	 * 		Name   -> Function BP_Action_MeleeSubAction_Attack_AI.BP_Action_MeleeSubAction_Attack_AI_C.ReceiveProcessHit
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMeleeAttackLine                            AttackLine                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class ADICharacter*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bGeneratedHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UBP_Action_MeleeSubAction_Attack_AI_C::ReceiveProcessHit(const struct FMeleeAttackLine& AttackLine, class ADICharacter* Target, bool bGeneratedHit, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_MeleeSubAction_Attack_AI.BP_Action_MeleeSubAction_Attack_AI_C.ReceiveProcessHit");
		
		UBP_Action_MeleeSubAction_Attack_AI_C_ReceiveProcessHit_Params params {};
		params.AttackLine = AttackLine;
		params.Target = Target;
		params.bGeneratedHit = bGeneratedHit;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_MeleeSubAction_Attack_AI.BP_Action_MeleeSubAction_Attack_AI_C.ExecuteUbergraph_BP_Action_MeleeSubAction_Attack_AI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_MeleeSubAction_Attack_AI_C::ExecuteUbergraph_BP_Action_MeleeSubAction_Attack_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_MeleeSubAction_Attack_AI.BP_Action_MeleeSubAction_Attack_AI_C.ExecuteUbergraph_BP_Action_MeleeSubAction_Attack_AI");
		
		UBP_Action_MeleeSubAction_Attack_AI_C_ExecuteUbergraph_BP_Action_MeleeSubAction_Attack_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_MeleeSubAction_Attack_AI.BP_Action_MeleeSubAction_Attack_AI_C.EnemyHitDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMeleeAttackLine                            AttackLine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UBP_Action_MeleeSubAction_Attack_AI_C::EnemyHitDelegate__DelegateSignature(const struct FMeleeAttackLine& AttackLine, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_MeleeSubAction_Attack_AI.BP_Action_MeleeSubAction_Attack_AI_C.EnemyHitDelegate__DelegateSignature");
		
		UBP_Action_MeleeSubAction_Attack_AI_C_EnemyHitDelegate__DelegateSignature_Params params {};
		params.AttackLine = AttackLine;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_MeleeSubAction_Attack_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_MeleeSubAction_Attack_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_MeleeSubAction_Attack_AI.BP_Action_MeleeSubAction_Attack_AI_C");
		return ptr;
	}

}


