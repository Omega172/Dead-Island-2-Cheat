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
	 * 		Name   -> Function BP_PerkEffect_SpawnActorAtRecipientLocation.BP_PerkEffect_SpawnActorAtRecipientLocation_C.BindToOwnerDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_SpawnActorAtRecipientLocation_C::BindToOwnerDeath(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpawnActorAtRecipientLocation.BP_PerkEffect_SpawnActorAtRecipientLocation_C.BindToOwnerDeath");
		
		UBP_PerkEffect_SpawnActorAtRecipientLocation_C_BindToOwnerDeath_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_SpawnActorAtRecipientLocation.BP_PerkEffect_SpawnActorAtRecipientLocation_C.OnStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_SpawnActorAtRecipientLocation_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpawnActorAtRecipientLocation.BP_PerkEffect_SpawnActorAtRecipientLocation_C.OnStart");
		
		UBP_PerkEffect_SpawnActorAtRecipientLocation_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_SpawnActorAtRecipientLocation.BP_PerkEffect_SpawnActorAtRecipientLocation_C.DestroySpawnedActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_SpawnActorAtRecipientLocation_C::DestroySpawnedActor(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpawnActorAtRecipientLocation.BP_PerkEffect_SpawnActorAtRecipientLocation_C.DestroySpawnedActor");
		
		UBP_PerkEffect_SpawnActorAtRecipientLocation_C_DestroySpawnedActor_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_SpawnActorAtRecipientLocation.BP_PerkEffect_SpawnActorAtRecipientLocation_C.ExecuteUbergraph_BP_PerkEffect_SpawnActorAtRecipientLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_SpawnActorAtRecipientLocation_C::ExecuteUbergraph_BP_PerkEffect_SpawnActorAtRecipientLocation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpawnActorAtRecipientLocation.BP_PerkEffect_SpawnActorAtRecipientLocation_C.ExecuteUbergraph_BP_PerkEffect_SpawnActorAtRecipientLocation");
		
		UBP_PerkEffect_SpawnActorAtRecipientLocation_C_ExecuteUbergraph_BP_PerkEffect_SpawnActorAtRecipientLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_SpawnActorAtRecipientLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_SpawnActorAtRecipientLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_SpawnActorAtRecipientLocation.BP_PerkEffect_SpawnActorAtRecipientLocation_C");
		return ptr;
	}

}


