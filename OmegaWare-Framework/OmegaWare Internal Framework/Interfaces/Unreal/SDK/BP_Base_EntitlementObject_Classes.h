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
	 * BlueprintGeneratedClass BP_Base_EntitlementObject.BP_Base_EntitlementObject_C
	 * Size -> 0x0088 (FullSize[0x03B8] - InheritedSize[0x0330])
	 */
	class ABP_Base_EntitlementObject_C : public AEntitlementActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            PS_Highlight;                                            // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPickupableComponent*                                Pickupable;                                              // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUsableComponent*                                    Usable;                                                  // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameEvent*                                          GameEvent;                                               // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UGameEventResponse*>                          Responses;                                               // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EntitlementReason;                                       // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bActorVisibility;                                        // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_32HY[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticEffectsDefinition*                          CosmeticEffectDefinition;                                // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  CosmeticEffectID;                                        // 0x0398(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5EYB[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TickTimerHandle;                                         // 0x03A0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UGameEntitlementsDataTable*>                  ValidDataTablesForDisplayName;                           // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void CheckEntitlementIsValidForDisplayName(const struct FDataTableRowHandle& Entitlement, bool* IsValid);
		void UpdateCosmeticEffectVisibility();
		void GetEntitlementForDisplayName(bool* ValidEntitlementFound, struct FDataTableRowHandle* EntitlementToUse);
		void GetEntitlementDisplayName(const struct FDataTableRowHandle& Entitlement, bool* EntitlementFoundInRegistry, class FText* DisplayName);
		void SetEntitlementDisplayName();
		void UpdateParticleVisibility();
		void InitializeFromEntitlementData();
		void CreateResponses(TArray<struct FDataTableRowHandle>* EntitlementsRequired);
		void CreateGameEvent();
		void AddGameEventResponders(TArray<class UGameEventResponse*>* ResponsesToAdd);
		void BndEvt__Pickupable_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void UpdateVisuals();
		void ReceiveBeginPlay();
		void ReceiveUpdateVisibility(bool bVisible);
		void BndEvt__Pickupable_K2Node_ComponentBoundEvent_3_InteractionEnabledStateChangedDelegate__DelegateSignature(bool IsEnabled);
		void ExecuteUbergraph_BP_Base_EntitlementObject(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
