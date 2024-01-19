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
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnMinDurationOver
	 */
	struct UBP_Action_Scream_Screamer_C_OnMinDurationOver_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.DetermineIfPrematureEnd
	 */
	struct UBP_Action_Scream_Screamer_C_DetermineIfPrematureEnd_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.RemoveBurningAccumulation
	 */
	struct UBP_Action_Scream_Screamer_C_RemoveBurningAccumulation_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.ClientSetup
	 */
	struct UBP_Action_Scream_Screamer_C_ClientSetup_Params
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.SetDebugActive
	 */
	struct UBP_Action_Scream_Screamer_C_SetDebugActive_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.RemoveHealthTracking
	 */
	struct UBP_Action_Scream_Screamer_C_RemoveHealthTracking_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnBeginEarly
	 */
	struct UBP_Action_Scream_Screamer_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E3VQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddNeutralStatusEffect
	 */
	struct UBP_Action_Scream_Screamer_C_AddNeutralStatusEffect_Params
	{
	public:
		class UObject*                                             OverlappedCharacter;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectComponent*                              StatusEffectComponent;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               OutputPin;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddFriendlyStatusEffect
	 */
	struct UBP_Action_Scream_Screamer_C_AddFriendlyStatusEffect_Params
	{
	public:
		class UObject*                                             OverlappedCharacter;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectComponent*                              StatusEffectComponent;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               OutputPin;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddHostileStatusEffect
	 */
	struct UBP_Action_Scream_Screamer_C_AddHostileStatusEffect_Params
	{
	public:
		class UObject*                                             OverlappedCharacter;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectComponent*                              StatusEffectComponent;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.EndStim
	 */
	struct UBP_Action_Scream_Screamer_C_EndStim_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.GetCurveChangePoint
	 */
	struct UBP_Action_Scream_Screamer_C_GetCurveChangePoint_Params
	{
	public:
		float                                                      MinTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxTime;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ChangeFromValue;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.PlayCE_OnEnd
	 */
	struct UBP_Action_Scream_Screamer_C_PlayCE_OnEnd_Params
	{
	public:
		ECharacterActionEndedReason                                ExitReason;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.PlayCE_OnBegin
	 */
	struct UBP_Action_Scream_Screamer_C_PlayCE_OnBegin_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddLingeringStatusEffect
	 */
	struct UBP_Action_Scream_Screamer_C_AddLingeringStatusEffect_Params
	{
	public:
		class ADICharacter*                                        OverlappedCharacter;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectComponent*                              StatusEffectComponent;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               StatusEffectInstance;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.ShouldRequestBackup
	 */
	struct UBP_Action_Scream_Screamer_C_ShouldRequestBackup_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.CancelZombieBackup
	 */
	struct UBP_Action_Scream_Screamer_C_CancelZombieBackup_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.EndSphereOverlap
	 */
	struct UBP_Action_Scream_Screamer_C_EndSphereOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.SummonZombieBackup
	 */
	struct UBP_Action_Scream_Screamer_C_SummonZombieBackup_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddOverlapStatusEffect
	 */
	struct UBP_Action_Scream_Screamer_C_AddOverlapStatusEffect_Params
	{
	public:
		EFactionReaction                                           FactionReaction;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KFIS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStatusEffectComponent*                              StatusEffectComponent;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             OverlappedCharacter;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnOverlapScreamSphere
	 */
	struct UBP_Action_Scream_Screamer_C_OnOverlapScreamSphere_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.UninitialiseScreamCollision
	 */
	struct UBP_Action_Scream_Screamer_C_UninitialiseScreamCollision_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.IntialiseScreamCollision
	 */
	struct UBP_Action_Scream_Screamer_C_IntialiseScreamCollision_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.SpawnExplosion
	 */
	struct UBP_Action_Scream_Screamer_C_SpawnExplosion_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.UnintialiseScreamEffects
	 */
	struct UBP_Action_Scream_Screamer_C_UnintialiseScreamEffects_Params
	{
	public:
		ECharacterActionEndedReason                                ExitReason;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S3LB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.IntialiseScreamEffects
	 */
	struct UBP_Action_Scream_Screamer_C_IntialiseScreamEffects_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.SpawnStim
	 */
	struct UBP_Action_Scream_Screamer_C_SpawnStim_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnBegin
	 */
	struct UBP_Action_Scream_Screamer_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnEnd
	 */
	struct UBP_Action_Scream_Screamer_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnScreamDurationOver
	 */
	struct UBP_Action_Scream_Screamer_C_OnScreamDurationOver_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnCombatStateChanged
	 */
	struct UBP_Action_Scream_Screamer_C_OnCombatStateChanged_Params
	{
	public:
		ECosmeticCombatState                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnScreamEffectsBeginChanged
	 */
	struct UBP_Action_Scream_Screamer_C_OnScreamEffectsBeginChanged_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnReceivingDamageOverTimeStatusEffect
	 */
	struct UBP_Action_Scream_Screamer_C_OnReceivingDamageOverTimeStatusEffect_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.EstablishAdditionalCancelationSettings
	 */
	struct UBP_Action_Scream_Screamer_C_EstablishAdditionalCancelationSettings_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnDamageThresholdForHitReactVulnerabilityReached
	 */
	struct UBP_Action_Scream_Screamer_C_OnDamageThresholdForHitReactVulnerabilityReached_Params
	{
	public:
		bool                                                       DamageRequirementMet;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StabilityDamageMet;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.ExecuteUbergraph_BP_Action_Scream_Screamer
	 */
	struct UBP_Action_Scream_Screamer_C_ExecuteUbergraph_BP_Action_Scream_Screamer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
