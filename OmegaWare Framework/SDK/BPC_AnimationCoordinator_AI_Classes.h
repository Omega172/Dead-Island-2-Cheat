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
	 * BlueprintGeneratedClass BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C
	 * Size -> 0x0190 (FullSize[0x0378] - InheritedSize[0x01E8])
	 */
	class UBPC_AnimationCoordinator_AI_C : public UAnimationMasterComponent
	{
	public:
		TMap<class FName, int32_t>                                 TorsoTwistTargetPriorities;                              // 0x01E8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FName, class AActor*>                           CurrentTorsoTwistTargetsList;                            // 0x0238(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FName, int32_t>                                 CurrentTorsoTwistPrioritiesList;                         // 0x0288(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class AActor*, struct FSTorsoTwistParams>             CurrentTorsoTwistTargetsParamList;                       // 0x02D8(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference
		TMap<ECharacterBodyPartHeights, struct FSNameArray>        BodyPartHeightList;                                      // 0x0328(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void GetBodyPartsHeight(class USceneComponent* Mesh, ECharacterBodyPartHeights BodyPartHeight, float* ReturnValue_Location_Z);
		struct FVector GetBodyPartWorldSpaceHeight(ECharacterBodyPartHeights BodyPartHeight);
		struct FSTorsoTwistParams GetTorsoTwistParamsByName(const class FName& TorsoTwistName);
		struct FSTorsoTwistParams GetTorsoTwistParamsByActor(class AActor* TorsoTwistTarget);
		void OnTorsoTwistTargetEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		class AActor* GetHighestPriorityTorsoTwistTarget();
		void RemoveTorsoTwistTarget(const class FName& TorsoTwistName);
		void AddTorsoTwistTarget(class AActor* TargetActor, const class FName& TorsoTwistName, const struct FSTorsoTwistParams& TorsoTwistParams);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
