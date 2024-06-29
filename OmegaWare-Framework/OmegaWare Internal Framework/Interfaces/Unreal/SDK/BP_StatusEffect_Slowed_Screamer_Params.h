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
	 * Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.RefreshAggressors
	 */
	struct UBP_StatusEffect_Slowed_Screamer_C_RefreshAggressors_Params
	{
	public:
		class UBP_StatusEffectTypeState_Slowed_Screamer_C*         TypeState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.FindNearestAggressor
	 */
	struct UBP_StatusEffect_Slowed_Screamer_C_FindNearestAggressor_Params
	{
	public:
		class AActor*                                              ToActor;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_StatusEffectTypeState_Slowed_Screamer_C*         TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              NearestAggressor;                                        // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveEnd
	 */
	struct UBP_StatusEffect_Slowed_Screamer_C_ReceiveEnd_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveBegin
	 */
	struct UBP_StatusEffect_Slowed_Screamer_C_ReceiveBegin_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               FirstInstance;                                           // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.IsOwnerObstructed
	 */
	struct UBP_StatusEffect_Slowed_Screamer_C_IsOwnerObstructed_Params
	{
	public:
		class UBP_StatusEffectParams_Slowed_Screamer_C*            Params;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_Base_StatusEffectTypeState_C*                    TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Debug;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.RequestSecondaryAction
	 */
	struct UBP_StatusEffect_Slowed_Screamer_C_RequestSecondaryAction_Params
	{
	public:
		class UBP_Base_StatusEffectTypeState_C*                    TypeState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DistanceScalar;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RequiredDistanceScalar;                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DirectionScalar;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RequiredDirectionScalar;                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ModifyCosmeticEffect
	 */
	struct UBP_StatusEffect_Slowed_Screamer_C_ModifyCosmeticEffect_Params
	{
	public:
		class UBP_StatusEffectTypeState_Slowed_Screamer_C*         TypeState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Scalar;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DistanceScalar;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DirectionScalar;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AngleScalar;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ScaleModifierWithMovementAgainstInstigatorPoint
	 */
	struct UBP_StatusEffect_Slowed_Screamer_C_ScaleModifierWithMovementAgainstInstigatorPoint_Params
	{
	public:
		class UBP_StatusEffectParams_Slowed_Screamer_C*            Params;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_StatusEffectTypeState_Slowed_Screamer_C*         TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Debug;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F5S5[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ProcessedValue;                                          // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      IsolatedDistanceElement;                                 // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      IsolatedDirectionElement;                                // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      IsolatedSourceAngleElement;                              // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RQTI[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveTickInstance
	 */
	struct UBP_StatusEffect_Slowed_Screamer_C_ReceiveTickInstance_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               Instance;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveEndInstance
	 */
	struct UBP_StatusEffect_Slowed_Screamer_C_ReceiveEndInstance_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               Instance;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveBeginInstance
	 */
	struct UBP_StatusEffect_Slowed_Screamer_C_ReceiveBeginInstance_Params
	{
	public:
		class UStatusEffectComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectTypeState*                              TypeState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectInstance*                               Instance;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
