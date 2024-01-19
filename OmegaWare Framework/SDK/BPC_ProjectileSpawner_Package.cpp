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
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OnRep_IsSpawningBlocked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.RemoveBlockReason
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.AddBlockReason
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.DeactiveParticle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.SpawnNewParticle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OnRep_IsSpawnerActive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ToggleSpatialSpawning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.GetOffsetValueOnCurve
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OnRep_DecayPercent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.IncrementDecayPercentage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OverrideDecayProperties
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.GetDecayValueOnCurve
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.StopProjectileSpawning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.StartProjectileSpawning
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.SpawnProjectile
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.BlockProjectileSpawning
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.UnblockProjectileSpawning
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ExecuteUbergraph_BPC_ProjectileSpawner
	 * 		Flags  -> (Final)
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


