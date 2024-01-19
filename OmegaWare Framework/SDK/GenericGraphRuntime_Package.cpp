/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x007B1190
	 * 		Name   -> Function GenericGraphRuntime.GenericGraph.Print
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ToConsole                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ToScreen                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericGraph::Print(bool ToConsole, bool ToScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericGraphRuntime.GenericGraph.Print");
		
		UGenericGraph_Print_Params params {};
		params.ToConsole = ToConsole;
		params.ToScreen = ToScreen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1080
	 * 		Name   -> Function GenericGraphRuntime.GenericGraph.GetNodesByLevel
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UGenericGraphNode*>                   Nodes                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGenericGraph::GetNodesByLevel(int32_t Level, TArray<class UGenericGraphNode*>* Nodes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericGraphRuntime.GenericGraph.GetNodesByLevel");
		
		UGenericGraph_GetNodesByLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Nodes != nullptr)
			*Nodes = params.Nodes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1050
	 * 		Name   -> Function GenericGraphRuntime.GenericGraph.GetLevelNum
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UGenericGraph::GetLevelNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericGraphRuntime.GenericGraph.GetLevelNum");
		
		UGenericGraph_GetLevelNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GenericGraphRuntime.GenericGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1020
	 * 		Name   -> Function GenericGraphRuntime.GenericGraphEdge.GetGraph
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGenericGraph* UGenericGraphEdge::GetGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericGraphRuntime.GenericGraphEdge.GetGraph");
		
		UGenericGraphEdge_GetGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0FE0
	 * 		Name   -> Function GenericGraphRuntime.GenericGraphEdge.GetEdgeDisplayName
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UGenericGraphEdge::GetEdgeDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericGraphRuntime.GenericGraphEdge.GetEdgeDisplayName");
		
		UGenericGraphEdge_GetEdgeDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericGraphEdge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericGraphEdge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GenericGraphRuntime.GenericGraphEdge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1160
	 * 		Name   -> Function GenericGraphRuntime.GenericGraphNode.IsLeafNode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGenericGraphNode::IsLeafNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericGraphRuntime.GenericGraphNode.IsLeafNode");
		
		UGenericGraphNode_IsLeafNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1020
	 * 		Name   -> Function GenericGraphRuntime.GenericGraphNode.GetGraph
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGenericGraph* UGenericGraphNode::GetGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericGraphRuntime.GenericGraphNode.GetGraph");
		
		UGenericGraphNode_GetGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0F40
	 * 		Name   -> Function GenericGraphRuntime.GenericGraphNode.GetEdge
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGenericGraphNode*                           ChildNode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGenericGraphEdge* UGenericGraphNode::GetEdge(class UGenericGraphNode* ChildNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericGraphRuntime.GenericGraphNode.GetEdge");
		
		UGenericGraphNode_GetEdge_Params params {};
		params.ChildNode = ChildNode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B0EA0
	 * 		Name   -> Function GenericGraphRuntime.GenericGraphNode.GetDescription
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class FText UGenericGraphNode::GetDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericGraphRuntime.GenericGraphNode.GetDescription");
		
		UGenericGraphNode_GetDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericGraphNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericGraphNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GenericGraphRuntime.GenericGraphNode");
		return ptr;
	}

}


