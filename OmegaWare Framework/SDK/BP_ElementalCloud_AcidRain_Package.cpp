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
	 * 		Name   -> Function BP_ElementalCloud_AcidRain.BP_ElementalCloud_AcidRain_C.SpawnAreaOfEffectComponent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ElementalCloud_AcidRain_C::SpawnAreaOfEffectComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ElementalCloud_AcidRain.BP_ElementalCloud_AcidRain_C.SpawnAreaOfEffectComponent");
		
		ABP_ElementalCloud_AcidRain_C_SpawnAreaOfEffectComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_ElementalCloud_AcidRain.BP_ElementalCloud_AcidRain_C.ExecuteUbergraph_BP_ElementalCloud_AcidRain
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ElementalCloud_AcidRain_C::ExecuteUbergraph_BP_ElementalCloud_AcidRain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ElementalCloud_AcidRain.BP_ElementalCloud_AcidRain_C.ExecuteUbergraph_BP_ElementalCloud_AcidRain");
		
		ABP_ElementalCloud_AcidRain_C_ExecuteUbergraph_BP_ElementalCloud_AcidRain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ElementalCloud_AcidRain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ElementalCloud_AcidRain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ElementalCloud_AcidRain.BP_ElementalCloud_AcidRain_C");
		return ptr;
	}

}


