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
	 * Class VisualErrorTracker.VisualErrorSeverityDataAsset
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UVisualErrorSeverityDataAsset : public UValidatedDataAsset
	{
	public:
		bool                                                       bDemoteToWarningForDSLogs;                               // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Priority;                                                // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZ6H[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Texture;                                                 // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        TextureTint;                                             // 0x0040(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VisualErrorTracker.VisualErrorTrackerBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVisualErrorTrackerBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ContextualLog(class AActor* ContextualActor, class UDSLogChannelHandle* LoggerHandle, const class FName& SeverityName, const class FString& Log);
		static UClass* StaticClass();
	};

	/**
	 * Class VisualErrorTracker.VisualErrorTrackerDataAsset
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UVisualErrorTrackerDataAsset : public UValidatedDataAsset
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class UVisualErrorSeverityDataAsset*>    Severities;                                              // 0x0038(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VisualErrorTracker.VisualErrorTrackerWidget
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UVisualErrorTrackerWidget : public UUserWidget
	{
	public:
		class UImage*                                              ColorImage;                                              // 0x0230(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VisualErrorTracker.VisualErrorTrackingManager
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class AVisualErrorTrackingManager : public AInfo
	{
	public:
		class UVisualErrorTrackerManagerImpl*                      ManagerImpl;                                             // 0x02B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VisualErrorTracker.VisualErrorTrackerManagerImpl
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UVisualErrorTrackerManagerImpl : public UObject
	{
	public:
		unsigned char                                              UnknownData_X8HP[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnActorDestroyed(class AActor* DestroyedActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
