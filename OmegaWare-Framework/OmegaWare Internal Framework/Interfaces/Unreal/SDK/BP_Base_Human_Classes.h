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
	 * BlueprintGeneratedClass BP_Base_Human.BP_Base_Human_C
	 * Size -> 0x0098 (FullSize[0x10C0] - InheritedSize[0x1028])
	 */
	class ABP_Base_Human_C : public ABP_Base_AI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAmbientLookTargetComponent*                         AmbientLookTarget;                                       // 0x1030(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Human_StimEmitter_C*                            BPC_Human_StimEmitter;                                   // 0x1038(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Human_Distraction_GroupCoordinator_C*           BPC_Human_Distraction_GroupCoordinator;                  // 0x1040(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInteractiveComponent*                               VendorInteractive;                                       // 0x1048(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInteractiveComponent*                               NarrativeInteractive;                                    // 0x1050(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEmotionComponent*                                   Emotion;                                                 // 0x1058(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAttachmentComponent*                                Attachment;                                              // 0x1060(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInteractiveComponent*                               DialogueSelectorInteractive;                             // 0x1068(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrinkleComponent*                                   Wrinkle;                                                 // 0x1070(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFaceFXComponent*                                    FaceFX;                                                  // 0x1078(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpatialTickComponent*                               SpatialTick;                                             // 0x1080(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              SpeakerName;                                             // 0x1088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		ENPCGender                                                 AnimationGender;                                         // 0x1098(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableWeaponPoseLayer;                                  // 0x1099(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QPST[0x2];                                   // 0x109A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               WeaponPoseDisableRequestID;                              // 0x109C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LVDW[0x4];                                   // 0x10AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationLayer*                                     WeaponPoseLayer;                                         // 0x10B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                IsHuman;                                                 // 0x10B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EnableWeaponPose();
		void DisableWeaponPose();
		void SetupFaceFX(class UFaceFXActor* FaceFXActor, const class FName& AttachPointName);
		void UserConstructionScript();
		void CombatStateChanged(ECosmeticCombatState NewState);
		void ReceiveBeginPlay();
		void InitializeFaceFX(const struct FFaceFXParams& FaceFXParams);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_Base_Human(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
