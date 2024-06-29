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
	 * ScriptStruct AutoplayCore.AutoplayInput
	 * Size -> 0x0028
	 */
	struct FAutoplayInput
	{
	public:
		bool                                                       bIsRawInput;                                             // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PA7B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                InputKey;                                                // 0x0008(0x0018) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActionName;                                              // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AutoplayCore.AutoplayExtractionData
	 * Size -> 0x0030
	 */
	struct FAutoplayExtractionData
	{
	public:
		class UClass*                                              ExtractorClass;                                          // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoplayInput                                      NextInput;                                               // 0x0008(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
