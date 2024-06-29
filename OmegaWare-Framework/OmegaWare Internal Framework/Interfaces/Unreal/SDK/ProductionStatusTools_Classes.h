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
	 * Class ProductionStatusTools.ProductionStatusComponent
	 * Size -> 0x0020 (FullSize[0x0560] - InheritedSize[0x0540])
	 */
	class UProductionStatusComponent : public UMaterialBillboardComponent
	{
	public:
		class FString                                              FeatureWikiURL;                                          // 0x0540(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UProductionStatusDataAsset*                          DataAsset;                                               // 0x0550(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WXE1[0x8];                                   // 0x0558(0x0008) MISSED OFFSET (PADDING)

	public:
		void OpenFeatureWiki();
		static UClass* StaticClass();
	};

	/**
	 * Class ProductionStatusTools.ProductionStatusDataAsset
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UProductionStatusDataAsset : public UValidatedDataAsset
	{
	public:
		class FName                                                StateName;                                               // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          StateTexture;                                            // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        TextureTint;                                             // 0x0040(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
