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
	 * Class PreviewScene.PreviewSceneActor
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class APreviewSceneActor : public AActor
	{
	public:
		class UPreviewSceneComponent*                              PreviewSceneComponent;                                   // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PreviewScene.PreviewSceneComponent
	 * Size -> 0x0088 (FullSize[0x0170] - InheritedSize[0x00E8])
	 */
	class UPreviewSceneComponent : public UActorComponent
	{
	public:
		bool                                                       bUseSceneCapture;                                        // 0x00E8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFxSystem;                                            // 0x00E9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePhysicsScene;                                        // 0x00EA(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOCU[0x1];                                   // 0x00EB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FxSystemGpuParticleScale;                                // 0x00EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SceneCaptureClass;                                       // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWorld*                                              PreviewWorld;                                            // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCameraComponent*                                    SceneCamera;                                             // 0x0108(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ASceneCapture2D*                                     SceneCapture;                                            // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ULevelStreaming*>                             LoadedStreamingLevels;                                   // 0x0118(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7SIG[0x48];                                  // 0x0128(0x0048) MISSED OFFSET (PADDING)

	public:
		void SetPreviewTarget(class UTextureRenderTarget2D* Target);
		void SetPreviewCamera(class UCameraComponent* Component);
		void RemoveStreamingLevel();
		void NotifyLevelShown();
		void NotifyLevelLoaded();
		class AActor* K2_SpawnActor(class UClass* Class, const struct FVector& Location, const struct FRotator& Rotation);
		void K2_OnLevelStreamingFinished();
		class USceneCaptureComponent2D* GetSceneCaptureComponent();
		class ULevelStreaming* AddStreamingLevel(const struct FVector& Location, bool bLoaded, bool bVisible);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
