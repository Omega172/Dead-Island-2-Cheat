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
	 * Class Discovery.DiscoverableComponent
	 * Size -> 0x0110 (FullSize[0x01F8] - InheritedSize[0x00E8])
	 */
	class UDiscoverableComponent : public UActorComponent
	{
	public:
		struct FScopedKnowledgeBaseExpressionListener              EnableExpression;                                        // 0x00E8(0x0060) ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FScopedKnowledgeBaseExpressionListener              AutoDiscoverExpressionListener;                          // 0x0148(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UDiscoveryObjectDataAsset*                           DiscoveryObjectDataAsset;                                // 0x01A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDiscoveryType*                                      OverriddenDiscoveryType;                                 // 0x01B0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDiscoveryObject*                                    DiscoveryObject;                                         // 0x01B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LURC[0x38];                                  // 0x01C0(0x0038) MISSED OFFSET (PADDING)

	public:
		void RemoveDisableReason(const class FName& Reason);
		void OnDiscoveryChanged(bool bDiscovered);
		void AddDisableReason(const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class Discovery.DiscoveredObjectsPersistentDataCollection
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UDiscoveredObjectsPersistentDataCollection : public UPersistentDataCollectionBase
	{
	public:
		TArray<class FString>                                      DiscoveredObjects;                                       // 0x0048(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E1MS[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Discovery.DiscoveryComponent
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	class UDiscoveryComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnDiscoveredDelegate;                                    // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      DiscoveryRadius;                                         // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OLYV[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDiscoveryManager*                                   DiscoveryManager;                                        // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Discovery.DiscoveryManager
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UDiscoveryManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_5IDY[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GridCellSize;                                            // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ATR[0x64];                                  // 0x0044(0x0064) MISSED OFFSET (PADDING)

	public:
		void UnRegisterDiscoveryObject(class UDiscoveryObject* DiscoveryObject);
		void RegisterDiscoveryObject(class UDiscoveryObject* DiscoveryObject);
		class UDiscoveryManager* STATIC_Get(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class Discovery.DiscoveryObject
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UDiscoveryObject : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnDiscoveredDelegate;                                    // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UDiscoveryType*                                      DiscoveryType;                                           // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FScopedKnowledgeBaseExpressionListener              AutoDiscoverExpressionListener;                          // 0x0040(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FName                                                DiscoveryKey;                                            // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              ContextualActor;                                         // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FE3Q[0x18];                                  // 0x00B0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Discovery.DiscoveryDatabaseData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDiscoveryDatabaseData : public UGlobalActorDatabaseData
	{
	public:
		class FName                                                DiscoveryKey;                                            // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Discovery.DiscoveryObjectDataAsset
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UDiscoveryObjectDataAsset : public UValidatedDataAsset
	{
	public:
		class UDiscoveryObject*                                    DiscoveryObject;                                         // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Discovery.DiscoveryType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDiscoveryType : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Discovery.NoDiscoveryType
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UNoDiscoveryType : public UDiscoveryType
	{
	public:
		unsigned char                                              UnknownData_KBIX[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Discovery.SpatialDiscoveryType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpatialDiscoveryType : public UDiscoveryType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Discovery.RadialDiscoveryType
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class URadialDiscoveryType : public USpatialDiscoveryType
	{
	public:
		float                                                      Radius;                                                  // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActorHeightOffset;                                       // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QLBQ[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
