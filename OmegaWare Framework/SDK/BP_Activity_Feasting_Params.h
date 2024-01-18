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
	 * Function BP_Activity_Feasting.BP_Activity_Feasting_C.TrySpawnMeatpileIfNoCorpseToFeastOn
	 */
	struct ABP_Activity_Feasting_C_TrySpawnMeatpileIfNoCorpseToFeastOn_Params
	{	};

	/**
	 * Function BP_Activity_Feasting.BP_Activity_Feasting_C.DoesPlayDeadActivityMetFeastingRequirements
	 */
	struct ABP_Activity_Feasting_C_DoesPlayDeadActivityMetFeastingRequirements_Params
	{
	public:
		class ABP_Base_SpawnActivity_C*                            FeastingTarget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Activity_Feasting.BP_Activity_Feasting_C.GetFeastingTargetsWithinRadius
	 */
	struct ABP_Activity_Feasting_C_GetFeastingTargetsWithinRadius_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Activity_Feasting.BP_Activity_Feasting_C.OnActivityStarted
	 */
	struct ABP_Activity_Feasting_C_OnActivityStarted_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Activity_Feasting.BP_Activity_Feasting_C.OnActivityEnded
	 */
	struct ABP_Activity_Feasting_C_OnActivityEnded_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActivityEndedReason                                       EndReason;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Activity_Feasting.BP_Activity_Feasting_C.ExecuteUbergraph_BP_Activity_Feasting
	 */
	struct ABP_Activity_Feasting_C_ExecuteUbergraph_BP_Activity_Feasting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_05SB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
