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
	 * BlueprintGeneratedClass BP_StatusEffectTypeState_Afflicted.BP_StatusEffectTypeState_Afflicted_C
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class UBP_StatusEffectTypeState_Afflicted_C : public UStatusEffectTypeState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      HealthBeforeEffect;                                      // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_08E8[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USimpleHealthComponent*                              HealthComponent;                                         // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealthCap;                                               // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  CosmeticEffectID;                                        // 0x00CC(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void GetModifiedHealthCap(bool FirstInstance, class UBP_StatusEffectParams_Afflicted_C* Params, float* ModifiedCap);
		void ResetHealth(float Health);
		void OnHealthUpdated(class AActor* DamagedActor, float LastHealth, float CurrentHealth);
		void KeepHurt(float HealthCap);
		void ExecuteUbergraph_BP_StatusEffectTypeState_Afflicted(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
