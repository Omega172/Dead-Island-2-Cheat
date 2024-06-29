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
	 * Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventReturn2
	 */
	struct UBP_DIDialogueManager_C_HandleNamedEventReturn2_Params
	{
	public:
		struct FDialogueKey                                        EventName;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		EDialogueRuntimeEventType                                  EventType;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q0GE[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDialogueComponent*                                  DialogueComponent;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDialogueRuntimeEventHandlerResponse                       Response;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V7YB[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventTwoRefParamToReturn
	 */
	struct UBP_DIDialogueManager_C_HandleNamedEventTwoRefParamToReturn_Params
	{
	public:
		struct FDialogueKey                                        EventName;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_U32R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDialogueComponent*                                  DialogueComponent;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDialogueKey                                        BaseVoiceSetName;                                        // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FDialogueKey                                        TriggerName;                                             // 0x0024(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    SessionId;                                               // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ExecutionId;                                             // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              Response;                                                // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              Response2;                                               // 0x0039(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9X9T[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventReturnTwoResponses
	 */
	struct UBP_DIDialogueManager_C_HandleNamedEventReturnTwoResponses_Params
	{
	public:
		struct FDialogueKey                                        EventName;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_X7OU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDialogueComponent*                                  DialogueComponent;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDialogueKey                                        BaseVoiceSetName;                                        // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FDialogueKey                                        TriggerName;                                             // 0x0024(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    SessionId;                                               // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ExecutionId;                                             // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              Response;                                                // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              Response2;                                               // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2AFH[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventRefParamToReturn
	 */
	struct UBP_DIDialogueManager_C_HandleNamedEventRefParamToReturn_Params
	{
	public:
		struct FDialogueKey                                        EventName;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_N75U[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDialogueComponent*                                  DialogueComponent;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDialogueKey                                        BaseVoiceSetName;                                        // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FDialogueKey                                        TriggerName;                                             // 0x0024(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    SessionId;                                               // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ExecutionId;                                             // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              Response;                                                // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T75O[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventReturn1
	 */
	struct UBP_DIDialogueManager_C_HandleNamedEventReturn1_Params
	{
	public:
		struct FDialogueKey                                        EventName;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		EDialogueRuntimeEventType                                  EventType;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LMK7[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDialogueComponent*                                  DialogueComponent;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDialogueRuntimeEventHandlerResponse                       Response;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QUIK[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DIDialogueManager.BP_DIDialogueManager_C.BlueprintInit
	 */
	struct UBP_DIDialogueManager_C_BlueprintInit_Params
	{	};

	/**
	 * Function BP_DIDialogueManager.BP_DIDialogueManager_C.ExecuteUbergraph_BP_DIDialogueManager
	 */
	struct UBP_DIDialogueManager_C_ExecuteUbergraph_BP_DIDialogueManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
