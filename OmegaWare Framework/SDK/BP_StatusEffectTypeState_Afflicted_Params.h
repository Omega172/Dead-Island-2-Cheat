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
	 * Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.GetModifiedHealthCap
	 */
	struct UBP_StatusEffectTypeState_Afflicted_C_GetModifiedHealthCap_Params
	{
	public:
		bool                                                       FirstInstance;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IZV2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBP_StatusEffectParams_Afflicted_C*                  Params;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ModifiedCap;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.ResetHealth
	 */
	struct UBP_StatusEffectTypeState_Afflicted_C_ResetHealth_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.OnHealthUpdated
	 */
	struct UBP_StatusEffectTypeState_Afflicted_C_OnHealthUpdated_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LastHealth;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentHealth;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.KeepHurt
	 */
	struct UBP_StatusEffectTypeState_Afflicted_C_KeepHurt_Params
	{
	public:
		float                                                      HealthCap;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C.ExecuteUbergraph_BP_StatusEffectTypeState_Afflicted
	 */
	struct UBP_StatusEffectTypeState_Afflicted_C_ExecuteUbergraph_BP_StatusEffectTypeState_Afflicted_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WAKN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
