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
	 * Function BP_Action_ExecuteScriptedAttack.BP_Action_ExecuteScriptedAttack_C.SetupActionParams
	 */
	struct UBP_Action_ExecuteScriptedAttack_C_SetupActionParams_Params
	{	};

	/**
	 * Function BP_Action_ExecuteScriptedAttack.BP_Action_ExecuteScriptedAttack_C.OnBegin
	 */
	struct UBP_Action_ExecuteScriptedAttack_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_ExecuteScriptedAttack.BP_Action_ExecuteScriptedAttack_C.On Scripted Attack end
	 */
	struct UBP_Action_ExecuteScriptedAttack_C_OnScriptedAttackend_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_ExecuteScriptedAttack.BP_Action_ExecuteScriptedAttack_C.On Scripted Attack Cancelled
	 */
	struct UBP_Action_ExecuteScriptedAttack_C_OnScriptedAttackCancelled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnCancelledParams                   Params;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_ExecuteScriptedAttack.BP_Action_ExecuteScriptedAttack_C.ExecuteUbergraph_BP_Action_ExecuteScriptedAttack
	 */
	struct UBP_Action_ExecuteScriptedAttack_C_ExecuteUbergraph_BP_Action_ExecuteScriptedAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
