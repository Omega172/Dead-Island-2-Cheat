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
	 * 		Name   -> Function BP_Base_ElementalCloud.BP_Base_ElementalCloud_C.SpawnBurstCosmetics
	 * 		Flags  -> ()
	 */
	void ABP_Base_ElementalCloud_C::SpawnBurstCosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElementalCloud.BP_Base_ElementalCloud_C.SpawnBurstCosmetics");
		
		ABP_Base_ElementalCloud_C_SpawnBurstCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ElementalCloud.BP_Base_ElementalCloud_C.DeactivateParticles
	 * 		Flags  -> ()
	 */
	void ABP_Base_ElementalCloud_C::DeactivateParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElementalCloud.BP_Base_ElementalCloud_C.DeactivateParticles");
		
		ABP_Base_ElementalCloud_C_DeactivateParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ElementalCloud.BP_Base_ElementalCloud_C.SpawnAreaOfEffectComponent
	 * 		Flags  -> ()
	 */
	void ABP_Base_ElementalCloud_C::SpawnAreaOfEffectComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElementalCloud.BP_Base_ElementalCloud_C.SpawnAreaOfEffectComponent");
		
		ABP_Base_ElementalCloud_C_SpawnAreaOfEffectComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ElementalCloud.BP_Base_ElementalCloud_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Base_ElementalCloud_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElementalCloud.BP_Base_ElementalCloud_C.ReceiveBeginPlay");
		
		ABP_Base_ElementalCloud_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ElementalCloud.BP_Base_ElementalCloud_C.ExecuteUbergraph_BP_Base_ElementalCloud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_ElementalCloud_C::ExecuteUbergraph_BP_Base_ElementalCloud(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElementalCloud.BP_Base_ElementalCloud_C.ExecuteUbergraph_BP_Base_ElementalCloud");
		
		ABP_Base_ElementalCloud_C_ExecuteUbergraph_BP_Base_ElementalCloud_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_ElementalCloud_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_ElementalCloud_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_ElementalCloud.BP_Base_ElementalCloud_C");
		return ptr;
	}

}


