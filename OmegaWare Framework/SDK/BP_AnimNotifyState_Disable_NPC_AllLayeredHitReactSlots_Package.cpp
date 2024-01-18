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
	 * 		Name   -> Function BP_AnimNotifyState_Disable_NPC_AllLayeredHitReactSlots.BP_AnimNotifyState_Disable_NPC_AllLayeredHitReactSlots_C.GetNotifyName
	 * 		Flags  -> ()
	 */
	class FString UBP_AnimNotifyState_Disable_NPC_AllLayeredHitReactSlots_C::GetNotifyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Disable_NPC_AllLayeredHitReactSlots.BP_AnimNotifyState_Disable_NPC_AllLayeredHitReactSlots_C.GetNotifyName");
		
		UBP_AnimNotifyState_Disable_NPC_AllLayeredHitReactSlots_C_GetNotifyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AnimNotifyState_Disable_NPC_AllLayeredHitReactSlots_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AnimNotifyState_Disable_NPC_AllLayeredHitReactSlots_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyState_Disable_NPC_AllLayeredHitReactSlots.BP_AnimNotifyState_Disable_NPC_AllLayeredHitReactSlots_C");
		return ptr;
	}

}


