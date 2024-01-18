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
	 * Function BP_Action_MeleeSubAction_Attack_AI.BP_Action_MeleeSubAction_Attack_AI_C.ReceiveProcessHit
	 */
	struct UBP_Action_MeleeSubAction_Attack_AI_C_ReceiveProcessHit_Params
	{
	public:
		struct FMeleeAttackLine                                    AttackLine;                                              // 0x0000(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_WWZJ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADICharacter*                                        Target;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bGeneratedHit;                                           // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RB9Z[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0030(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Action_MeleeSubAction_Attack_AI.BP_Action_MeleeSubAction_Attack_AI_C.ExecuteUbergraph_BP_Action_MeleeSubAction_Attack_AI
	 */
	struct UBP_Action_MeleeSubAction_Attack_AI_C_ExecuteUbergraph_BP_Action_MeleeSubAction_Attack_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GQYG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_MeleeSubAction_Attack_AI.BP_Action_MeleeSubAction_Attack_AI_C.EnemyHitDelegate__DelegateSignature
	 */
	struct UBP_Action_MeleeSubAction_Attack_AI_C_EnemyHitDelegate__DelegateSignature_Params
	{
	public:
		struct FMeleeAttackLine                                    AttackLine;                                              // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_RHCL[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0020(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
