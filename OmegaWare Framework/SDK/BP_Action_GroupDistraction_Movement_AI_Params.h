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
	 * Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.GetQueryParams
	 */
	struct UBP_Action_GroupDistraction_Movement_AI_C_GetQueryParams_Params
	{
	public:
		TMap<class FName, float>                                   ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.GetDryRunQueryParams
	 */
	struct UBP_Action_GroupDistraction_Movement_AI_C_GetDryRunQueryParams_Params
	{
	public:
		TMap<class FName, float>                                   ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.EndRunQueryState
	 */
	struct UBP_Action_GroupDistraction_Movement_AI_C_EndRunQueryState_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.EndDryRunQueryState
	 */
	struct UBP_Action_GroupDistraction_Movement_AI_C_EndDryRunQueryState_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.OnBeginEarly
	 */
	struct UBP_Action_GroupDistraction_Movement_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z0YK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.OnQuerySucceeded
	 */
	struct UBP_Action_GroupDistraction_Movement_AI_C_OnQuerySucceeded_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.GetMoveTargetDirection
	 */
	struct UBP_Action_GroupDistraction_Movement_AI_C_GetMoveTargetDirection_Params
	{
	public:
		struct FVector                                             From;                                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.BeginRunQueryState
	 */
	struct UBP_Action_GroupDistraction_Movement_AI_C_BeginRunQueryState_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.BeginDryRunQueryState
	 */
	struct UBP_Action_GroupDistraction_Movement_AI_C_BeginDryRunQueryState_Params
	{	};

	/**
	 * Function BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C.IsAbleToUseActivity
	 */
	struct UBP_Action_GroupDistraction_Movement_AI_C_IsAbleToUseActivity_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
