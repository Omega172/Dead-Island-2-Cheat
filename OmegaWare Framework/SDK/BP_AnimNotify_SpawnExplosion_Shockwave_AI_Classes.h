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
	 * BlueprintGeneratedClass BP_AnimNotify_SpawnExplosion_Shockwave_AI.BP_AnimNotify_SpawnExplosion_Shockwave_AI_C
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C : public UBP_AnimNotify_SpawnExplosion_C
	{
	public:
		float                                                      MinZDistanceForShockwaveToHit;                           // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxZDistanceForShockwaveToHit;                           // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetTargetBounds(class ADSCharacter* Target, float* ZOrigin, float* Extent);
		void GetExplosionBounds(float ExplosionZ, float* ZOrigin, float* Extent);
		bool CanShockwaveHitCharacter(class ADSCharacter* Target, const struct FVector& ExplosionLocation, class ADSCharacter* Owner);
		void ListOfActorsToIgnore(class UExplosionActionArchetype* ExplosionActionArchetype, class ADICharacter* Owner, const struct FVector& ExplosionLocation, TArray<class AActor*>* ActorsToIgnore);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
