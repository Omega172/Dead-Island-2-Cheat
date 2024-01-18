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
	 * Size -> 0x0058 (FullSize[0x0598] - InheritedSize[0x0540])
	 */
	class UAreaShapeComponent : public UShapeComponent
	{
	public:
		EAreaShapeType                                             Type;                                                    // 0x0540(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7TS[0x7];                                   // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector2D>                                   Points;                                                  // 0x0548(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0558(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Width;                                                   // 0x055C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0560(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0564(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2G84[0x30];                                  // 0x0568(0x0030) Fix size for supers

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
		static UClass* StaticClass();
	};

	/**
	 * Class AreaShape.AreaShapeSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAreaShapeSettings : public UObject
	{
	public:
		bool                                                       bDrawFiiledWhenSelected;                                 // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3U2O[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AreaShape.CollidableAreaShapeComponent
	 * Size -> 0x0008 (FullSize[0x05A0] - InheritedSize[0x0598])
	 */
	class UCollidableAreaShapeComponent : public UAreaShapeComponent
	{
	public:
		class UBodySetup*                                          CachedBodySetup;                                         // 0x0598(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
