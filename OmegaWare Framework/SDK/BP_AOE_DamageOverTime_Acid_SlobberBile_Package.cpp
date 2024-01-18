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
	 * 		Name   -> Function BP_AOE_DamageOverTime_Acid_SlobberBile.BP_AOE_DamageOverTime_Acid_SlobberBile_C.HasEmpoweringEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               _TRUE__                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AOE_DamageOverTime_Acid_SlobberBile_C::HasEmpoweringEffect(bool* _TRUE__)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AOE_DamageOverTime_Acid_SlobberBile.BP_AOE_DamageOverTime_Acid_SlobberBile_C.HasEmpoweringEffect");
		
		UBP_AOE_DamageOverTime_Acid_SlobberBile_C_HasEmpoweringEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_TRUE__ != nullptr)
			*_TRUE__ = params._TRUE__;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AOE_DamageOverTime_Acid_SlobberBile.BP_AOE_DamageOverTime_Acid_SlobberBile_C.CanApplyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTrue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AOE_DamageOverTime_Acid_SlobberBile_C::CanApplyDamage(bool* IsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AOE_DamageOverTime_Acid_SlobberBile.BP_AOE_DamageOverTime_Acid_SlobberBile_C.CanApplyDamage");
		
		UBP_AOE_DamageOverTime_Acid_SlobberBile_C_CanApplyDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTrue != nullptr)
			*IsTrue = params.IsTrue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AOE_DamageOverTime_Acid_SlobberBile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AOE_DamageOverTime_Acid_SlobberBile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AOE_DamageOverTime_Acid_SlobberBile.BP_AOE_DamageOverTime_Acid_SlobberBile_C");
		return ptr;
	}

}


