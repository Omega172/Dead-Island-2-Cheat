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
	 * 		Name   -> Function BP_AOE_DamageOverTime_Fluid_Burning.BP_AOE_DamageOverTime_Fluid_Burning_C.CanAffectTarget
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTrue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AOE_DamageOverTime_Fluid_Burning_C::CanAffectTarget(class AActor* TargetActor, bool* IsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AOE_DamageOverTime_Fluid_Burning.BP_AOE_DamageOverTime_Fluid_Burning_C.CanAffectTarget");
		
		UBP_AOE_DamageOverTime_Fluid_Burning_C_CanAffectTarget_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTrue != nullptr)
			*IsTrue = params.IsTrue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AOE_DamageOverTime_Fluid_Burning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AOE_DamageOverTime_Fluid_Burning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AOE_DamageOverTime_Fluid_Burning.BP_AOE_DamageOverTime_Fluid_Burning_C");
		return ptr;
	}

}


