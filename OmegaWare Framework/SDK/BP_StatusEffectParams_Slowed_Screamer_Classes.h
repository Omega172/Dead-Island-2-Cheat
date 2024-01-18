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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_StatusEffectParams_Slowed_Screamer.BP_StatusEffectParams_Slowed_Screamer_C
	 * Size -> 0x0048 (FullSize[0x0138] - InheritedSize[0x00F0])
	 */
	class UBP_StatusEffectParams_Slowed_Screamer_C : public UBP_StatusEffectParams_Slowed_C
	{
	public:
		float                                                      BlockActionsDistanceThreshold;                           // 0x00F0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      BlockActionsDirectionThreshold;                          // 0x00F4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      FacingTargetAngleForEffectiveBlock;                      // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      PlayerBlockDirectionScalarModifier;                      // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      MaxDistance;                                             // 0x0100(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      MinDistance;                                             // 0x0104(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UCurveFloat*                                         DistanceIntensityScaleCurve;                             // 0x0108(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UCurveFloat*                                         DirectionIntensityScaleCurve;                            // 0x0110(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UCurveFloat*                                         AngleIntensityScaleCurve;                                // 0x0118(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ADICharacter*                                        SourceOfEffects;                                         // 0x0120(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<struct FSStatusEffectDebuffTypesAndValues>          AdditionalDebuffModifiers;                               // 0x0128(0x0010) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void GetModifiers(TArray<struct FSStatusEffectDebuffTypesAndValues>* StatusEffectsAndValues);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
