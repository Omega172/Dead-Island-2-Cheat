#pragma once

/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OnRep_IsSpawningBlocked
	 */
	struct UBPC_ProjectileSpawner_C_OnRep_IsSpawningBlocked_Params
	{	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.RemoveBlockReason
	 */
	struct UBPC_ProjectileSpawner_C_RemoveBlockReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.AddBlockReason
	 */
	struct UBPC_ProjectileSpawner_C_AddBlockReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.DeactiveParticle
	 */
	struct UBPC_ProjectileSpawner_C_DeactiveParticle_Params
	{	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.SpawnNewParticle
	 */
	struct UBPC_ProjectileSpawner_C_SpawnNewParticle_Params
	{	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OnRep_IsSpawnerActive
	 */
	struct UBPC_ProjectileSpawner_C_OnRep_IsSpawnerActive_Params
	{	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ToggleSpatialSpawning
	 */
	struct UBPC_ProjectileSpawner_C_ToggleSpatialSpawning_Params
	{
	public:
		bool                                                       SpatialCellActive;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.GetOffsetValueOnCurve
	 */
	struct UBPC_ProjectileSpawner_C_GetOffsetValueOnCurve_Params
	{
	public:
		float                                                      DecayValue;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OnRep_DecayPercent
	 */
	struct UBPC_ProjectileSpawner_C_OnRep_DecayPercent_Params
	{	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.IncrementDecayPercentage
	 */
	struct UBPC_ProjectileSpawner_C_IncrementDecayPercentage_Params
	{	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.OverrideDecayProperties
	 */
	struct UBPC_ProjectileSpawner_C_OverrideDecayProperties_Params
	{
	public:
		float                                                      PercentOverride;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewModifier;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.GetDecayValueOnCurve
	 */
	struct UBPC_ProjectileSpawner_C_GetDecayValueOnCurve_Params
	{
	public:
		float                                                      DecayValue;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAtLimit;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.StopProjectileSpawning
	 */
	struct UBPC_ProjectileSpawner_C_StopProjectileSpawning_Params
	{	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.StartProjectileSpawning
	 */
	struct UBPC_ProjectileSpawner_C_StartProjectileSpawning_Params
	{	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.SpawnProjectile
	 */
	struct UBPC_ProjectileSpawner_C_SpawnProjectile_Params
	{	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ReceiveBeginPlay
	 */
	struct UBPC_ProjectileSpawner_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ReceiveEndPlay
	 */
	struct UBPC_ProjectileSpawner_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.BlockProjectileSpawning
	 */
	struct UBPC_ProjectileSpawner_C_BlockProjectileSpawning_Params
	{	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.UnblockProjectileSpawning
	 */
	struct UBPC_ProjectileSpawner_C_UnblockProjectileSpawning_Params
	{	};

	/**
	 * Function BPC_ProjectileSpawner.BPC_ProjectileSpawner_C.ExecuteUbergraph_BPC_ProjectileSpawner
	 */
	struct UBPC_ProjectileSpawner_C_ExecuteUbergraph_BPC_ProjectileSpawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
