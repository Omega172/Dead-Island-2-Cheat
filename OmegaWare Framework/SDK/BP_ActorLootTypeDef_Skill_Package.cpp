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
	 * 		Name   -> Function BP_ActorLootTypeDef_Skill.BP_ActorLootTypeDef_Skill_C.GetEntitlementTableAndRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            Entitlement                                                (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ActorLootTypeDef_Skill_C::GetEntitlementTableAndRow(struct FFixedDataTableEditableRowHandle* Entitlement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActorLootTypeDef_Skill.BP_ActorLootTypeDef_Skill_C.GetEntitlementTableAndRow");
		
		UBP_ActorLootTypeDef_Skill_C_GetEntitlementTableAndRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Entitlement != nullptr)
			*Entitlement = params.Entitlement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ActorLootTypeDef_Skill.BP_ActorLootTypeDef_Skill_C.GetLootActorClassToSpawn
	 * 		Flags  -> ()
	 */
	void UBP_ActorLootTypeDef_Skill_C::GetLootActorClassToSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActorLootTypeDef_Skill.BP_ActorLootTypeDef_Skill_C.GetLootActorClassToSpawn");
		
		UBP_ActorLootTypeDef_Skill_C_GetLootActorClassToSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ActorLootTypeDef_Skill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ActorLootTypeDef_Skill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActorLootTypeDef_Skill.BP_ActorLootTypeDef_Skill_C");
		return ptr;
	}

}


