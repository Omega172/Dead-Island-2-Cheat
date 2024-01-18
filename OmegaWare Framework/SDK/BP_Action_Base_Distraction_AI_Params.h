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
	 * Function BP_Action_Base_Distraction_AI.BP_Action_Base_Distraction_AI_C.AddDSLog
	 */
	struct UBP_Action_Base_Distraction_AI_C_AddDSLog_Params
	{
	public:
		class FString                                              LogText;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EDSLogVerbosity                                            Verbosity;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Base_Distraction_AI.BP_Action_Base_Distraction_AI_C.SetupDistractionLogger
	 */
	struct UBP_Action_Base_Distraction_AI_C_SetupDistractionLogger_Params
	{	};

	/**
	 * Function BP_Action_Base_Distraction_AI.BP_Action_Base_Distraction_AI_C.OnBeginEarly
	 */
	struct UBP_Action_Base_Distraction_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
