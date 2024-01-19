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
	 * Function BP_Action_Player_Rebound.BP_Action_Player_Rebound_C.OnFailedToPlay_15C93BB9447E32AC02A9AE819099BAA7
	 */
	struct UBP_Action_Player_Rebound_C_OnFailedToPlay_15C93BB9447E32AC02A9AE819099BAA7_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Rebound.BP_Action_Player_Rebound_C.OnSectionChanged_15C93BB9447E32AC02A9AE819099BAA7
	 */
	struct UBP_Action_Player_Rebound_C_OnSectionChanged_15C93BB9447E32AC02A9AE819099BAA7_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Rebound.BP_Action_Player_Rebound_C.OnNotifyEnd_15C93BB9447E32AC02A9AE819099BAA7
	 */
	struct UBP_Action_Player_Rebound_C_OnNotifyEnd_15C93BB9447E32AC02A9AE819099BAA7_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Rebound.BP_Action_Player_Rebound_C.OnNotifyBegin_15C93BB9447E32AC02A9AE819099BAA7
	 */
	struct UBP_Action_Player_Rebound_C_OnNotifyBegin_15C93BB9447E32AC02A9AE819099BAA7_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Rebound.BP_Action_Player_Rebound_C.OnInterrupted_15C93BB9447E32AC02A9AE819099BAA7
	 */
	struct UBP_Action_Player_Rebound_C_OnInterrupted_15C93BB9447E32AC02A9AE819099BAA7_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Rebound.BP_Action_Player_Rebound_C.OnBlendOut_15C93BB9447E32AC02A9AE819099BAA7
	 */
	struct UBP_Action_Player_Rebound_C_OnBlendOut_15C93BB9447E32AC02A9AE819099BAA7_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Rebound.BP_Action_Player_Rebound_C.OnCompleted_15C93BB9447E32AC02A9AE819099BAA7
	 */
	struct UBP_Action_Player_Rebound_C_OnCompleted_15C93BB9447E32AC02A9AE819099BAA7_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Rebound.BP_Action_Player_Rebound_C.OnBegin
	 */
	struct UBP_Action_Player_Rebound_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Rebound.BP_Action_Player_Rebound_C.OnConstruct
	 */
	struct UBP_Action_Player_Rebound_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Rebound.BP_Action_Player_Rebound_C.OnEnd
	 */
	struct UBP_Action_Player_Rebound_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Rebound.BP_Action_Player_Rebound_C.ExecuteUbergraph_BP_Action_Player_Rebound
	 */
	struct UBP_Action_Player_Rebound_C_ExecuteUbergraph_BP_Action_Player_Rebound_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
