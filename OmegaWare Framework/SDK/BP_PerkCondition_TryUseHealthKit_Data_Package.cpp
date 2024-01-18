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
	 * 		Name   -> Function BP_PerkCondition_TryUseHealthKit_Data.BP_PerkCondition_TryUseHealthKit_Data_C.UsedHealthPack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHUDHealthPackUseResult                            UseResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADIPlayerCharacter*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_TryUseHealthKit_Data_C::UsedHealthPack(EHUDHealthPackUseResult UseResult, class ADIPlayerCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_TryUseHealthKit_Data.BP_PerkCondition_TryUseHealthKit_Data_C.UsedHealthPack");
		
		UBP_PerkCondition_TryUseHealthKit_Data_C_UsedHealthPack_Params params {};
		params.UseResult = UseResult;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_TryUseHealthKit_Data.BP_PerkCondition_TryUseHealthKit_Data_C.ExecuteUbergraph_BP_PerkCondition_TryUseHealthKit_Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_TryUseHealthKit_Data_C::ExecuteUbergraph_BP_PerkCondition_TryUseHealthKit_Data(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_TryUseHealthKit_Data.BP_PerkCondition_TryUseHealthKit_Data_C.ExecuteUbergraph_BP_PerkCondition_TryUseHealthKit_Data");
		
		UBP_PerkCondition_TryUseHealthKit_Data_C_ExecuteUbergraph_BP_PerkCondition_TryUseHealthKit_Data_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkCondition_TryUseHealthKit_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkCondition_TryUseHealthKit_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkCondition_TryUseHealthKit_Data.BP_PerkCondition_TryUseHealthKit_Data_C");
		return ptr;
	}

}


