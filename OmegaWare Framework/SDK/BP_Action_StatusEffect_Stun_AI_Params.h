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
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnBeginEarly
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7HXM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnInterruptionConditionsMet
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_OnInterruptionConditionsMet_Params
	{	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.DoesImpactMeetInterruptionConditions
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_DoesImpactMeetInterruptionConditions_Params
	{
	public:
		class UBaseImpactEventResultWrapper*                       Impact;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7886[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.GetAttributeValueForDamageInterruption
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_GetAttributeValueForDamageInterruption_Params
	{
	public:
		class UAttributeType*                                      AttributeType;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutputPin;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WYOH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.SetupDamageInterruption
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_SetupDamageInterruption_Params
	{
	public:
		class UAttributeType*                                      AttributeType;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SQQJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.Resolve
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_Resolve_Params
	{
	public:
		struct FCharacterActionResolveParams                       Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		ECharacterActionResolution                                 OutResolution;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8UAM[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutQueuedTimeout;                                        // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnFailedToPlay_64E0CC78418DB30CF33E12ABD3290705
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_OnFailedToPlay_64E0CC78418DB30CF33E12ABD3290705_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnSectionChanged_64E0CC78418DB30CF33E12ABD3290705
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_OnSectionChanged_64E0CC78418DB30CF33E12ABD3290705_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnNotifyEnd_64E0CC78418DB30CF33E12ABD3290705
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_OnNotifyEnd_64E0CC78418DB30CF33E12ABD3290705_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnNotifyBegin_64E0CC78418DB30CF33E12ABD3290705
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_OnNotifyBegin_64E0CC78418DB30CF33E12ABD3290705_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnInterrupted_64E0CC78418DB30CF33E12ABD3290705
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_OnInterrupted_64E0CC78418DB30CF33E12ABD3290705_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnBlendOut_64E0CC78418DB30CF33E12ABD3290705
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_OnBlendOut_64E0CC78418DB30CF33E12ABD3290705_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnCompleted_64E0CC78418DB30CF33E12ABD3290705
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_OnCompleted_64E0CC78418DB30CF33E12ABD3290705_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnEnd
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnConstruct
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.StartAnimPlayback
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_StartAnimPlayback_Params
	{	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnBegin
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.StartDamageInterruptionSetup
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_StartDamageInterruptionSetup_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnImpactReceived
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_OnImpactReceived_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.DamageInterruption
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_DamageInterruption_Params
	{
	public:
		bool                                                       DamageRequirementMet;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StabilityDamageMet;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.ExecuteUbergraph_BP_Action_StatusEffect_Stun_AI
	 */
	struct UBP_Action_StatusEffect_Stun_AI_C_ExecuteUbergraph_BP_Action_StatusEffect_Stun_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
