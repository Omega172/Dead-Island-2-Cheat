﻿#pragma once

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
	 * Function BP_Action_ControlledFall_AI.BP_Action_ControlledFall_AI_C.Calculate Damage
	 */
	struct UBP_Action_ControlledFall_AI_C_CalculateDamage_Params
	{
	public:
		int32_t                                                    FallDistance;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0TFD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FDamageTypeAndQuantity>                      DamageArray;                                             // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Action_ControlledFall_AI.BP_Action_ControlledFall_AI_C.OnBeginEarly
	 */
	struct UBP_Action_ControlledFall_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_ControlledFall_AI.BP_Action_ControlledFall_AI_C.OnEnd
	 */
	struct UBP_Action_ControlledFall_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_ControlledFall_AI.BP_Action_ControlledFall_AI_C.OnKnockdownTriggered
	 */
	struct UBP_Action_ControlledFall_AI_C_OnKnockdownTriggered_Params
	{	};

	/**
	 * Function BP_Action_ControlledFall_AI.BP_Action_ControlledFall_AI_C.OnBegin
	 */
	struct UBP_Action_ControlledFall_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_ControlledFall_AI.BP_Action_ControlledFall_AI_C.ExecuteUbergraph_BP_Action_ControlledFall_AI
	 */
	struct UBP_Action_ControlledFall_AI_C_ExecuteUbergraph_BP_Action_ControlledFall_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WXN3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
