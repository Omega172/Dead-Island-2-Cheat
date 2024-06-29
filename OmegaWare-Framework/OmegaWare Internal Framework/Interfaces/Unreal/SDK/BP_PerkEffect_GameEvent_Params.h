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
	 * Function BP_PerkEffect_GameEvent.BP_PerkEffect_GameEvent_C.RunGameEvent
	 */
	struct UBP_PerkEffect_GameEvent_C_RunGameEvent_Params
	{	};

	/**
	 * Function BP_PerkEffect_GameEvent.BP_PerkEffect_GameEvent_C.OnStart
	 */
	struct UBP_PerkEffect_GameEvent_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_GameEvent.BP_PerkEffect_GameEvent_C.ExecuteUbergraph_BP_PerkEffect_GameEvent
	 */
	struct UBP_PerkEffect_GameEvent_C_ExecuteUbergraph_BP_PerkEffect_GameEvent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
