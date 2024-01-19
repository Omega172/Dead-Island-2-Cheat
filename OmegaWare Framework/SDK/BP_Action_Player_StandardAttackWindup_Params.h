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
	 * Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnBeginEarly
	 */
	struct UBP_Action_Player_StandardAttackWindup_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0222[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.Resolve
	 */
	struct UBP_Action_Player_StandardAttackWindup_C_Resolve_Params
	{
	public:
		struct FCharacterActionResolveParams                       Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		ECharacterActionResolution                                 OutResolution;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YRCP[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutQueuedTimeout;                                        // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.Init
	 */
	struct UBP_Action_Player_StandardAttackWindup_C_Init_Params
	{
	public:
		class UObject*                                             Params;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnFailedToPlay_A887B1C74DEF4227CF373F8B2E31778E
	 */
	struct UBP_Action_Player_StandardAttackWindup_C_OnFailedToPlay_A887B1C74DEF4227CF373F8B2E31778E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnSectionChanged_A887B1C74DEF4227CF373F8B2E31778E
	 */
	struct UBP_Action_Player_StandardAttackWindup_C_OnSectionChanged_A887B1C74DEF4227CF373F8B2E31778E_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnNotifyEnd_A887B1C74DEF4227CF373F8B2E31778E
	 */
	struct UBP_Action_Player_StandardAttackWindup_C_OnNotifyEnd_A887B1C74DEF4227CF373F8B2E31778E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnNotifyBegin_A887B1C74DEF4227CF373F8B2E31778E
	 */
	struct UBP_Action_Player_StandardAttackWindup_C_OnNotifyBegin_A887B1C74DEF4227CF373F8B2E31778E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnInterrupted_A887B1C74DEF4227CF373F8B2E31778E
	 */
	struct UBP_Action_Player_StandardAttackWindup_C_OnInterrupted_A887B1C74DEF4227CF373F8B2E31778E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnBlendOut_A887B1C74DEF4227CF373F8B2E31778E
	 */
	struct UBP_Action_Player_StandardAttackWindup_C_OnBlendOut_A887B1C74DEF4227CF373F8B2E31778E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnCompleted_A887B1C74DEF4227CF373F8B2E31778E
	 */
	struct UBP_Action_Player_StandardAttackWindup_C_OnCompleted_A887B1C74DEF4227CF373F8B2E31778E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnBegin
	 */
	struct UBP_Action_Player_StandardAttackWindup_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnConstruct
	 */
	struct UBP_Action_Player_StandardAttackWindup_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnEnd
	 */
	struct UBP_Action_Player_StandardAttackWindup_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.ExecuteUbergraph_BP_Action_Player_StandardAttackWindup
	 */
	struct UBP_Action_Player_StandardAttackWindup_C_ExecuteUbergraph_BP_Action_Player_StandardAttackWindup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
