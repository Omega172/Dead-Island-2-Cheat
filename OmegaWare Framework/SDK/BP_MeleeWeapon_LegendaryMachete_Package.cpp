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
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.StartCE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LocationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    RotationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeleeWeapon_LegendaryMachete_C::StartCE(const struct FVector& LocationOffset, const struct FRotator& RotationOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.StartCE");
		
		ABP_MeleeWeapon_LegendaryMachete_C_StartCE_Params params {};
		params.LocationOffset = LocationOffset;
		params.RotationOffset = RotationOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ImpactInstigated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointImpactEventResult                     RecordedImpact                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void ABP_MeleeWeapon_LegendaryMachete_C::ImpactInstigated(const struct FPointImpactEventResult& RecordedImpact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ImpactInstigated");
		
		ABP_MeleeWeapon_LegendaryMachete_C_ImpactInstigated_Params params {};
		params.RecordedImpact = RecordedImpact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.EffectEnded
	 * 		Flags  -> ()
	 */
	void ABP_MeleeWeapon_LegendaryMachete_C::EffectEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.EffectEnded");
		
		ABP_MeleeWeapon_LegendaryMachete_C_EffectEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_LegendaryMachete_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ReceiveTick");
		
		ABP_MeleeWeapon_LegendaryMachete_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ClearEffect
	 * 		Flags  -> ()
	 */
	void ABP_MeleeWeapon_LegendaryMachete_C::ClearEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ClearEffect");
		
		ABP_MeleeWeapon_LegendaryMachete_C_ClearEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.DeferredBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MeleeWeapon_LegendaryMachete_C::DeferredBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.DeferredBeginPlay");
		
		ABP_MeleeWeapon_LegendaryMachete_C_DeferredBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.FactChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeleeWeapon_LegendaryMachete_C::FactChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.FactChanged");
		
		ABP_MeleeWeapon_LegendaryMachete_C_FactChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_LegendaryMachete_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ReceiveEndPlay");
		
		ABP_MeleeWeapon_LegendaryMachete_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ExecuteUbergraph_BP_MeleeWeapon_LegendaryMachete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_LegendaryMachete_C::ExecuteUbergraph_BP_MeleeWeapon_LegendaryMachete(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ExecuteUbergraph_BP_MeleeWeapon_LegendaryMachete");
		
		ABP_MeleeWeapon_LegendaryMachete_C_ExecuteUbergraph_BP_MeleeWeapon_LegendaryMachete_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeleeWeapon_LegendaryMachete_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeleeWeapon_LegendaryMachete_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C");
		return ptr;
	}

}


