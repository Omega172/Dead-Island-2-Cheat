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
	 * Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.DSLogProcessingDetachmentEvents
	 */
	struct UBP_Action_DetachmentState_C_DSLogProcessingDetachmentEvents_Params
	{
	public:
		class FName                                                DetachmentEventName;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.DSLogDetachmentEvents
	 */
	struct UBP_Action_DetachmentState_C_DSLogDetachmentEvents_Params
	{	};

	/**
	 * Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.AddDSLog
	 */
	struct UBP_Action_DetachmentState_C_AddDSLog_Params
	{
	public:
		class FString                                              LogText;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EDSLogVerbosity                                            Verbosity;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.GatherPrerequisites
	 */
	struct UBP_Action_DetachmentState_C_GatherPrerequisites_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.SetupLogger
	 */
	struct UBP_Action_DetachmentState_C_SetupLogger_Params
	{	};

	/**
	 * Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.OnBegin
	 */
	struct UBP_Action_DetachmentState_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.ExecuteUbergraph_BP_Action_DetachmentState
	 */
	struct UBP_Action_DetachmentState_C_ExecuteUbergraph_BP_Action_DetachmentState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
