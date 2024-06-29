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
	 * BlueprintGeneratedClass BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C
	 * Size -> 0x0034 (FullSize[0x0064] - InheritedSize[0x0030])
	 */
	class UBP_AnimNotifyState_ActivateProjectileStream_C : public UAnimNotifyState
	{
	public:
		class FName                                                FireModeIdentifier;                                      // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseDistanceVariants;                                     // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RFGO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              DistanceFromTargetVariants;                              // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly
		bool                                                       UseManualMovement;                                       // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2Y5X[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ManualOffsetRotationLimit;                               // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ManualOffsetPitchOverride;                               // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MeshSocketToSetManualPositionFrom;                       // 0x005C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetManualMovement(class AActor* OwnerActor, class URangedWeaponModulesComponent* RangedWeaponModule, class UDSLogChannelHandle* DSLogger);
		void DetermineMovementOffset(class AActor* Actor, class UDSLogChannelHandle* DSLogger, float* TargetYawOffset);
		void IsTargetToTheLeft(class AActor* Source, class AActor* Target, bool* Result);
		void SelectAndSetProjectileStream(class AActor* OwnerActor, bool Enable, class UDSLogChannelHandle* DSLogger, bool* Result);
		void GetProcessedFireModeIdentifier(class AActor* Actor, class FName* ProcessedFireModeIdentifier);
		void DetermineDistanceVariation(class UKnowledgeBaseComponent* KB, class UDSLogChannelHandle* DSLogger, class UAnimSequenceBase* Animation);
		void SetProjectileStream(bool Enable, class AActor* Actor, class URangedWeaponModulesComponent* RangedWeaponComponent, bool* Succeeded);
		bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
