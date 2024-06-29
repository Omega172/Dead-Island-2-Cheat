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
	 * Function BP_Action_Player_Throw.BP_Action_Player_Throw_C.CheckStamina
	 */
	struct UBP_Action_Player_Throw_C_CheckStamina_Params
	{
	public:
		bool                                                       CanTakeAction;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WUIV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Player_Throw.BP_Action_Player_Throw_C.OnBeginEarly
	 */
	struct UBP_Action_Player_Throw_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Throw.BP_Action_Player_Throw_C.OnFailedToPlay_11B59D5A4FF44CD1430705A83714F546
	 */
	struct UBP_Action_Player_Throw_C_OnFailedToPlay_11B59D5A4FF44CD1430705A83714F546_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Throw.BP_Action_Player_Throw_C.OnSectionChanged_11B59D5A4FF44CD1430705A83714F546
	 */
	struct UBP_Action_Player_Throw_C_OnSectionChanged_11B59D5A4FF44CD1430705A83714F546_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Throw.BP_Action_Player_Throw_C.OnNotifyEnd_11B59D5A4FF44CD1430705A83714F546
	 */
	struct UBP_Action_Player_Throw_C_OnNotifyEnd_11B59D5A4FF44CD1430705A83714F546_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Throw.BP_Action_Player_Throw_C.OnNotifyBegin_11B59D5A4FF44CD1430705A83714F546
	 */
	struct UBP_Action_Player_Throw_C_OnNotifyBegin_11B59D5A4FF44CD1430705A83714F546_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Throw.BP_Action_Player_Throw_C.OnInterrupted_11B59D5A4FF44CD1430705A83714F546
	 */
	struct UBP_Action_Player_Throw_C_OnInterrupted_11B59D5A4FF44CD1430705A83714F546_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Throw.BP_Action_Player_Throw_C.OnBlendOut_11B59D5A4FF44CD1430705A83714F546
	 */
	struct UBP_Action_Player_Throw_C_OnBlendOut_11B59D5A4FF44CD1430705A83714F546_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Throw.BP_Action_Player_Throw_C.OnCompleted_11B59D5A4FF44CD1430705A83714F546
	 */
	struct UBP_Action_Player_Throw_C_OnCompleted_11B59D5A4FF44CD1430705A83714F546_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Throw.BP_Action_Player_Throw_C.OnConstruct
	 */
	struct UBP_Action_Player_Throw_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Throw.BP_Action_Player_Throw_C.ThrowTriggered
	 */
	struct UBP_Action_Player_Throw_C_ThrowTriggered_Params
	{	};

	/**
	 * Function BP_Action_Player_Throw.BP_Action_Player_Throw_C.OnBegin
	 */
	struct UBP_Action_Player_Throw_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Throw.BP_Action_Player_Throw_C.ExecuteUbergraph_BP_Action_Player_Throw
	 */
	struct UBP_Action_Player_Throw_C_ExecuteUbergraph_BP_Action_Player_Throw_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
