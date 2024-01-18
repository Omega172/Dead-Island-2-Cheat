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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ScaleformUI.GFxHitTestType
	 */
	enum class EGFxHitTestType : uint8_t
	{
		GFxHitTestTypeHitTest_Bounds            = 0,
		GFxHitTestTypeHitTest_Shapes            = 1,
		GFxHitTestTypeHitTest_ButtonEvents      = 2,
		GFxHitTestTypeHitTest_ShapesNoInvisible = 3,
		GFxHitTestTypeHitTest_MAX               = 4
	};

	/**
	 * Enum ScaleformUI.EGFxTimingMode
	 */
	enum class EGFxTimingMode : uint8_t
	{
		Game = 0,
		Real = 1,
		MAX  = 2
	};

	/**
	 * Enum ScaleformUI.EGFxRenderTextureMode
	 */
	enum class EGFxRenderTextureMode : uint8_t
	{
		Opaque         = 0,
		Alpha          = 1,
		AlphaComposite = 2,
		MAX            = 3
	};

	/**
	 * Enum ScaleformUI.EGFxScaleMode
	 */
	enum class EGFxScaleMode : uint8_t
	{
		NoScale  = 0,
		ShowAll  = 1,
		ExactFit = 2,
		NoBorder = 3,
		MAX      = 4
	};

	/**
	 * Enum ScaleformUI.EGFxAlign
	 */
	enum class EGFxAlign : uint8_t
	{
		Center       = 0,
		TopCenter    = 1,
		BottomCenter = 2,
		CenterLeft   = 3,
		CenterRight  = 4,
		TopLeft      = 5,
		TopRight     = 6,
		BottomLeft   = 7,
		BottomRight  = 8,
		MAX          = 9
	};

	/**
	 * Enum ScaleformUI.EDIEdgeAAMode
	 */
	enum class EDIEdgeAAMode : uint8_t
	{
		Inherited = 0,
		On        = 1,
		Off       = 2,
		Disabled  = 3,
		MAX       = 4
	};

	/**
	 * Enum ScaleformUI.EASType
	 */
	enum class EASType : uint8_t
	{
		Undefined = 0,
		Null      = 1,
		Boolean   = 2,
		Int       = 3,
		Number    = 4,
		String    = 5,
		StringW   = 6,
		Object    = 7,
		MAX       = 8
	};

	/**
	 * Enum ScaleformUI.FlashTextureRescale
	 */
	enum class EFlashTextureRescale : uint8_t
	{
		FlashTextureScale_High    = 0,
		FlashTextureScale_Low     = 1,
		FlashTextureScale_NextLow = 2,
		FlashTextureScale_Mult4   = 3,
		FlashTextureScale_None    = 4,
		FlashTextureScale_MAX     = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ScaleformUI.ExternalTexture
	 * Size -> 0x0018
	 */
	struct FExternalTexture
	{
	public:
		class FString                                              Resource;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            Texture;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ScaleformUI.GFxWidgetBinding
	 * Size -> 0x0010
	 */
	struct FGFxWidgetBinding
	{
	public:
		class FName                                                WidgetName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              WidgetClass;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ScaleformUI.GCReference
	 * Size -> 0x0010
	 */
	struct FGCReference
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RefCount;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GXD9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ScaleformUI.ASPerspectiveTransform
	 * Size -> 0x0040
	 */
	struct FASPerspectiveTransform
	{
	public:
		struct FVector4                                            Row0;                                                    // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row1;                                                    // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row2;                                                    // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row3;                                                    // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ScaleformUI.ASColorTransform
	 * Size -> 0x0020
	 */
	struct FASColorTransform
	{
	public:
		struct FLinearColor                                        Multiply;                                                // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Add;                                                     // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ScaleformUI.ASDisplayInfo
	 * Size -> 0x0030
	 */
	struct FASDisplayInfo
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             Scale;                                                   // 0x000C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Rotation;                                                // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      XRotation;                                               // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      YRotation;                                               // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Alpha;                                                   // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       Visible;                                                 // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDIEdgeAAMode                                              EdgeAAMode;                                              // 0x0029(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CXYF[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ScaleformUI.ASValue
	 * Size -> 0x0048
	 */
	struct FASValue
	{
	public:
		EASType                                                    ASType;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ASBoolean;                                               // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8C84[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ASInt;                                                   // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ASNumber;                                                // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2OQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ASString;                                                // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAJA[0x20];                                  // 0x0020(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGFxObject*                                          ASObject;                                                // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
