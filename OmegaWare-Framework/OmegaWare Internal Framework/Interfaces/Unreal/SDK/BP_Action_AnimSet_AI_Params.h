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
	 * Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnInterruptionConditionsMet
	 */
	struct UBP_Action_AnimSet_AI_C_OnInterruptionConditionsMet_Params
	{
	public:
		bool                                                       DamageRequirementMet;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StabilityDamageMet;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.Add Modifiers
	 */
	struct UBP_Action_AnimSet_AI_C_AddModifiers_Params
	{
	public:
		TArray<struct FModifierAndValue>                           Modifiers;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.RequestMontageToStop
	 */
	struct UBP_Action_AnimSet_AI_C_RequestMontageToStop_Params
	{
	public:
		EMontageEndEvent                                           MontageEndEvent;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6RHB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.InitialiseVariables
	 */
	struct UBP_Action_AnimSet_AI_C_InitialiseVariables_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.Post Resolve
	 */
	struct UBP_Action_AnimSet_AI_C_PostResolve_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.Pre Resolve
	 */
	struct UBP_Action_AnimSet_AI_C_PreResolve_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnBeginEarly
	 */
	struct UBP_Action_AnimSet_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.GetBlendOutTime
	 */
	struct UBP_Action_AnimSet_AI_C_GetBlendOutTime_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HQ4H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      BlendOutTime;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnEnd
	 */
	struct UBP_Action_AnimSet_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnBegin
	 */
	struct UBP_Action_AnimSet_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnConstruct
	 */
	struct UBP_Action_AnimSet_AI_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.ExecuteUbergraph_BP_Action_AnimSet_AI
	 */
	struct UBP_Action_AnimSet_AI_C_ExecuteUbergraph_BP_Action_AnimSet_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
