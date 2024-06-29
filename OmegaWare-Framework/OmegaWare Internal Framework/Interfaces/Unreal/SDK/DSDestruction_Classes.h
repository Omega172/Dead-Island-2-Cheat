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
	 * Class DSDestruction.DSDestructibleComponent
	 * Size -> 0x00F8 (FullSize[0x06E0] - InheritedSize[0x05E8])
	 */
	class UDSDestructibleComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_SAMJ[0x4];                                   // 0x05E8(0x0004) Fix Super Size
		float                                                      ScaleBreakingImpulse;                                    // 0x05EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleBreakingCollisionImpulse;                           // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScalePhysicsImpulse;                                     // 0x05F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPassOnComponentHitToRootComponent;                      // 0x05F8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FMulticastSparseDelegate                             OnDestructionBreak;                                      // 0x05F9(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		class FMulticastSparseDelegate                             OnRuleSatisfied;                                         // 0x05FA(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		class FMulticastSparseDelegate                             OnDestructionSpawnActor;                                 // 0x05FB(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                SpawnedCollisionProfile;                                 // 0x05FC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXME[0x4];                                   // 0x0604(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDSDestructionChunkID                               ChunkID;                                                 // 0x0608(0x0018) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bDestructionInited;                                      // 0x0620(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EYQY[0x7];                                   // 0x0621(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDSDestructionPieceMask                             BrokenChunks;                                            // 0x0628(0x0008) Edit, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected
		uint64_t                                                   SatisifiedRules;                                         // 0x0630(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PKQT[0x20];                                  // 0x0638(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsStartingComp;                                         // 0x0658(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8BI3[0x87];                                  // 0x0659(0x0087) MISSED OFFSET (PADDING)

	public:
		void ToggleEnableReason(const class FName& Reason);
		void RemoveEnableReason(const class FName& Reason);
		void RemoveDisableReason(const class FName& Reason);
		void K2_SetDataAsset(class UDSDestructionAsset* DataAssetIn, const class FName& InChunkID);
		void K2_EnactRule(const class FName& RuleName, const struct FDSDestructionEnactRuleParams& Params);
		void K2_BreakSubChunk(const class FName& InChunkID);
		bool IsChunkValid();
		class UDSDestructionAsset* GetDataAsset();
		class FName GetChunkName();
		void ComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		bool ApplyBreakingImpulse(const struct FDSDestructionBreakParams& Params, const class FName& HitChunkName);
		void AddEnableReason(const class FName& Reason);
		void AddDisableReason(const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class DSDestruction.DSDestructionAsset
	 * Size -> 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
	 */
	class UDSDestructionAsset : public UObject
	{
	public:
		int32_t                                                    VersionIndex;                                            // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6NN[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMesh*>                                 Meshes;                                                  // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDSDestructionCompiledChunk>                 CompiledChunks;                                          // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDSDestructionCompiledBodyJoints>            CompiledBodyJointList;                                   // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        CompiledChunkNames;                                      // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDSDestructionPhysicsProperties>             CompiledChunkPhysics;                                    // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDSDestructionNameList>                      MeshPhysicsNames;                                        // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDSDestructionCompiledGroup>                 CompiledGroups;                                          // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDSDestructionCompiledJoint>                 CompiledJoints;                                          // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint16_t>                                           CompiledBodyJointsRaw;                                   // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      CompiledEjectionOrderRaw;                                // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FName, int32_t>                                 NameToChunkMap;                                          // 0x00D0(0x0050) NativeAccessSpecifierPublic
		TArray<struct FDSDestructionCompiledRule>                  Rules;                                                   // 0x0120(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
