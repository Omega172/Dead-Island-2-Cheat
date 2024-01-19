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
	 * Function BP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI.BP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C.GetTargetLocation
	 */
	struct UBP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C_GetTargetLocation_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI.BP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C.GetTargetActor
	 */
	struct UBP_Action_Distraction_Movement_FollowAllyToItsCombatTarget_AI_C_GetTargetActor_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
