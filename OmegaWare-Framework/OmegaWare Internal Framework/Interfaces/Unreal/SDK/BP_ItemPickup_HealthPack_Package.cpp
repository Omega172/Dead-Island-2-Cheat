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
	 * 		Name   -> Function BP_ItemPickup_HealthPack.BP_ItemPickup_HealthPack_C.ToggleLootOutline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ItemPickup_HealthPack_C::ToggleLootOutline(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPickup_HealthPack.BP_ItemPickup_HealthPack_C.ToggleLootOutline");
		
		ABP_ItemPickup_HealthPack_C_ToggleLootOutline_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ItemPickup_HealthPack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ItemPickup_HealthPack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemPickup_HealthPack.BP_ItemPickup_HealthPack_C");
		return ptr;
	}

}


