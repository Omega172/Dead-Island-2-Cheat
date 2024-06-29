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
	 * BlueprintGeneratedClass BP_Part_Eye.BP_Part_Eye_C
	 * Size -> 0x0028 (FullSize[0x02E8] - InheritedSize[0x02C0])
	 */
	class ABP_Part_Eye_C : public ASkeletalMeshBodyPartAttachmentActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCharacterFaderComponent*                            CharacterFader;                                          // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USoftBodyComponent*                                  SoftBody;                                                // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDSSkeletalMeshComponent*                            SK_Eye;                                                  // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void OnSpawn(class USkeletalMeshComponent* ParentSkeletalMeshComponent);
		void SetFadeValue(float FadeValue);
		void ExecuteUbergraph_BP_Part_Eye(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
