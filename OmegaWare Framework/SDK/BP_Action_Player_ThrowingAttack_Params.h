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
	 * Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.CheckStamina
	 */
	struct UBP_Action_Player_ThrowingAttack_C_CheckStamina_Params
	{
	public:
		bool                                                       CanTakeAction;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6UYD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnBeginEarly
	 */
	struct UBP_Action_Player_ThrowingAttack_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.MakeProjectile
	 */
	struct UBP_Action_Player_ThrowingAttack_C_MakeProjectile_Params
	{	};

	/**
	 * Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnFailedToPlay_DF819F014193E18B5C179D975AAA4639
	 */
	struct UBP_Action_Player_ThrowingAttack_C_OnFailedToPlay_DF819F014193E18B5C179D975AAA4639_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnSectionChanged_DF819F014193E18B5C179D975AAA4639
	 */
	struct UBP_Action_Player_ThrowingAttack_C_OnSectionChanged_DF819F014193E18B5C179D975AAA4639_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnNotifyEnd_DF819F014193E18B5C179D975AAA4639
	 */
	struct UBP_Action_Player_ThrowingAttack_C_OnNotifyEnd_DF819F014193E18B5C179D975AAA4639_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnNotifyBegin_DF819F014193E18B5C179D975AAA4639
	 */
	struct UBP_Action_Player_ThrowingAttack_C_OnNotifyBegin_DF819F014193E18B5C179D975AAA4639_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnInterrupted_DF819F014193E18B5C179D975AAA4639
	 */
	struct UBP_Action_Player_ThrowingAttack_C_OnInterrupted_DF819F014193E18B5C179D975AAA4639_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnBlendOut_DF819F014193E18B5C179D975AAA4639
	 */
	struct UBP_Action_Player_ThrowingAttack_C_OnBlendOut_DF819F014193E18B5C179D975AAA4639_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnCompleted_DF819F014193E18B5C179D975AAA4639
	 */
	struct UBP_Action_Player_ThrowingAttack_C_OnCompleted_DF819F014193E18B5C179D975AAA4639_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnConstruct
	 */
	struct UBP_Action_Player_ThrowingAttack_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnBegin
	 */
	struct UBP_Action_Player_ThrowingAttack_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.ThrowWeapon
	 */
	struct UBP_Action_Player_ThrowingAttack_C_ThrowWeapon_Params
	{	};

	/**
	 * Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.ExecuteUbergraph_BP_Action_Player_ThrowingAttack
	 */
	struct UBP_Action_Player_ThrowingAttack_C_ExecuteUbergraph_BP_Action_Player_ThrowingAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J45F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
