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
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.OnBeginEarly
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_35WL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.EndStim
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_EndStim_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.SpawnStim
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_SpawnStim_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.PlayCE_OnEnd
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_PlayCE_OnEnd_Params
	{
	public:
		ECharacterActionEndedReason                                ExitReason;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.PlayCE_OnBegin
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_PlayCE_OnBegin_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.UnintialiseScreamEffects
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_UnintialiseScreamEffects_Params
	{
	public:
		ECharacterActionEndedReason                                ExitReason;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.IntialiseScreamEffects
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_IntialiseScreamEffects_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.DeactivateArcFromScream
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_DeactivateArcFromScream_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.ActivateArcFromScream
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_ActivateArcFromScream_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.EndSphereOverlap
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_EndSphereOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.AddHostileStatusEffect
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_AddHostileStatusEffect_Params
	{
	public:
		class UObject*                                             OverlappedCharacter;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectComponent*                              StatusEffectComponent;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.AddFriendlyStatusEffect
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_AddFriendlyStatusEffect_Params
	{
	public:
		class UObject*                                             OverlappedCharacter;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectComponent*                              StatusEffectComponent;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               OutputPin;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.RemoveElectrocuteStatusEffect
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_RemoveElectrocuteStatusEffect_Params
	{
	public:
		class ADICharacter*                                        Zombie;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.DecrementElectricScreamerElectrocutionFact
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_DecrementElectricScreamerElectrocutionFact_Params
	{
	public:
		class ADICharacter*                                        TargetCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.IncrementElectricScreamerElectrocutionFact
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_IncrementElectricScreamerElectrocutionFact_Params
	{
	public:
		class ADICharacter*                                        TargetCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.AddElectrocuteAccumulation
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_AddElectrocuteAccumulation_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EComparisonOperator                                        RangeComparisonOperator;                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AV4B[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSElecticScreamAccumlationByDistanceParams>  AccumulatingEffectByDistance;                            // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.IncreaseElectrocuteAccumulation
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_IncreaseElectrocuteAccumulation_Params
	{	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.OnBegin
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.OnEnd
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Scream_Screamer_Electric.BP_Action_Scream_Screamer_Electric_C.ExecuteUbergraph_BP_Action_Scream_Screamer_Electric
	 */
	struct UBP_Action_Scream_Screamer_Electric_C_ExecuteUbergraph_BP_Action_Scream_Screamer_Electric_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
