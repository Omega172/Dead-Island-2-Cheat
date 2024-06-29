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
	 * Class CharacterKitRuntime.AnimNotifyState_SplatterAnimation
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_SplatterAnimation : public UAnimNotifyState
	{
	public:
		class USplatterSet*                                        SplatterSet;                                             // 0x0030(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                GroupName;                                               // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class USkeletalMeshComponent*, struct FSplatterAnimationInstanceData> InstanceData;                                            // 0x0040(0x0050) BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.AttachmentSpecBase
	 * Size -> 0x0040 (FullSize[0x0090] - InheritedSize[0x0050])
	 */
	class UAttachmentSpecBase : public UProxy
	{
	public:
		struct FTransform                                          Location;                                                // 0x0050(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAttachment*                                         AttachmentInstance;                                      // 0x0088(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.StaticMeshAttachmentSpec
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UStaticMeshAttachmentSpec : public UAttachmentSpecBase
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         Mesh;                                                    // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.SkeletalMeshAttachmentSpec
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class USkeletalMeshAttachmentSpec : public UAttachmentSpecBase
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       Mesh;                                                    // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.MeshSubSectionAttachmentSpec
	 * Size -> 0x0040 (FullSize[0x00D0] - InheritedSize[0x0090])
	 */
	class UMeshSubSectionAttachmentSpec : public UAttachmentSpecBase
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicsAsset*                                       PhysicsAsset;                                            // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        SubSectionNamesToTransfer;                               // 0x00A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        SubSectionNamesToSpawn;                                  // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        SubSectionNamesToHide;                                   // 0x00C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.ActorAttachmentSpec
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UActorAttachmentSpec : public UAttachmentSpecBase
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZUZ[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.AttachmentSpecAsset
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UAttachmentSpecAsset : public UProxyTreeAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.BodyPartActor
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class ABodyPartActor : public AActor
	{
	public:
		class USkeletalMeshComponent*                              ParentSkeletalMeshComponent;                             // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnSpawn();
		void OnDetach();
		void BuildMeshFromViscera(class USkeletalMeshComponent* SkeletalMesh, TArray<class FName> SectionsToKeep);
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.CharacterInitialStateInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCharacterInitialStateInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.CharacterInitialStateWrapper
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UCharacterInitialStateWrapper : public UAssetUserData
	{
	public:
		struct FCharacterInitialState                              State;                                                   // 0x0028(0x0078) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.CharacterKitMeshUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCharacterKitMeshUtils : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ShowSubSections(class USkeletalMeshComponent* SkeletalMesh, TArray<class FName> SectionsToKeep);
		void STATIC_ShowAllSubSections(class USkeletalMeshComponent* SkeletalMesh);
		void STATIC_HideAllSubSections(class USkeletalMeshComponent* SkeletalMesh);
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.CharacterMaterialMasks
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UCharacterMaterialMasks : public UAssetUserData
	{
	public:
		TArray<class FName>                                        MaterialSectionNames;                                    // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		uint64_t                                                   MeatMaterialMask;                                        // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        SoftBodyNames;                                           // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           SectionID;                                               // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPlayerHandsData>                            PlayerHandsData;                                         // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.ModelVariationPreviewComponent
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UModelVariationPreviewComponent : public UActorComponent
	{
	public:
		int32_t                                                    MaterialVariantIndex;                                    // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SplatterVariantIndex;                                    // 0x00EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCycleMaterialVariant;                                   // 0x00F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCycleSplatterVariant;                                   // 0x00F1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ODWF[0x2];                                   // 0x00F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CycleDelay;                                              // 0x00F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterInitialStateResolved                      InitialStateVariant;                                     // 0x00F8(0x0010) Transient, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DGRQ[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.SkeletalMeshAttachmentActor
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class ASkeletalMeshAttachmentActor : public AActor
	{
	public:
		class USkeletalMesh*                                       InitialMesh;                                             // 0x02B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.SkeletalMeshBodyPartAttachmentActor
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class ASkeletalMeshBodyPartAttachmentActor : public ASkeletalMeshAttachmentActor
	{
	public:
		unsigned char                                              UnknownData_7INT[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.SkeletalMeshSubSectionAttachmentActor
	 * Size -> 0x0068 (FullSize[0x0318] - InheritedSize[0x02B0])
	 */
	class ASkeletalMeshSubSectionAttachmentActor : public AActor
	{
	public:
		TWeakObjectPtr<class USkeletalMeshComponent>               ParentSkeletalMeshComponent;                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        SubSectionNames;                                         // 0x02B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		TArray<class FName>                                        SubSectionNamesToSpawn;                                  // 0x02C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		TArray<class FName>                                        ParentSubSectionNamesToHide;                             // 0x02D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		class UPhysicsAsset*                                       PhysicsAsset;                                            // 0x02E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShareSplatterResourcesOnSpawn;                          // 0x02F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W27B[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InitialForce;                                            // 0x02F4(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableVelocityForcingOnSpawn;                           // 0x0300(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VK9V[0x17];                                  // 0x0301(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.SocketBase
	 * Size -> 0x0040 (FullSize[0x0090] - InheritedSize[0x0050])
	 */
	class USocketBase : public UProxy
	{
	public:
		struct FTransform                                          Location;                                                // 0x0050(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    BoneBranchMask;                                          // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BHAN[0xC];                                   // 0x0084(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.SafeRegion
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class USafeRegion : public USocketBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.BreakRegion
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UBreakRegion : public USocketBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.Limb
	 * Size -> 0x0040 (FullSize[0x0090] - InheritedSize[0x0050])
	 */
	class ULimb : public UProxy
	{
	public:
		int32_t                                                    BoneId;                                                  // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0054(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U984[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BoneSpace;                                               // 0x0060(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.SocketSetAsset
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USocketSetAsset : public UProxyTreeAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.BodyPartActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBodyPartActorInterface : public UInterface
	{
	public:
		void OnSpawn(class USkeletalMeshComponent* ParentSkeletalMeshComponent);
		void OnDetach(class USkeletalMeshComponent* ParentSkeletalMeshComponent, const struct FVector& Velocity, const struct FVector& AngularVelocity);
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.SpawnableParts
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USpawnableParts : public UDataAsset
	{
	public:
		TArray<struct FSpawnablePart>                              Parts;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.SpawnablePartsUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnablePartsUtils : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_UnHideSkeletonPart(class USkeletalMeshComponent* Skeleton, const class FName& PartName);
		bool STATIC_IsSkeletonPartVisible(class USkeletalMeshComponent* Skeleton, const class FName& PartName);
		void STATIC_HideViscera(class USkeletalMeshComponent* Skeleton);
		bool STATIC_HideSkeletonPart(class USkeletalMeshComponent* Skeleton, const class FName& PartName);
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.StaticMeshAttachmentActor
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class AStaticMeshAttachmentActor : public AActor
	{
	public:
		class UStaticMesh*                                         InitialMesh;                                             // 0x02B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.VisceraArrow
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	class UVisceraArrow : public UProxy
	{
	public:
		struct FTransform                                          Location;                                                // 0x0050(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.VisceraBreakageEffect
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UVisceraBreakageEffect : public UVisceraArrow
	{
	public:
		class UCosmeticEffectsDefinition*                          BreakageEffect;                                          // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SplatterGroup;                                           // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplatterSet*                                        SplatterSet;                                             // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GUB4[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.VisceraEvent
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UVisceraEvent : public UObject
	{
	public:
		class FName                                                Name;                                                    // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.VisceraGibbableSubSection
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UVisceraGibbableSubSection : public UMeshSubSectionAttachmentSpec
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.VisceraSwitchableGroup
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UVisceraSwitchableGroup : public UProxy
	{
	public:
		TArray<int32_t>                                            ProxyIDs;                                                // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.VisceraSwitchableVariant
	 * Size -> 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
	 */
	class UVisceraSwitchableVariant : public UProxy
	{
	public:
		int32_t                                                    RootProxyID;                                             // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_US7R[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        VisceraSubsections;                                      // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SwitchThreshold;                                         // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MIBJ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticEffectsDefinition*                          ActivationEffects;                                       // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.VisceraSoftBodyGPUInfluence
	 * Size -> 0x0040 (FullSize[0x0090] - InheritedSize[0x0050])
	 */
	class UVisceraSoftBodyGPUInfluence : public UProxy
	{
	public:
		struct FTransform                                          Location;                                                // 0x0050(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HalfHeight;                                              // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeRadius;                                              // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AddInfluenceAmount;                                      // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.VisceraSoftBodyModifer
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	class UVisceraSoftBodyModifer : public UProxy
	{
	public:
		struct FSoftBodyMovementModifer                            Modifer;                                                 // 0x0050(0x002C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BBM1[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.VisceraProxy
	 * Size -> 0x0100 (FullSize[0x0150] - InheritedSize[0x0050])
	 */
	class UVisceraProxy : public UProxy
	{
	public:
		struct FTransform                                          Location;                                                // 0x0050(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    ProxyID;                                                 // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTRI[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        VisceraSubsections;                                      // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        BrokenSubsections;                                       // 0x0098(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<ESpawnablePartSlot>                                 SpawnablePartSlots;                                      // 0x00A8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		ECutBias                                                   CutBias;                                                 // 0x00B8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDZM[0x3];                                   // 0x00B9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bCanRupture;                                             // 0x00BC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreMaxBlend;                                         // 0x00BD(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHoldFinalState;                                         // 0x00BE(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3VT[0x1];                                   // 0x00BF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticEffectsDefinition*                          RuptureEffects;                                          // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RuptureThreshold;                                        // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RuptureBoneId;                                           // 0x00CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              SwitchableThresholds;                                    // 0x00D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class UVisceraSwitchableVariant*>                   SwitchableVariants;                                      // 0x00E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    BreakageBoneId;                                          // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2L6H[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAttachmentSpecBase*                                 GibbableSectionAttachment;                               // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ShadowCapsules;                                          // 0x0100(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UVisceraEvent*>                               CutEvents;                                               // 0x0110(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UVisceraEvent*>                               BreakEvents;                                             // 0x0120(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UVisceraEvent*>                               RuptureEvents;                                           // 0x0130(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FVisceraSoftBodyMovementModifer>             SoftBodyMovementModifiers;                               // 0x0140(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.VisceraRuleset
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UVisceraRuleset : public UProxy
	{
	public:
		TArray<class UVisceraProxy*>                               AssociatedProxies;                                       // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.VisceraStateBlacklistRuleset
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UVisceraStateBlacklistRuleset : public UVisceraRuleset
	{
	public:
		TArray<struct FVisceraRulesetState>                        InvalidStates;                                           // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.VisceraGroup
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UVisceraGroup : public UProxy
	{
	public:
		EVisceraOwnership                                          Ownership;                                               // 0x0050(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GV7U[0x3];                                   // 0x0051(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                BoneName;                                                // 0x0054(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsShootable;                                            // 0x005C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HQ5[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CutMargin;                                               // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanRupture;                                             // 0x0064(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_041I[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharacterKitRuntime.VisceraAsset
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UVisceraAsset : public UProxyTreeAsset
	{
	public:
		int32_t                                                    NumProxies;                                              // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKEB[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
