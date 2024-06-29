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
	 * Function CoopSequences.CoopSequenceManager.GetWorldCoopSequenceState
	 */
	struct ACoopSequenceManager_GetWorldCoopSequenceState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACoopSequenceState*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoopSequences.CoopSequenceManager.GetLocalPlayerCoopSequenceState
	 */
	struct ACoopSequenceManager_GetLocalPlayerCoopSequenceState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACoopSequenceState*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoopSequences.CoopSequenceState.ServerRequestSequence
	 */
	struct ACoopSequenceState_ServerRequestSequence_Params
	{
	public:
		int32_t                                                    PredictionKey;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NW0W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              TaskType;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUserParamsObjectWrapper                            CustomData;                                              // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoopSequences.CoopSequenceState.ServerReplicateState
	 */
	struct ACoopSequenceState_ServerReplicateState_Params
	{
	public:
		int32_t                                                    PredictionKey;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CP2N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUserParamsObjectWrapper                            Params;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoopSequences.CoopSequenceState.ServerEndSequence
	 */
	struct ACoopSequenceState_ServerEndSequence_Params
	{
	public:
		int32_t                                                    PredictionKey;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoopSequences.CoopSequenceState.ServerAcknowledgeSequence
	 */
	struct ACoopSequenceState_ServerAcknowledgeSequence_Params
	{
	public:
		int32_t                                                    PredictionKey;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoopSequences.CoopSequenceState.OnTaskReplicateState
	 */
	struct ACoopSequenceState_OnTaskReplicateState_Params
	{
	public:
		int32_t                                                    PredictionKey;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y5JR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomParamsBase*                                   Params;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoopSequences.CoopSequenceState.OnTaskInterrupted
	 */
	struct ACoopSequenceState_OnTaskInterrupted_Params
	{
	public:
		class UCoopSequenceTask*                                   Task;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoopSequences.CoopSequenceState.OnTaskCompleted
	 */
	struct ACoopSequenceState_OnTaskCompleted_Params
	{
	public:
		class UCoopSequenceTask*                                   Task;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoopSequences.CoopSequenceState.ClientRequestSequence
	 */
	struct ACoopSequenceState_ClientRequestSequence_Params
	{
	public:
		int32_t                                                    PredictionKey;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JJE0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              TaskType;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUserParamsObjectWrapper                            CustomData;                                              // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoopSequences.CoopSequenceState.ClientRefuseSequence
	 */
	struct ACoopSequenceState_ClientRefuseSequence_Params
	{
	public:
		int32_t                                                    PredictionKey;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
