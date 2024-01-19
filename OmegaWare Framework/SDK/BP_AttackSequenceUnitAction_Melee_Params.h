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
	 * Function BP_AttackSequenceUnitAction_Melee.BP_AttackSequenceUnitAction_Melee_C.RemoveModifier
	 */
	struct UBP_AttackSequenceUnitAction_Melee_C_RemoveModifier_Params
	{
	public:
		struct FModifierAndValue                                   ModifierAndValue;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ADICharacter*                                        Target;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGuid                                               RegisteredGUID;                                          // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AttackSequenceUnitAction_Melee.BP_AttackSequenceUnitAction_Melee_C.ApplyModifier
	 */
	struct UBP_AttackSequenceUnitAction_Melee_C_ApplyModifier_Params
	{
	public:
		struct FModifierAndValue                                   ModifierAndValue;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ADICharacter*                                        Target;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y0ZH[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuid                                               ModifierRef;                                             // 0x001C(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DOU7[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AttackSequenceUnitAction_Melee.BP_AttackSequenceUnitAction_Melee_C.ReceiveEndUnit
	 */
	struct UBP_AttackSequenceUnitAction_Melee_C_ReceiveEndUnit_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U054[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAttackSequenceUnitState*                            State;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AttackSequenceUnitAction_Melee.BP_AttackSequenceUnitAction_Melee_C.ReceiveBeginUnit
	 */
	struct UBP_AttackSequenceUnitAction_Melee_C_ReceiveBeginUnit_Params
	{
	public:
		class UAttackSequenceUnitState*                            State;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
