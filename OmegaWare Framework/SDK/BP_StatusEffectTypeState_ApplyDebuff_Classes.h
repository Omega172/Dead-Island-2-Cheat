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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_StatusEffectTypeState_ApplyDebuff.BP_StatusEffectTypeState_ApplyDebuff_C
	 * Size -> 0x0038 (FullSize[0x0108] - InheritedSize[0x00D0])
	 */
	class UBP_StatusEffectTypeState_ApplyDebuff_C : public UBP_Base_StatusEffectTypeState_C
	{
	public:
		TArray<float>                                              Modifiers;                                               // 0x00D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGuid                                               ModifierGUID;                                            // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UModifiableValuesComponent*                          ModifiableValueComponent;                                // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  CosmeticEffectID;                                        // 0x00F8(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A7ZP[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            ParticleSystemStatus;                                    // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
