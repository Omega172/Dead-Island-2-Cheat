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
	 * BlueprintGeneratedClass BP_PerkEffect_UpdateTargetsStaminaBasedOnHealth.BP_PerkEffect_UpdateTargetsStaminaBasedOnHealth_C
	 * Size -> 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
	 */
	class UBP_PerkEffect_UpdateTargetsStaminaBasedOnHealth_C : public UPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0050(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      FinalValueToApply;                                       // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KNYB[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaminaComponent*                                   TargetStaminaComponent;                                  // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USimpleHealthComponent*                              TargetHealthComponent;                                   // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Curve;                                                   // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnStart(const struct FPerkEffectStartParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_UpdateTargetsStaminaBasedOnHealth(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
