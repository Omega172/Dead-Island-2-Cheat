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
	 * BlueprintGeneratedClass BP_Projectile_Tooth_Mutator.BP_Projectile_Tooth_Mutator_C
	 * Size -> 0x0040 (FullSize[0x05F0] - InheritedSize[0x05B0])
	 */
	class ABP_Projectile_Tooth_Mutator_C : public AModularProjectileActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBoxComponent*                                       ProjectileBox;                                           // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_Mutator_SpitTrail;                                    // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UStaticMesh*>                                 ApplicableStaticMeshes;                                  // 0x05D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        IgnoreBoneList;                                          // 0x05E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnProjectileEmbedded(class AModularProjectileActor* ModularProjectileActor, const struct FVector& AttachPosition, const struct FHitResult& ProjectileHitResult);
		void UserConstructionScript();
		void ReceiveCollide(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_Projectile_Tooth_Mutator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
