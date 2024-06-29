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
	 * ScriptStruct EnemyLevelArea.EnemyLevelAreaEntry
	 * Size -> 0x0070
	 */
	struct FEnemyLevelAreaEntry
	{
	public:
		struct FScopedKnowledgeBaseExpressionListener              ActiveExpression;                                        // 0x0000(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 DataTableRowHandle;                                      // 0x0060(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EnemyLevelArea.EnemyLevelAreaDataRow
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FEnemyLevelAreaDataRow : public FTableRowBase
	{
	public:
		int32_t                                                    MinLevel;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLevel;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinLevelOffset;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLevelOffset;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ModfierOffsetLevel;                                      // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3BBR[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
