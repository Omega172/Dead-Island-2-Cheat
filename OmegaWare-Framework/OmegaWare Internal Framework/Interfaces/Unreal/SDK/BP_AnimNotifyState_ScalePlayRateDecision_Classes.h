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
	 * BlueprintGeneratedClass BP_AnimNotifyState_ScalePlayRateDecision.BP_AnimNotifyState_ScalePlayRateDecision_C
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UBP_AnimNotifyState_ScalePlayRateDecision_C : public UAnimNotifyState_ScalePlayRate
	{
	public:
		bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
