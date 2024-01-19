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
	 * Class NavigationSystem.NavRelevantComponent
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	class UNavRelevantComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_Z9AD[0x24];                                  // 0x00E8(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAttachToOwnersRoot : 1;                                 // 0x010C(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LFBJ[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CachedNavParent;                                         // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetNavigationRelevancy(bool bRelevant);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UNavArea : public UNavAreaBase
	{
	public:
		float                                                      DefaultCost;                                             // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FixedAreaEnteringCost;                                   // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FColor                                              DrawColor;                                               // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNavAgentSelector                                   SupportedAgents;                                         // 0x003C(0x0004) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent0 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent1 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent2 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent3 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent4 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent5 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent6 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent7 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent8 : 1;                                     // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent9 : 1;                                     // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent10 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent11 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent12 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent13 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent14 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsAgent15 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YAQN[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationQueryFilter
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UNavigationQueryFilter : public UObject
	{
	public:
		TArray<struct FNavigationFilterArea>                       Areas;                                                   // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FNavigationFilterFlags                              IncludeFlags;                                            // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FNavigationFilterFlags                              ExcludeFlags;                                            // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_009O[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavMeshRenderingComponent
	 * Size -> 0x0010 (FullSize[0x0540] - InheritedSize[0x0530])
	 */
	class UNavMeshRenderingComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_99HD[0x10];                                  // 0x0530(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavModifierComponent
	 * Size -> 0x0068 (FullSize[0x0180] - InheritedSize[0x0118])
	 */
	class UNavModifierComponent : public UNavRelevantComponent
	{
	public:
		class UClass*                                              AreaClass;                                               // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FailsafeExtent;                                          // 0x0120(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeAgentHeight : 1;                                 // 0x012C(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NHV[0x53];                                  // 0x012D(0x0053) MISSED OFFSET (PADDING)

	public:
		void SetAreaClass(class UClass* NewAreaClass);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationData
	 * Size -> 0x01E0 (FullSize[0x0490] - InheritedSize[0x02B0])
	 */
	class ANavigationData : public AActor
	{
	public:
		unsigned char                                              UnknownData_Q6ZO[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 RenderingComp;                                           // 0x02B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNavDataConfig                                      NavDataConfig;                                           // 0x02C0(0x0078) Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableDrawing : 1;                                      // 0x0338(0x0001) BIT_FIELD Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bForceRebuildOnLoad : 1;                                 // 0x0338(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoDestroyWhenNoNavigation : 1;                        // 0x0338(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanBeMainNavData : 1;                                   // 0x0338(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanSpawnOnRebuild : 1;                                  // 0x0338(0x0001) BIT_FIELD Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRebuildAtRuntime : 1;                                   // 0x0338(0x0001) BIT_FIELD Config, Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MNRU[0x3];                                   // 0x0339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ERuntimeGenerationType                                     RuntimeGeneration;                                       // 0x033C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M2A1[0x3];                                   // 0x033D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ObservedPathsTickInterval;                               // 0x0340(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint32_t                                                   DataVersion;                                             // 0x0344(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IBIB[0xE0];                                  // 0x0348(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSupportedAreaData>                          SupportedAreas;                                          // 0x0428(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H68P[0x58];                                  // 0x0438(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.RecastNavMesh
	 * Size -> 0x00B8 (FullSize[0x0548] - InheritedSize[0x0490])
	 */
	class ARecastNavMesh : public ANavigationData
	{
	public:
		bool                                                       bDrawTriangleEdges : 1;                                  // 0x0490(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawPolyEdges : 1;                                      // 0x0490(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawFilledPolys : 1;                                    // 0x0490(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawNavMeshEdges : 1;                                   // 0x0490(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawTileBounds : 1;                                     // 0x0490(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawPathCollidingGeometry : 1;                          // 0x0490(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawTileLabels : 1;                                     // 0x0490(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawPolygonLabels : 1;                                  // 0x0490(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawDefaultPolygonCost : 1;                             // 0x0491(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawLabelsOnPathNodes : 1;                              // 0x0491(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawNavLinks : 1;                                       // 0x0491(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawFailedNavLinks : 1;                                 // 0x0491(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawClusters : 1;                                       // 0x0491(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawOctree : 1;                                         // 0x0491(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawOctreeDetails : 1;                                  // 0x0491(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawMarkedForbiddenPolys : 1;                           // 0x0491(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDistinctlyDrawTilesBeingBuilt : 1;                      // 0x0492(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawNavMesh : 1;                                        // 0x0492(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QMZF[0x1];                                   // 0x0493(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrawOffset;                                              // 0x0494(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFixedTilePoolSize : 1;                                  // 0x0498(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1S81[0x3];                                   // 0x0499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TilePoolSize;                                            // 0x049C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileSizeUU;                                              // 0x04A0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellSize;                                                // 0x04A4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellHeight;                                              // 0x04A8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentRadius;                                             // 0x04AC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentHeight;                                             // 0x04B0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentMaxHeight;                                          // 0x04B4(0x0004) Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentMaxSlope;                                           // 0x04B8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentMaxStepHeight;                                      // 0x04BC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRegionArea;                                           // 0x04C0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MergeRegionSize;                                         // 0x04C4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSimplificationError;                                  // 0x04C8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSimultaneousTileGenerationJobsCount;                  // 0x04CC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TileNumberHardLimit;                                     // 0x04D0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PolyRefTileBits;                                         // 0x04D4(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PolyRefNavPolyBits;                                      // 0x04D8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PolyRefSaltBits;                                         // 0x04DC(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NavMeshOriginOffset;                                     // 0x04E0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultDrawDistance;                                     // 0x04EC(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultMaxSearchNodes;                                   // 0x04F0(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultMaxHierarchicalSearchNodes;                       // 0x04F4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERecastPartitioning                                        RegionPartitioning;                                      // 0x04F8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERecastPartitioning                                        LayerPartitioning;                                       // 0x04F9(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HSL2[0x2];                                   // 0x04FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RegionChunkSplits;                                       // 0x04FC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LayerChunkSplits;                                        // 0x0500(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSortNavigationAreasByCost : 1;                          // 0x0504(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPerformVoxelFiltering : 1;                              // 0x0504(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMarkLowHeightAreas : 1;                                 // 0x0504(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFilterLowSpanSequences : 1;                             // 0x0504(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFilterLowSpanFromTileCache : 1;                         // 0x0504(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoFullyAsyncNavDataGathering : 1;                       // 0x0504(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBetterOffsetsFromCorners : 1;                        // 0x0504(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStoreEmptyTileLayers : 1;                               // 0x0504(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVirtualFilters : 1;                                  // 0x0505(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowNavLinkAsPathEnd : 1;                              // 0x0505(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVoxelCache : 1;                                      // 0x0505(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0NW0[0x2];                                   // 0x0506(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TileSetUpdateInterval;                                   // 0x0508(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      HeuristicScale;                                          // 0x050C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalDeviationFromGroundCompensation;                 // 0x0510(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3D9S[0x34];                                  // 0x0514(0x0034) MISSED OFFSET (PADDING)

	public:
		bool K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.AbstractNavData
	 * Size -> 0x0000 (FullSize[0x0490] - InheritedSize[0x0490])
	 */
	class AAbstractNavData : public ANavigationData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.CrowdManagerBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCrowdManagerBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea_Default
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavArea_Default : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea_LowHeight
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavArea_LowHeight : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea_Null
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavArea_Null : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea_Obstacle
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavArea_Obstacle : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavAreaMeta
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavAreaMeta : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavAreaMeta_SwitchByAgent
	 * Size -> 0x0080 (FullSize[0x00C8] - InheritedSize[0x0048])
	 */
	class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
	{
	public:
		class UClass*                                              Agent0Area;                                              // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent1Area;                                              // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent2Area;                                              // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent3Area;                                              // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent4Area;                                              // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent5Area;                                              // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent6Area;                                              // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent7Area;                                              // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent8Area;                                              // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent9Area;                                              // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent10Area;                                             // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent11Area;                                             // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent12Area;                                             // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent13Area;                                             // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent14Area;                                             // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent15Area;                                             // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavCollision
	 * Size -> 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
	 */
	class UNavCollision : public UNavCollisionBase
	{
	public:
		unsigned char                                              UnknownData_0QF0[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNavCollisionCylinder>                       CylinderCollision;                                       // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNavCollisionBox>                            BoxCollision;                                            // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              AreaClass;                                               // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGatherConvexGeometry : 1;                               // 0x00A8(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreateOnClient : 1;                                     // 0x00A8(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNX7[0x2F];                                  // 0x00A9(0x002F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationGraph
	 * Size -> 0x0000 (FullSize[0x0490] - InheritedSize[0x0490])
	 */
	class ANavigationGraph : public ANavigationData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationGraphNode
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class ANavigationGraphNode : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationGraphNodeComponent
	 * Size -> 0x0030 (FullSize[0x02C0] - InheritedSize[0x0290])
	 */
	class UNavigationGraphNodeComponent : public USceneComponent
	{
	public:
		struct FNavGraphNode                                       Node;                                                    // 0x0290(0x0018) NativeAccessSpecifierPublic
		class UNavigationGraphNodeComponent*                       NextNodeComponent;                                       // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNavigationGraphNodeComponent*                       PrevNodeComponent;                                       // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2ES[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationInvokerComponent
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UNavigationInvokerComponent : public UActorComponent
	{
	public:
		float                                                      TileGenerationRadius;                                    // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TileRemovalRadius;                                       // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationPath
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UNavigationPath : public UObject
	{
	public:
		class FScriptMulticastDelegate                             PathUpdatedNotifier;                                     // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PathPoints;                                              // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		ENavigationOptionFlag                                      RecalculateOnInvalidation;                               // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOYM[0x3F];                                  // 0x0049(0x003F) MISSED OFFSET (PADDING)

	public:
		bool IsValid();
		bool IsStringPulled();
		bool IsPartial();
		float GetPathLength();
		float GetPathCost();
		class FString GetDebugString();
		void EnableRecalculationOnInvalidation(ENavigationOptionFlag DoRecalculation);
		void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationPathGenerator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNavigationPathGenerator : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationSystemV1
	 * Size -> 0x0530 (FullSize[0x0558] - InheritedSize[0x0028])
	 */
	class UNavigationSystemV1 : public UNavigationSystemBase
	{
	public:
		class ANavigationData*                                     MainNavData;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ANavigationData*                                     AbstractNavData;                                         // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DefaultAgentName;                                        // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              CrowdManagerClass[0x28];                                 // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       bAutoCreateNavigationData : 1;                           // 0x0068(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSpawnNavDataInNavBoundsLevel : 1;                       // 0x0068(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowClientSideNavigation : 1;                          // 0x0068(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShouldDiscardSubLevelNavData : 1;                       // 0x0068(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTickWhilePaused : 1;                                    // 0x0068(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSupportRebuilding : 1;                                  // 0x0068(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInitialBuildingLocked : 1;                              // 0x0068(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UnknownData_W0LS : 1;                                    // 0x0068(0x0001) BIT_FIELD (PADDING)
		bool                                                       bSkipAgentHeightCheckWhenPickingNavData : 1;             // 0x0069(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVOT[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      NavDataClassName;                                        // 0x0070(0x0018) Edit, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bConfigureAsStatic;                                      // 0x0088(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ENavDataGatheringModeConfig                                DataGatheringMode;                                       // 0x0089(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CHCB[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bGenerateNavigationOnlyAroundNavigationInvokers : 1;     // 0x008C(0x0001) BIT_FIELD Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W441[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ActiveTilesUpdateInterval;                               // 0x0090(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YDQQ[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNavDataConfig>                              SupportedAgents;                                         // 0x0098(0x0010) Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		struct FNavAgentSelector                                   SupportedAgentsMask;                                     // 0x00A8(0x0004) Edit, Config, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_41I1[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ANavigationData*>                             NavDataSet;                                              // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class ANavigationData*>                             NavDataRegistrationQueue;                                // 0x00C0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LAR2[0x10];                                  // 0x00D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNavDataRegisteredEvent;                                // 0x00E0(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNavigationGenerationFinishedDelegate;                  // 0x00F0(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JCR9[0xDC];                                  // 0x0100(0x00DC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFNavigationSystemRunMode                                  OperationMode;                                           // 0x01DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_URQ2[0x357];                                 // 0x01DD(0x0357) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DirtyAreasUpdateFreq;                                    // 0x0534(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L3J4[0x20];                                  // 0x0538(0x0020) MISSED OFFSET (PADDING)

	public:
		void UnregisterNavigationInvoker(class AActor* Invoker);
		void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
		void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
		void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);
		void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);
		void ResetMaxSimultaneousTileGenerationJobsCount();
		void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
		struct FVector STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
		void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
		bool STATIC_NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector* HitLocation, class UClass* FilterClass, class AController* Querier);
		bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);
		bool STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent, bool bNearestDistance2D);
		bool STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
		bool STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
		bool STATIC_K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
		bool STATIC_IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
		bool STATIC_IsNavigationBeingBuilt(class UObject* WorldContextObject);
		struct FVector STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
		struct FVector STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
		ENavigationQueryResult STATIC_GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathLength, class ANavigationData* NavData, class UClass* FilterClass);
		ENavigationQueryResult STATIC_GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathCost, class ANavigationData* NavData, class UClass* FilterClass);
		class UNavigationSystemV1* STATIC_GetNavigationSystem(class UObject* WorldContextObject);
		class UNavigationPath* STATIC_FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass);
		class UNavigationPath* STATIC_FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationSystemModuleConfig
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UNavigationSystemModuleConfig : public UNavigationSystemConfig
	{
	public:
		bool                                                       bStrictlyStatic : 1;                                     // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCreateOnClient : 1;                                     // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoSpawnMissingNavData : 1;                            // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSpawnNavDataInNavBoundsLevel : 1;                       // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5EWS[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationTestingActor
	 * Size -> 0x00F0 (FullSize[0x03A0] - InheritedSize[0x02B0])
	 */
	class ANavigationTestingActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_ATXZ[0x10];                                  // 0x02B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCapsuleComponent*                                   CapsuleComponent;                                        // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNavigationInvokerComponent*                         InvokerComponent;                                        // 0x02C8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bActAsNavigationInvoker : 1;                             // 0x02D0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MRMU[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNavAgentProperties                                 NavAgentProps;                                           // 0x02D8(0x0030) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             QueryingExtent;                                          // 0x0308(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G62G[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANavigationData*                                     MyNavData;                                               // 0x0318(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ProjectedLocation;                                       // 0x0320(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProjectedLocationValid : 1;                             // 0x032C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSearchStart : 1;                                        // 0x032C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q612[0x3];                                   // 0x032D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CostLimitFactor;                                         // 0x0330(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumCostLimit;                                        // 0x0334(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBacktracking : 1;                                       // 0x0338(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHierarchicalPathfinding : 1;                         // 0x0338(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGatherDetailedInfo : 1;                                 // 0x0338(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawDistanceToWall : 1;                                 // 0x0338(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowNodePool : 1;                                       // 0x0338(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowBestPath : 1;                                       // 0x0338(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDiffWithPreviousStep : 1;                           // 0x0338(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldBeVisibleInGame : 1;                              // 0x0338(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQXC[0x3];                                   // 0x0339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENavCostDisplay                                            CostDisplayMode;                                         // 0x033C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q1AW[0x3];                                   // 0x033D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           TextCanvasOffset;                                        // 0x0340(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPathExist : 1;                                          // 0x0348(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPathIsPartial : 1;                                      // 0x0348(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPathSearchOutOfNodes : 1;                               // 0x0348(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5DM8[0x3];                                   // 0x0349(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PathfindingTime;                                         // 0x034C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PathCost;                                                // 0x0350(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PathfindingSteps;                                        // 0x0354(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ANavigationTestingActor*                             OtherActor;                                              // 0x0358(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              FilterClass;                                             // 0x0360(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShowStepIndex;                                           // 0x0368(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetFromCornersDistance;                               // 0x036C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZPM9[0x30];                                  // 0x0370(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkComponent
	 * Size -> 0x0020 (FullSize[0x0550] - InheritedSize[0x0530])
	 */
	class UNavLinkComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_TQ0E[0x8];                                   // 0x0530(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNavigationLink>                             Links;                                                   // 0x0538(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VWZK[0x8];                                   // 0x0548(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkCustomComponent
	 * Size -> 0x00B0 (FullSize[0x01C8] - InheritedSize[0x0118])
	 */
	class UNavLinkCustomComponent : public UNavRelevantComponent
	{
	public:
		unsigned char                                              UnknownData_2MTO[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   NavLinkUserId;                                           // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XURX[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              EnabledAreaClass;                                        // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DisabledAreaClass;                                       // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNavAgentSelector                                   SupportedAgents;                                         // 0x0138(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             LinkRelativeStart;                                       // 0x013C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             LinkRelativeEnd;                                         // 0x0148(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ENavLinkDirection                                          LinkDirection;                                           // 0x0154(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XKAK[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLinkEnabled : 1;                                        // 0x0158(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNotifyWhenEnabled : 1;                                  // 0x0158(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNotifyWhenDisabled : 1;                                 // 0x0158(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCreateBoxObstacle : 1;                                  // 0x0158(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MQSN[0x3];                                   // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ObstacleOffset;                                          // 0x015C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ObstacleExtent;                                          // 0x0168(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BRGT[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ObstacleAreaClass;                                       // 0x0178(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BroadcastRadius;                                         // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BroadcastInterval;                                       // 0x0184(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECollisionChannel                                          BroadcastChannel;                                        // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HZGZ[0x3F];                                  // 0x0189(0x003F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkCustomInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNavLinkCustomInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkHostInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNavLinkHostInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkRenderingComponent
	 * Size -> 0x0000 (FullSize[0x0530] - InheritedSize[0x0530])
	 */
	class UNavLinkRenderingComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkTrivial
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UNavLinkTrivial : public UNavLinkDefinition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavMeshBoundsVolume
	 * Size -> 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
	 */
	class ANavMeshBoundsVolume : public AVolume
	{
	public:
		struct FNavAgentSelector                                   SupportedAgents;                                         // 0x02E8(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UBXT[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavModifierVolume
	 * Size -> 0x0010 (FullSize[0x02F8] - InheritedSize[0x02E8])
	 */
	class ANavModifierVolume : public AVolume
	{
	public:
		unsigned char                                              UnknownData_WAYJ[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AreaClass;                                               // 0x02F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetAreaClass(class UClass* NewAreaClass);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavNodeInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNavNodeInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavSystemConfigOverride
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class ANavSystemConfigOverride : public AActor
	{
	public:
		class UNavigationSystemConfig*                             NavigationSystemConfig;                                  // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ENavSystemOverridePolicy                                   OverridePolicy;                                          // 0x02B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLoadOnClient : 1;                                       // 0x02B9(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2171[0x6];                                   // 0x02BA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavTestRenderingComponent
	 * Size -> 0x0000 (FullSize[0x0530] - InheritedSize[0x0530])
	 */
	class UNavTestRenderingComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.RecastFilter_UseDefaultArea
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.RecastNavMeshDataChunk
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class URecastNavMeshDataChunk : public UNavigationDataChunk
	{
	public:
		unsigned char                                              UnknownData_KD1U[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
