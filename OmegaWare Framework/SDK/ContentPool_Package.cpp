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
	 * 		Name   -> PredefinedFunction UAssetRootPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetRootPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.AssetRootPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetSubPool.SelectAssetWithSeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAssetPoolSelectResult UAssetSubPool::SelectAssetWithSeed(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetSubPool.SelectAssetWithSeed");
		
		UAssetSubPool_SelectAssetWithSeed_Params params {};
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetSubPool.SelectAsset
	 * 		Flags  -> ()
	 */
	struct FAssetPoolSelectResult UAssetSubPool::SelectAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetSubPool.SelectAsset");
		
		UAssetSubPool_SelectAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetSubPool.PreCacheAssetById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPrimaryAssetId                             AssetId                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRequiredContent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAssetPoolSelectResult UAssetSubPool::PreCacheAssetById(const struct FPrimaryAssetId& AssetId, bool bRequiredContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetSubPool.PreCacheAssetById");
		
		UAssetSubPool_PreCacheAssetById_Params params {};
		params.AssetId = AssetId;
		params.bRequiredContent = bRequiredContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetSubPool.PreCacheAssetAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAssetSubPool::PreCacheAssetAction(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetSubPool.PreCacheAssetAction");
		
		UAssetSubPool_PreCacheAssetAction_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetSubPool.PreCacheAsset
	 * 		Flags  -> ()
	 */
	bool UAssetSubPool::PreCacheAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetSubPool.PreCacheAsset");
		
		UAssetSubPool_PreCacheAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetSubPool.OnRep_LoadedAssets
	 * 		Flags  -> ()
	 */
	void UAssetSubPool::OnRep_LoadedAssets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetSubPool.OnRep_LoadedAssets");
		
		UAssetSubPool_OnRep_LoadedAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetSubPool.HasAssetAvalible
	 * 		Flags  -> ()
	 */
	bool UAssetSubPool::HasAssetAvalible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetSubPool.HasAssetAvalible");
		
		UAssetSubPool_HasAssetAvalible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetSubPool.GetAssetWithSeedAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnItem                                                     (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAssetSubPool::GetAssetWithSeedAction(int32_t Seed, const class FScriptDelegate& OnItem, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetSubPool.GetAssetWithSeedAction");
		
		UAssetSubPool_GetAssetWithSeedAction_Params params {};
		params.Seed = Seed;
		params.OnItem = OnItem;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetSubPool.GetAssetWithSeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAssetPoolItemHandle UAssetSubPool::GetAssetWithSeed(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetSubPool.GetAssetWithSeed");
		
		UAssetSubPool_GetAssetWithSeed_Params params {};
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetSubPool.GetAssetByAssetIdAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAssetPoolSelectResult                      AssetId                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnItem                                                     (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAssetSubPool::GetAssetByAssetIdAction(const struct FAssetPoolSelectResult& AssetId, const class FScriptDelegate& OnItem, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetSubPool.GetAssetByAssetIdAction");
		
		UAssetSubPool_GetAssetByAssetIdAction_Params params {};
		params.AssetId = AssetId;
		params.OnItem = OnItem;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetSubPool.GetAssetByAssetId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAssetPoolSelectResult                      AssetId                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FAssetPoolItemHandle UAssetSubPool::GetAssetByAssetId(const struct FAssetPoolSelectResult& AssetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetSubPool.GetAssetByAssetId");
		
		UAssetSubPool_GetAssetByAssetId_Params params {};
		params.AssetId = AssetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetSubPool.GetAsset
	 * 		Flags  -> ()
	 */
	struct FAssetPoolItemHandle UAssetSubPool::GetAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetSubPool.GetAsset");
		
		UAssetSubPool_GetAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetSubPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetSubPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.AssetSubPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetPoolDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetPoolDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.AssetPoolDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetSubPoolDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetSubPoolDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.AssetSubPoolDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetPoolManager.IsAssetTypePooled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPrimaryAssetType                           Type                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AAssetPoolManager::IsAssetTypePooled(const struct FPrimaryAssetType& Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetPoolManager.IsAssetTypePooled");
		
		AAssetPoolManager_IsAssetTypePooled_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetPoolManager.IsAssetTagPooled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPrimaryAssetType                           Type                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Tag                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AAssetPoolManager::IsAssetTagPooled(const struct FPrimaryAssetType& Type, const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetPoolManager.IsAssetTagPooled");
		
		AAssetPoolManager_IsAssetTagPooled_Params params {};
		params.Type = Type;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetPoolManager.GetPoolBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAssetPoolHandle                            Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAssetSubPool* AAssetPoolManager::GetPoolBlueprint(const struct FAssetPoolHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetPoolManager.GetPoolBlueprint");
		
		AAssetPoolManager_GetPoolBlueprint_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetPoolManager.GetAvailablePools
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPrimaryAssetType                           Type                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FAssetPoolHandle> AAssetPoolManager::GetAvailablePools(const struct FPrimaryAssetType& Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetPoolManager.GetAvailablePools");
		
		AAssetPoolManager_GetAvailablePools_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentPool.AssetPoolManager.GetAssetPoolManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AAssetPoolManager* AAssetPoolManager::GetAssetPoolManager(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentPool.AssetPoolManager.GetAssetPoolManager");
		
		AAssetPoolManager_GetAssetPoolManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAssetPoolManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAssetPoolManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.AssetPoolManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetPoolTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetPoolTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.AssetPoolTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseContentPolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseContentPolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.BaseContentPolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExplicitContentPolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExplicitContentPolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.ExplicitContentPolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaggedContentPolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaggedContentPolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.TaggedContentPolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseEvictionPolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseEvictionPolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.BaseEvictionPolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNoEvictionOrder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoEvictionOrder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.NoEvictionOrder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOldestLoadedEvictionOrder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOldestLoadedEvictionOrder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.OldestLoadedEvictionOrder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOldestUsedEvictionOrder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOldestUsedEvictionOrder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.OldestUsedEvictionOrder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPooledPrimaryAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPooledPrimaryAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.PooledPrimaryAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasePreCachePolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePreCachePolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.BasePreCachePolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNoPreCachePolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoPreCachePolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.NoPreCachePolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleItemPreCachePolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleItemPreCachePolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.SingleItemPreCachePolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFullPreCachePolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFullPreCachePolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContentPool.FullPreCachePolicy");
		return ptr;
	}

}


