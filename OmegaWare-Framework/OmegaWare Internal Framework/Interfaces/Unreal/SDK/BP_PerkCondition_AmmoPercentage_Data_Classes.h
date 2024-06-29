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
	 * BlueprintGeneratedClass BP_PerkCondition_AmmoPercentage_Data.BP_PerkCondition_AmmoPercentage_Data_C
	 * Size -> 0x0011 (FullSize[0x0049] - InheritedSize[0x0038])
	 */
	class UBP_PerkCondition_AmmoPercentage_Data_C : public UConditionCustomDataBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ARangedWeaponItemActor*                              WeaponRef;                                               // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSatisfyOnEmptyReserve;                                  // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetAmmoInfo(class ARangedWeaponItemActor* Target, int32_t* LocalAmmoCount, int32_t* LocalAmmoCapacity, int32_t* ReserveAmmoCount);
		void GetTarget(bool* IsValid);
		void Equipped(class UPaperDollSlot* PaperDollSlot);
		void ShotEnded(class UModularShotHandler* ShotHandler);
		void CheckAmmoPercentage();
		void ExecuteUbergraph_BP_PerkCondition_AmmoPercentage_Data(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
