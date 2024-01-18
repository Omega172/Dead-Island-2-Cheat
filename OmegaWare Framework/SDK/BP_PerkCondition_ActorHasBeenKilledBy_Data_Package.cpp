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
	 * 		Name   -> Function BP_PerkCondition_ActorHasBeenKilledBy_Data.BP_PerkCondition_ActorHasBeenKilledBy_Data_C.ActorKilled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FEventInstigator                            Instigator                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		TArray<struct FDSDamageInfo>                       DamageInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_PerkCondition_ActorHasBeenKilledBy_Data_C::ActorKilled(class AActor* Target, class AActor* Killer, const struct FEventInstigator& Instigator, TArray<struct FDSDamageInfo> DamageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_ActorHasBeenKilledBy_Data.BP_PerkCondition_ActorHasBeenKilledBy_Data_C.ActorKilled");
		
		UBP_PerkCondition_ActorHasBeenKilledBy_Data_C_ActorKilled_Params params {};
		params.Target = Target;
		params.Killer = Killer;
		params.Instigator = Instigator;
		params.DamageInfo = DamageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_ActorHasBeenKilledBy_Data.BP_PerkCondition_ActorHasBeenKilledBy_Data_C.ExecuteUbergraph_BP_PerkCondition_ActorHasBeenKilledBy_Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_ActorHasBeenKilledBy_Data_C::ExecuteUbergraph_BP_PerkCondition_ActorHasBeenKilledBy_Data(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_ActorHasBeenKilledBy_Data.BP_PerkCondition_ActorHasBeenKilledBy_Data_C.ExecuteUbergraph_BP_PerkCondition_ActorHasBeenKilledBy_Data");
		
		UBP_PerkCondition_ActorHasBeenKilledBy_Data_C_ExecuteUbergraph_BP_PerkCondition_ActorHasBeenKilledBy_Data_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkCondition_ActorHasBeenKilledBy_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkCondition_ActorHasBeenKilledBy_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkCondition_ActorHasBeenKilledBy_Data.BP_PerkCondition_ActorHasBeenKilledBy_Data_C");
		return ptr;
	}

}


