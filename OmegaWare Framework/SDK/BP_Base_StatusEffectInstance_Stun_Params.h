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
	 * Function BP_Base_StatusEffectInstance_Stun.BP_Base_StatusEffectInstance_Stun_C.OnCounterable
	 */
	struct UBP_Base_StatusEffectInstance_Stun_C_OnCounterable_Params
	{
	public:
		bool                                                       Counterable;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E07S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_StatusEffectInstance_Stun.BP_Base_StatusEffectInstance_Stun_C.SetupActionListeners
	 */
	struct UBP_Base_StatusEffectInstance_Stun_C_SetupActionListeners_Params
	{	};

	/**
	 * Function BP_Base_StatusEffectInstance_Stun.BP_Base_StatusEffectInstance_Stun_C.ExecuteUbergraph_BP_Base_StatusEffectInstance_Stun
	 */
	struct UBP_Base_StatusEffectInstance_Stun_C_ExecuteUbergraph_BP_Base_StatusEffectInstance_Stun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3LRM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
