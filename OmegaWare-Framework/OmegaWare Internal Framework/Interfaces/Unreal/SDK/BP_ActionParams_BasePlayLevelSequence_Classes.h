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
	 * BlueprintGeneratedClass BP_ActionParams_BasePlayLevelSequence.BP_ActionParams_BasePlayLevelSequence_C
	 * Size -> 0x00B0 (FullSize[0x00E8] - InheritedSize[0x0038])
	 */
	class UBP_ActionParams_BasePlayLevelSequence_C : public UCustomActionParamsBase
	{
	public:
		struct FGameSequencePlaybackParams                         PlaybackParams;                                          // 0x0038(0x0024) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_1LW7[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoundActor>                                 BoundActors;                                             // 0x0060(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		ELevelSequenceState                                        LevelSequenceState;                                      // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EAgentUnhideConfig                                         UnhideMode;                                              // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_7CDW[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelSequence*                                      LevelSequenceRef;                                        // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          LevelSequenceOffsetTransform;                            // 0x0080(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		TWeakObjectPtr<class AActor>                               OwnerReference;                                          // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FName                                                OwningActivityName;                                      // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ActionName;                                              // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ActionTable;                                             // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceEarlyMontageOrphaning;                              // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_WDLU[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKnowledgeBaseFactKey>                       DelayedRemovalLifetimeFacts;                             // 0x00D8(0x0010) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
