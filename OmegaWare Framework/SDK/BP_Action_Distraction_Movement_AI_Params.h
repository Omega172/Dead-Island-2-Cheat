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
	 * Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.CastAndStoreParams
	 */
	struct UBP_Action_Distraction_Movement_AI_C_CastAndStoreParams_Params
	{
	public:
		class UCustomActionParamsBase*                             BaseParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PXTP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.RemoveMovement
	 */
	struct UBP_Action_Distraction_Movement_AI_C_RemoveMovement_Params
	{	};

	/**
	 * Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.ProjectLocationToNavmesh
	 */
	struct UBP_Action_Distraction_Movement_AI_C_ProjectLocationToNavmesh_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ProjectedLocation;                                       // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.SetDryRunQueryParams
	 */
	struct UBP_Action_Distraction_Movement_AI_C_SetDryRunQueryParams_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   ActiveQuery;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.GetTargetLocation
	 */
	struct UBP_Action_Distraction_Movement_AI_C_GetTargetLocation_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.GetTargetActor
	 */
	struct UBP_Action_Distraction_Movement_AI_C_GetTargetActor_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.SetQueryParams
	 */
	struct UBP_Action_Distraction_Movement_AI_C_SetQueryParams_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   ActiveQuery;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.AddMovement
	 */
	struct UBP_Action_Distraction_Movement_AI_C_AddMovement_Params
	{	};

	/**
	 * Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.SetQueryData
	 */
	struct UBP_Action_Distraction_Movement_AI_C_SetQueryData_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y1PT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.OnBeginEarly
	 */
	struct UBP_Action_Distraction_Movement_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
