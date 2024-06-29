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
	 * BlueprintGeneratedClass BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C
	 * Size -> 0x003A (FullSize[0x02EA] - InheritedSize[0x02B0])
	 */
	class ABP_Base_InstantUsePickup_C : public AActor
	{
	public:
		class UInteractiveComponent*                               Interactive;                                             // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAkAudioEvent*                                       WwiseEvent;                                              // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FuryRecoveryValue;                                       // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealthRecoveryPortion;                                   // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               LocalPlayerUsed;                                         // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PortionOfHealingAppliedImmediately;                      // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealthRecoveryDuration;                                  // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                InteractedDisableReason;                                 // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTestHealth;                                             // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTestFury;                                               // 0x02E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool AllowInteraction(class APawn* User, class UInteractiveComponent* InteractiveComponent);
		class UClass* GetInteractIconClass(class UInteractiveComponent* InteractiveComponent);
		void ServerInteraction(class APawn* User);
		void LocalInteraction(class APawn* User);
		void IsPlayerAtMaxFury(class APawn* User, bool* IsTrue);
		void HasPlayerUsedItem(class APawn* User, bool* IsTrue);
		void IsPlayerAtMaxHealth(class APawn* User, bool* IsTrue);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
