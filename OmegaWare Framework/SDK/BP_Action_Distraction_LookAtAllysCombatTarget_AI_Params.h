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
	 * Function BP_Action_Distraction_LookAtAllysCombatTarget_AI.BP_Action_Distraction_LookAtAllysCombatTarget_AI_C.GetAllysController
	 */
	struct UBP_Action_Distraction_LookAtAllysCombatTarget_AI_C_GetAllysController_Params
	{
	public:
		class ADIAIController*                                     AsDIAIController;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_LookAtAllysCombatTarget_AI.BP_Action_Distraction_LookAtAllysCombatTarget_AI_C.GetLookAtTarget
	 */
	struct UBP_Action_Distraction_LookAtAllysCombatTarget_AI_C_GetLookAtTarget_Params
	{
	public:
		bool                                                       FoundLookAtTarget;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B0M7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     GetLookAtComponent;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             GetLookatLocation;                                       // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LQ3W[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
