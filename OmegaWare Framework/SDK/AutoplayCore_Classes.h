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
	 * Class AutoplayCore.AutoplayDataExtractionMap
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UAutoplayDataExtractionMap : public UDataAsset
	{
	public:
		TMap<class FName, struct FAutoplayExtractionData>          ExtractorMap;                                            // 0x0030(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoplayCore.AutoplayDataExtractor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAutoplayDataExtractor : public UObject
	{
	public:
		class FString GetData(class UObject* DataObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoplayCore.AutoplayMenuInputWhitelist
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAutoplayMenuInputWhitelist : public UDataAsset
	{
	public:
		TArray<class FName>                                        AllowedMenuRawInputs;                                    // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        AllowedMenuActions;                                      // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoplayCore.AutoplayObjectiveProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAutoplayObjectiveProxy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
