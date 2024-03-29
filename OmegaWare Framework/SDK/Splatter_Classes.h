﻿#pragma once

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
	 * Class Splatter.SplatterMeshParameters
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class USplatterMeshParameters : public UDataAsset
	{
	public:
		int32_t                                                    Width;                                                   // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DiffuseTextureName;                                      // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DisplacementTextureName;                                 // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFatTextures;                                            // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowDismember;                                         // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowDeformation;                                       // 0x004A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSharesResources;                                        // 0x004B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BleedTickRate;                                           // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BleedGrowthPercentage;                                   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z812[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Splatter.SplatterMeshComponent
	 * Size -> 0x0150 (FullSize[0x0680] - InheritedSize[0x0530])
	 */
	class USplatterMeshComponent : public UPrimitiveComponent
	{
	public:
		class USplatterMeshParameters*                             Parameters;                                              // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0GT[0x30];                                  // 0x0538(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SplatterProcessingCompletedDelegate;                     // 0x0568(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TQJ[0x10];                                  // 0x0578(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSplatterMeshComponentTickFunction                  AssignTexturesTick;                                      // 0x0588(0x0040) Protected, NativeAccessSpecifierProtected
		TArray<class UTextureRenderTarget2D*>                      DiffuseRenderTargets;                                    // 0x05C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UTextureRenderTarget2D*>                      DisplacementRenderTargets;                               // 0x05D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UTextureRenderTarget2D*>                      DilationRenderTargets;                                   // 0x05E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 TargetComponent;                                         // 0x05F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDIEngineMaterialMasks*                              MaterialMasks;                                           // 0x0600(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FJO1[0x78];                                  // 0x0608(0x0078) MISSED OFFSET (PADDING)

	public:
		void UpdateSoftInfluences(TArray<struct FSplatterSoftPrimitive>* SoftUpdatePrims);
		struct FMatrix SplatterDecal(const struct FVector& InLocation, const struct FRotator& InRotation, const struct FSplatterMeshInfo& InInfo);
		void SetDisplacementRenderTarget(class UTextureRenderTarget2D* InRenderTarget, int32_t Index);
		void SetDiffuseRenderTarget(class UTextureRenderTarget2D* InRenderTarget, int32_t Index);
		void RefreshMaterials();
		bool IsBoneValid(const class FName& BoneName, ESplatterType SplatterType, int32_t* OutSocketIndex);
		class UTextureRenderTarget2D* GetDisplacementRenderTarget(int32_t Index);
		class UTextureRenderTarget2D* GetDiffuseRenderTarget(int32_t Index);
		class USkeletalMeshSocket* GetBoneEndAxis(const class FName& BoneName, int32_t* OutSocketIndex);
		void CreateSplatterMeshResources(class UPrimitiveComponent* Component, class USplatterMeshParameters* InParameters);
		void Clear();
		void ApplySplatterSet(class USplatterSet* SplatterSet);
		static UClass* StaticClass();
	};

	/**
	 * Class Splatter.SplatterPluginSettings
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class USplatterPluginSettings : public UDeveloperSettings
	{
	public:
		struct FSoftObjectPath                                     SplatterSetPersonalityFactsDataTable;                    // 0x0038(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Splatter.SplatterSet
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class USplatterSet : public UObject
	{
	public:
		TArray<struct FSplatterEntry>                              SplatterEntries;                                         // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FSplatterGroup>                              SplatterGroups;                                          // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    DismembermentSectionIndexOverride;                       // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_73O3[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            CutBones;                                                // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<int32_t>                                            BrokenBones;                                             // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         PersonalityFacts;                                        // 0x0070(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
