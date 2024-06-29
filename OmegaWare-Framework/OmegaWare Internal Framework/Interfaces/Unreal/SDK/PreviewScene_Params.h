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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function PreviewScene.PreviewSceneComponent.SetPreviewTarget
	 */
	struct UPreviewSceneComponent_SetPreviewTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PreviewScene.PreviewSceneComponent.SetPreviewCamera
	 */
	struct UPreviewSceneComponent_SetPreviewCamera_Params
	{
	public:
		class UCameraComponent*                                    Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PreviewScene.PreviewSceneComponent.RemoveStreamingLevel
	 */
	struct UPreviewSceneComponent_RemoveStreamingLevel_Params
	{	};

	/**
	 * Function PreviewScene.PreviewSceneComponent.NotifyLevelShown
	 */
	struct UPreviewSceneComponent_NotifyLevelShown_Params
	{	};

	/**
	 * Function PreviewScene.PreviewSceneComponent.NotifyLevelLoaded
	 */
	struct UPreviewSceneComponent_NotifyLevelLoaded_Params
	{	};

	/**
	 * Function PreviewScene.PreviewSceneComponent.K2_SpawnActor
	 */
	struct UPreviewSceneComponent_K2_SpawnActor_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PreviewScene.PreviewSceneComponent.K2_OnLevelStreamingFinished
	 */
	struct UPreviewSceneComponent_K2_OnLevelStreamingFinished_Params
	{	};

	/**
	 * Function PreviewScene.PreviewSceneComponent.GetSceneCaptureComponent
	 */
	struct UPreviewSceneComponent_GetSceneCaptureComponent_Params
	{
	public:
		class USceneCaptureComponent2D*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PreviewScene.PreviewSceneComponent.AddStreamingLevel
	 */
	struct UPreviewSceneComponent_AddStreamingLevel_Params
	{
	public:
		unsigned char                                              UnknownData_NMO5[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0028(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLoaded;                                                 // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisible;                                                // 0x0035(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V3AS[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULevelStreaming*                                     ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
