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
	 * BlueprintGeneratedClass BP_Base_JerryCan.BP_Base_JerryCan_C
	 * Size -> 0x004B (FullSize[0x06A0] - InheritedSize[0x0655])
	 */
	class ABP_Base_JerryCan_C : public ABP_Base_Barrel_C
	{
	public:
		unsigned char                                              UnknownData_POVR[0x3];                                   // 0x0655(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0658(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_Carryable_C*                                    BPC_Carryable;                                           // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_CarryableInteractive_C*                         BPC_CarryableInteractive;                                // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               ThrownFactKey;                                           // 0x0670(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PlayerFlashLightLocation;                                // 0x067C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_Player_C*                                   Carrier;                                                 // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       PickupAudio;                                             // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULeakDataAsset_FluidProjectile*                      PlayerFluidLeakDataAsset;                                // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RadialThresholdReached();
		void EndImpactOnCollisionDetection();
		void OnBeginHolding();
		void IsCarrierLocal(bool* bOutIsLocal);
		void OnTerminal();
		void SetupActionHelpersOnCarryableComponent();
		void UserConstructionScript();
		void BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_4_PaperDollEventMulticastDelegate__DelegateSignature(class UPaperDollSlot* PaperDollSlot);
		void BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_3_PaperDollEventMulticastDelegate__DelegateSignature(class UPaperDollSlot* PaperDollSlot);
		void OnHeavyAttackStart();
		void OnHeavyAttackEnd();
		void ReceiveBeginPlay();
		void BlueprintOnBeginAction(const struct FGuid& RequestId, const class FName& ActionType);
		void ReceivePostInitializeComponents();
		void TriggerBrokenAction();
		void BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_1_SetSimulatePhysicsDelegate__DelegateSignature(bool bSimulate);
		void ExecuteUbergraph_BP_Base_JerryCan(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
