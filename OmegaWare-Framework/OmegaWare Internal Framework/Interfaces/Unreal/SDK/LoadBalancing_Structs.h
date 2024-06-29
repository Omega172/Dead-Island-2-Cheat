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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum LoadBalancing.EObjectCoordinatorRegistrationPolicy
	 */
	enum class EObjectCoordinatorRegistrationPolicy : uint8_t
	{
		RejectIfWouldExceedMaxCount = 0,
		AlwaysRegister              = 1,
		MAX                         = 2
	};

	/**
	 * Enum LoadBalancing.ESpatialCoordinatorRegistrationPolicy
	 */
	enum class ESpatialCoordinatorRegistrationPolicy : uint8_t
	{
		RejectIfWouldBeSpatiallyInactive = 0,
		AlwaysRegister                   = 1,
		MAX                              = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LoadBalancing.AmortizedUpdateAspect
	 * Size -> 0x0020
	 */
	struct FAmortizedUpdateAspect
	{
	public:
		TArray<class FName>                                        TickNames;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      MinTickRate;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSkippedFrames;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9XCL[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LoadBalancing.PrioritizedUpdate
	 * Size -> 0x0010
	 */
	struct FPrioritizedUpdate
	{
	public:
		class FName                                                TickName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpdateCostThreshold;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z20A[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LoadBalancing.BudgetRemapping
	 * Size -> 0x0020
	 */
	struct FBudgetRemapping
	{
	public:
		float                                                      InputValueStartRangeValue;                               // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InputValueEndRangeValue;                                 // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyToInputValuesOutsideRangeByClamping;               // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScaleUsingCurve;                                        // 0x0009(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_339Y[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OutputValueAtStartRange;                                 // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutputValueAtEndRange;                                   // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8B51[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         OutputRangeScalingCurve;                                 // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LoadBalancing.BudgetMappingSettings
	 * Size -> 0x0018
	 */
	struct FBudgetMappingSettings
	{
	public:
		bool                                                       bUseCustomScaling;                                       // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U457[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBudgetRemapping>                            Mappings;                                                // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LoadBalancing.ManagedObjectBehaviourCategorySettings
	 * Size -> 0x0020
	 */
	struct FManagedObjectBehaviourCategorySettings
	{
	public:
		class UPriorityOrderedObjectCountCoordinator*              ObjectCountCoordinator;                                  // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpatialObjectCoordinator*                           SpatialObjectCoordinator;                                // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaxCountEnforcementHandler*                         OnBecomeActiveProcess;                                   // 0x0010(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaxCountEnforcementHandler*                         OnBecomeInactiveProcess;                                 // 0x0018(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LoadBalancing.ObjectBehaviourCategoryController
	 * Size -> 0x02E8
	 */
	struct FObjectBehaviourCategoryController
	{
	public:
		unsigned char                                              UnknownData_BM5M[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPriorityOrderedObjectCountCoordinator*              ObjectCountCoordinator;                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaxCountEnforcementHandler*                         OnBecomeActiveProcess;                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaxCountEnforcementHandler*                         OnBecomeInactiveProcess;                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpatialObjectCoordinator*                           SpatialObjectCoordinator;                                // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SVOK[0x2C0];                                 // 0x0028(0x02C0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LoadBalancing.ManagedObjectCategorySettings
	 * Size -> 0x0018
	 */
	struct FManagedObjectCategorySettings
	{
	public:
		class UObjectCountCoordinator*                             ObjectCountCoordinator;                                  // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaxCountEnforcementHandler*                         MaxCountEnforcementHandler;                              // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpatialObjectCoordinator*                           SpatialObjectCoordinator;                                // 0x0010(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LoadBalancing.ObjectCategoryController
	 * Size -> 0x00E0
	 */
	struct FObjectCategoryController
	{
	public:
		class UObjectCountCoordinator*                             ObjectCountCoordinator;                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaxCountEnforcementHandler*                         MaxCountEnforcementHandler;                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpatialObjectCoordinator*                           SpatialObjectCoordinator;                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7EQV[0xC8];                                  // 0x0018(0x00C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LoadBalancing.AmortizedManagementTickFunction
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FAmortizedManagementTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_76RV[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LoadBalancing.AmortizedManagementLastTickFunction
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FAmortizedManagementLastTickFunction : public FAmortizedManagementTickFunction
	{	};

	/**
	 * ScriptStruct LoadBalancing.BudgetedObjectInfo
	 * Size -> 0x0050
	 */
	struct FBudgetedObjectInfo
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalizedObjectPriority;                                // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCritical;                                             // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3BSP[0x17];                                  // 0x0039(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LoadBalancing.BudgetedObjectRequest
	 * Size -> 0x0060
	 */
	struct FBudgetedObjectRequest
	{
	public:
		struct FBudgetedObjectInfo                                 Info;                                                    // 0x0000(0x0050) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CLTP[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LoadBalancing.ObjectBehaviourRequest
	 * Size -> 0x0070
	 */
	struct FObjectBehaviourRequest
	{
	public:
		struct FBudgetedObjectInfo                                 Info;                                                    // 0x0000(0x0050) Edit, NoDestructor, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              Object;                                                  // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FB5V[0x18];                                  // 0x0058(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
