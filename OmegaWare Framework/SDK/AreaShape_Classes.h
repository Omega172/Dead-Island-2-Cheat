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
	 * Class AreaShape.AreaShapeActor
	 * Size -> 0x0000 (FullSize[0x02B8] - InheritedSize[0x02B8])
	 */
	class AAreaShapeActor : public ATriggerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AreaShape.AreaShapeComponent
	 * Size -> 0x0058 (FullSize[0x05A0] - InheritedSize[0x0548])
	 */
	class UAreaShapeComponent : public UShapeComponent
	{
	public:
		unsigned char                                              UnknownData_O3Z9[0x8];                                   // 0x0548(0x0008) Fix Super Size
		TArray<struct FVector2D>                                   Points;                                                  // 0x0550(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0560(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Width;                                                   // 0x0564(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0568(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x056C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VK2L[0x30];                                  // 0x0570(0x0030) MISSED OFFSET (PADDING)

	public:
		void UpdateAreaBounds();
		void SetSphereProperties(float InRadius);
		void SetShapeType(EAreaShapeType InType);
		void SetShapeProperties(TArray<struct FVector2D> InPoints, float InHeight);
		void SetCylinderProperties(float InHeight, float InRadius);
		void SetBoxProperties(float InHeight, float InWidth, float InLength);
		bool IsPointWithinAreaLocal(const struct FVector& Point);
		bool IsPointWithinArea2D(const struct FVector& Point);
		bool IsPointWithinArea(const struct FVector& Point);
		bool IsBoxWithinArea2D(const struct FBox& Box);
		bool IsBoxWithinArea(const struct FBox& Box);
		void CenterOnShape();
		static UClass* StaticClass();
	};

	/**
	 * Class AreaShape.AreaShapeSettings
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UAreaShapeSettings : public UObject
	{
	public:
		bool                                                       bDrawFiiledWhenSelected;                                 // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3DDF[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAreaShapeCategoryAppearanceSettings                DefaultAreaShapeAppearance;                              // 0x002C(0x0018) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DASO[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FAreaShapeCategoryAppearanceSettings> CategoryAppearance;                                      // 0x0048(0x0050) Edit, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AreaShape.CollidableAreaShapeComponent
	 * Size -> 0x0010 (FullSize[0x05B0] - InheritedSize[0x05A0])
	 */
	class UCollidableAreaShapeComponent : public UAreaShapeComponent
	{
	public:
		class UBodySetup*                                          CachedBodySetup;                                         // 0x05A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_31JL[0x8];                                   // 0x05A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
