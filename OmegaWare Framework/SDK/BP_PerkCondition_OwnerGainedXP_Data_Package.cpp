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
	 * 		Name   -> Function BP_PerkCondition_OwnerGainedXP_Data.BP_PerkCondition_OwnerGainedXP_Data_C.BindPlayerProgressionEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADIPlayerController*                         DIPlayerController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Bind                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PerkCondition_OwnerGainedXP_Data_C::BindPlayerProgressionEvent(class ADIPlayerController* DIPlayerController, bool Bind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_OwnerGainedXP_Data.BP_PerkCondition_OwnerGainedXP_Data_C.BindPlayerProgressionEvent");
		
		UBP_PerkCondition_OwnerGainedXP_Data_C_BindPlayerProgressionEvent_Params params {};
		params.DIPlayerController = DIPlayerController;
		params.Bind = Bind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_OwnerGainedXP_Data.BP_PerkCondition_OwnerGainedXP_Data_C.OnXPChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PreviousValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_OwnerGainedXP_Data_C::OnXPChanged(int32_t NewValue, int32_t PreviousValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_OwnerGainedXP_Data.BP_PerkCondition_OwnerGainedXP_Data_C.OnXPChanged");
		
		UBP_PerkCondition_OwnerGainedXP_Data_C_OnXPChanged_Params params {};
		params.NewValue = NewValue;
		params.PreviousValue = PreviousValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_OwnerGainedXP_Data.BP_PerkCondition_OwnerGainedXP_Data_C.OnPossesed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_OwnerGainedXP_Data_C::OnPossesed(class AController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_OwnerGainedXP_Data.BP_PerkCondition_OwnerGainedXP_Data_C.OnPossesed");
		
		UBP_PerkCondition_OwnerGainedXP_Data_C_OnPossesed_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_OwnerGainedXP_Data.BP_PerkCondition_OwnerGainedXP_Data_C.ExecuteUbergraph_BP_PerkCondition_OwnerGainedXP_Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_OwnerGainedXP_Data_C::ExecuteUbergraph_BP_PerkCondition_OwnerGainedXP_Data(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_OwnerGainedXP_Data.BP_PerkCondition_OwnerGainedXP_Data_C.ExecuteUbergraph_BP_PerkCondition_OwnerGainedXP_Data");
		
		UBP_PerkCondition_OwnerGainedXP_Data_C_ExecuteUbergraph_BP_PerkCondition_OwnerGainedXP_Data_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkCondition_OwnerGainedXP_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkCondition_OwnerGainedXP_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkCondition_OwnerGainedXP_Data.BP_PerkCondition_OwnerGainedXP_Data_C");
		return ptr;
	}

}


