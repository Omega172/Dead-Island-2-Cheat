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
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OnRep_IsSpawningBlocked
	 * 		Flags  -> ()
	 */
	void UBPC_ProjectileSpawner_C::OnRep_IsSpawningBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OnRep_IsSpawningBlocked");
		
		UBPC_ProjectileSpawner_C_OnRep_IsSpawningBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.RemoveBlockReason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ProjectileSpawner_C::RemoveBlockReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.RemoveBlockReason");
		
		UBPC_ProjectileSpawner_C_RemoveBlockReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.AddBlockReason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ProjectileSpawner_C::AddBlockReason(const class FName& Reason, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.AddBlockReason");
		
		UBPC_ProjectileSpawner_C_AddBlockReason_Params params {};
		params.Reason = Reason;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.DeactiveParticle
	 * 		Flags  -> ()
	 */
	void UBPC_ProjectileSpawner_C::DeactiveParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.DeactiveParticle");
		
		UBPC_ProjectileSpawner_C_DeactiveParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.SpawnNewParticle
	 * 		Flags  -> ()
	 */
	void UBPC_ProjectileSpawner_C::SpawnNewParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.SpawnNewParticle");
		
		UBPC_ProjectileSpawner_C_SpawnNewParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OnRep_IsSpawnerActive
	 * 		Flags  -> ()
	 */
	void UBPC_ProjectileSpawner_C::OnRep_IsSpawnerActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OnRep_IsSpawnerActive");
		
		UBPC_ProjectileSpawner_C_OnRep_IsSpawnerActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ToggleSpatialSpawning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SpatialCellActive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ProjectileSpawner_C::ToggleSpatialSpawning(bool SpatialCellActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ToggleSpatialSpawning");
		
		UBPC_ProjectileSpawner_C_ToggleSpatialSpawning_Params params {};
		params.SpatialCellActive = SpatialCellActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.GetOffsetValueOnCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DecayValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ProjectileSpawner_C::GetOffsetValueOnCurve(float* DecayValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.GetOffsetValueOnCurve");
		
		UBPC_ProjectileSpawner_C_GetOffsetValueOnCurve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DecayValue != nullptr)
			*DecayValue = params.DecayValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OnRep_DecayPercent
	 * 		Flags  -> ()
	 */
	void UBPC_ProjectileSpawner_C::OnRep_DecayPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OnRep_DecayPercent");
		
		UBPC_ProjectileSpawner_C_OnRep_DecayPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.IncrementDecayPercentage
	 * 		Flags  -> ()
	 */
	void UBPC_ProjectileSpawner_C::IncrementDecayPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.IncrementDecayPercentage");
		
		UBPC_ProjectileSpawner_C_IncrementDecayPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OverrideDecayProperties
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PercentOverride                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewModifier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ProjectileSpawner_C::OverrideDecayProperties(float PercentOverride, float NewModifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OverrideDecayProperties");
		
		UBPC_ProjectileSpawner_C_OverrideDecayProperties_Params params {};
		params.PercentOverride = PercentOverride;
		params.NewModifier = NewModifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.GetDecayValueOnCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DecayValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAtLimit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ProjectileSpawner_C::GetDecayValueOnCurve(float* DecayValue, bool* IsAtLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.GetDecayValueOnCurve");
		
		UBPC_ProjectileSpawner_C_GetDecayValueOnCurve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DecayValue != nullptr)
			*DecayValue = params.DecayValue;
		if (IsAtLimit != nullptr)
			*IsAtLimit = params.IsAtLimit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.StopProjectileSpawning
	 * 		Flags  -> ()
	 */
	void UBPC_ProjectileSpawner_C::StopProjectileSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.StopProjectileSpawning");
		
		UBPC_ProjectileSpawner_C_StopProjectileSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.StartProjectileSpawning
	 * 		Flags  -> ()
	 */
	void UBPC_ProjectileSpawner_C::StartProjectileSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.StartProjectileSpawning");
		
		UBPC_ProjectileSpawner_C_StartProjectileSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.SpawnProjectile
	 * 		Flags  -> ()
	 */
	void UBPC_ProjectileSpawner_C::SpawnProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.SpawnProjectile");
		
		UBPC_ProjectileSpawner_C_SpawnProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_ProjectileSpawner_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ReceiveBeginPlay");
		
		UBPC_ProjectileSpawner_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ProjectileSpawner_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ReceiveEndPlay");
		
		UBPC_ProjectileSpawner_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.BlockProjectileSpawning
	 * 		Flags  -> ()
	 */
	void UBPC_ProjectileSpawner_C::BlockProjectileSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.BlockProjectileSpawning");
		
		UBPC_ProjectileSpawner_C_BlockProjectileSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.UnblockProjectileSpawning
	 * 		Flags  -> ()
	 */
	void UBPC_ProjectileSpawner_C::UnblockProjectileSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.UnblockProjectileSpawning");
		
		UBPC_ProjectileSpawner_C_UnblockProjectileSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ExecuteUbergraph_BPC_ProjectileSpawner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ProjectileSpawner_C::ExecuteUbergraph_BPC_ProjectileSpawner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ExecuteUbergraph_BPC_ProjectileSpawner");
		
		UBPC_ProjectileSpawner_C_ExecuteUbergraph_BPC_ProjectileSpawner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_ProjectileSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_ProjectileSpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ProjectileSpawner.BPC_ProjectileSpawner_C");
		return ptr;
	}

}


