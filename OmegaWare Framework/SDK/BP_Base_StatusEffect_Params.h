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
	 * Function BP_Base_StatusEffect.BP_Base_StatusEffect_C.SpawnCosmeticEffectChime
	 */
	struct UBP_Base_StatusEffect_C_SpawnCosmeticEffectChime_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_Base_StatusEffectTypeState_C*                    TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               Instance;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffect.BP_Base_StatusEffect_C.SetupActionBindings
	 */
	struct UBP_Base_StatusEffect_C_SetupActionBindings_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_Base_StatusEffectTypeState_C*                    TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               Instance;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffect.BP_Base_StatusEffect_C.RemoveStatusEffectCosmeticEffect
	 */
	struct UBP_Base_StatusEffect_C_RemoveStatusEffectCosmeticEffect_Params
	{
	public:
		class UObject*                                             Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_Base_StatusEffectTypeState_C*                    TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffect.BP_Base_StatusEffect_C.EndAction
	 */
	struct UBP_Base_StatusEffect_C_EndAction_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_Base_StatusEffectTypeState_C*                    TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffect.BP_Base_StatusEffect_C.SpawnStatusEffectCosmeticEffect
	 */
	struct UBP_Base_StatusEffect_C_SpawnStatusEffectCosmeticEffect_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_Base_StatusEffectTypeState_C*                    TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffect.BP_Base_StatusEffect_C.RequestAction
	 */
	struct UBP_Base_StatusEffect_C_RequestAction_Params
	{
	public:
		class ADICharacter*                                        OwningCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectComponent*                              Component;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_Base_StatusEffectTypeState_C*                    TypeState;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffect.BP_Base_StatusEffect_C.SpawnBurstCosmeticEffect
	 */
	struct UBP_Base_StatusEffect_C_SpawnBurstCosmeticEffect_Params
	{
	public:
		class AActor*                                              OwningActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTargetPointInfo                                    ImpactOrigin;                                            // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffect.BP_Base_StatusEffect_C.ReceiveEnd
	 */
	struct UBP_Base_StatusEffect_C_ReceiveEnd_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffect.BP_Base_StatusEffect_C.SetupTypeState
	 */
	struct UBP_Base_StatusEffect_C_SetupTypeState_Params
	{
	public:
		class UBP_Base_StatusEffectTypeState_C*                    TypeState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADICharacter*                                        StatusEffectOwner;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffect.BP_Base_StatusEffect_C.ReceiveBeginInstance
	 */
	struct UBP_Base_StatusEffect_C_ReceiveBeginInstance_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               Instance;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffect.BP_Base_StatusEffect_C.ConstructActionParams
	 */
	struct UBP_Base_StatusEffect_C_ConstructActionParams_Params
	{
	public:
		class UCustomActionParamsBase*                             NewParams;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffect.BP_Base_StatusEffect_C.ReceiveBegin
	 */
	struct UBP_Base_StatusEffect_C_ReceiveBegin_Params
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
