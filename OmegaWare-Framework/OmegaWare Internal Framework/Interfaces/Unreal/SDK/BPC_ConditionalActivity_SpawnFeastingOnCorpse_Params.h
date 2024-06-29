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
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.DestroyOrOrphanActivity
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_DestroyOrOrphanActivity_Params
	{	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.PlayDeadPosingDebug
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_PlayDeadPosingDebug_Params
	{	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.BindKnowledgeBaseListeners
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_BindKnowledgeBaseListeners_Params
	{	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SetupActivity
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_SetupActivity_Params
	{	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SetActivityTransform
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_SetActivityTransform_Params
	{
	public:
		class USceneComponent*                                     Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LocationOffset;                                          // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            RotationOffset;                                          // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxFloorDistance;                                        // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FoundSpawnLocation;                                      // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B201[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnTransform;                                         // 0x0030(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.RemoveFeastingCorpseLingerReason
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_RemoveFeastingCorpseLingerReason_Params
	{	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.AddFeastingCorpseLingerReason
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_AddFeastingCorpseLingerReason_Params
	{	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.OnParticipantWillBeReleased
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_OnParticipantWillBeReleased_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.OnParticipantWillArrive
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_OnParticipantWillArrive_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.UpdateTargetTransform
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_UpdateTargetTransform_Params
	{	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.IsStationary
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_IsStationary_Params
	{
	public:
		bool                                                       IsStationary;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.IsActivityActive
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_IsActivityActive_Params
	{
	public:
		bool                                                       ActivityActive;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9P51[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.DisableActivity
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_DisableActivity_Params
	{	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SpawnActivity
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_SpawnActivity_Params
	{	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.UpdateActivityPositionAndEnable
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_UpdateActivityPositionAndEnable_Params
	{	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SetActivityActive
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_SetActivityActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SetupExpressionListenerForActor
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_SetupExpressionListenerForActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.CleanUpAndDestroyActivity
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_CleanUpAndDestroyActivity_Params
	{	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.On Evaluate Expression
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_OnEvaluateExpression_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.UpdateActivityState
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_UpdateActivityState_Params
	{	};

	/**
	 * Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.ExecuteUbergraph_BPC_ConditionalActivity_SpawnFeastingOnCorpse
	 */
	struct UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_ExecuteUbergraph_BPC_ConditionalActivity_SpawnFeastingOnCorpse_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
