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
	 * BlueprintGeneratedClass BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C
	 * Size -> 0x0028 (FullSize[0x0650] - InheritedSize[0x0628])
	 */
	class ABP_MeleeWeapon_Legendary_Warhammer_C : public ABP_Base_MeleeWeapon_WithImpactResponse_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0628(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCosmeticEffectsDefinition*                          LegendaryWarhammerCE;                                    // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  LegendaryWarhammerCEID;                                  // 0x0638(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                SocketToAttachCETo;                                      // 0x063C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToDisableOverloadEffects;                            // 0x0644(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        EffectsTimer;                                            // 0x0648(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void AddWeaponCE();
		void DeferredBeginPlay();
		void ActionEnded(const struct FGuid& RequestId, const class FName& ActionType, ECharacterActionEndedReason Reason);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void EndEffects();
		void ImpactInstigated(const struct FPointImpactEventResult& RecordedImpact);
		void ExecuteUbergraph_BP_MeleeWeapon_Legendary_Warhammer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
