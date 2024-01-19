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
	 * BlueprintGeneratedClass BP_Base_ItemPickup.BP_Base_ItemPickup_C
	 * Size -> 0x0029 (FullSize[0x04F1] - InheritedSize[0x04C8])
	 */
	class ABP_Base_ItemPickup_C : public AItemPickupActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBillboardComponent*                                 Billboard;                                               // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ItemPickupActorUndocked;                                 // 0x04D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UAkComponent*                                        PickupAudio;                                             // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseColourRarity;                                        // 0x04F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ToggleLootOutline(bool Enabled);
		void ClearDisplayName();
		void ProceduralItemMeshHandling();
		void StandardItemMeshHandling();
		void NullMeshes();
		void SetComponentName();
		void UserConstructionScript();
		void BndEvt__PickupableComponent_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void OnCosmeticEffectsSetup(EItemRarity Rarity);
		void OnConfiguredFrom(class AItemActor* ItemActor);
		void ReceiveBeginPlay();
		void BndEvt__PickupableComponent_K2Node_ComponentBoundEvent_1_InteractionEnabledStateChangedDelegate__DelegateSignature(bool IsEnabled);
		void ExecuteUbergraph_BP_Base_ItemPickup(int32_t EntryPoint);
		void ItemPickupActorUndocked__DelegateSignature(class ABP_Base_ItemPickup_C* ItemPickupActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
