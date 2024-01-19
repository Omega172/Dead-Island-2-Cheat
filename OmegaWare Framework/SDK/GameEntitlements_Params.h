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
	 * Function GameEntitlements.GameEntitlementsManager.RevokeEntitlementFromLocalPlayer
	 */
	struct AGameEntitlementsManager_RevokeEntitlementFromLocalPlayer_Params
	{
	public:
		struct FFixedDataTableEditableRowHandle                    GameEntitlementDefinitionHandle;                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.RevokeEntitlementFromAllPlayers
	 */
	struct AGameEntitlementsManager_RevokeEntitlementFromAllPlayers_Params
	{
	public:
		struct FFixedDataTableEditableRowHandle                    GameEntitlementDefinitionHandle;                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.RevokeEntitlementFrom
	 */
	struct AGameEntitlementsManager_RevokeEntitlementFrom_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFixedDataTableEditableRowHandle                    GameEntitlementDefinitionHandle;                         // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.RevokeEntitlement
	 */
	struct AGameEntitlementsManager_RevokeEntitlement_Params
	{
	public:
		struct FFixedDataTableEditableRowHandle                    GameEntitlementDefinitionHandle;                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.RemoveEntitlementRevokedTableDelegateFor
	 */
	struct AGameEntitlementsManager_RemoveEntitlementRevokedTableDelegateFor_Params
	{
	public:
		class UGameEntitlementsDataTable*                          Table;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.RemoveEntitlementRevokedDelegateFor
	 */
	struct AGameEntitlementsManager_RemoveEntitlementRevokedDelegateFor_Params
	{
	public:
		struct FFixedDataTableEditableRowHandle                    Row;                                                     // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.RemoveEntitlementGrantedTableListener
	 */
	struct AGameEntitlementsManager_RemoveEntitlementGrantedTableListener_Params
	{
	public:
		class UGameEntitlementsDataTable*                          DataTableToListenTo;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.RemoveEntitlementGrantedListener
	 */
	struct AGameEntitlementsManager_RemoveEntitlementGrantedListener_Params
	{
	public:
		struct FFixedDataTableEditableRowHandle                    RowToListenTo;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.RegisterGameEntitlementsDataTable
	 */
	struct AGameEntitlementsManager_RegisterGameEntitlementsDataTable_Params
	{
	public:
		class UGameEntitlementsDataTable*                          GameEntitlementsDataTable;                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.IsEntitlementGivenToLocalPlayer
	 */
	struct AGameEntitlementsManager_IsEntitlementGivenToLocalPlayer_Params
	{
	public:
		struct FFixedDataTableEditableRowHandle                    GameEntitlementDefinitionHandle;                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.IsEntitlementGivenTo
	 */
	struct AGameEntitlementsManager_IsEntitlementGivenTo_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFixedDataTableEditableRowHandle                    GameEntitlementDefinitionHandle;                         // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.IsEntitlementGiven
	 */
	struct AGameEntitlementsManager_IsEntitlementGiven_Params
	{
	public:
		struct FFixedDataTableEditableRowHandle                    GameEntitlementDefinitionHandle;                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.GiveEntitlementToLocalPlayer
	 */
	struct AGameEntitlementsManager_GiveEntitlementToLocalPlayer_Params
	{
	public:
		struct FFixedDataTableEditableRowHandle                    GameEntitlementDefinitionHandle;                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.GiveEntitlementToAllPlayersWithCategory
	 */
	struct AGameEntitlementsManager_GiveEntitlementToAllPlayersWithCategory_Params
	{
	public:
		struct FFixedDataTableEditableRowHandle                    GameEntitlementDefinitionHandle;                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameEntitlementCategory                                   Category;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.GiveEntitlementToAllPlayers
	 */
	struct AGameEntitlementsManager_GiveEntitlementToAllPlayers_Params
	{
	public:
		struct FFixedDataTableEditableRowHandle                    GameEntitlementDefinitionHandle;                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.GiveEntitlementTo
	 */
	struct AGameEntitlementsManager_GiveEntitlementTo_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFixedDataTableEditableRowHandle                    GameEntitlementDefinitionHandle;                         // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.GiveEntitlement
	 */
	struct AGameEntitlementsManager_GiveEntitlement_Params
	{
	public:
		struct FFixedDataTableEditableRowHandle                    GameEntitlementDefinitionHandle;                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.AddEntitlementRevokedTableDelegateFor
	 */
	struct AGameEntitlementsManager_AddEntitlementRevokedTableDelegateFor_Params
	{
	public:
		class UGameEntitlementsDataTable*                          Table;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.AddEntitlementRevokedDelegateFor
	 */
	struct AGameEntitlementsManager_AddEntitlementRevokedDelegateFor_Params
	{
	public:
		struct FFixedDataTableEditableRowHandle                    Row;                                                     // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.AddEntitlementGrantedTableListener
	 */
	struct AGameEntitlementsManager_AddEntitlementGrantedTableListener_Params
	{
	public:
		class UGameEntitlementsDataTable*                          DataTableToListenTo;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEntitlements.GameEntitlementsManager.AddEntitlementGrantedListener
	 */
	struct AGameEntitlementsManager_AddEntitlementGrantedListener_Params
	{
	public:
		struct FFixedDataTableEditableRowHandle                    RowToListenTo;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
