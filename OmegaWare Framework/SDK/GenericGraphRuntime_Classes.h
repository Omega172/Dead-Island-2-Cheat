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
	 * Class GenericGraphRuntime.GenericGraph
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UGenericGraph : public UObject
	{
	public:
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              NodeType;                                                // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EdgeType;                                                // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GraphTags;                                               // 0x0048(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UGenericGraphNode*>                           RootNodes;                                               // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UGenericGraphNode*>                           AllNodes;                                                // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEdgeEnabled;                                            // 0x0088(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTE1[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		void Print(bool ToConsole, bool ToScreen);
		void GetNodesByLevel(int32_t Level, TArray<class UGenericGraphNode*>* Nodes);
		int32_t GetLevelNum();
		static UClass* StaticClass();
	};

	/**
	 * Class GenericGraphRuntime.GenericGraphEdge
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGenericGraphEdge : public UObject
	{
	public:
		class UGenericGraph*                                       Graph;                                                   // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGenericGraphNode*                                   StartNode;                                               // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGenericGraphNode*                                   EndNode;                                                 // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UGenericGraph* GetGraph();
		class FName GetEdgeDisplayName();
		static UClass* StaticClass();
	};

	/**
	 * Class GenericGraphRuntime.GenericGraphNode
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UGenericGraphNode : public UObject
	{
	public:
		class UGenericGraph*                                       Graph;                                                   // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGenericGraphNode*>                           ParentNodes;                                             // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UGenericGraphNode*>                           ChildrenNodes;                                           // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class UGenericGraphNode*, class UGenericGraphEdge*>   Edges;                                                   // 0x0050(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		bool IsLeafNode();
		class UGenericGraph* GetGraph();
		class UGenericGraphEdge* GetEdge(class UGenericGraphNode* ChildNode);
		class FText GetDescription();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
