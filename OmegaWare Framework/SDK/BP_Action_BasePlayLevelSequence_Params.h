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
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.SetLifetimeFacts
	 */
	struct UBP_Action_BasePlayLevelSequence_C_SetLifetimeFacts_Params
	{
	public:
		bool                                                       Increment;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_62LZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnSequenceTimeRemaining
	 */
	struct UBP_Action_BasePlayLevelSequence_C_OnSequenceTimeRemaining_Params
	{
	public:
		float                                                      TimeRequested;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.UnbindClientInterruptAndBlockExpression
	 */
	struct UBP_Action_BasePlayLevelSequence_C_UnbindClientInterruptAndBlockExpression_Params
	{	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.BindClientInterruptAndBlockExpression
	 */
	struct UBP_Action_BasePlayLevelSequence_C_BindClientInterruptAndBlockExpression_Params
	{	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.PlayGameSequence
	 */
	struct UBP_Action_BasePlayLevelSequence_C_PlayGameSequence_Params
	{	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.CleanUpGameSequence
	 */
	struct UBP_Action_BasePlayLevelSequence_C_CleanUpGameSequence_Params
	{	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.GatherPrerequisites
	 */
	struct UBP_Action_BasePlayLevelSequence_C_GatherPrerequisites_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PJL0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.SetEndCollisionAndMovementMode
	 */
	struct UBP_Action_BasePlayLevelSequence_C_SetEndCollisionAndMovementMode_Params
	{	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.SetBeginCollisionAndMovementMode
	 */
	struct UBP_Action_BasePlayLevelSequence_C_SetBeginCollisionAndMovementMode_Params
	{	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.Resolve
	 */
	struct UBP_Action_BasePlayLevelSequence_C_Resolve_Params
	{
	public:
		struct FCharacterActionResolveParams                       Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		ECharacterActionResolution                                 OutResolution;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NAPK[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutQueuedTimeout;                                        // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.Unload Cached Variables
	 */
	struct UBP_Action_BasePlayLevelSequence_C_UnloadCachedVariables_Params
	{	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.Unhide Character
	 */
	struct UBP_Action_BasePlayLevelSequence_C_UnhideCharacter_Params
	{	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnBegin
	 */
	struct UBP_Action_BasePlayLevelSequence_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnEnd
	 */
	struct UBP_Action_BasePlayLevelSequence_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnGameSequenceStopped
	 */
	struct UBP_Action_BasePlayLevelSequence_C_OnGameSequenceStopped_Params
	{	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnClientInterruptAndBlockExpressionChanged
	 */
	struct UBP_Action_BasePlayLevelSequence_C_OnClientInterruptAndBlockExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.ExecuteUbergraph_BP_Action_BasePlayLevelSequence
	 */
	struct UBP_Action_BasePlayLevelSequence_C_ExecuteUbergraph_BP_Action_BasePlayLevelSequence_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
