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
	 * Function BP_Action_StatusEffect_Electrocute_AI.BP_Action_StatusEffect_Electrocute_AI_C.PlayStunnedMontageOutro
	 */
	struct UBP_Action_StatusEffect_Electrocute_AI_C_PlayStunnedMontageOutro_Params
	{	};

	/**
	 * Function BP_Action_StatusEffect_Electrocute_AI.BP_Action_StatusEffect_Electrocute_AI_C.OnBeginEarly
	 */
	struct UBP_Action_StatusEffect_Electrocute_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CTXF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_StatusEffect_Electrocute_AI.BP_Action_StatusEffect_Electrocute_AI_C.StopStunnedMontage
	 */
	struct UBP_Action_StatusEffect_Electrocute_AI_C_StopStunnedMontage_Params
	{	};

	/**
	 * Function BP_Action_StatusEffect_Electrocute_AI.BP_Action_StatusEffect_Electrocute_AI_C.GetMontageToPlay
	 */
	struct UBP_Action_StatusEffect_Electrocute_AI_C_GetMontageToPlay_Params
	{
	public:
		class FName                                                AnimSetName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimInstance*                                       AnimInstance;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        Montage;                                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatusEffect_Electrocute_AI.BP_Action_StatusEffect_Electrocute_AI_C.PlayStunnedMontage
	 */
	struct UBP_Action_StatusEffect_Electrocute_AI_C_PlayStunnedMontage_Params
	{	};

	/**
	 * Function BP_Action_StatusEffect_Electrocute_AI.BP_Action_StatusEffect_Electrocute_AI_C.OnBegin
	 */
	struct UBP_Action_StatusEffect_Electrocute_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatusEffect_Electrocute_AI.BP_Action_StatusEffect_Electrocute_AI_C.OnEnd
	 */
	struct UBP_Action_StatusEffect_Electrocute_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatusEffect_Electrocute_AI.BP_Action_StatusEffect_Electrocute_AI_C.OnConstruct
	 */
	struct UBP_Action_StatusEffect_Electrocute_AI_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatusEffect_Electrocute_AI.BP_Action_StatusEffect_Electrocute_AI_C.ExecuteUbergraph_BP_Action_StatusEffect_Electrocute_AI
	 */
	struct UBP_Action_StatusEffect_Electrocute_AI_C_ExecuteUbergraph_BP_Action_StatusEffect_Electrocute_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2MG9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
