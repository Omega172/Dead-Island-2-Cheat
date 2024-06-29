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
	 * Class CinematicCamera.CineCameraComponent
	 * Size -> 0x0100 (FullSize[0x0BB0] - InheritedSize[0x0AB0])
	 */
	class UCineCameraComponent : public UCameraComponent
	{
	public:
		struct FCameraFilmbackSettings                             FilmbackSettings;                                        // 0x0AB0(0x000C) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		struct FCameraFilmbackSettings                             Filmback;                                                // 0x0ABC(0x000C) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FCameraLensSettings                                 LensSettings;                                            // 0x0AC8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCameraFocusSettings                                FocusSettings;                                           // 0x0AE0(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      CurrentFocalLength;                                      // 0x0B38(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentAperture;                                         // 0x0B3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentFocusDistance;                                    // 0x0B40(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2A0Y[0xC];                                   // 0x0B44(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNamedFilmbackPreset>                        FilmbackPresets;                                         // 0x0B50(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FNamedLensPreset>                            LensPresets;                                             // 0x0B60(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		class FString                                              DefaultFilmbackPresetName;                               // 0x0B70(0x0010) ZeroConstructor, Config, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DefaultFilmbackPreset;                                   // 0x0B80(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DefaultLensPresetName;                                   // 0x0B90(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultLensFocalLength;                                  // 0x0BA0(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultLensFStop;                                        // 0x0BA4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5AQV[0x8];                                   // 0x0BA8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetLensPresetByName(const class FString& InPresetName);
		void SetFilmbackPresetByName(const class FString& InPresetName);
		void SetCurrentFocalLength(float InFocalLength);
		float GetVerticalFieldOfView();
		TArray<struct FNamedLensPreset> STATIC_GetLensPresetsCopy();
		class FString GetLensPresetName();
		float GetHorizontalFieldOfView();
		class FString GetFilmbackPresetName();
		class FString GetDefaultFilmbackPresetName();
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CameraRig_Crane
	 * Size -> 0x0030 (FullSize[0x02E0] - InheritedSize[0x02B0])
	 */
	class ACameraRig_Crane : public AActor
	{
	public:
		float                                                      CranePitch;                                              // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CraneYaw;                                                // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CraneArmLength;                                          // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockMountPitch;                                         // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockMountYaw;                                           // 0x02BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O7NV[0x2];                                   // 0x02BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     TransformComponent;                                      // 0x02C0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CraneYawControl;                                         // 0x02C8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CranePitchControl;                                       // 0x02D0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CraneCameraMount;                                        // 0x02D8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CameraRig_Rail
	 * Size -> 0x0020 (FullSize[0x02D0] - InheritedSize[0x02B0])
	 */
	class ACameraRig_Rail : public AActor
	{
	public:
		float                                                      CurrentPositionOnRail;                                   // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockOrientationToRail;                                  // 0x02B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T1CP[0x3];                                   // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     TransformComponent;                                      // 0x02B8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USplineComponent*                                    RailSplineComponent;                                     // 0x02C0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     RailCameraMount;                                         // 0x02C8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class USplineComponent* GetRailSplineComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CineCameraActor
	 * Size -> 0x0060 (FullSize[0x0AE0] - InheritedSize[0x0A80])
	 */
	class ACineCameraActor : public ACameraActor
	{
	public:
		struct FCameraLookatTrackingSettings                       LookatTrackingSettings;                                  // 0x0A80(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TBQB[0x10];                                  // 0x0AD0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UCineCameraComponent* GetCineCameraComponent();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
