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
	 * BlueprintGeneratedClass BP_Part_Jaw.BP_Part_Jaw_C
	 * Size -> 0x0034 (FullSize[0x02F4] - InheritedSize[0x02C0])
	 */
	class ABP_Part_Jaw_C : public ASkeletalMeshBodyPartAttachmentActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCharacterFaderComponent*                            CharacterFader;                                          // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USoftBodyComponent*                                  SoftBody;                                                // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDSSkeletalMeshComponent*                            SK_Jaw;                                                  // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bHangFromLeftSide;                                       // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UN5Z[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DespawnConditionsName;                                   // 0x02EC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BeginDetachedState(class USkeletalMeshComponent** ParentSkeletalMeshComponent, const struct FVector& Velocity, const struct FVector& AngularVelocity);
		void BeginAttachedState(class USkeletalMeshComponent* ParentSkeletalMeshComponent);
		void ReceiveBeginPlay();
		void OnSpawn(class USkeletalMeshComponent* ParentSkeletalMeshComponent);
		void OnDetach(class USkeletalMeshComponent* ParentSkeletalMeshComponent, const struct FVector& Velocity, const struct FVector& AngularVelocity);
		void SetFadeValue(float FadeValue);
		void ExecuteUbergraph_BP_Part_Jaw(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
