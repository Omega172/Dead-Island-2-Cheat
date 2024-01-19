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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Leaks.ELeakPriority
	 */
	enum class ELeakPriority : uint8_t
	{
		Low      = 0,
		High     = 1,
		Critical = 2,
		MAX      = 3
	};

	/**
	 * Enum Leaks.ELeakType
	 */
	enum class ELeakType : uint8_t
	{
		HandPlaced = 0,
		Dynamic    = 1,
		MAX        = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Leaks.LeakInfo
	 * Size -> 0x0010
	 */
	struct FLeakInfo
	{
	public:
		ELeakPriority                                              Priority;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MRXW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULeakDataAsset*                                      DataAsset;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Leaks.LeakRequestParams
	 * Size -> 0x0038
	 */
	struct FLeakRequestParams
	{
	public:
		struct FLeakInfo                                           LeakInfo;                                                // 0x0000(0x0010) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             RelativeLocation;                                        // 0x0010(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RelativeRotation;                                        // 0x001C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USceneComponent>                      AttachComponent;                                         // 0x0028(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELeakType                                                  LeakType;                                                // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_38XI[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
