﻿#pragma once

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
	 * BlueprintGeneratedClass BP_PerkEffect_RemoveStatusEffect.BP_PerkEffect_RemoveStatusEffect_C
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	class UBP_PerkEffect_RemoveStatusEffect_C : public UInstancedPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0050(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UClass*>                                      StatusEffectType;                                        // 0x0058(0x0010) Edit, BlueprintVisible
		bool                                                       ApplyToAllPlayersInRadius;                               // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CS6G[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Radius;                                                  // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RemoveStatusEffectByClass(class ADIPlayerCharacter* Player, TArray<class UClass*>* TypeClassArray);
		void OnStart(const struct FPerkEffectStartParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_RemoveStatusEffect(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
