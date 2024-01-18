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
	 * 		Name   -> Function BP_ClippedSkinnedGlassShards.BP_ClippedSkinnedGlassShards_C.AddDespawnRequest
	 * 		Flags  -> ()
	 */
	void ABP_ClippedSkinnedGlassShards_C::AddDespawnRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ClippedSkinnedGlassShards.BP_ClippedSkinnedGlassShards_C.AddDespawnRequest");
		
		ABP_ClippedSkinnedGlassShards_C_AddDespawnRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ClippedSkinnedGlassShards.BP_ClippedSkinnedGlassShards_C.AddImpulseAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InImpulse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InImpulseFalloffDistance                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InImpulseMin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InImpulseMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ClippedSkinnedGlassShards_C::AddImpulseAtLocation(const struct FVector& InLocation, const struct FVector& InImpulse, float InImpulseFalloffDistance, float InImpulseMin, float InImpulseMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ClippedSkinnedGlassShards.BP_ClippedSkinnedGlassShards_C.AddImpulseAtLocation");
		
		ABP_ClippedSkinnedGlassShards_C_AddImpulseAtLocation_Params params {};
		params.InLocation = InLocation;
		params.InImpulse = InImpulse;
		params.InImpulseFalloffDistance = InImpulseFalloffDistance;
		params.InImpulseMin = InImpulseMin;
		params.InImpulseMax = InImpulseMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ClippedSkinnedGlassShards.BP_ClippedSkinnedGlassShards_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ClippedSkinnedGlassShards_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ClippedSkinnedGlassShards.BP_ClippedSkinnedGlassShards_C.UserConstructionScript");
		
		ABP_ClippedSkinnedGlassShards_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ClippedSkinnedGlassShards_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ClippedSkinnedGlassShards_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ClippedSkinnedGlassShards.BP_ClippedSkinnedGlassShards_C");
		return ptr;
	}

}


