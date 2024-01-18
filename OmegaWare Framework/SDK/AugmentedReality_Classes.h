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
	 * Class AugmentedReality.ARBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UnpinComponent(class USceneComponent* ComponentToUnpin);
		void StopARSession();
		void StartARSession(class UARSessionConfig* SessionConfig);
		void SetAlignmentTransform(const struct FTransform& InAlignmentTransform);
		void RemovePin(class UARPin* PinToRemove);
		class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const class FName& DebugName);
		class UARPin* PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const class FName& DebugName);
		void PauseARSession();
		TArray<struct FARTraceResult> LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
		TArray<struct FARTraceResult> LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
		bool IsSessionTypeSupported(EARSessionType SessionType);
		bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);
		bool IsARSupported();
		EARWorldMappingState GetWorldMappingStatus();
		EARTrackingQualityReason GetTrackingQualityReason();
		EARTrackingQuality GetTrackingQuality();
		TArray<struct FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);
		class UARSessionConfig* GetSessionConfig();
		TArray<struct FVector> GetPointCloud();
		class UARTextureCameraImage* GetPersonSegmentationImage();
		class UARTextureCameraImage* GetPersonSegmentationDepthImage();
		class UARLightEstimate* GetCurrentLightEstimate();
		class UARTextureCameraImage* GetCameraImage();
		class UARTextureCameraDepth* GetCameraDepth();
		struct FARSessionStatus GetARSessionStatus();
		TArray<class UARTrackedPose*> GetAllTrackedPoses();
		TArray<class UARTrackedPoint*> GetAllTrackedPoints();
		TArray<class UARPlaneGeometry*> GetAllTrackedPlanes();
		TArray<class UARTrackedImage*> GetAllTrackedImages();
		TArray<class UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
		TArray<struct FARPose2D> GetAllTracked2DPoses();
		TArray<class UARPin*> GetAllPins();
		TArray<class UARTrackedGeometry*> GetAllGeometries();
		void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds);
		void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
		class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth);
		bool AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTraceResultLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARTraceResultLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UARTrackedGeometry* GetTrackedGeometry(const struct FARTraceResult& TraceResult);
		EARLineTraceChannels GetTraceChannel(const struct FARTraceResult& TraceResult);
		struct FTransform GetLocalToWorldTransform(const struct FARTraceResult& TraceResult);
		struct FTransform GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult);
		float GetDistanceFromCamera(const struct FARTraceResult& TraceResult);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              UnknownData_OCHV[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailed;                                                // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RS21[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
	 * Size -> 0x0048 (FullSize[0x0098] - InheritedSize[0x0050])
	 */
	class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailed;                                                // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9QH[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)

	public:
		class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARLightEstimate
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARLightEstimate : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARBasicLightEstimate
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UARBasicLightEstimate : public UARLightEstimate
	{
	public:
		float                                                      AmbientIntensityLumens;                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AmbientColorTemperatureKelvin;                           // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        AmbientColor;                                            // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		float GetAmbientIntensityLumens();
		float GetAmbientColorTemperatureKelvin();
		struct FLinearColor GetAmbientColor();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.AROriginActor
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class AAROriginActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARPin
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UARPin : public UObject
	{
	public:
		class UARTrackedGeometry*                                  TrackedGeometry;                                         // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     PinnedComponent;                                         // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AT89[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LocalToTrackingTransform;                                // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          LocalToAlignedTrackingTransform;                         // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		EARTrackingState                                           TrackingState;                                           // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TV3F[0x1F];                                  // 0x00A1(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnARTrackingStateChanged;                                // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnARTransformUpdated;                                    // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NZBR[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (PADDING)

	public:
		EARTrackingState GetTrackingState();
		class UARTrackedGeometry* GetTrackedGeometry();
		class USceneComponent* GetPinnedComponent();
		struct FTransform GetLocalToWorldTransform();
		struct FTransform GetLocalToTrackingTransform();
		class FName GetDebugName();
		void DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSessionConfig
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UARSessionConfig : public UDataAsset
	{
	public:
		bool                                                       bGenerateMeshDataFromTrackedGeometry;                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateCollisionForMeshData;                           // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateNavMeshForMeshData;                             // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMeshDataForOcclusion;                                // 0x0033(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderMeshDataInWireframe;                              // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTrackSceneObjects;                                      // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePersonSegmentationForOcclusion;                      // 0x0036(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EARWorldAlignment                                          WorldAlignment;                                          // 0x0037(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARSessionType                                             SessionType;                                             // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARPlaneDetectionMode                                      PlaneDetectionMode;                                      // 0x0039(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHorizontalPlaneDetection;                               // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bVerticalPlaneDetection;                                 // 0x003B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAutoFocus;                                        // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARLightEstimationMode                                     LightEstimationMode;                                     // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARFrameSyncMode                                           FrameSyncMode;                                           // 0x003E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAutomaticCameraOverlay;                           // 0x003F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAutomaticCameraTracking;                          // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bResetCameraTracking;                                    // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bResetTrackedObjects;                                    // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JOU5[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UARCandidateImage*>                           CandidateImages;                                         // 0x0048(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    MaxNumSimultaneousImagesTracked;                         // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAREnvironmentCaptureProbeType                             EnvironmentCaptureProbeType;                             // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7ON3[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      WorldMapData;                                            // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected
		TArray<class UARCandidateObject*>                          CandidateObjects;                                        // 0x0070(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FARVideoFormat                                      DesiredVideoFormat;                                      // 0x0080(0x000C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		EARFaceTrackingDirection                                   FaceTrackingDirection;                                   // 0x008C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARFaceTrackingUpdate                                      FaceTrackingUpdate;                                      // 0x008D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OEX5[0x2];                                   // 0x008E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      SerializedARCandidateImageDatabase;                      // 0x0090(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		EARSessionTrackingFeature                                  EnabledSessionTrackingFeature;                           // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BVXI[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		bool ShouldResetTrackedObjects();
		bool ShouldResetCameraTracking();
		bool ShouldRenderCameraOverlay();
		bool ShouldEnableCameraTracking();
		bool ShouldEnableAutoFocus();
		void SetWorldMapData(TArray<unsigned char> WorldMapData);
		void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);
		void SetResetTrackedObjects(bool bNewValue);
		void SetResetCameraTracking(bool bNewValue);
		void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);
		void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);
		void SetEnableAutoFocus(bool bNewValue);
		void SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat);
		void SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects);
		TArray<unsigned char> GetWorldMapData();
		EARWorldAlignment GetWorldAlignment();
		EARSessionType GetSessionType();
		EARPlaneDetectionMode GetPlaneDetectionMode();
		int32_t GetMaxNumSimultaneousImagesTracked();
		EARLightEstimationMode GetLightEstimationMode();
		EARFrameSyncMode GetFrameSyncMode();
		EARFaceTrackingUpdate GetFaceTrackingUpdate();
		EARFaceTrackingDirection GetFaceTrackingDirection();
		EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
		EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
		struct FARVideoFormat GetDesiredVideoFormat();
		TArray<class UARCandidateObject*> GetCandidateObjectList();
		TArray<class UARCandidateImage*> GetCandidateImageList();
		void AddCandidateObject(class UARCandidateObject* CandidateObject);
		void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSharedWorldGameMode
	 * Size -> 0x0068 (FullSize[0x0400] - InheritedSize[0x0398])
	 */
	class AARSharedWorldGameMode : public AGameMode
	{
	public:
		int32_t                                                    BufferSizePerChunk;                                      // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0MHR[0x64];                                  // 0x039C(0x0064) MISSED OFFSET (PADDING)

	public:
		void SetPreviewImageData(TArray<unsigned char> ImageData);
		void SetARWorldSharingIsReady();
		void SetARSharedWorldData(TArray<unsigned char> ARWorldData);
		class AARSharedWorldGameState* GetARSharedWorldGameState();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSharedWorldGameState
	 * Size -> 0x0038 (FullSize[0x0358] - InheritedSize[0x0320])
	 */
	class AARSharedWorldGameState : public AGameState
	{
	public:
		TArray<unsigned char>                                      PreviewImageData;                                        // 0x0320(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ARWorldData;                                             // 0x0330(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PreviewImageBytesTotal;                                  // 0x0340(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ARWorldBytesTotal;                                       // 0x0344(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreviewImageBytesDelivered;                              // 0x0348(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ARWorldBytesDelivered;                                   // 0x034C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HS4N[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		void K2_OnARWorldMapIsReady();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSharedWorldPlayerController
	 * Size -> 0x0008 (FullSize[0x0608] - InheritedSize[0x0600])
	 */
	class AARSharedWorldPlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_71JU[0x8];                                   // 0x0600(0x0008) MISSED OFFSET (PADDING)

	public:
		void ServerMarkReadyForReceiving();
		void ClientUpdatePreviewImageData(int32_t Offset, TArray<unsigned char> Buffer);
		void ClientUpdateARWorldData(int32_t Offset, TArray<unsigned char> Buffer);
		void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSkyLight
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class AARSkyLight : public ASkyLight
	{
	public:
		class UAREnvironmentCaptureProbe*                          CaptureProbe;                                            // 0x02C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DMOC[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTexture
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UARTexture : public UTexture
	{
	public:
		EARTextureType                                             TextureType;                                             // 0x00B8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I23H[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Timestamp;                                               // 0x00BC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExternalTextureGuid;                                     // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Size;                                                    // 0x00D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTextureCameraImage
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UARTextureCameraImage : public UARTexture
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTextureCameraDepth
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UARTextureCameraDepth : public UARTexture
	{
	public:
		EARDepthQuality                                            DepthQuality;                                            // 0x00D8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EARDepthAccuracy                                           DepthAccuracy;                                           // 0x00D9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTemporallySmoothed;                                   // 0x00DA(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_935H[0x5];                                   // 0x00DB(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.AREnvironmentCaptureProbeTexture
	 * Size -> 0x0020 (FullSize[0x0138] - InheritedSize[0x0118])
	 */
	class UAREnvironmentCaptureProbeTexture : public UTextureCube
	{
	public:
		EARTextureType                                             TextureType;                                             // 0x0118(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTJW[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Timestamp;                                               // 0x011C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExternalTextureGuid;                                     // 0x0120(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Size;                                                    // 0x0130(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTraceResultDummy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARTraceResultDummy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedGeometry
	 * Size -> 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
	 */
	class UARTrackedGeometry : public UObject
	{
	public:
		struct FGuid                                               UniqueId;                                                // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8WS7[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LocalToTrackingTransform;                                // 0x0040(0x0030) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          LocalToAlignedTrackingTransform;                         // 0x0070(0x0030) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EARTrackingState                                           TrackingState;                                           // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3LPB[0xF];                                   // 0x00A1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMRMeshComponent*                                    UnderlyingMesh;                                          // 0x00B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARObjectClassification                                    ObjectClassification;                                    // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JCGJ[0x17];                                  // 0x00B9(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastUpdateFrameNumber;                                   // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MV8P[0xC];                                   // 0x00D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DebugName;                                               // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool IsTracked();
		class UMRMeshComponent* GetUnderlyingMesh();
		EARTrackingState GetTrackingState();
		EARObjectClassification GetObjectClassification();
		struct FTransform GetLocalToWorldTransform();
		struct FTransform GetLocalToTrackingTransform();
		float GetLastUpdateTimestamp();
		int32_t GetLastUpdateFrameNumber();
		class FName GetDebugName();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARPlaneGeometry
	 * Size -> 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
	 */
	class UARPlaneGeometry : public UARTrackedGeometry
	{
	public:
		unsigned char                                              UnknownData_JUO6[0x4];                                   // 0x00E8(0x0004) Fix Super Size
		struct FVector                                             Center;                                                  // 0x00EC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             Extent;                                                  // 0x00F8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NT6L[0x14];                                  // 0x0104(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UARPlaneGeometry*                                    SubsumedBy;                                              // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UARPlaneGeometry* GetSubsumedBy();
		EARPlaneOrientation GetOrientation();
		struct FVector GetExtent();
		struct FVector GetCenter();
		TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedPoint
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UARTrackedPoint : public UARTrackedGeometry
	{
	public:
		unsigned char                                              UnknownData_MOOX[0x8];                                   // 0x00E8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedImage
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UARTrackedImage : public UARTrackedGeometry
	{
	public:
		class UARCandidateImage*                                   DetectedImage;                                           // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           EstimatedSize;                                           // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		struct FVector2D GetEstimateSize();
		class UARCandidateImage* GetDetectedImage();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedQRCode
	 * Size -> 0x0018 (FullSize[0x0110] - InheritedSize[0x00F8])
	 */
	class UARTrackedQRCode : public UARTrackedImage
	{
	public:
		class FString                                              QRCode;                                                  // 0x00F8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x0108(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VBNJ[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARFaceGeometry
	 * Size -> 0x00F8 (FullSize[0x01E0] - InheritedSize[0x00E8])
	 */
	class UARFaceGeometry : public UARTrackedGeometry
	{
	public:
		struct FVector                                             LookAtTarget;                                            // 0x00E8(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTracked;                                              // 0x00F4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IVDS[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EARFaceBlendShape, float>                             BlendShapes;                                             // 0x00F8(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2P00[0x98];                                  // 0x0148(0x0098) MISSED OFFSET (PADDING)

	public:
		struct FTransform GetWorldSpaceEyeTransform(EAREye Eye);
		struct FTransform GetLocalSpaceEyeTransform(EAREye Eye);
		float GetBlendShapeValue(EARFaceBlendShape BlendShape);
		TMap<EARFaceBlendShape, float> GetBlendShapes();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.AREnvironmentCaptureProbe
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UAREnvironmentCaptureProbe : public UARTrackedGeometry
	{
	public:
		unsigned char                                              UnknownData_RZU9[0x8];                                   // 0x00E8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_8EEZ[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAREnvironmentCaptureProbeTexture*                   EnvironmentCaptureTexture;                               // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		struct FVector GetExtent();
		class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedObject
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UARTrackedObject : public UARTrackedGeometry
	{
	public:
		class UARCandidateObject*                                  DetectedObject;                                          // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UARCandidateObject* GetDetectedObject();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedPose
	 * Size -> 0x0058 (FullSize[0x0140] - InheritedSize[0x00E8])
	 */
	class UARTrackedPose : public UARTrackedGeometry
	{
	public:
		unsigned char                                              UnknownData_BSQV[0x8];                                   // 0x00E8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_ELQ2[0x50];                                  // 0x00F0(0x0050) MISSED OFFSET (PADDING)

	public:
		struct FARPose3D GetTrackedPoseData();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackableNotifyComponent
	 * Size -> 0x0150 (FullSize[0x0238] - InheritedSize[0x00E8])
	 */
	class UARTrackableNotifyComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnAddTrackedGeometry;                                    // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedGeometry;                                 // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedGeometry;                                 // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedPlane;                                       // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedPlane;                                    // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedPlane;                                    // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedPoint;                                       // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedPoint;                                    // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedPoint;                                    // 0x0168(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedImage;                                       // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedImage;                                    // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedImage;                                    // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedFace;                                        // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedFace;                                     // 0x01B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedFace;                                     // 0x01C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedEnvProbe;                                    // 0x01D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedEnvProbe;                                 // 0x01E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedEnvProbe;                                 // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedObject;                                      // 0x0208(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedObject;                                   // 0x0218(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedObject;                                   // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTypesDummyClass
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARTypesDummyClass : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARCandidateImage
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UARCandidateImage : public UDataAsset
	{
	public:
		class UTexture2D*                                          CandidateTexture;                                        // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              FriendlyName;                                            // 0x0038(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Width;                                                   // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Height;                                                  // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARCandidateImageOrientation                               Orientation;                                             // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H6J6[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		float GetPhysicalWidth();
		float GetPhysicalHeight();
		EARCandidateImageOrientation GetOrientation();
		class FString GetFriendlyName();
		class UTexture2D* GetCandidateTexture();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARCandidateObject
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UARCandidateObject : public UDataAsset
	{
	public:
		TArray<unsigned char>                                      CandidateObjectData;                                     // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              FriendlyName;                                            // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FBox                                                BoundingBox;                                             // 0x0050(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JPUD[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetFriendlyName(const class FString& NewName);
		void SetCandidateObjectData(TArray<unsigned char> InCandidateObject);
		void SetBoundingBox(const struct FBox& InBoundingBox);
		class FString GetFriendlyName();
		TArray<unsigned char> GetCandidateObjectData();
		struct FBox GetBoundingBox();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
