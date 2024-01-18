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
	 * BlueprintGeneratedClass BPC_BreakableGlassPane.BPC_BreakableGlassPane_C
	 * Size -> 0x0103 (FullSize[0x06E3] - InheritedSize[0x05E0])
	 */
	class UBPC_BreakableGlassPane_C : public UStaticMeshComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              ImpactEventComponent[0x28];                              // 0x05E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UMaterialInterface*                                  PaneMaterialOverride;                                    // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ClippedSkinnedGlassShards_C*                     SpawnedSkinnedGlassShards;                               // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGlassDataAsset*                                     BasePaneData;                                            // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LQFH[0x8];                                   // 0x0628(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          UVToWorld;                                               // 0x0630(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRandomStream                                       RandomUVSeed;                                            // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor
		bool                                                       UseRandomUVOffsets;                                      // 0x0668(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FKRH[0x3];                                   // 0x0669(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PlaneNormal;                                             // 0x066C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSReplicatedGlassData                               GlassData;                                               // 0x0678(0x0020) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugImpactLocation;                                     // 0x0698(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HJFZ[0x7];                                   // 0x0699(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             GlassBroken;                                             // 0x06A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UExplosionActionArchetype*                           ExplosionArchetype;                                      // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PlaneRight;                                              // 0x06B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PlaneUp;                                                 // 0x06C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ImpactReceived;                                          // 0x06D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Unbreakable;                                             // 0x06E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsBrokenServer;                                          // 0x06E1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       IsBrokenLocal;                                           // 0x06E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnRep_IsBroken_Delayed();
		void OnRep_IsBroken();
		void RemoveUnbrokenMesh();
		void CalculateWorldUVsAndNormals();
		void DrawDebug();
		void FindOrAddComponent(class AActor* Actor, class UClass* InClass, class UActorComponent** Component);
		void GetPaneHitLocFromWorldHitLoc(const struct FVector& Impulse, const struct FVector& Location, struct FVector* WorldHitLocInPlane);
		void SetupPaneData();
		void GenerateShards();
		void GetRandomPositionInPane(struct FVector* Location);
		void TriggerMeshShatter(const struct FVector& ImpactLocation, const struct FVector& ImpactVector);
		void OnAnyImpactReceived(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPC_BreakableGlassPane(int32_t EntryPoint);
		void ImpactReceived__DelegateSignature(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent);
		void GlassBroken__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
