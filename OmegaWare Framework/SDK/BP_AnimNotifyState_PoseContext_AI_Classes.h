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
	 * BlueprintGeneratedClass BP_AnimNotifyState_PoseContext_AI.BP_AnimNotifyState_PoseContext_AI_C
	 * Size -> 0x0013 (FullSize[0x0073] - InheritedSize[0x0060])
	 */
	class UBP_AnimNotifyState_PoseContext_AI_C : public UAnimNotifyState_ScopedFacts
	{
	public:
		class FString                                              PoseContext;                                             // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       ImpactFromAboveNotSuitableForBlendIntoMontage;           // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ImpactFromFrontNotSuitableForBlendIntoMontage;           // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ImpactFromBackNotSuitableForBlendIntoMontage;            // 0x0072(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		class FString GetNotifyName();
		bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
