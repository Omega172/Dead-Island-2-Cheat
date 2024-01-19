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
	 * BlueprintGeneratedClass BP_Base_AnimNotifyState_SpawnVoiceStim.BP_Base_AnimNotifyState_SpawnVoiceStim_C
	 * Size -> 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
	 */
	class UBP_Base_AnimNotifyState_SpawnVoiceStim_C : public UAnimNotifyState
	{
	public:
		class FName                                                SpawnFromBone;                                           // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSCustomVoiceStimParams>                     VoiceStims;                                              // 0x0038(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		bool                                                       MoveStimWithActor;                                       // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PHUT[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDialogueTriggerChooser                             DialogueToTriggerOnBegin;                                // 0x004C(0x0018) Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_E6TR[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVocalAsset                                         VocalAsset;                                              // 0x0068(0x0038) Edit, BlueprintVisible
		TMap<EVoiceStimTypes, class UStimTemplate*>                StimTemplateList;                                        // 0x00A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void BeginAndEndStim(class UStimTemplate* StimTemplate, class AActor* Owner, class USkeletalMeshComponent* SkeletalMeshComponent, const struct FSStimOverrideParams& OverrideParams, float TotalDuration);
		bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
