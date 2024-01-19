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
	 * BlueprintGeneratedClass BP_Base_StatusEffect_Draining.BP_Base_StatusEffect_Draining_C
	 * Size -> 0x000F (FullSize[0x0298] - InheritedSize[0x0289])
	 */
	class UBP_Base_StatusEffect_Draining_C : public UBP_StatusEffect_DamageOverTime_C
	{
	public:
		unsigned char                                              UnknownData_5QBB[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ParticleToApply;                                         // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StopCosmeticEffect(class UBP_StatusEffectTypeState_DamageOverTime_C* TypeState);
		void BeginCosmeticEffect(class UBP_StatusEffectTypeState_DamageOverTime_C* TypeState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
