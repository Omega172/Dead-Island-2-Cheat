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
	 * Class SoftBody.SoftBodyBaseNode
	 * Size -> 0x0048 (FullSize[0x0098] - InheritedSize[0x0050])
	 */
	class USoftBodyBaseNode : public UProxy
	{
	public:
		bool                                                       bEnabled;                                                // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawWhenSelected;                                       // 0x0051(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawWhenParentSelected;                                 // 0x0052(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawWhenChildrenSelected;                               // 0x0053(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawAlways;                                             // 0x0054(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQ4R[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SelectedColour;                                          // 0x0058(0x0010) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        UnselectedColour;                                        // 0x0068(0x0010) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachedToParent;                                       // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTransformLocked;                                        // 0x0079(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EBVE[0x2];                                   // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x007C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0088(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EIHK[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyAnchorSphereNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyAnchorSphereNode : public USoftBodyBaseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyParticleSkinningGroupNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyParticleSkinningGroupNode : public USoftBodyBaseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyParticleSkinningSphereNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyParticleSkinningSphereNode : public USoftBodyAnchorSphereNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyGroupCollisionsNode
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class USoftBodyGroupCollisionsNode : public USoftBodyBaseNode
	{
	public:
		TArray<class FName>                                        MetaData;                                                // 0x0098(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyCollisionBaseNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyCollisionBaseNode : public USoftBodyBaseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodySphereCollisionNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodySphereCollisionNode : public USoftBodyCollisionBaseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyCapsuleCollisionNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyCapsuleCollisionNode : public USoftBodyCollisionBaseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyPlaneCollisionNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyPlaneCollisionNode : public USoftBodyCollisionBaseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyFixedCylinderCollisionNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyFixedCylinderCollisionNode : public USoftBodyCollisionBaseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyComponent
	 * Size -> 0x0068 (FullSize[0x0590] - InheritedSize[0x0528])
	 */
	class USoftBodyComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_FB6W[0x8];                                   // 0x0528(0x0008) Fix Super Size
		class USoftBodyDataObject*                                 DataAsset;                                               // 0x0530(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              TargetMesh;                                              // 0x0538(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlomoScale;                                              // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleExternalLerping;                                    // 0x0544(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMarkMeshRenderDirty;                                    // 0x0548(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoCoarseCameraTest;                                     // 0x0549(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85BS[0x2];                                   // 0x054A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumWarmUpFrames;                                         // 0x054C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoftBodySimulation*>                         SoftSimulations;                                         // 0x0550(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z4JP[0x30];                                  // 0x0560(0x0030) MISSED OFFSET (PADDING)

	public:
		void UpdateSimulationTransforms(bool bWasTeleport);
		void SetTargetMesh(class USkeletalMeshComponent* InMesh);
		void SetEnableAll(bool bEnable);
		void SetEnable(const class FName& SoftBodyNode, bool bEnable);
		void SetDataAsset(class USoftBodyDataObject* DataAssetIn);
		void FlagTeleportTransition(int32_t NumberOfFrames);
		void DestroySoftSimulations();
		void CreateSoftSimulations();
		void CreateAndShareFrom(class USkinnedMeshComponent* ShareFrom);
		void AutoEnableDisableVisibleSections();
		void AddSoftBodyImpulse(const struct FSoftBodyImpulse& ImpulseData, const class FName& SoftBodyNode);
		void AddMovementModifier(const struct FSoftBodyMovementModifer& ModifierData);
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyDataObject
	 * Size -> 0x0068 (FullSize[0x00C0] - InheritedSize[0x0058])
	 */
	class USoftBodyDataObject : public UProxyTreeAsset
	{
	public:
		int32_t                                                    VersionNumber;                                           // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBuiltForAllSkeletalMeshes;                              // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WHEV[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSoftBodyProfileMeshAssociation>             Profiles;                                                // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bStripped;                                               // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTLN[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USoftSetupCompiledData*>                      CompiledDataArray;                                       // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T4RP[0x38];                                  // 0x0088(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyGlobalSkinningNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyGlobalSkinningNode : public USoftBodyBaseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyGlobalSkinningBaseRegion
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyGlobalSkinningBaseRegion : public USoftBodyBaseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyGlobalSkinningCapsule
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class USoftBodyGlobalSkinningCapsule : public USoftBodyGlobalSkinningBaseRegion
	{
	public:
		struct FSoftSetupSkinningCapsule                           CapsuleInfo;                                             // 0x0098(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QU2[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyGlobalSkinningBox
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class USoftBodyGlobalSkinningBox : public USoftBodyGlobalSkinningBaseRegion
	{
	public:
		struct FSoftSetupSkinningBox                               BoxInfo;                                                 // 0x0098(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyLineChainNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyLineChainNode : public USoftBodyBaseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyManager
	 * Size -> 0x0120 (FullSize[0x03D0] - InheritedSize[0x02B0])
	 */
	class ASoftBodyManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_O9FU[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftBodyManagerTickFunction                        SecondaryActorTick;                                      // 0x02B8(0x0038) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YNBS[0xC8];                                  // 0x02F0(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USoftBodySimulation*>                         SimulationPool;                                          // 0x03B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KOI8[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodySimulationNode
	 * Size -> 0x0048 (FullSize[0x00E0] - InheritedSize[0x0098])
	 */
	class USoftBodySimulationNode : public USoftBodyBaseNode
	{
	public:
		class FName                                                BoneName;                                                // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoftSetupCompiledData*                              CompiledData;                                            // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftBodySimulationParams                           SimulationParams;                                        // 0x00A8(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSoftSetupSprings                                   Springs;                                                 // 0x00D8(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyTetraNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyTetraNode : public USoftBodyBaseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyTrimeshNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyTrimeshNode : public USoftBodyBaseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyFieldNode
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class USoftBodyFieldNode : public USoftBodyBaseNode
	{
	public:
		TArray<class FName>                                        MetaData;                                                // 0x0098(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		bool                                                       bScalar;                                                 // 0x00A8(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SI46[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyFieldNodeConstraintData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USoftBodyFieldNodeConstraintData : public UObject
	{
	public:
		bool                                                       bApplyToMain;                                            // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyToSecondary;                                       // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyToBending;                                         // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QCO4[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyFieldNodeMaxDistData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USoftBodyFieldNodeMaxDistData : public UObject
	{
	public:
		bool                                                       bApplyToNormal;                                          // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyToBiNormal;                                        // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyToTangent;                                         // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07VS[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyVolumeFieldNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyVolumeFieldNode : public USoftBodyBaseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodySphereFieldNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodySphereFieldNode : public USoftBodyVolumeFieldNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyCapsuleFieldNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyCapsuleFieldNode : public USoftBodyVolumeFieldNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyBoxFieldNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USoftBodyBoxFieldNode : public USoftBodyVolumeFieldNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodyWindComponent
	 * Size -> 0x00A0 (FullSize[0x0330] - InheritedSize[0x0290])
	 */
	class USoftBodyWindComponent : public USceneComponent
	{
	public:
		bool                                                       bEnabled;                                                // 0x0290(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3BS2[0xF];                                   // 0x0291(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftBodyWindComponentSettings                      Settings;                                                // 0x02A0(0x0080) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZ4X[0x10];                                  // 0x0320(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftBodySimulation
	 * Size -> 0x0418 (FullSize[0x0440] - InheritedSize[0x0028])
	 */
	class USoftBodySimulation : public UObject
	{
	public:
		class USoftBodyComponent*                                  OwnerComponent;                                          // 0x0028(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EN25[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkinnedMeshComponent*                               TargetMesh;                                              // 0x0060(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoftSetupCompiledData*                              CompiledData;                                            // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SimulationName;                                          // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachedBoneName;                                        // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SkinnedMeshPrimitiveOffset;                              // 0x0080(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y1PI[0x3BC];                                 // 0x0084(0x03BC) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftSetupDataObject
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoftSetupDataObject : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoftBody.SoftSetupCompiledData
	 * Size -> 0x0278 (FullSize[0x02A0] - InheritedSize[0x0028])
	 */
	class USoftSetupCompiledData : public UObject
	{
	public:
		int32_t                                                    Version;                                                 // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SimulationName;                                          // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachedBoneName;                                        // 0x0034(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftBodySimulationParams                           SimulationParams;                                        // 0x003C(0x0030) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVMW[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSoftParticle>                               Particles;                                               // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftParticleConstraint>                     Constraints;                                             // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              InvConstraintLengths;                                    // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftParticleAngleConstraint>                AngleConstraints;                                        // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftParticleCollision>                      FixedSetupCollisions;                                    // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftSetupAttachedPlane>                     SkinnedCollisionPlanes;                                  // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKC8[0x20];                                  // 0x00D0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LineChainStartParticleIndex;                             // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S6OK[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSoftSetupLineChainCompiled>                 CompiledLineChains;                                      // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftHierarchicalParticle>                   HierParticles;                                           // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int16_t>                                            LineChainSegments;                                       // 0x0118(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftSetupTetraProxyCompiled>                CompiledTetras;                                          // 0x0128(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftSetupTrimeshCompiled>                   CompiledTrimeshes;                                       // 0x0138(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    TriParticleStart;                                        // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumTriParticles;                                         // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoftSetupConeFrustum>                       ConeFrustums;                                            // 0x0150(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftSetupCollisionSphere>                   CollisionSpheres;                                        // 0x0160(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        UsedBones;                                               // 0x0170(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FMatrix                                             RegisteredLocalToMesh;                                   // 0x0180(0x0040) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMatrix                                             RegisteredMeshToLocal;                                   // 0x01C0(0x0040) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LCM9[0x10];                                  // 0x0200(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialGPUInfluence;                                     // 0x0210(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3YFV[0x4];                                   // 0x0214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        SoftBodySectionNames;                                    // 0x0218(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftAnchorSphereModifer>                    AnchorSphereModifiers;                                   // 0x0228(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bSimulationNeedsBiNormals;                               // 0x0238(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasInvMatrices;                                         // 0x0239(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasOriginalPositions;                                   // 0x023A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompiled;                                               // 0x023B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresParticleSkinning;                               // 0x023C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DB09[0x3];                                   // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSoftSetupSolverCommand>                     Commands;                                                // 0x0240(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftSetupSolverCommand_Constraints>         CommandsLinearConstraints;                               // 0x0250(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftSetupSolverCommand_AngleConstraints>    CommandsAngleConstraints;                                // 0x0260(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftSetupSolverCommand_ConstrainToTarget>   CommandsConstraintToTarget;                              // 0x0270(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftSetupSolverCommand_Springs>             CommandsSprings;                                         // 0x0280(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftSetupSolverCommand_HierParticles>       CommandsHParticles;                                      // 0x0290(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
