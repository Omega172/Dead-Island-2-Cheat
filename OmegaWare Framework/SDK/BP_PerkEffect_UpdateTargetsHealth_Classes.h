﻿#pragma once

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
	 * BlueprintGeneratedClass BP_PerkEffect_UpdateTargetsHealth.BP_PerkEffect_UpdateTargetsHealth_C
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	class UBP_PerkEffect_UpdateTargetsHealth_C : public UPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0050(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       TreatValueAsPercentage;                                  // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M4QM[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HealthToAdd;                                             // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USimpleHealthComponent*                              TargetHealthComponent;                                   // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AffectAllPlayersWithinRadius;                            // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V9LR[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Radius;                                                  // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateHealth(class ADICharacter* PlayerToUpdateHealth);
		void GetPercentageFromHealthValue(class USimpleHealthComponent* TargetHealthComponent, float* NewHealthValue);
		void OnStart(const struct FPerkEffectStartParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_UpdateTargetsHealth(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
