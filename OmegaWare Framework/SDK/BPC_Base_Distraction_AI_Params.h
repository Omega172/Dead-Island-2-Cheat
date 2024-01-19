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
	 * Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.HasValidDistractionWander
	 */
	struct UBPC_Base_Distraction_AI_C_HasValidDistractionWander_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IGR4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.GetHighestDistractionWander
	 */
	struct UBPC_Base_Distraction_AI_C_GetHighestDistractionWander_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NWJZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuid                                               DistractionWanderID;                                     // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_29GB[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSDistractionWanderParams                           Interest;                                                // 0x0018(0x00C8)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.RemoveDistractionWander
	 */
	struct UBPC_Base_Distraction_AI_C_RemoveDistractionWander_Params
	{
	public:
		struct FGuid                                               WanderInterestID;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.AddDistractionWander
	 */
	struct UBPC_Base_Distraction_AI_C_AddDistractionWander_Params
	{
	public:
		struct FSDistractionWanderParams                           InterestParams;                                          // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		struct FGuid                                               WanderInterestID;                                        // 0x00C8(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.GetStimGlobalCooldownTimeStamp
	 */
	struct UBPC_Base_Distraction_AI_C_GetStimGlobalCooldownTimeStamp_Params
	{
	public:
		class UStimTemplate*                                       StimTemplate;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.AddStimToGlobalCooldownList
	 */
	struct UBPC_Base_Distraction_AI_C_AddStimToGlobalCooldownList_Params
	{
	public:
		class UStimTemplate*                                       StimTemplate;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Timestamp;                                               // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.ReceiveBeginPlay
	 */
	struct UBPC_Base_Distraction_AI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.ExecuteUbergraph_BPC_Base_Distraction_AI
	 */
	struct UBPC_Base_Distraction_AI_C_ExecuteUbergraph_BPC_Base_Distraction_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T7KH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C.OnDistractionWanderChanged__DelegateSignature
	 */
	struct UBPC_Base_Distraction_AI_C_OnDistractionWanderChanged__DelegateSignature_Params
	{
	public:
		bool                                                       HasValidDistractionWander;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
