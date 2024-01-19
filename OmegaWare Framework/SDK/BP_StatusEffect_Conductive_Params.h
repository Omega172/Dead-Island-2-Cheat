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
	 * Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.ReceiveBegin
	 */
	struct UBP_StatusEffect_Conductive_C_ReceiveBegin_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               FirstInstance;                                           // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.RemoveBurndownModifier
	 */
	struct UBP_StatusEffect_Conductive_C_RemoveBurndownModifier_Params
	{
	public:
		class UStatusEffectComponent*                              StatusEffectComponent;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               Instance;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.ReceiveEndInstance
	 */
	struct UBP_StatusEffect_Conductive_C_ReceiveEndInstance_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               Instance;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.AddBurndownModifier
	 */
	struct UBP_StatusEffect_Conductive_C_AddBurndownModifier_Params
	{
	public:
		class UStatusEffectComponent*                              StatusEffectComponent;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               Instance;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_Conductive.BP_StatusEffect_Conductive_C.ReceiveBeginInstance
	 */
	struct UBP_StatusEffect_Conductive_C_ReceiveBeginInstance_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               Instance;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
