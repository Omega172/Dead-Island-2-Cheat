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
	 * BlueprintGeneratedClass BP_Base_Human.BP_Base_Human_C
	 * Size -> 0x0098 (FullSize[0x1030] - InheritedSize[0x0F98])
	 */
	class ABP_Base_Human_C : public ABP_Base_AI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0F98(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAmbientLookTargetComponent*                         AmbientLookTarget;                                       // 0x0FA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Human_StimEmitter_C*                            BPC_Human_StimEmitter;                                   // 0x0FA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Human_Distraction_GroupCoordinator_C*           BPC_Human_Distraction_GroupCoordinator;                  // 0x0FB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInteractiveComponent*                               VendorInteractive;                                       // 0x0FB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInteractiveComponent*                               NarrativeInteractive;                                    // 0x0FC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEmotionComponent*                                   Emotion;                                                 // 0x0FC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAttachmentComponent*                                Attachment;                                              // 0x0FD0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInteractiveComponent*                               DialogueSelectorInteractive;                             // 0x0FD8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrinkleComponent*                                   Wrinkle;                                                 // 0x0FE0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFaceFXComponent*                                    FaceFX;                                                  // 0x0FE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpatialTickComponent*                               SpatialTick;                                             // 0x0FF0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              SpeakerName;                                             // 0x0FF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		ENPCGender                                                 AnimationGender;                                         // 0x1008(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableWeaponPoseLayer;                                  // 0x1009(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4SVY[0x2];                                   // 0x100A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               WeaponPoseDisableRequestID;                              // 0x100C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B5WY[0x4];                                   // 0x101C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationLayer*                                     WeaponPoseLayer;                                         // 0x1020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                IsHuman;                                                 // 0x1028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
