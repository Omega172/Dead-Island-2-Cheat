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
	 * 		Name   -> Function BP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data.BP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data_C.StaringStarts
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStareeComponent*                            InDIStareeComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data_C::StaringStarts(class UStareeComponent* InDIStareeComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data.BP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data_C.StaringStarts");
		
		UBP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data_C_StaringStarts_Params params {};
		params.InDIStareeComponent = InDIStareeComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data.BP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data_C.ExecuteUbergraph_BP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data_C::ExecuteUbergraph_BP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data.BP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data_C.ExecuteUbergraph_BP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data");
		
		UBP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data_C_ExecuteUbergraph_BP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data.BP_PerkCondition_OwnerHasStaredAtHigherLevelEnemy_Data_C");
		return ptr;
	}

}


