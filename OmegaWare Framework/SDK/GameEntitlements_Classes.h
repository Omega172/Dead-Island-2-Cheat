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
	 * Class GameEntitlements.GameEntitlementsDataTable
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UGameEntitlementsDataTable : public UDataTable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameEntitlements.GameEntitlementsManager
	 * Size -> 0x0428 (FullSize[0x06D8] - InheritedSize[0x02B0])
	 */
	class AGameEntitlementsManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_5Y8M[0x20];                                  // 0x02B0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<uint32_t, struct FGameEntitlementTableRowAndData>     GameEntitlements;                                        // 0x02D0(0x0050) NativeAccessSpecifierPrivate
		TArray<class UGameEntitlementsDataTable*>                  RegisteredTables;                                        // 0x0320(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FReplicatedGameEntitlementsArray                    RepGameEntitlements;                                     // 0x0338(0x0120) Net, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BT61[0x280];                                 // 0x0458(0x0280) MISSED OFFSET (PADDING)

	public:
		void RevokeEntitlementFromLocalPlayer(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle);
		void RevokeEntitlementFromAllPlayers(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle);
		void RevokeEntitlementFrom(class APlayerController* PlayerController, const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle);
		void RevokeEntitlement(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle);
		void RemoveEntitlementRevokedTableDelegateFor(class UGameEntitlementsDataTable* Table, const class FScriptDelegate& Delegate);
		void RemoveEntitlementRevokedDelegateFor(const struct FFixedDataTableEditableRowHandle& Row, const class FScriptDelegate& Delegate);
		void RemoveEntitlementGrantedTableListener(class UGameEntitlementsDataTable* DataTableToListenTo, const class FScriptDelegate& Callback);
		void RemoveEntitlementGrantedListener(const struct FFixedDataTableEditableRowHandle& RowToListenTo, const class FScriptDelegate& Callback);
		void RegisterGameEntitlementsDataTable(class UGameEntitlementsDataTable* GameEntitlementsDataTable);
		bool IsEntitlementGivenToLocalPlayer(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle);
		bool IsEntitlementGivenTo(class APlayerController* PlayerController, const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle);
		bool IsEntitlementGiven(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle);
		void GiveEntitlementToLocalPlayer(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle);
		void GiveEntitlementToAllPlayersWithCategory(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle, EGameEntitlementCategory Category);
		void GiveEntitlementToAllPlayers(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle);
		void GiveEntitlementTo(class APlayerController* PlayerController, const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle);
		void GiveEntitlement(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle);
		void AddEntitlementRevokedTableDelegateFor(class UGameEntitlementsDataTable* Table, const class FScriptDelegate& Delegate);
		void AddEntitlementRevokedDelegateFor(const struct FFixedDataTableEditableRowHandle& Row, const class FScriptDelegate& Delegate);
		void AddEntitlementGrantedTableListener(class UGameEntitlementsDataTable* DataTableToListenTo, const class FScriptDelegate& Callback);
		void AddEntitlementGrantedListener(const struct FFixedDataTableEditableRowHandle& RowToListenTo, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class GameEntitlements.GameEntitlementsManagerRuntimeState
	 * Size -> 0x00A0 (FullSize[0x00E8] - InheritedSize[0x0048])
	 */
	class UGameEntitlementsManagerRuntimeState : public UPersistentDataCollectionBase
	{
	public:
		TMap<class FName, struct FGrantedEntitlements>             GrantedEntitlements;                                     // 0x0048(0x0050) SaveGame, NativeAccessSpecifierPrivate
		TMap<class FName, struct FTrackedEntitlements>             TrackedEntitlements;                                     // 0x0098(0x0050) SaveGame, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameEntitlements.KnowledgeBaseExpressionBuilderObject_HasEntitlement
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UKnowledgeBaseExpressionBuilderObject_HasEntitlement : public UKnowledgeBaseExpressionBuilderObject
	{
	public:
		struct FDataTableRowHandle                                 EntitlementToCheck;                                      // 0x0068(0x0010) Edit, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
