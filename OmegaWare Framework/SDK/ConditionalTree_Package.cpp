/**
 * Name: Dead_Island_2
 * Version: Cracked
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionalTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConditionalTree.ConditionalTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionalTreeNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalTreeNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConditionalTree.ConditionalTreeNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionalTreeNodeEvaluate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalTreeNodeEvaluate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConditionalTree.ConditionalTreeNodeEvaluate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionalTreeNodeResult.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalTreeNodeResult::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConditionalTree.ConditionalTreeNodeResult");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionalTreeNodeLink.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalTreeNodeLink::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConditionalTree.ConditionalTreeNodeLink");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionalTreeNode_Link.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalTreeNode_Link::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConditionalTree.ConditionalTreeNode_Link");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionalTreeNode_LinkMultipleResults.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalTreeNode_LinkMultipleResults::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConditionalTree.ConditionalTreeNode_LinkMultipleResults");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConditionalTree.ConditionTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectExampleConditionTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectExampleConditionTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConditionalTree.ObjectExampleConditionTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStructExampleConditionTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStructExampleConditionTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConditionalTree.StructExampleConditionTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConditionalTree.ConditionTreeTest.GetKnowledgeBaseComponent
	 * 		Flags  -> ()
	 */
	class UKnowledgeBaseComponent* AConditionTreeTest::GetKnowledgeBaseComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalTree.ConditionTreeTest.GetKnowledgeBaseComponent");
		
		AConditionTreeTest_GetKnowledgeBaseComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConditionalTree.ConditionTreeTest.GetFirstValidStruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFound                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FConditionTreeStructResultExample AConditionTreeTest::GetFirstValidStruct(bool* bFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalTree.ConditionTreeTest.GetFirstValidStruct");
		
		AConditionTreeTest_GetFirstValidStruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFound != nullptr)
			*bFound = params.bFound;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConditionalTree.ConditionTreeTest.GetFirstValidObject
	 * 		Flags  -> ()
	 */
	class UObject* AConditionTreeTest::GetFirstValidObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalTree.ConditionTreeTest.GetFirstValidObject");
		
		AConditionTreeTest_GetFirstValidObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConditionalTree.ConditionTreeTest.GetAllValidStructs
	 * 		Flags  -> ()
	 */
	TArray<struct FConditionTreeStructResultExample> AConditionTreeTest::GetAllValidStructs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalTree.ConditionTreeTest.GetAllValidStructs");
		
		AConditionTreeTest_GetAllValidStructs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConditionalTree.ConditionTreeTest.GetAllValidObjects
	 * 		Flags  -> ()
	 */
	TArray<class UObject*> AConditionTreeTest::GetAllValidObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalTree.ConditionTreeTest.GetAllValidObjects");
		
		AConditionTreeTest_GetAllValidObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConditionalTree.ConditionTreeTest.DuckDuckGoose
	 * 		Flags  -> ()
	 */
	TArray<struct FConditionTreeStructResultExample> AConditionTreeTest::DuckDuckGoose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalTree.ConditionTreeTest.DuckDuckGoose");
		
		AConditionTreeTest_DuckDuckGoose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AConditionTreeTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AConditionTreeTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConditionalTree.ConditionTreeTest");
		return ptr;
	}

}


