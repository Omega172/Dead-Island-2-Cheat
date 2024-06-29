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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ConditionalTree.ConditionTreeTest.GetKnowledgeBaseComponent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		RVA    -> 0x00BB5430
	 * 		Name   -> Function ConditionalTree.ConditionTreeTest.GetFirstValidStruct
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFound != nullptr)
			*bFound = params.bFound;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5400
	 * 		Name   -> Function ConditionalTree.ConditionTreeTest.GetFirstValidObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UObject* AConditionTreeTest::GetFirstValidObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalTree.ConditionTreeTest.GetFirstValidObject");
		
		AConditionTreeTest_GetFirstValidObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5380
	 * 		Name   -> Function ConditionalTree.ConditionTreeTest.GetAllValidStructs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<struct FConditionTreeStructResultExample> AConditionTreeTest::GetAllValidStructs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalTree.ConditionTreeTest.GetAllValidStructs");
		
		AConditionTreeTest_GetAllValidStructs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5300
	 * 		Name   -> Function ConditionalTree.ConditionTreeTest.GetAllValidObjects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class UObject*> AConditionTreeTest::GetAllValidObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalTree.ConditionTreeTest.GetAllValidObjects");
		
		AConditionTreeTest_GetAllValidObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5280
	 * 		Name   -> Function ConditionalTree.ConditionTreeTest.DuckDuckGoose
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<struct FConditionTreeStructResultExample> AConditionTreeTest::DuckDuckGoose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalTree.ConditionTreeTest.DuckDuckGoose");
		
		AConditionTreeTest_DuckDuckGoose_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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


