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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum FaceFX.EFaceFXActorBlendMode
	 */
	enum class EFaceFXActorBlendMode : uint8_t
	{
		Global   = 0,
		Replace  = 1,
		Additive = 2,
		MAX      = 3
	};

	/**
	 * Enum FaceFX.EFaceFXBlendMode
	 */
	enum class EFaceFXBlendMode : uint8_t
	{
		Replace  = 0,
		Additive = 1,
		MAX      = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct FaceFX.FaceFXIdData
	 * Size -> 0x0010
	 */
	struct FFaceFXIdData
	{
	public:
		uint64_t                                                   ID;                                                      // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.FaceFXActorData
	 * Size -> 0x0030
	 */
	struct FFaceFXActorData
	{
	public:
		TArray<unsigned char>                                      ActorRawData;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      BonesRawData;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFaceFXIdData>                               Ids;                                                     // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.FaceFXAnimData
	 * Size -> 0x0010
	 */
	struct FFaceFXAnimData
	{
	public:
		TArray<unsigned char>                                      RawData;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.FaceFXAnimId
	 * Size -> 0x0010
	 */
	struct FFaceFXAnimId
	{
	public:
		class FName                                                Group;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.FaceFXSkelMeshComponentId
	 * Size -> 0x000C
	 */
	struct FFaceFXSkelMeshComponentId
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.FaceFXEntry
	 * Size -> 0x0048
	 */
	struct FFaceFXEntry
	{
	public:
		class USkeletalMeshComponent*                              SkelMeshComp;                                            // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UActorComponent>                      AudioComp;                                               // 0x0008(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Asset[0x28];                                             // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UFaceFXCharacter*                                    Character;                                               // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCompensateForForceFrontXAxis : 1;                     // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAutoPlaySound : 1;                                    // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDisableMorphTargets : 1;                              // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDisableMaterialParameters : 1;                        // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_55XL[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FaceFX.AnimNode_BlendFaceFXAnimation
	 * Size -> 0x0048 (FullSize[0x0058] - InheritedSize[0x0010])
	 */
	struct FAnimNode_BlendFaceFXAnimation : public FAnimNode_Base
	{
	public:
		struct FComponentSpacePoseLink                             ComponentPose;                                           // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipBoneMappingWithoutNS;                               // 0x0024(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8O8X[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODThreshold;                                            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DIMV[0x2C];                                  // 0x002C(0x002C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FaceFX.FaceFXAnimComponentSet
	 * Size -> 0x0048
	 */
	struct FFaceFXAnimComponentSet
	{
	public:
		struct FFaceFXSkelMeshComponentId                          SkelMeshComponentId;                                     // 0x0000(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FFaceFXAnimId                                       AnimationId;                                             // 0x000C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNXG[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Animation[0x28];                                         // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct FaceFX.FaceFXAnimationSectionData
	 * Size -> 0x0070
	 */
	struct FFaceFXAnimationSectionData
	{
	public:
		struct FGuid                                               TrackId;                                                 // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RowIndex;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFaceFXAnimId                                       AnimationId;                                             // 0x0014(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NA1[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Animation[0x28];                                         // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FFaceFXSkelMeshComponentId                          ComponentId;                                             // 0x0050(0x000C) NoDestructor, NativeAccessSpecifierPublic
		float                                                      AnimDuration;                                            // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartOffset;                                             // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndOffset;                                               // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        StartTime;                                               // 0x0068(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        EndTime;                                                 // 0x006C(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FaceFX.FaceFXAnimationSectionTemplate
	 * Size -> 0x0070 (FullSize[0x0090] - InheritedSize[0x0020])
	 */
	struct FFaceFXAnimationSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FFaceFXAnimationSectionData                         SectionData;                                             // 0x0020(0x0070) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FaceFX.FaceFXAnimSetData
	 * Size -> 0x0010
	 */
	struct FFaceFXAnimSetData
	{
	public:
		TArray<struct FFaceFXAnimData>                             Animations;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
