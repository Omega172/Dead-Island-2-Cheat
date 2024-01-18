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
	 * Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.Resolve
	 */
	struct UBP_Action_Player_InstantUseItem_PickUp_C_Resolve_Params
	{
	public:
		struct FCharacterActionResolveParams                       Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		ECharacterActionResolution                                 OutResolution;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2C3T[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutQueuedTimeout;                                        // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.ConsumeItem
	 */
	struct UBP_Action_Player_InstantUseItem_PickUp_C_ConsumeItem_Params
	{
	public:
		class ABP_Base_InstantUsePickup_C*                         Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.ApplyEffects
	 */
	struct UBP_Action_Player_InstantUseItem_PickUp_C_ApplyEffects_Params
	{	};

	/**
	 * Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnFailedToPlay_63686BC947A0D905815B2A9AEB96C5B4
	 */
	struct UBP_Action_Player_InstantUseItem_PickUp_C_OnFailedToPlay_63686BC947A0D905815B2A9AEB96C5B4_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnSectionChanged_63686BC947A0D905815B2A9AEB96C5B4
	 */
	struct UBP_Action_Player_InstantUseItem_PickUp_C_OnSectionChanged_63686BC947A0D905815B2A9AEB96C5B4_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnNotifyEnd_63686BC947A0D905815B2A9AEB96C5B4
	 */
	struct UBP_Action_Player_InstantUseItem_PickUp_C_OnNotifyEnd_63686BC947A0D905815B2A9AEB96C5B4_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnNotifyBegin_63686BC947A0D905815B2A9AEB96C5B4
	 */
	struct UBP_Action_Player_InstantUseItem_PickUp_C_OnNotifyBegin_63686BC947A0D905815B2A9AEB96C5B4_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnInterrupted_63686BC947A0D905815B2A9AEB96C5B4
	 */
	struct UBP_Action_Player_InstantUseItem_PickUp_C_OnInterrupted_63686BC947A0D905815B2A9AEB96C5B4_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnBlendOut_63686BC947A0D905815B2A9AEB96C5B4
	 */
	struct UBP_Action_Player_InstantUseItem_PickUp_C_OnBlendOut_63686BC947A0D905815B2A9AEB96C5B4_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnCompleted_63686BC947A0D905815B2A9AEB96C5B4
	 */
	struct UBP_Action_Player_InstantUseItem_PickUp_C_OnCompleted_63686BC947A0D905815B2A9AEB96C5B4_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnBegin
	 */
	struct UBP_Action_Player_InstantUseItem_PickUp_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnConstruct
	 */
	struct UBP_Action_Player_InstantUseItem_PickUp_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnEnd
	 */
	struct UBP_Action_Player_InstantUseItem_PickUp_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.ExecuteUbergraph_BP_Action_Player_InstantUseItem_PickUp
	 */
	struct UBP_Action_Player_InstantUseItem_PickUp_C_ExecuteUbergraph_BP_Action_Player_InstantUseItem_PickUp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
