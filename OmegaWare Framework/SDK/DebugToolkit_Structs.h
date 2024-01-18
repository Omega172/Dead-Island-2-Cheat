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
	 * Enum DebugToolkit.EDebugSelectionMode
	 */
	enum class EDebugSelectionMode : uint8_t
	{
		Exclusive = 0,
		Multi     = 1,
		Count     = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DebugToolkit.DebugTextAuthorityData
	 * Size -> 0x002C (FullSize[0x0038] - InheritedSize[0x000C])
	 */
	struct FDebugTextAuthorityData : public FFastArraySerializerItem
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I8HF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Text;                                                    // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        Clients;                                                 // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DebugToolkit.DebugTextAuthorityDataArray
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	struct FDebugTextAuthorityDataArray : public FFastArraySerializer
	{
	public:
		TArray<struct FDebugTextAuthorityData>                     Array;                                                   // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DebugToolkit.DebugTextParams
	 * Size -> 0x0020
	 */
	struct FDebugTextParams
	{
	public:
		class FName                                                Client;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DebugText;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicated;                                             // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowHeader;                                             // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowOnlyIfSelected;                                     // 0x001E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZG6S[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DebugToolkit.WebDebuggerNavmeshTriangleGroup
	 * Size -> 0x0010
	 */
	struct FWebDebuggerNavmeshTriangleGroup
	{
	public:
		TArray<int32_t>                                            T;                                                       // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DebugToolkit.WebDebuggerNavmeshTile
	 * Size -> 0x0040
	 */
	struct FWebDebuggerNavmeshTile
	{
	public:
		struct FVector                                             Min;                                                     // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Max;                                                     // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     V;                                                       // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWebDebuggerNavmeshTriangleGroup>            Tg;                                                      // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T4VZ[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DebugToolkit.WebDebuggerTestSimpleStruct
	 * Size -> 0x0020
	 */
	struct FWebDebuggerTestSimpleStruct
	{
	public:
		float                                                      Float;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vector;                                                  // 0x0004(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              String;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DebugToolkit.WebDebuggerTestStruct
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FWebDebuggerTestStruct : public FWebDebuggerTestSimpleStruct
	{
	public:
		TArray<struct FWebDebuggerTestSimpleStruct>                StructArray;                                             // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<int32_t>                                            IntArray;                                                // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BK1S[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DebugToolkit.WebDebuggerJsonObjectWrapper
	 * Size -> 0x0010
	 */
	struct FWebDebuggerJsonObjectWrapper
	{
	public:
		unsigned char                                              UnknownData_5VIK[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
