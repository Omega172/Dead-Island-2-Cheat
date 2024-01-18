#pragma once

/**
 * Name: Dead_Island_2
 * Version: Cracked
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
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnBeginEarly
	 */
	struct UBP_Action_Base_Task_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L7HV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.GetOverrideParticipantParameters
	 */
	struct UBP_Action_Base_Task_AI_C_GetOverrideParticipantParameters_Params
	{
	public:
		struct FParticipantLaunchParameters                        ParticipantLaunchParameters;                             // 0x0000(0x0018)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.LeaveCurrentActivity
	 */
	struct UBP_Action_Base_Task_AI_C_LeaveCurrentActivity_Params
	{	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnSelectedActivityFromParams
	 */
	struct UBP_Action_Base_Task_AI_C_OnSelectedActivityFromParams_Params
	{
	public:
		class AActor*                                              ActivityActorOwner;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActivityActor*                                      SelectedActivity;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.LaunchActivityByParamsOrEQS
	 */
	struct UBP_Action_Base_Task_AI_C_LaunchActivityByParamsOrEQS_Params
	{	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.FindClosestActivity
	 */
	struct UBP_Action_Base_Task_AI_C_FindClosestActivity_Params
	{
	public:
		bool                                                       LaunchedActivitySuccessfully;                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LG3C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActivityActor*                                      LaunchedActivity;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.CacheAllActivityDistances
	 */
	struct UBP_Action_Base_Task_AI_C_CacheAllActivityDistances_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.ActivityActorsToTry
	 */
	struct UBP_Action_Base_Task_AI_C_ActivityActorsToTry_Params
	{
	public:
		class AActor*                                              OwnerActivityActor;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AActivityActor*>                              ActivityActor;                                           // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.Launch Activity Directly
	 */
	struct UBP_Action_Base_Task_AI_C_LaunchActivityDirectly_Params
	{
	public:
		class AActor*                                              InputActivityActor;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ActivitySuccess;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TJNW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActivityActor*                                      ActivityActor;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.SetActivityActorAndBindings
	 */
	struct UBP_Action_Base_Task_AI_C_SetActivityActorAndBindings_Params
	{
	public:
		class AActivityActor*                                      ActivityActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.CommitAttackRules
	 */
	struct UBP_Action_Base_Task_AI_C_CommitAttackRules_Params
	{	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.RequiresSuccesssfulAndFailureFactSetup
	 */
	struct UBP_Action_Base_Task_AI_C_RequiresSuccesssfulAndFailureFactSetup_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KL7N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.SetupRegenRate
	 */
	struct UBP_Action_Base_Task_AI_C_SetupRegenRate_Params
	{
	public:
		float                                                      NewRegenRateMod;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.WasActionSuccessful
	 */
	struct UBP_Action_Base_Task_AI_C_WasActionSuccessful_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VN8U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.ModifyDeckCounters
	 */
	struct UBP_Action_Base_Task_AI_C_ModifyDeckCounters_Params
	{
	public:
		ECharacterActionEndedReason                                ReasonForEnding;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.IncrementIntergerFact
	 */
	struct UBP_Action_Base_Task_AI_C_IncrementIntergerFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.LogIfInterruptIsInvalid
	 */
	struct UBP_Action_Base_Task_AI_C_LogIfInterruptIsInvalid_Params
	{
	public:
		EActivityEndedReason                                       ActivityEndReason;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.RequestCurrentActivityToUninitialise
	 */
	struct UBP_Action_Base_Task_AI_C_RequestCurrentActivityToUninitialise_Params
	{	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.FindAndLaunchActivity
	 */
	struct UBP_Action_Base_Task_AI_C_FindAndLaunchActivity_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   EQS_QueryInstance;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ActivitySuccess;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V0D7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActivityActor*                                      ActivityActor;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.CombatTargetChanged
	 */
	struct UBP_Action_Base_Task_AI_C_CombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.HealthUpdated
	 */
	struct UBP_Action_Base_Task_AI_C_HealthUpdated_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LastHealth;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentHealth;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnActivityReached
	 */
	struct UBP_Action_Base_Task_AI_C_OnActivityReached_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.ActivityExitReason
	 */
	struct UBP_Action_Base_Task_AI_C_ActivityExitReason_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActivityEndedReason                                       EndReason;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnThresholdTrackingRequrementMet
	 */
	struct UBP_Action_Base_Task_AI_C_OnThresholdTrackingRequrementMet_Params
	{
	public:
		bool                                                       DamageRequirementMet;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StabilityDamageMet;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.RunQuery
	 */
	struct UBP_Action_Base_Task_AI_C_RunQuery_Params
	{	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.QueryComplete
	 */
	struct UBP_Action_Base_Task_AI_C_QueryComplete_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.RerunQuery
	 */
	struct UBP_Action_Base_Task_AI_C_RerunQuery_Params
	{	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.LaunchParticipantWithActor
	 */
	struct UBP_Action_Base_Task_AI_C_LaunchParticipantWithActor_Params
	{
	public:
		class AActor*                                              InputActivityActor;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnBegin
	 */
	struct UBP_Action_Base_Task_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnEnd
	 */
	struct UBP_Action_Base_Task_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.ExecuteUbergraph_BP_Action_Base_Task_AI
	 */
	struct UBP_Action_Base_Task_AI_C_ExecuteUbergraph_BP_Action_Base_Task_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EZNV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
