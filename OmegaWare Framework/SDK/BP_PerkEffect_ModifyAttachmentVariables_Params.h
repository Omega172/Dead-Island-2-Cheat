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
	 * Function BP_PerkEffect_ModifyAttachmentVariables.BP_PerkEffect_ModifyAttachmentVariables_C.ChangeAttachmentVariables
	 */
	struct UBP_PerkEffect_ModifyAttachmentVariables_C_ChangeAttachmentVariables_Params
	{	};

	/**
	 * Function BP_PerkEffect_ModifyAttachmentVariables.BP_PerkEffect_ModifyAttachmentVariables_C.OnEnd
	 */
	struct UBP_PerkEffect_ModifyAttachmentVariables_C_OnEnd_Params
	{
	public:
		struct FPerkEffectEndParams                                Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ModifyAttachmentVariables.BP_PerkEffect_ModifyAttachmentVariables_C.OnStart
	 */
	struct UBP_PerkEffect_ModifyAttachmentVariables_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ModifyAttachmentVariables.BP_PerkEffect_ModifyAttachmentVariables_C.ExecuteUbergraph_BP_PerkEffect_ModifyAttachmentVariables
	 */
	struct UBP_PerkEffect_ModifyAttachmentVariables_C_ExecuteUbergraph_BP_PerkEffect_ModifyAttachmentVariables_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ST5R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
