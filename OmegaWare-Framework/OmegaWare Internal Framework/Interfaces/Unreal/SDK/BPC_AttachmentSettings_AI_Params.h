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
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.GetPerkSourceName
	 */
	struct UBPC_AttachmentSettings_AI_C_GetPerkSourceName_Params
	{
	public:
		struct FAttachmentPieceSettings                            AttachmentPieceSettings;                                 // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FName                                                ReturnValue;                                             // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.CharacterActionParams
	 */
	struct UBPC_AttachmentSettings_AI_C_CharacterActionParams_Params
	{
	public:
		struct FCharacterActionRequestParams                       CharacterActionRequestParams;                            // 0x0000(0x0020)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ImpactsToIgnore
	 */
	struct UBPC_AttachmentSettings_AI_C_ImpactsToIgnore_Params
	{
	public:
		struct FAttachmentPieceSettings                            AttachmentSettings;                                      // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       HasImpactBeenBlocked;                                    // 0x00A8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.IsDSLogInValidKey
	 */
	struct UBPC_AttachmentSettings_AI_C_IsDSLogInValidKey_Params
	{
	public:
		struct FAttachmentPieceSettings                            AttachmentSettings;                                      // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.SetUpAttachmentFact
	 */
	struct UBPC_AttachmentSettings_AI_C_SetUpAttachmentFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VOC6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAttachmentPieceSettings                            AttachmentSettings;                                      // 0x0010(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Condition;                                               // 0x00B8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ExternalFactAlteration
	 */
	struct UBPC_AttachmentSettings_AI_C_ExternalFactAlteration_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ImpactsRequired;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAttachmentPieceSettings                            AttachmentSettings;                                      // 0x0008(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.EnableFactReplication
	 */
	struct UBPC_AttachmentSettings_AI_C_EnableFactReplication_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               InKey;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		EKnowledgeBaseFactType                                     Type;                                                    // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CSW1[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0010(0x000C)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.SetUpFactReplicationInitialisation
	 */
	struct UBPC_AttachmentSettings_AI_C_SetUpFactReplicationInitialisation_Params
	{	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.GetRequiredFuryForce
	 */
	struct UBPC_AttachmentSettings_AI_C_GetRequiredFuryForce_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               AttachedFact;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		float                                                      RequiredForceValue;                                      // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.GetRequiredFuryDamage
	 */
	struct UBPC_AttachmentSettings_AI_C_GetRequiredFuryDamage_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               AttachedFact;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		float                                                      RequiredDamageValue;                                     // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.FuryDamageRequirement
	 */
	struct UBPC_AttachmentSettings_AI_C_FuryDamageRequirement_Params
	{
	public:
		struct FAttachmentPieceSettings                            AttachmentSettings;                                      // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      OwnersMaxHealth;                                         // 0x00A8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x00AC(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ClampImpactsRequired
	 */
	struct UBPC_AttachmentSettings_AI_C_ClampImpactsRequired_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Min;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Max;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ValueClamped;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ClampDamage
	 */
	struct UBPC_AttachmentSettings_AI_C_ClampDamage_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Min;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Max;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ValueClamped;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.RemoveUniquePerks
	 */
	struct UBPC_AttachmentSettings_AI_C_RemoveUniquePerks_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               AttachedFact;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.AddUniquePerks
	 */
	struct UBPC_AttachmentSettings_AI_C_AddUniquePerks_Params
	{
	public:
		struct FAttachmentPieceSettings                            AttachmentSettings;                                      // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.RemoveFactOnBrokenAttachment
	 */
	struct UBPC_AttachmentSettings_AI_C_RemoveFactOnBrokenAttachment_Params
	{	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.AttachmentImpactResult
	 */
	struct UBPC_AttachmentSettings_AI_C_AttachmentImpactResult_Params
	{
	public:
		struct FAttachmentPieceSettings                            AttachmentSettings;                                      // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.InitialiseRequiredImpacts
	 */
	struct UBPC_AttachmentSettings_AI_C_InitialiseRequiredImpacts_Params
	{
	public:
		struct FAttachmentPieceSettings                            AttachmentSettings;                                      // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.UpdateHealth
	 */
	struct UBPC_AttachmentSettings_AI_C_UpdateHealth_Params
	{
	public:
		struct FAttachmentPieceSettings                            AttachmentSettings;                                      // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      UpdatedMaxHealth;                                        // 0x00A8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.AttachmentHealthAndImpactsRequiredLevelScaling
	 */
	struct UBPC_AttachmentSettings_AI_C_AttachmentHealthAndImpactsRequiredLevelScaling_Params
	{	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ReceiveBeginPlay
	 */
	struct UBPC_AttachmentSettings_AI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.AnyImpactRecieved
	 */
	struct UBPC_AttachmentSettings_AI_C_AnyImpactRecieved_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.PostImpact
	 */
	struct UBPC_AttachmentSettings_AI_C_PostImpact_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImpactEventComponent*                               ImpactEventComponent;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.MaxHealthChanged
	 */
	struct UBPC_AttachmentSettings_AI_C_MaxHealthChanged_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BCNZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EKnowledgeBaseFactChangeType                               FactChangeType;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.RequestChangeAttachmentVariables
	 */
	struct UBPC_AttachmentSettings_AI_C_RequestChangeAttachmentVariables_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               Key;                                                     // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		float                                                      Health;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ImpactsRequired;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ReceiveEndPlay
	 */
	struct UBPC_AttachmentSettings_AI_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ExecuteUbergraph_BPC_AttachmentSettings_AI
	 */
	struct UBPC_AttachmentSettings_AI_C_ExecuteUbergraph_BPC_AttachmentSettings_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
