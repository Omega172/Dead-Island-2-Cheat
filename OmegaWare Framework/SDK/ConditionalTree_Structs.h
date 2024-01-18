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
	 * Enum ConditionalTree.EConditionalTreeType
	 */
	enum class EConditionalTreeType : uint8_t
	{
		Invalid         = 0,
		SingleResult    = 1,
		MultipleResults = 2,
		MAX             = 3
	};

	/**
	 * Enum ConditionalTree.EConditionalTreeNodeType
	 */
	enum class EConditionalTreeNodeType : uint8_t
	{
		Invalid  = 0,
		Evaluate = 1,
		Result   = 2,
		Link     = 3,
		MAX      = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ConditionalTree.ConditionTreeNode
	 * Size -> 0x0048
	 */
	struct FConditionTreeNode
	{
	public:
		struct FKnowledgeBaseExpression                            Condition;                                               // 0x0000(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Children;                                                // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConditionalTree.ConditionTreeStructResultExample
	 * Size -> 0x0028
	 */
	struct FConditionTreeStructResultExample
	{
	public:
		float                                                      SomeFloat;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SomeName;                                                // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DY11[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     SomeVectorArray;                                         // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsAGoose;                                               // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Q1E[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConditionalTree.ConditionalTreeStringPair
	 * Size -> 0x0018
	 */
	struct FConditionalTreeStringPair
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UConditionalTreeNode*                                Node;                                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConditionalTree.ConditionalTreeFloatPair
	 * Size -> 0x0010
	 */
	struct FConditionalTreeFloatPair
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UConditionalTreeNode*                                Node;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
