﻿/**
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
	 * 		Name   -> Function BP_PerkCondition_OtherPlayerReceivedDamage_Data.BP_PerkCondition_OtherPlayerReceivedDamage_Data_C.ActorTookDamage
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OriginalDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageTaken                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FEventInstigator                            InstigatedBy                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDSDamageData                               DSDamageData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkCondition_OtherPlayerReceivedDamage_Data_C::ActorTookDamage(class AActor* DamagedActor, float OriginalDamage, float DamageTaken, const struct FDamageEvent& DamageEvent, const struct FEventInstigator& InstigatedBy, class AActor* DamageCauser, const struct FDSDamageData& DSDamageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_OtherPlayerReceivedDamage_Data.BP_PerkCondition_OtherPlayerReceivedDamage_Data_C.ActorTookDamage");
		
		UBP_PerkCondition_OtherPlayerReceivedDamage_Data_C_ActorTookDamage_Params params {};
		params.DamagedActor = DamagedActor;
		params.OriginalDamage = OriginalDamage;
		params.DamageTaken = DamageTaken;
		params.DamageEvent = DamageEvent;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.DSDamageData = DSDamageData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkCondition_OtherPlayerReceivedDamage_Data.BP_PerkCondition_OtherPlayerReceivedDamage_Data_C.ExecuteUbergraph_BP_PerkCondition_OtherPlayerReceivedDamage_Data
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_OtherPlayerReceivedDamage_Data_C::ExecuteUbergraph_BP_PerkCondition_OtherPlayerReceivedDamage_Data(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_OtherPlayerReceivedDamage_Data.BP_PerkCondition_OtherPlayerReceivedDamage_Data_C.ExecuteUbergraph_BP_PerkCondition_OtherPlayerReceivedDamage_Data");
		
		UBP_PerkCondition_OtherPlayerReceivedDamage_Data_C_ExecuteUbergraph_BP_PerkCondition_OtherPlayerReceivedDamage_Data_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkCondition_OtherPlayerReceivedDamage_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkCondition_OtherPlayerReceivedDamage_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkCondition_OtherPlayerReceivedDamage_Data.BP_PerkCondition_OtherPlayerReceivedDamage_Data_C");
		return ptr;
	}

}


