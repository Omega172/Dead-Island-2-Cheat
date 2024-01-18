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
	 * Function BP_PerkEffect_ClampedModifyIntFact.BP_PerkEffect_ClampedModifyIntFact_C.ClampedFactIncrement
	 */
	struct UBP_PerkEffect_ClampedModifyIntFact_C_ClampedFactIncrement_Params
	{
	public:
		bool                                                       ValueWasModified;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KSXF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PerkEffect_ClampedModifyIntFact.BP_PerkEffect_ClampedModifyIntFact_C.OnStart
	 */
	struct UBP_PerkEffect_ClampedModifyIntFact_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ClampedModifyIntFact.BP_PerkEffect_ClampedModifyIntFact_C.OnEnd
	 */
	struct UBP_PerkEffect_ClampedModifyIntFact_C_OnEnd_Params
	{
	public:
		struct FPerkEffectEndParams                                Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ClampedModifyIntFact.BP_PerkEffect_ClampedModifyIntFact_C.ExecuteUbergraph_BP_PerkEffect_ClampedModifyIntFact
	 */
	struct UBP_PerkEffect_ClampedModifyIntFact_C_ExecuteUbergraph_BP_PerkEffect_ClampedModifyIntFact_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QAN2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
