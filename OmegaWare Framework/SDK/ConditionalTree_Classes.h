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
	 * Class ConditionalTree.ConditionalTree
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UConditionalTree : public UObject
	{
	public:
		unsigned char                                              UnknownData_4KOG[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UConditionalTreeNode*                                StartNode;                                               // 0x0030(0x0008) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConditionalTree.ConditionalTreeNode
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UConditionalTreeNode : public UObject
	{
	public:
		unsigned char                                              UnknownData_BBW6[0x4];                                   // 0x0028(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DebugNodePosX;                                           // 0x002C(0x0004) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    DebugNodePosY;                                           // 0x0030(0x0004) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YCBX[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConditionalTree.ConditionalTreeNodeEvaluate
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UConditionalTreeNodeEvaluate : public UConditionalTreeNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConditionalTree.ConditionalTreeNodeResult
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UConditionalTreeNodeResult : public UConditionalTreeNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConditionalTree.ConditionalTreeNodeLink
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UConditionalTreeNodeLink : public UConditionalTreeNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConditionalTree.ConditionalTreeNode_Link
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UConditionalTreeNode_Link : public UConditionalTreeNodeLink
	{
	public:
		class UConditionalTree*                                    LinkedTree;                                              // 0x0038(0x0008) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConditionalTree.ConditionalTreeNode_LinkMultipleResults
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UConditionalTreeNode_LinkMultipleResults : public UConditionalTreeNode_Link
	{
	public:
		class UConditionalTreeNode*                                NextNode;                                                // 0x0040(0x0008) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConditionalTree.ConditionTree
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UConditionTree : public UDataAsset
	{
	public:
		TArray<struct FConditionTreeNode>                          Nodes;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bIsTreeValid;                                            // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C7HP[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConditionalTree.ObjectExampleConditionTree
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UObjectExampleConditionTree : public UConditionTree
	{
	public:
		TArray<class UObject*>                                     Results;                                                 // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConditionalTree.StructExampleConditionTree
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UStructExampleConditionTree : public UConditionTree
	{
	public:
		TArray<struct FConditionTreeStructResultExample>           Results;                                                 // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ConditionalTree.ConditionTreeTest
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class AConditionTreeTest : public AActor
	{
	public:
		class UObjectExampleConditionTree*                         ObjectConditionTree;                                     // 0x02B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStructExampleConditionTree*                         StructConditionTree;                                     // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UKnowledgeBaseComponent* GetKnowledgeBaseComponent();
		struct FConditionTreeStructResultExample GetFirstValidStruct(bool* bFound);
		class UObject* GetFirstValidObject();
		TArray<struct FConditionTreeStructResultExample> GetAllValidStructs();
		TArray<class UObject*> GetAllValidObjects();
		TArray<struct FConditionTreeStructResultExample> DuckDuckGoose();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
