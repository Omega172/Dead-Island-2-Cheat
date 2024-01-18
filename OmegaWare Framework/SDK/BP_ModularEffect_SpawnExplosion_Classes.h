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
	 * BlueprintGeneratedClass BP_ModularEffect_SpawnExplosion.BP_ModularEffect_SpawnExplosion_C
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UBP_ModularEffect_SpawnExplosion_C : public UModularEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0040(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UExplosionActionArchetype*                           ExplosionArchetype;                                      // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FName                                                ComponentTag;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              OwningActor;                                             // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FVector GetLocationFromFirstMeshComp();
		struct FVector GetLocationFromTag(bool* bValidComponent);
		void GetExplosionLocation(class AActor* Actor, struct FVector* ExplosionLocation);
		void PerformEffect(class AActor* Actor, class UModularEffectParams* ModularEffectParams);
		void ExecuteUbergraph_BP_ModularEffect_SpawnExplosion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
