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
	 * BlueprintGeneratedClass BP_ModularEffect_RegisterForDespawn.BP_ModularEffect_RegisterForDespawn_C
	 * Size -> 0x0058 (FullSize[0x0098] - InheritedSize[0x0040])
	 */
	class UBP_ModularEffect_RegisterForDespawn_C : public UModularEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0040(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FDespawnInfo                                        DespawnInfo;                                             // 0x0048(0x0038) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		class ADespawnManager*                                     DespawnManager;                                          // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DespawnConditionsName;                                   // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PerformEffect(class AActor* Actor, class UModularEffectParams* ModularEffectParams);
		void OnBegin(class AActor* Actor);
		void ExecuteUbergraph_BP_ModularEffect_RegisterForDespawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
