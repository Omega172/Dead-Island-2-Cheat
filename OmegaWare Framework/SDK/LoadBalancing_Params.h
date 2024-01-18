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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function LoadBalancing.ObjectCountCoordinator.OnManagedObjectBudgetUpdated
	 */
	struct UObjectCountCoordinator_OnManagedObjectBudgetUpdated_Params
	{
	public:
		class ULoadBalancedFeature*                                Feature;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PreviousCount;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewCount;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LoadBalancing.LoadBalancingManager.UnregisterLoadBalancingFeature
	 */
	struct ALoadBalancingManager_UnregisterLoadBalancingFeature_Params
	{
	public:
		class ULoadBalancedFeature*                                Feature;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LoadBalancing.LoadBalancingManager.RegisterLoadBalancingFeature
	 */
	struct ALoadBalancingManager_RegisterLoadBalancingFeature_Params
	{
	public:
		class ULoadBalancedFeature*                                Feature;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LoadBalancing.ObjectBehaviourManager.OnManagedObjectBudgetUpdated
	 */
	struct AObjectBehaviourManager_OnManagedObjectBudgetUpdated_Params
	{
	public:
		class ULoadBalancedFeature*                                Feature;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PreviousCount;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewCount;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LoadBalancing.ObjectBudgetManager.OnManagedObjectBudgetUpdated
	 */
	struct AObjectBudgetManager_OnManagedObjectBudgetUpdated_Params
	{
	public:
		class ULoadBalancedFeature*                                Feature;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PreviousCount;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewCount;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LoadBalancing.ObjectScoreGenerator.GenerateScore
	 */
	struct UObjectScoreGenerator_GenerateScore_Params
	{
	public:
		struct FBudgetedObjectInfo                                 ObjectInfo;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          Viewport;                                                // 0x0050(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0080(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
