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
	 * Function ABP_PlayerCharacter_AimOffset.ABP_PlayerCharacter_AimOffset_C.AnimGraph
	 */
	struct UABP_PlayerCharacter_AimOffset_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           AnimGraph;                                               // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_PlayerCharacter_AimOffset.ABP_PlayerCharacter_AimOffset_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacter_AimOffset_AnimGraphNode_FPCameraRotation_93D41A0B45CC84EDF282928B6019EB86
	 */
	struct UABP_PlayerCharacter_AimOffset_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacter_AimOffset_AnimGraphNode_FPCameraRotation_93D41A0B45CC84EDF282928B6019EB86_Params
	{	};

	/**
	 * Function ABP_PlayerCharacter_AimOffset.ABP_PlayerCharacter_AimOffset_C.BlueprintUpdateAnimation
	 */
	struct UABP_PlayerCharacter_AimOffset_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerCharacter_AimOffset.ABP_PlayerCharacter_AimOffset_C.ExecuteUbergraph_ABP_PlayerCharacter_AimOffset
	 */
	struct UABP_PlayerCharacter_AimOffset_C_ExecuteUbergraph_ABP_PlayerCharacter_AimOffset_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
