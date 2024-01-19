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
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.CleanUpActivity
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_CleanUpActivity_Params
	{	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.UpdateActorsToIgnoreForHandsTraceTesting
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_UpdateActorsToIgnoreForHandsTraceTesting_Params
	{	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.SetActorsToIgnoreTraceTests
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_SetActorsToIgnoreTraceTests_Params
	{	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.GetAttachmentActors
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_GetAttachmentActors_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.DebugForTracing
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_DebugForTracing_Params
	{
	public:
		EDrawDebugTrace                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WNIO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.DSLogCombatTargetWithinDistanceOfActivity
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_DSLogCombatTargetWithinDistanceOfActivity_Params
	{
	public:
		bool                                                       WithinAcceptableDistance;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VE9M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DebugDuration;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.DSLogActivityFacingAngle
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_DSLogActivityFacingAngle_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PWOH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentFacingDegree;                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxFacingDegree;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DebugDuration;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.RemoveWallHeightFact
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_RemoveWallHeightFact_Params
	{	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.AddWallHeightFact
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_AddWallHeightFact_Params
	{
	public:
		struct FVector                                             ImpactPoint;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.FindAndGetCentralWallData
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_FindAndGetCentralWallData_Params
	{
	public:
		struct FRotator                                            WallSearchRotation;                                      // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_61AF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Distance;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ImpactPoint;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ImpactNormal;                                            // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.GetTraceLocationsForHands
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_GetTraceLocationsForHands_Params
	{
	public:
		struct FVector                                             StartLocationOffset;                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndLocationOffset;                                       // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LeftHand;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HHFN[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             StartLocation;                                           // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndLocation;                                             // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.GetWallSearchDirection
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_GetWallSearchDirection_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.CheckCombatTargetsHeightConditions
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_CheckCombatTargetsHeightConditions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.OnOpenableStateChanged
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_OnOpenableStateChanged_Params
	{
	public:
		EOpenableState                                             NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.OnNavigationStateChanged
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_OnNavigationStateChanged_Params
	{
	public:
		class UNavBarrierComponent*                                NavBarrier;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                OldState;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewState;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.UnbindMoveableSurfaceEvents
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_UnbindMoveableSurfaceEvents_Params
	{	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.BindMoveableSurfaceEvents
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_BindMoveableSurfaceEvents_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.OnBeginEarly
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.IsCombatTargetWithinFacingAngleOfPotentialActivity
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_IsCombatTargetWithinFacingAngleOfPotentialActivity_Params
	{
	public:
		struct FRotator                                            WallSearchRotation;                                      // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WallCentreImpactLocation;                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxFacingDegree;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.FindAndGetWallData
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_FindAndGetWallData_Params
	{
	public:
		struct FVector                                             StartLocationOffset;                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndLocationOffset;                                       // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            DirectionRotation;                                       // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECharacterBodyPartHeights                                  BodyPartOrigin;                                          // 0x0024(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7ZWG[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      SphereRadius;                                            // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X2S8[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Distance;                                                // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ImpactPoint;                                             // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ImpactNormal;                                            // 0x0040(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GZYK[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.GetWallSearchLocation
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_GetWallSearchLocation_Params
	{
	public:
		struct FRotator                                            DirectionRotation;                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECharacterBodyPartHeights                                  BodyPartOrigin;                                          // 0x000C(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6CDL[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            SearchDirection;                                         // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3E8X[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.SpawnActivity
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_SpawnActivity_Params
	{
	public:
		struct FVector                                             WallCentreLocation;                                      // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WallCentreImpactNormal;                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_Activity_BangOnSurface_CannotReachTarget_C*      Activity;                                                // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZXJ6[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.CheckForCharacterCollisions
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_CheckForCharacterCollisions_Params
	{
	public:
		bool                                                       NoOverlap;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QRSP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.CheckForParallelWall
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_CheckForParallelWall_Params
	{
	public:
		bool                                                       ValidWallSurface;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JR99[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CentreLocation;                                          // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CentreImpactNormal;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.SphereTraceByChannelFromCharacterLocation
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_SphereTraceByChannelFromCharacterLocation_Params
	{
	public:
		struct FVector                                             StartLocationOffset;                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndLocationOffset;                                       // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            DirectionRotation;                                       // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ETraceTypeQuery                                            TraceChannel;                                            // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterBodyPartHeights                                  BodyPartOrigin;                                          // 0x0025(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RMHV[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      SphereRadius;                                            // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SAVF[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          OutHit;                                                  // 0x0030(0x00B0)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       ConditionsMet;                                           // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitObject;                                               // 0x00E1(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GDDU[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.LineTraceByChannelFromCharacterLocation
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_LineTraceByChannelFromCharacterLocation_Params
	{
	public:
		struct FVector                                             StartLocationOffset;                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndLocationOffset;                                       // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            DirectionRotation;                                       // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ETraceTypeQuery                                            TraceChannel;                                            // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterBodyPartHeights                                  BodyPartOrigin;                                          // 0x0025(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7AZG[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          OutHit;                                                  // 0x0028(0x00B0)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       ConditionsMet;                                           // 0x00D8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitObject;                                               // 0x00D9(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5FMX[0x2];                                   // 0x00DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.OnEnd
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.OnBegin
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C.ExecuteUbergraph_BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI
	 */
	struct UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C_ExecuteUbergraph_BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
