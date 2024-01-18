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
	 * 		Name   -> Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.GetAmmoInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARangedWeaponItemActor*                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LocalAmmoCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LocalAmmoCapacity                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ReserveAmmoCount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_AmmoPercentage_Data_C::GetAmmoInfo(class ARangedWeaponItemActor* Target, int32_t* LocalAmmoCount, int32_t* LocalAmmoCapacity, int32_t* ReserveAmmoCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.GetAmmoInfo");
		
		UBP_PerkCondition_AmmoPercentage_Data_C_GetAmmoInfo_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalAmmoCount != nullptr)
			*LocalAmmoCount = params.LocalAmmoCount;
		if (LocalAmmoCapacity != nullptr)
			*LocalAmmoCapacity = params.LocalAmmoCapacity;
		if (ReserveAmmoCount != nullptr)
			*ReserveAmmoCount = params.ReserveAmmoCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.GetTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PerkCondition_AmmoPercentage_Data_C::GetTarget(bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.GetTarget");
		
		UBP_PerkCondition_AmmoPercentage_Data_C_GetTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.Equipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperDollSlot*                              PaperDollSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_AmmoPercentage_Data_C::Equipped(class UPaperDollSlot* PaperDollSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.Equipped");
		
		UBP_PerkCondition_AmmoPercentage_Data_C_Equipped_Params params {};
		params.PaperDollSlot = PaperDollSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.ShotEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModularShotHandler*                         ShotHandler                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_AmmoPercentage_Data_C::ShotEnded(class UModularShotHandler* ShotHandler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.ShotEnded");
		
		UBP_PerkCondition_AmmoPercentage_Data_C_ShotEnded_Params params {};
		params.ShotHandler = ShotHandler;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.CheckAmmoPercentage
	 * 		Flags  -> ()
	 */
	void UBP_PerkCondition_AmmoPercentage_Data_C::CheckAmmoPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.CheckAmmoPercentage");
		
		UBP_PerkCondition_AmmoPercentage_Data_C_CheckAmmoPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.ExecuteUbergraph_BP_PerkCondition_AmmoPercentage_Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_AmmoPercentage_Data_C::ExecuteUbergraph_BP_PerkCondition_AmmoPercentage_Data(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C.ExecuteUbergraph_BP_PerkCondition_AmmoPercentage_Data");
		
		UBP_PerkCondition_AmmoPercentage_Data_C_ExecuteUbergraph_BP_PerkCondition_AmmoPercentage_Data_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkCondition_AmmoPercentage_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkCondition_AmmoPercentage_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C");
		return ptr;
	}

}


