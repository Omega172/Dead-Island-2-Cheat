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
	 * Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.InitialiseVariables
	 */
	struct UBP_Action_Strafe_AI_C_InitialiseVariables_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_52IH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FailureReason;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnBeginEarly
	 */
	struct UBP_Action_Strafe_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YEE8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnBegin
	 */
	struct UBP_Action_Strafe_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnBlocked
	 */
	struct UBP_Action_Strafe_AI_C_OnBlocked_Params
	{	};

	/**
	 * Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.DetermineIfBlockedStateChange
	 */
	struct UBP_Action_Strafe_AI_C_DetermineIfBlockedStateChange_Params
	{	};

	/**
	 * Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnMaxBlockDurationElapsed
	 */
	struct UBP_Action_Strafe_AI_C_OnMaxBlockDurationElapsed_Params
	{	};

	/**
	 * Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnEnd
	 */
	struct UBP_Action_Strafe_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.CancelActionIfPeakedCardChanged
	 */
	struct UBP_Action_Strafe_AI_C_CancelActionIfPeakedCardChanged_Params
	{	};

	/**
	 * Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.ExecuteUbergraph_BP_Action_Strafe_AI
	 */
	struct UBP_Action_Strafe_AI_C_ExecuteUbergraph_BP_Action_Strafe_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
