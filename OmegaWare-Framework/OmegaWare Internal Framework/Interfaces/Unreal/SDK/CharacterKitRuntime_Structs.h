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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum CharacterKitRuntime.EFoleyClothingType
	 */
	enum class EFoleyClothingType : uint8_t
	{
		None        = 0,
		Naked       = 1,
		LightCloth  = 2,
		MediumCloth = 3,
		HeavyCloth  = 4,
		MAX         = 5
	};

	/**
	 * Enum CharacterKitRuntime.EFootwearType
	 */
	enum class EFootwearType : uint8_t
	{
		None             = 0,
		BareFoot         = 1,
		MaleTrainerHeavy = 2,
		SuperBoot        = 3,
		FemaleTrainer    = 4,
		FemaleBoot       = 5,
		HeavyFoot        = 6,
		BareHand         = 7,
		Spike            = 8,
		Prosthetic       = 9,
		MAX              = 10
	};

	/**
	 * Enum CharacterKitRuntime.ECutType
	 */
	enum class ECutType : uint8_t
	{
		None      = 0,
		Dismember = 1,
		BoneBreak = 2,
		MAX       = 3
	};

	/**
	 * Enum CharacterKitRuntime.ESpawnablePartSlot
	 */
	enum class ESpawnablePartSlot : uint8_t
	{
		LeftEye  = 0,
		RightEye = 1,
		Jaw      = 2,
		MAX      = 3
	};

	/**
	 * Enum CharacterKitRuntime.ECutBias
	 */
	enum class ECutBias : uint8_t
	{
		Cull         = 0,
		Body         = 1,
		Limb         = 2,
		BodySentinel = 3,
		LimbSentinel = 4,
		BoxCentre    = 5,
		MAX          = 6
	};

	/**
	 * Enum CharacterKitRuntime.EVisceraOwnership
	 */
	enum class EVisceraOwnership : uint8_t
	{
		Torso = 0,
		Limb  = 1,
		MAX   = 2
	};

	/**
	 * Enum CharacterKitRuntime.EVisceraEventType
	 */
	enum class EVisceraEventType : uint8_t
	{
		Cut     = 0,
		Break   = 1,
		Rupture = 2,
		MAX     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CharacterKitRuntime.SplatterAnimationInstanceData
	 * Size -> 0x0040
	 */
	struct FSplatterAnimationInstanceData
	{
	public:
		class USplatterMeshComponent*                              SplatterMeshComponent;                                   // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplatterSet*                                        CachedSplatterSet;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SZF0[0x30];                                  // 0x0010(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CharacterKitRuntime.SplatterVariant
	 * Size -> 0x0018
	 */
	struct FSplatterVariant
	{
	public:
		class USplatterSet*                                        SplatterSet;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<ESpawnablePartSlot>                                 ActivatedSlots;                                          // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CharacterKitRuntime.MaterialSubstitution
	 * Size -> 0x0010
	 */
	struct FMaterialSubstitution
	{
	public:
		class UMaterialInterface*                                  SourceMaterial;                                          // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  ReplacementMaterial;                                     // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CharacterKitRuntime.MaterialVariant
	 * Size -> 0x0010
	 */
	struct FMaterialVariant
	{
	public:
		TArray<struct FMaterialSubstitution>                       Substitutions;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CharacterKitRuntime.FaceFXParams
	 * Size -> 0x0010
	 */
	struct FFaceFXParams
	{
	public:
		class UFaceFXActor*                                        FaceFX;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AkAttachPointName;                                       // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CharacterKitRuntime.CharacterInitialState
	 * Size -> 0x0078
	 */
	struct FCharacterInitialState
	{
	public:
		class USoftBodyDataObject*                                 SoftBodyAsset;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSplatterVariant>                            InitialSplatterSetVariants;                              // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class USpawnableParts*                                     SpawnableParts;                                          // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisceraAsset*                                       VisceraAsset;                                            // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMaterialVariant>                            MaterialVariants;                                        // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UAttachmentSpecAsset*                                InitialAttachmentSpec;                                   // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USmartBoneDriverAsset*                               SmartBoneDriverAsset;                                    // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFaceFXParams                                       FaceFXParams;                                            // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class URigidBodyAnimData*                                  RigidBodyAnim;                                           // 0x0058(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFootwearType                                              LeftFootwearType;                                        // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFootwearType                                              RightFootwearType;                                       // 0x0061(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFootwearType                                              OtherFootwearType;                                       // 0x0062(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFoleyClothingType                                         FoleyClothingType;                                       // 0x0063(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0H34[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAkSwitchValue*>                              AkSwitchValues;                                          // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CharacterKitRuntime.PlayerHandsData
	 * Size -> 0x0014
	 */
	struct FPlayerHandsData
	{
	public:
		int32_t                                                    SectionID;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BloodSettingsName;                                       // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                InjurySectionName;                                       // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CharacterKitRuntime.CharacterInitialStateResolved
	 * Size -> 0x0010
	 */
	struct FCharacterInitialStateResolved
	{
	public:
		class UCharacterInitialStateWrapper*                       InitialStateData;                                        // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SplatterSetVariant;                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaterialVariant;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct CharacterKitRuntime.SpawnablePart
	 * Size -> 0x0070
	 */
	struct FSpawnablePart
	{
	public:
		class FName                                                OriginalPartToHide;                                      // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachSocket;                                            // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          AttachOffset;                                            // 0x0010(0x0030) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              ClassToSpawn;                                            // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAttachmentSpecAsset*                                AttachmentSpecToSpawn;                                   // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplatterSet*                                        PresetSplatter;                                          // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpawnablePartSlot                                         Slot;                                                    // 0x0058(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDetachable;                                             // 0x0059(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YSDG[0x2];                                   // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SpawnedFact;                                             // 0x005C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DetachedFact;                                            // 0x0064(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34DJ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CharacterKitRuntime.VisceraSoftBodyMovementModifer
	 * Size -> 0x0004 (FullSize[0x0030] - InheritedSize[0x002C])
	 */
	struct FVisceraSoftBodyMovementModifer : public FSoftBodyMovementModifer
	{
	public:
		bool                                                       bEnabledForRupture;                                      // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabledForCut;                                          // 0x002D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabledForBreaking;                                     // 0x002E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RMGF[0x1];                                   // 0x002F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CharacterKitRuntime.VisceraRulesetState
	 * Size -> 0x0010
	 */
	struct FVisceraRulesetState
	{
	public:
		class UVisceraRuleset*                                     Context;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    State;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LM7F[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
