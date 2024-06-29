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
	 * Class LoadBalancing.SpatialObjectCoordinator
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class USpatialObjectCoordinator : public UObject
	{
	public:
		unsigned char                                              UnknownData_HCO5[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.2DGridSpatialObjectCoordinator
	 * Size -> 0x0270 (FullSize[0x02B8] - InheritedSize[0x0048])
	 */
	class U2DGridSpatialObjectCoordinator : public USpatialObjectCoordinator
	{
	public:
		unsigned char                                              UnknownData_LIQU[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GridCellSize;                                            // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTreatAllCellsAsActive;                                  // 0x0054(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LL8X[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActiveCellCalculator*                               ActiveCellCalculator;                                    // 0x0058(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInSecondsBetweenRecalculateActiveCells;              // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0PWE[0x254];                                 // 0x0064(0x0254) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.ActiveCellCalculator
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UActiveCellCalculator : public UObject
	{
	public:
		bool                                                       bLocalUserOnly;                                          // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A90R[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.DistanceFromNearestCameraActiveCellCalculator
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UDistanceFromNearestCameraActiveCellCalculator : public UActiveCellCalculator
	{
	public:
		float                                                      GridCellActivationRange;                                 // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5MN[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.AmortizedUpdateManager
	 * Size -> 0x0240 (FullSize[0x04F0] - InheritedSize[0x02B0])
	 */
	class AAmortizedUpdateManager : public AInfo
	{
	public:
		TMap<class FName, struct FAmortizedUpdateAspect>           Aspects;                                                 // 0x02B0(0x0050) Edit, NativeAccessSpecifierPublic
		TArray<struct FPrioritizedUpdate>                          PrioritizedUpdates;                                      // 0x0300(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    MaxSuccessiveSuppressedUpdates;                          // 0x0310(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82G3[0x1DC];                                 // 0x0314(0x01DC) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.MaxCountEnforcementHandler
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMaxCountEnforcementHandler : public UObject
	{
	public:
		unsigned char                                              UnknownData_KV0B[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.DestroyObjectsMaxCountEnforcementHandler
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDestroyObjectsMaxCountEnforcementHandler : public UMaxCountEnforcementHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.ObjectCountCoordinator
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UObjectCountCoordinator : public UObject
	{
	public:
		unsigned char                                              UnknownData_JTIU[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnScalableCountUpdated;                                  // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UScalableCountLoadBalancedFeature*                   ScalableCount;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U1XZ[0x58];                                  // 0x0050(0x0058) MISSED OFFSET (PADDING)

	public:
		void OnManagedObjectBudgetUpdated(class ULoadBalancedFeature* Feature, int32_t PreviousCount, int32_t NewCount);
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.FIFOObjectCountCoordinator
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UFIFOObjectCountCoordinator : public UObjectCountCoordinator
	{
	public:
		unsigned char                                              UnknownData_ML71[0x10];                                  // 0x00A8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.LoadBalancedFeature
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class ULoadBalancedFeature : public UObject
	{
	public:
		class FName                                                FeatureName;                                             // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCurrentFeatureBudgetUpdated;                           // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATHS[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.LoadBalancingManager
	 * Size -> 0x01B0 (FullSize[0x0460] - InheritedSize[0x02B0])
	 */
	class ALoadBalancingManager : public AInfo
	{
	public:
		float                                                      SampleWindowTimeInSeconds;                               // 0x02B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SampleFrequencySeconds;                                  // 0x02B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FBudgetMappingSettings>           FeatureBudgetMappings;                                   // 0x02B8(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FBudgetMappingSettings                              DefaultBudgetMapping;                                    // 0x0308(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FBudgetRemapping                                    GameThreadLengthToMasterBudgetMapping;                   // 0x0320(0x0020) NoDestructor, NativeAccessSpecifierPublic
		struct FBudgetRemapping                                    TotalAICostToMasterBudgetMapping;                        // 0x0340(0x0020) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8DOW[0x100];                                 // 0x0360(0x0100) MISSED OFFSET (PADDING)

	public:
		void UnregisterLoadBalancingFeature(class ULoadBalancedFeature* Feature);
		void RegisterLoadBalancingFeature(class ULoadBalancedFeature* Feature);
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.ObjectBehaviourComponent
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UObjectBehaviourComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             ObjectBehaviourChanged;                                  // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                CategoryName;                                            // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.ObjectBehaviourManager
	 * Size -> 0x00A8 (FullSize[0x0358] - InheritedSize[0x02B0])
	 */
	class AObjectBehaviourManager : public AInfo
	{
	public:
		TMap<class FName, struct FManagedObjectBehaviourCategorySettings> ManagedObjectBehaviourCategories;                        // 0x02B0(0x0050) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<class FName, struct FObjectBehaviourCategoryController> ObjectBehaviourControllers;                              // 0x0300(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G6PU[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnManagedObjectBudgetUpdated(class ULoadBalancedFeature* Feature, int32_t PreviousCount, int32_t NewCount);
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.ObjectBudgetManager
	 * Size -> 0x00A8 (FullSize[0x0358] - InheritedSize[0x02B0])
	 */
	class AObjectBudgetManager : public AInfo
	{
	public:
		TMap<class FName, struct FManagedObjectCategorySettings>   ManagedObjectCategories;                                 // 0x02B0(0x0050) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<class FName, struct FObjectCategoryController>        ObjectCategoryControllers;                               // 0x0300(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HCG8[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnManagedObjectBudgetUpdated(class ULoadBalancedFeature* Feature, int32_t PreviousCount, int32_t NewCount);
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.PriorityOrderedObjectCountCoordinator
	 * Size -> 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
	 */
	class UPriorityOrderedObjectCountCoordinator : public UObjectCountCoordinator
	{
	public:
		class UObjectScoreGenerator*                               ScoreGenerator;                                          // 0x00A8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecalculateScoresOfRegisteredObjectsOnNewObjectRegistration; // 0x00B0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecalculateScoresOfRegisteredObjectsAtFixedTimeInterval; // 0x00B1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YI4[0x2];                                   // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeInSecondsBetweenRecalculations;                      // 0x00B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FavourExistingObjectsScoreMultiplier;                    // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRejectZeroScoreObjects;                                 // 0x00BC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KD6Y[0x33];                                  // 0x00BD(0x0033) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.ObjectScoreGenerator
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UObjectScoreGenerator : public UObject
	{
	public:
		bool                                                       bLocalUserOnly;                                          // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4GNL[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		float GenerateScore(const struct FBudgetedObjectInfo& ObjectInfo, struct FTransform* Viewport);
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.DistanceToClosestCameraScoreGenerator
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UDistanceToClosestCameraScoreGenerator : public UObjectScoreGenerator
	{
	public:
		float                                                      ScoreFalloffStartDistance;                               // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScoreFalloffEndDistance;                                 // 0x0034(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScoreAtStartDistance;                                    // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScoreAtEndDistance;                                      // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BiasForwardConeDegrees;                                  // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BiasForwardConeExternalScoreMultiplier;                  // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUWS[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LoadBalancing.ScalableCountLoadBalancedFeature
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	class UScalableCountLoadBalancedFeature : public ULoadBalancedFeature
	{
	public:
		class FScriptMulticastDelegate                             OnScalableCountUpdated;                                  // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RAUA[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
