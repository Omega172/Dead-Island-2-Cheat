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
	 * Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.IsFriendlyFireAllowed
	 */
	struct UBP_StatusEffect_DamageOverTime_C_IsFriendlyFireAllowed_Params
	{
	public:
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.EstimateDamageToOwner
	 */
	struct UBP_StatusEffect_DamageOverTime_C_EstimateDamageToOwner_Params
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageToApply;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FWeakEventInstigator                                Instigator;                                              // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_C6B8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageEstimate;                                          // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VLMZ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ReceiveBeginInstance
	 */
	struct UBP_StatusEffect_DamageOverTime_C_ReceiveBeginInstance_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               Instance;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.Begin Propagation Effect
	 */
	struct UBP_StatusEffect_DamageOverTime_C_BeginPropagationEffect_Params
	{
	public:
		class FName                                                EffectName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectComponent*                              StatusEffectComponent;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               StatusEffectInstance;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_StatusEffectTypeState_DamageOverTime_C*          TypeState;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.BeginCosmeticEffect
	 */
	struct UBP_StatusEffect_DamageOverTime_C_BeginCosmeticEffect_Params
	{
	public:
		class UBP_StatusEffectTypeState_DamageOverTime_C*          TypeState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ReceiveTick
	 */
	struct UBP_StatusEffect_DamageOverTime_C_ReceiveTick_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UStatusEffectInstance*>                       Instances;                                               // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      DeltaTime;                                               // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D62D[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.GetInstanceTickDamageFromCurve
	 */
	struct UBP_StatusEffect_DamageOverTime_C_GetInstanceTickDamageFromCurve_Params
	{
	public:
		class UStatusEffectInstance*                               StatusEffectInstance;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageToApply;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.AddPerkToOwner
	 */
	struct UBP_StatusEffect_DamageOverTime_C_AddPerkToOwner_Params
	{
	public:
		class UBP_StatusEffectTypeState_DamageOverTime_C*          StatusEffectState;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADICharacter*                                        Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.StopCosmeticEffect
	 */
	struct UBP_StatusEffect_DamageOverTime_C_StopCosmeticEffect_Params
	{
	public:
		class UBP_StatusEffectTypeState_DamageOverTime_C*          TypeState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ApplyDamageToOwner
	 */
	struct UBP_StatusEffect_DamageOverTime_C_ApplyDamageToOwner_Params
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageToApply;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FWeakEventInstigator                                Instigator;                                              // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_SYDZ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FriendlyFireAllowed;                                     // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1VCW[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ReceiveEnd
	 */
	struct UBP_StatusEffect_DamageOverTime_C_ReceiveEnd_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C.ReceiveBegin
	 */
	struct UBP_StatusEffect_DamageOverTime_C_ReceiveBegin_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               FirstInstance;                                           // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
