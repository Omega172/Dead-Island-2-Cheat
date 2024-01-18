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
	 * BlueprintGeneratedClass BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C
	 * Size -> 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
	 */
	class UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C : public UStackablePerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0058(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_MeleeWeapon_C*                              VisualWeapon;                                            // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BuildUpImpactsNumber;                                    // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E189[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Base_Player_C*                                   Player;                                                  // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bOwnerEquipped;                                          // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_09JT[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMeleeWeaponItemActor*                               WeaponActor;                                             // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CacheEquippedVisualWeapon(class ABP_Base_Player_C* Player);
		void UpdateMaterialOnWeapon(int32_t StackCount);
		void OnStackCountUpdated(int32_t NewStackCount);
		void OnEnd(const struct FPerkEffectEndParams& Params);
		void OnWeaponChanged(class UEquippableComponent* PreviousItem, class UEquippableComponent* CurrentItem);
		void OnWeaponAttached(class AActor* NewActor, EPerspective Perspective);
		void OnStart(const struct FPerkEffectStartParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_StaticCharge_CosmeticEffectUpdate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
