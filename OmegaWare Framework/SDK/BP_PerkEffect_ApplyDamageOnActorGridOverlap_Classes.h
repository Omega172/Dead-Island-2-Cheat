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
	 * BlueprintGeneratedClass BP_PerkEffect_ApplyDamageOnActorGridOverlap.BP_PerkEffect_ApplyDamageOnActorGridOverlap_C
	 * Size -> 0x0240 (FullSize[0x0290] - InheritedSize[0x0050])
	 */
	class UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C : public UInstancedPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0050(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UShapeComponent*>                             Collisions;                                              // 0x0058(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UClass*                                              CollisionType;                                           // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CollisionComponentTag;                                   // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGeneralImpactEventParams                           ImpactParams;                                            // 0x0078(0x01B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FDSDamageData                                       DSDamageData;                                            // 0x0230(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class ADICharacter*                                        Character;                                               // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActorGridCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp);
		void OnStart(const struct FPerkEffectStartParams& Params);
		void OnEnd(const struct FPerkEffectEndParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_ApplyDamageOnActorGridOverlap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
