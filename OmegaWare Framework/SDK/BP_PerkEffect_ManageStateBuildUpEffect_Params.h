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
	 * Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.ConstructParams
	 */
	struct UBP_PerkEffect_ManageStateBuildUpEffect_C_ConstructParams_Params
	{	};

	/**
	 * Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.ResetBuildUpTimer
	 */
	struct UBP_PerkEffect_ManageStateBuildUpEffect_C_ResetBuildUpTimer_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.OnCombatStateChange
	 */
	struct UBP_PerkEffect_ManageStateBuildUpEffect_C_OnCombatStateChange_Params
	{
	public:
		ECosmeticCombatState                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.OnEnd
	 */
	struct UBP_PerkEffect_ManageStateBuildUpEffect_C_OnEnd_Params
	{
	public:
		struct FPerkEffectEndParams                                Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.BeginBuildUpWarmUpConditionsMet
	 */
	struct UBP_PerkEffect_ManageStateBuildUpEffect_C_BeginBuildUpWarmUpConditionsMet_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.BuildUpEffectHasEnded
	 */
	struct UBP_PerkEffect_ManageStateBuildUpEffect_C_BuildUpEffectHasEnded_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.RequestShockingBuildUp
	 */
	struct UBP_PerkEffect_ManageStateBuildUpEffect_C_RequestShockingBuildUp_Params
	{	};

	/**
	 * Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.OnStart
	 */
	struct UBP_PerkEffect_ManageStateBuildUpEffect_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.ExecuteUbergraph_BP_PerkEffect_ManageStateBuildUpEffect
	 */
	struct UBP_PerkEffect_ManageStateBuildUpEffect_C_ExecuteUbergraph_BP_PerkEffect_ManageStateBuildUpEffect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X100[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
