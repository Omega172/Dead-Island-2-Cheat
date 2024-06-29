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
	 * BlueprintGeneratedClass BP_ClippedSkinnedGlassShards.BP_ClippedSkinnedGlassShards_C
	 * Size -> 0x0078 (FullSize[0x0328] - InheritedSize[0x02B0])
	 */
	class ABP_ClippedSkinnedGlassShards_C : public AActor
	{
	public:
		class UClippedSkinnedGlassComponent*                       ClippedSkinnedGlass;                                     // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FVector                                             InPosition;                                              // 0x02B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FRotator                                            InRotation;                                              // 0x02C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		struct FTransform                                          InUVTransform;                                           // 0x02D0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class UMaterialInterface*                                  InMaterial;                                              // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<struct FTwoVectors>                                 InClipPlanes;                                            // 0x0308(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class UPhysicsAsset*                                       SourcePhysicsAsset;                                      // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DespawnConditionsName;                                   // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddDespawnRequest();
		void AddImpulseAtLocation(const struct FVector& InLocation, const struct FVector& InImpulse, float InImpulseFalloffDistance, float InImpulseMin, float InImpulseMax);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
