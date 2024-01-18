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
	 * Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.AnimGraph
	 */
	struct UABP_PlayerCharacter_1P_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.WeaponHit
	 */
	struct UABP_PlayerCharacter_1P_C_WeaponHit_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Defender;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_Base_MeleeWeapon_C*                              Weapon;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacter_1P_AnimGraphNode_ModifyBone_DAC4025C45284965F9F00DBF4EB769C7
	 */
	struct UABP_PlayerCharacter_1P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacter_1P_AnimGraphNode_ModifyBone_DAC4025C45284965F9F00DBF4EB769C7_Params
	{	};

	/**
	 * Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacter_1P_AnimGraphNode_ModifyBone_4681ED5242A19C0AF6CB908DED1C41B0
	 */
	struct UABP_PlayerCharacter_1P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacter_1P_AnimGraphNode_ModifyBone_4681ED5242A19C0AF6CB908DED1C41B0_Params
	{	};

	/**
	 * Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.AnimNotify_AttackDecisionEntered
	 */
	struct UABP_PlayerCharacter_1P_C_AnimNotify_AttackDecisionEntered_Params
	{	};

	/**
	 * Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.ExecuteUbergraph_ABP_PlayerCharacter_1P
	 */
	struct UABP_PlayerCharacter_1P_C_ExecuteUbergraph_ABP_PlayerCharacter_1P_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.ThrowWeapon__DelegateSignature
	 */
	struct UABP_PlayerCharacter_1P_C_ThrowWeapon__DelegateSignature_Params
	{	};

	/**
	 * Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.Knockback__DelegateSignature
	 */
	struct UABP_PlayerCharacter_1P_C_Knockback__DelegateSignature_Params
	{	};

	/**
	 * Function ABP_PlayerCharacter_1P.ABP_PlayerCharacter_1P_C.WeaponSwinging__DelegateSignature
	 */
	struct UABP_PlayerCharacter_1P_C_WeaponSwinging__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
