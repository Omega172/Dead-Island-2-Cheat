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
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DestroyOrOrphanActivity
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_DestroyOrOrphanActivity_Params
	{	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.UnbindKnowledgeBaseListeners
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_UnbindKnowledgeBaseListeners_Params
	{	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.BindKnowledgeBaseListeners
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_BindKnowledgeBaseListeners_Params
	{	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DestroyActivityOnActivityEnded
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_DestroyActivityOnActivityEnded_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActivityEndedReason                                       EndReason;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G9HL[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DespawnActivity
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_DespawnActivity_Params
	{	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DeactivateActivity
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_DeactivateActivity_Params
	{	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.SpawnOrActivateActivity
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_SpawnOrActivateActivity_Params
	{	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.SetActivityActive
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_SetActivityActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.CleanUpAndDestroyActivity
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_CleanUpAndDestroyActivity_Params
	{	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.IsActivityActive
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_IsActivityActive_Params
	{
	public:
		bool                                                       ActivityActive;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DisableActivity
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_DisableActivity_Params
	{	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.SpawnActivity
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_SpawnActivity_Params
	{	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.UpdateActivityPositionAndEnable
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_UpdateActivityPositionAndEnable_Params
	{	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.On Evaluate Expression
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_OnEvaluateExpression_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.SetupExpressionListenerForActor
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_SetupExpressionListenerForActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.On Owner Destruction
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_OnOwnerDestruction_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ReceiveBeginPlay
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ReceiveEndPlay
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ExecuteUbergraph_BPC_Base_ConditionalActivityGeneratorComponent
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_ExecuteUbergraph_BPC_Base_ConditionalActivityGeneratorComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ActivityWillBeEnabled__DelegateSignature
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_ActivityWillBeEnabled__DelegateSignature_Params
	{	};

	/**
	 * Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ActivityWillBeDisabled__DelegateSignature
	 */
	struct UBPC_Base_ConditionalActivityGeneratorComponent_C_ActivityWillBeDisabled__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
