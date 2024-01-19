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
	 * Class SectorSystem.SectorBreadcrumbTrail
	 * Size -> 0x0160 (FullSize[0x0188] - InheritedSize[0x0028])
	 */
	class USectorBreadcrumbTrail : public UObject
	{
	public:
		unsigned char                                              UnknownData_YHW0[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPathfindingResultWrapper                           PathWrapper;                                             // 0x0078(0x0018) ContainsInstancedReference, NativeAccessSpecifierPrivate
		float                                                      DistanceFromPlayerThresholdInMeters;                     // 0x0090(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TCVW[0xF4];                                  // 0x0094(0x00F4) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SectorSystem.SectorData
	 * Size -> 0x0068 (FullSize[0x0110] - InheritedSize[0x00A8])
	 */
	class USectorData : public UGameAreaData
	{
	public:
		struct FDataTableRowHandle                                 SectorName;                                              // 0x00A8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FFixedDataTableEditableRowHandle                    SectorGroup;                                             // 0x00B8(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseForGatewayPathfinding;                               // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGD5[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     SectorGroupsTable;                                       // 0x00D8(0x0018) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IE4N[0x20];                                  // 0x00F0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SectorSystem.SectorDatabaseData
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class USectorDatabaseData : public UGlobalActorDatabaseData
	{
	public:
		struct FDataTableRowHandle                                 SectorNameHandle;                                        // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FFixedDataTableEditableRowHandle                    SectorGroupHandle;                                       // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VWKN[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SectorSystem.SectorGateway
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class ASectorGateway : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SectorSystem.SectorGatewayComponent
	 * Size -> 0x0190 (FullSize[0x0420] - InheritedSize[0x0290])
	 */
	class USectorGatewayComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_7R09[0x10];                                  // 0x0290(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDSActorPicker                                      SectorActorA;                                            // 0x02A0(0x0078) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate
		struct FDSActorPicker                                      SectorActorB;                                            // 0x0318(0x0078) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate
		EEdgeDirection                                             LinkDirection;                                           // 0x0390(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowBreadcrumbIcon;                                     // 0x0391(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BSEO[0x6];                                   // 0x0392(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScopedKnowledgeBaseExpressionListener              AddDisableReasonExpression;                              // 0x0398(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FConditionalSectorGatewayWeightMultiplier>   ConditionalWeightMultipliers;                            // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class URequirementsContainer*                              DisableReasons;                                          // 0x0408(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CurrentWeightMultiplierValue;                            // 0x0410(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LIZP[0xC];                                   // 0x0414(0x000C) MISSED OFFSET (PADDING)

	public:
		void RemoveDisableReason(const class FName& Reason);
		bool IsDisabled();
		void InternalOnDisableReasonsCleared();
		void InternalOnDisableReasonsActivated();
		void AddDisableReason(const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class SectorSystem.SectorGroupingArea
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class USectorGroupingArea : public UGameAreaData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SectorSystem.SectorManager
	 * Size -> 0x00F8 (FullSize[0x0440] - InheritedSize[0x0348])
	 */
	class ASectorManager : public AGameAreaManager
	{
	public:
		unsigned char                                              UnknownData_L1E8[0xF8];                                  // 0x0348(0x00F8) MISSED OFFSET (PADDING)

	public:
		class ASectorManager* STATIC_Get(class UWorld* World);
		static UClass* StaticClass();
	};

	/**
	 * Class SectorSystem.SectorTrackerComponent
	 * Size -> 0x0110 (FullSize[0x01F8] - InheritedSize[0x00E8])
	 */
	class USectorTrackerComponent : public UActorComponent
	{
	public:
		TWeakObjectPtr<class ASectorManager>                       SectorManager;                                           // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LFXG[0x38];                                  // 0x00F0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USectorTrackerPersistentState*                       VisitedSectorsOwners;                                    // 0x0128(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N4HV[0xC8];                                  // 0x0130(0x00C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SectorSystem.SectorTrackerPersistentState
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class USectorTrackerPersistentState : public UPersistentDataCollectionBase
	{
	public:
		TArray<class FString>                                      Owners;                                                  // 0x0048(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
