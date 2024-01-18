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
	 * 		Name   -> Function BP_PerkCondition_IsSkillSlotEmpty_Data.BP_PerkCondition_IsSkillSlotEmpty_Data_C.OnCharacterPossesed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_IsSkillSlotEmpty_Data_C::OnCharacterPossesed(class AController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_IsSkillSlotEmpty_Data.BP_PerkCondition_IsSkillSlotEmpty_Data_C.OnCharacterPossesed");
		
		UBP_PerkCondition_IsSkillSlotEmpty_Data_C_OnCharacterPossesed_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_IsSkillSlotEmpty_Data.BP_PerkCondition_IsSkillSlotEmpty_Data_C.SetupTimer
	 * 		Flags  -> ()
	 */
	void UBP_PerkCondition_IsSkillSlotEmpty_Data_C::SetupTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_IsSkillSlotEmpty_Data.BP_PerkCondition_IsSkillSlotEmpty_Data_C.SetupTimer");
		
		UBP_PerkCondition_IsSkillSlotEmpty_Data_C_SetupTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_IsSkillSlotEmpty_Data.BP_PerkCondition_IsSkillSlotEmpty_Data_C.CheckForEmptySkillSlots
	 * 		Flags  -> ()
	 */
	void UBP_PerkCondition_IsSkillSlotEmpty_Data_C::CheckForEmptySkillSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_IsSkillSlotEmpty_Data.BP_PerkCondition_IsSkillSlotEmpty_Data_C.CheckForEmptySkillSlots");
		
		UBP_PerkCondition_IsSkillSlotEmpty_Data_C_CheckForEmptySkillSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_IsSkillSlotEmpty_Data.BP_PerkCondition_IsSkillSlotEmpty_Data_C.ExecuteUbergraph_BP_PerkCondition_IsSkillSlotEmpty_Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_IsSkillSlotEmpty_Data_C::ExecuteUbergraph_BP_PerkCondition_IsSkillSlotEmpty_Data(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_IsSkillSlotEmpty_Data.BP_PerkCondition_IsSkillSlotEmpty_Data_C.ExecuteUbergraph_BP_PerkCondition_IsSkillSlotEmpty_Data");
		
		UBP_PerkCondition_IsSkillSlotEmpty_Data_C_ExecuteUbergraph_BP_PerkCondition_IsSkillSlotEmpty_Data_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkCondition_IsSkillSlotEmpty_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkCondition_IsSkillSlotEmpty_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkCondition_IsSkillSlotEmpty_Data.BP_PerkCondition_IsSkillSlotEmpty_Data_C");
		return ptr;
	}

}


