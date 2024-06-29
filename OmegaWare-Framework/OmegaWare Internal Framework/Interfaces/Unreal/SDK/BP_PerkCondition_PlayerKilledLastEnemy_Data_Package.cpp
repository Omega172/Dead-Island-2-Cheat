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
	 * 		Name   -> Function BP_PerkCondition_PlayerKilledLastEnemy_Data.BP_PerkCondition_PlayerKilledLastEnemy_Data_C.CheckForNearbyZombies
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ZombiesNearby                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PerkCondition_PlayerKilledLastEnemy_Data_C::CheckForNearbyZombies(class AActor* Actor, bool* ZombiesNearby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_PlayerKilledLastEnemy_Data.BP_PerkCondition_PlayerKilledLastEnemy_Data_C.CheckForNearbyZombies");
		
		UBP_PerkCondition_PlayerKilledLastEnemy_Data_C_CheckForNearbyZombies_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ZombiesNearby != nullptr)
			*ZombiesNearby = params.ZombiesNearby;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkCondition_PlayerKilledLastEnemy_Data.BP_PerkCondition_PlayerKilledLastEnemy_Data_C.ActorJustKilled
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FEventInstigator                            Instigator                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkCondition_PlayerKilledLastEnemy_Data_C::ActorJustKilled(class AActor* Target, class AActor* Killer, const struct FEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_PlayerKilledLastEnemy_Data.BP_PerkCondition_PlayerKilledLastEnemy_Data_C.ActorJustKilled");
		
		UBP_PerkCondition_PlayerKilledLastEnemy_Data_C_ActorJustKilled_Params params {};
		params.Target = Target;
		params.Killer = Killer;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkCondition_PlayerKilledLastEnemy_Data.BP_PerkCondition_PlayerKilledLastEnemy_Data_C.ExecuteUbergraph_BP_PerkCondition_PlayerKilledLastEnemy_Data
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_PlayerKilledLastEnemy_Data_C::ExecuteUbergraph_BP_PerkCondition_PlayerKilledLastEnemy_Data(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_PlayerKilledLastEnemy_Data.BP_PerkCondition_PlayerKilledLastEnemy_Data_C.ExecuteUbergraph_BP_PerkCondition_PlayerKilledLastEnemy_Data");
		
		UBP_PerkCondition_PlayerKilledLastEnemy_Data_C_ExecuteUbergraph_BP_PerkCondition_PlayerKilledLastEnemy_Data_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkCondition_PlayerKilledLastEnemy_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkCondition_PlayerKilledLastEnemy_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkCondition_PlayerKilledLastEnemy_Data.BP_PerkCondition_PlayerKilledLastEnemy_Data_C");
		return ptr;
	}

}


