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
	 * BlueprintGeneratedClass BP_Base_Fluid_Projectile_Water.BP_Base_Fluid_Projectile_Water_C
	 * Size -> 0x0028 (FullSize[0x0798] - InheritedSize[0x0770])
	 */
	class ABP_Base_Fluid_Projectile_Water_C : public AFluidSimProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0770(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    CosmeticEffectsSphere;                                   // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_FluidStateTransmitter_C*                         BP_FluidStateTransmitter;                                // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_StatusEffect_C*                                 StatusEffectComponent;                                   // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__CosmeticEffectsSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ExecuteUbergraph_BP_Base_Fluid_Projectile_Water(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
