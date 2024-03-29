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
	 * BlueprintGeneratedClass BP_PerkEffect_ApplyGeneralImpact.BP_PerkEffect_ApplyGeneralImpact_C
	 * Size -> 0x0138 (FullSize[0x0188] - InheritedSize[0x0050])
	 */
	class UBP_PerkEffect_ApplyGeneralImpact_C : public UPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0050(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              DamageType;                                              // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Damage;                                                  // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowWeaponsOwnerToBeAffected;                           // 0x0064(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LMKA[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDSDamageData                                       DSDamageData;                                            // 0x0068(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor
		struct FImpactSettings                                     ImpactSettings;                                          // 0x00C0(0x00C8) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference

	public:
		void GetReceivingActor(const struct FPerkEffectStartParams& Params, class AActor** ReceivingActor);
		void OnStart(const struct FPerkEffectStartParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_ApplyGeneralImpact(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
