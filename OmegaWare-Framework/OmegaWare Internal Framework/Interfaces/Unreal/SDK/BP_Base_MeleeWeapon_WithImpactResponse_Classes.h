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
	 * BlueprintGeneratedClass BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C
	 * Size -> 0x0338 (FullSize[0x0628] - InheritedSize[0x02F0])
	 */
	class ABP_Base_MeleeWeapon_WithImpactResponse_C : public ABP_Base_MeleeWeapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FTimerHandle                                        NextTickTimer;                                           // 0x02F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_Base_Player_C*                                   PlayerOwner;                                             // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_MeleeWeaponItem_C*                          WeaponReference;                                         // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             WeaponKB;                                                // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              MainHandActor;                                           // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FPointImpactEventResult                             ImpactEvent;                                             // 0x0320(0x0300) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class ABP_Base_Zombie_C*                                   ZombieVictim;                                            // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnCEAttachedToSocket(class UCosmeticEffectsDefinition* Definition, const class FName& InSocketName, const struct FVector& LocationOffset, const struct FRotator& RotationOffset, struct FCosmeticEffectsID* ID);
		void GetSocketTransform(const class FName& InSocketName, struct FTransform* InWorldTransform);
		void ReceiveBeginPlay();
		void DeferredBeginPlay();
		void PointImpactRegistered(const struct FPointImpactEventResult& Result);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ImpactInstigated(const struct FPointImpactEventResult& RecordedImpact);
		void ExecuteUbergraph_BP_Base_MeleeWeapon_WithImpactResponse(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
