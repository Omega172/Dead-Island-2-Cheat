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
	 * Function BP_Base_StatusEffectInstance_ApplyDebuff.BP_Base_StatusEffectInstance_ApplyDebuff_C.SetBurndownRate
	 */
	struct UBP_Base_StatusEffectInstance_ApplyDebuff_C_SetBurndownRate_Params
	{
	public:
		float                                                      BurndownRate;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffectInstance_ApplyDebuff.BP_Base_StatusEffectInstance_ApplyDebuff_C.UpdateModifiableValues
	 */
	struct UBP_Base_StatusEffectInstance_ApplyDebuff_C_UpdateModifiableValues_Params
	{
	public:
		class UModifiableValuesComponent*                          ModifiableValuesComponent;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGuid                                               ModifierGUID;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UModifiableValueDefinition*                          ModifierValueType;                                       // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ModifierValue;                                           // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Successful;                                              // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_StatusEffectInstance_ApplyDebuff.BP_Base_StatusEffectInstance_ApplyDebuff_C.RemoveModifiableValues
	 */
	struct UBP_Base_StatusEffectInstance_ApplyDebuff_C_RemoveModifiableValues_Params
	{
	public:
		class UModifiableValuesComponent*                          ModifiableValuesComponent;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffectInstance_ApplyDebuff.BP_Base_StatusEffectInstance_ApplyDebuff_C.ApplyModifiableValues
	 */
	struct UBP_Base_StatusEffectInstance_ApplyDebuff_C_ApplyModifiableValues_Params
	{
	public:
		class UModifiableValuesComponent*                          ModifiableValuesComponent;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FSStatusEffectDebuffTypesAndValues>          ModifiersToApply;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       SetValueNow;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SGB9[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                SourceName;                                              // 0x001C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
