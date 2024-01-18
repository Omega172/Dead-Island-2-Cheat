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
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.SetRandomisedAffectedActorsSelection
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_SetRandomisedAffectedActorsSelection_Params
	{	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.IsApartOfTheRandomisedAffectedActorsSelection
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_IsApartOfTheRandomisedAffectedActorsSelection_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JPL7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.IsActorWithinComparisonDistance
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_IsActorWithinComparisonDistance_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EComparisonOperator                                        Operator;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1UH9[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetInstigator
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_GetInstigator_Params
	{
	public:
		struct FEventInstigator                                    ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.CanReceiveArc
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_CanReceiveArc_Params
	{
	public:
		bool                                                       IsInterception;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_74TZ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.RequestTransmitStatus
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_RequestTransmitStatus_Params
	{
	public:
		struct FHitResult                                          HitInfo;                                                 // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		class AActor*                                              AffectedActor;                                           // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetTargetActorProperties
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_GetTargetActorProperties_Params
	{
	public:
		struct FSArcFromSourceAffectedActorProperties              Properties;                                              // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4RAQ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.TraceToAffectedActor
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_TraceToAffectedActor_Params
	{
	public:
		struct FVector                                             StartTrace;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndTrace;                                                // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ErrorTolerance;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDrawDebugTrace                                            DrawDebugType;                                           // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TMCK[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          OutHit;                                                  // 0x0020(0x00B0)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00D0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_35X0[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.IsAcceptedFluidType
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_IsAcceptedFluidType_Params
	{
	public:
		class AActor*                                              AffectedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsFluid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z7DB[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.FindTargetPointLocation
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_FindTargetPointLocation_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5UPW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.DoesActorMeetAliveRequirements
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_DoesActorMeetAliveRequirements_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Alive;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YIA2[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.SetAcceptedClassArrays
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_SetAcceptedClassArrays_Params
	{	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.UniversalActorConditions
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_UniversalActorConditions_Params
	{
	public:
		class AActor*                                              AffectedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsInterception;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O0F5[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.SetMaxForceAndDamage
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_SetMaxForceAndDamage_Params
	{	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.IsAcceptedClassType
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_IsAcceptedClassType_Params
	{
	public:
		class AActor*                                              AffectedActor;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnSuccess;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ONLM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ReturnClass;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ForceModification
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_ForceModification_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DropOffValue;                                            // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.DamageModification
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_DamageModification_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DropOffValue;                                            // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ApplyForceModification
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_ApplyForceModification_Params
	{
	public:
		struct FDSDamageData                                       DSDamageData;                                            // 0x0000(0x0058)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ApplyDamageModification
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_ApplyDamageModification_Params
	{
	public:
		struct FGeneralImpactEventParams                           ArcShockGeneralImpactEvent;                              // 0x0000(0x01B8)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.WasArcIntercepted
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_WasArcIntercepted_Params
	{
	public:
		struct FVector                                             OwnerLocation;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             IntialTargetLocation;                                    // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                IntialTargetBoneName;                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ErrorTolerance;                                          // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasValidTarget;                                          // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KQHT[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewTargetBoneLocation;                                   // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewTargetBoneName;                                       // 0x0034(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_83HR[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.MeetsInterceptConditions
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_MeetsInterceptConditions_Params
	{
	public:
		class AActor*                                              AffectedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetOwnerAndTargetLocations
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_GetOwnerAndTargetLocations_Params
	{
	public:
		class AActor*                                              AffectedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OwnerLocation;                                           // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                OwnerBoneName;                                           // 0x0014(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                TargetBoneName;                                          // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetOwnersLocationAndBoneName
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_GetOwnersLocationAndBoneName_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2F49[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetAffectedActorsLocationAndBoneName
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_GetAffectedActorsLocationAndBoneName_Params
	{
	public:
		class AActor*                                              AffectedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0014(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.MeetsDirectArcConditions
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_MeetsDirectArcConditions_Params
	{
	public:
		class AActor*                                              AffectedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetRandomBoneVector
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_GetRandomBoneVector_Params
	{
	public:
		class AActor*                                              DICharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1NIN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.CreateParticle
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_CreateParticle_Params
	{
	public:
		class AActor*                                              AffectedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OwnerLocation;                                           // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.SetInstigatorAndOwningCharacter
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_SetInstigatorAndOwningCharacter_Params
	{	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.RequestPointImpactOnTarget
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_RequestPointImpactOnTarget_Params
	{
	public:
		struct FHitResult                                          HitInfo;                                                 // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		class AActor*                                              AffectedActor;                                           // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ReceiveBeginPlay
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.Multicast_CreateParticleEffect
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_Multicast_CreateParticleEffect_Params
	{
	public:
		class AActor*                                              AffectedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OwnerLocation;                                           // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.UpdateActorAffected
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_UpdateActorAffected_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.OnActorEnter
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_OnActorEnter_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.OnActorExit
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_OnActorExit_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ReceiveEndPlay
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ExecuteUbergraph_BPC_Base_AOE_StatusEffect_ArcFromSource
	 */
	struct UBPC_Base_AOE_StatusEffect_ArcFromSource_C_ExecuteUbergraph_BPC_Base_AOE_StatusEffect_ArcFromSource_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BZJH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
