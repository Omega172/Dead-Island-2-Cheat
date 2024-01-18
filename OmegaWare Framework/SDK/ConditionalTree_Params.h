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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ConditionalTree.ConditionTreeTest.GetKnowledgeBaseComponent
	 */
	struct AConditionTreeTest_GetKnowledgeBaseComponent_Params
	{
	public:
		class UKnowledgeBaseComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConditionalTree.ConditionTreeTest.GetFirstValidStruct
	 */
	struct AConditionTreeTest_GetFirstValidStruct_Params
	{
	public:
		bool                                                       bFound;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H9TT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FConditionTreeStructResultExample                   ReturnValue;                                             // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConditionalTree.ConditionTreeTest.GetFirstValidObject
	 */
	struct AConditionTreeTest_GetFirstValidObject_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConditionalTree.ConditionTreeTest.GetAllValidStructs
	 */
	struct AConditionTreeTest_GetAllValidStructs_Params
	{
	public:
		TArray<struct FConditionTreeStructResultExample>           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConditionalTree.ConditionTreeTest.GetAllValidObjects
	 */
	struct AConditionTreeTest_GetAllValidObjects_Params
	{
	public:
		TArray<class UObject*>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConditionalTree.ConditionTreeTest.DuckDuckGoose
	 */
	struct AConditionTreeTest_DuckDuckGoose_Params
	{
	public:
		TArray<struct FConditionTreeStructResultExample>           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
