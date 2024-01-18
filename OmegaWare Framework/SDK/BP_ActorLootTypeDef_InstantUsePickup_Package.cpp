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
	 * 		Name   -> Function BP_ActorLootTypeDef_InstantUsePickup.BP_ActorLootTypeDef_InstantUsePickup_C.GetLootActorClassToSpawn
	 * 		Flags  -> ()
	 */
	void UBP_ActorLootTypeDef_InstantUsePickup_C::GetLootActorClassToSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActorLootTypeDef_InstantUsePickup.BP_ActorLootTypeDef_InstantUsePickup_C.GetLootActorClassToSpawn");
		
		UBP_ActorLootTypeDef_InstantUsePickup_C_GetLootActorClassToSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ActorLootTypeDef_InstantUsePickup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ActorLootTypeDef_InstantUsePickup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActorLootTypeDef_InstantUsePickup.BP_ActorLootTypeDef_InstantUsePickup_C");
		return ptr;
	}

}


