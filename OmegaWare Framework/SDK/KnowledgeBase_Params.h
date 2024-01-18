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
	 * Function KnowledgeBase.ConditionalListRequirement.ReceiveGetDebugDescription
	 */
	struct UConditionalListRequirement_ReceiveGetDebugDescription_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.SetReplicateFacts
	 */
	struct UKnowledgeBaseComponent_SetReplicateFacts_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.ServerOwnerFactRemoved
	 */
	struct UKnowledgeBaseComponent_ServerOwnerFactRemoved_Params
	{
	public:
		class FString                                              FactName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.ServerOwnerFactChanged
	 */
	struct UKnowledgeBaseComponent_ServerOwnerFactChanged_Params
	{
	public:
		struct FKnowledgeBaseNetworkedData                         DataArray;                                               // 0x0000(0x0040)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BueprintGetFloatFact
	 */
	struct UKnowledgeBaseComponent_BueprintGetFloatFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FactValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetVectorFact
	 */
	struct UKnowledgeBaseComponent_BlueprintSetVectorFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetStringFact
	 */
	struct UKnowledgeBaseComponent_BlueprintSetStringFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R54G[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetIntegerFact
	 */
	struct UKnowledgeBaseComponent_BlueprintSetIntegerFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetFloatFact
	 */
	struct UKnowledgeBaseComponent_BlueprintSetFloatFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetDateTimeFact
	 */
	struct UKnowledgeBaseComponent_BlueprintSetDateTimeFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q7CH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           Value;                                                   // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetBoolFact
	 */
	struct UKnowledgeBaseComponent_BlueprintSetBoolFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintRemoveFact
	 */
	struct UKnowledgeBaseComponent_BlueprintRemoveFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OG34[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintModifyVectorFact
	 */
	struct UKnowledgeBaseComponent_BlueprintModifyVectorFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Delta;                                                   // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewValue;                                                // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintModifyIntegerFact
	 */
	struct UKnowledgeBaseComponent_BlueprintModifyIntegerFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Delta;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewValue;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintModifyFloatFact
	 */
	struct UKnowledgeBaseComponent_BlueprintModifyFloatFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delta;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewValue;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintIncrementCounterFact
	 */
	struct UKnowledgeBaseComponent_BlueprintIncrementCounterFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T38P[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             InvokerObject;                                           // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InvokerName;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetVectorFact
	 */
	struct UKnowledgeBaseComponent_BlueprintGetVectorFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             FactValue;                                               // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsValid;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetStringFact
	 */
	struct UKnowledgeBaseComponent_BlueprintGetStringFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WIUR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FactValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsValid;                                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetIntegerFact
	 */
	struct UKnowledgeBaseComponent_BlueprintGetIntegerFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FactValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetExpressionListener
	 */
	struct UKnowledgeBaseComponent_BlueprintGetExpressionListener_Params
	{
	public:
		class UKnowledgeBaseExpressionListener*                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetDateTimeFact
	 */
	struct UKnowledgeBaseComponent_BlueprintGetDateTimeFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MIMB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           FactValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsValid;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetCounterFact
	 */
	struct UKnowledgeBaseComponent_BlueprintGetCounterFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FactValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetBoolFact
	 */
	struct UKnowledgeBaseComponent_BlueprintGetBoolFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       FactValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsValid;                                                 // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintEvaluateNumericExpression
	 */
	struct UKnowledgeBaseComponent_BlueprintEvaluateNumericExpression_Params
	{
	public:
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0000(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintEvaluateExpression
	 */
	struct UKnowledgeBaseComponent_BlueprintEvaluateExpression_Params
	{
	public:
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0000(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintDecrementCounterFact
	 */
	struct UKnowledgeBaseComponent_BlueprintDecrementCounterFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q39I[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             InvokerObject;                                           // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InvokerName;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delay;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintCancelDeferredRemoval
	 */
	struct UKnowledgeBaseComponent_BlueprintCancelDeferredRemoval_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               Fact;                                                    // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintCancelDeferredDecrement
	 */
	struct UKnowledgeBaseComponent_BlueprintCancelDeferredDecrement_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               Fact;                                                    // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                DecrementerName;                                         // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddVectorFact
	 */
	struct UKnowledgeBaseComponent_BlueprintAddVectorFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddStringFact
	 */
	struct UKnowledgeBaseComponent_BlueprintAddStringFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9NAG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddIntegerFact
	 */
	struct UKnowledgeBaseComponent_BlueprintAddIntegerFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddFloatFact
	 */
	struct UKnowledgeBaseComponent_BlueprintAddFloatFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddDateTimeFact
	 */
	struct UKnowledgeBaseComponent_BlueprintAddDateTimeFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RNN6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           Value;                                                   // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddBoolFact
	 */
	struct UKnowledgeBaseComponent_BlueprintAddBoolFact_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseExpressionCache.UpdateTimeExpressions
	 */
	struct UKnowledgeBaseExpressionCache_UpdateTimeExpressions_Params
	{	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveObjectForActor
	 */
	struct UKnowledgeBaseExpressionListener_RemoveObjectForActor_Params
	{
	public:
		class AActor*                                              ActorToRemove;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveObject
	 */
	struct UKnowledgeBaseExpressionListener_RemoveObject_Params
	{
	public:
		class UKnowledgeBaseComponent*                             KBObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveNamedObjectForActor
	 */
	struct UKnowledgeBaseExpressionListener_RemoveNamedObjectForActor_Params
	{
	public:
		class AActor*                                              ActorToRemove;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ObjectName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveNamedObject
	 */
	struct UKnowledgeBaseExpressionListener_RemoveNamedObject_Params
	{
	public:
		class UKnowledgeBaseComponent*                             KBObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ObjectName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseExpressionListener.OnGameplayEventFired
	 */
	struct UKnowledgeBaseExpressionListener_OnGameplayEventFired_Params
	{
	public:
		struct FGameplayEvent                                      GameplayEvent;                                           // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseExpressionListener.ListenToNumericExpressionByFunctionName
	 */
	struct UKnowledgeBaseExpressionListener_ListenToNumericExpressionByFunctionName_Params
	{
	public:
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0000(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FunctionName;                                            // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCallOnRegister;                                         // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseExpressionListener.ListenToExpressionByFunctionName
	 */
	struct UKnowledgeBaseExpressionListener_ListenToExpressionByFunctionName_Params
	{
	public:
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0000(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FunctionName;                                            // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCallOnRegister;                                         // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseExpressionListener.AddObjectForActor
	 */
	struct UKnowledgeBaseExpressionListener_AddObjectForActor_Params
	{
	public:
		class AActor*                                              ActorToAdd;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseExpressionListener.AddObject
	 */
	struct UKnowledgeBaseExpressionListener_AddObject_Params
	{
	public:
		class UKnowledgeBaseComponent*                             KBObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseExpressionListener.AddNamedObjectForActor
	 */
	struct UKnowledgeBaseExpressionListener_AddNamedObjectForActor_Params
	{
	public:
		class AActor*                                              ActorToAdd;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ObjectName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseExpressionListener.AddNamedObject
	 */
	struct UKnowledgeBaseExpressionListener_AddNamedObject_Params
	{
	public:
		class UKnowledgeBaseComponent*                             KBObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ObjectName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.RemoveNumericExpressionListenerEvent
	 */
	struct UKnowledgeBaseNodes_RemoveNumericExpressionListenerEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0010(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0048(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.RemoveNumericExpressionListener
	 */
	struct UKnowledgeBaseNodes_RemoveNumericExpressionListener_Params
	{
	public:
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0008(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FunctionName;                                            // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.RemoveFactListenerEvent
	 */
	struct UKnowledgeBaseNodes_RemoveFactListenerEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseFactKey                               FactName;                                                // 0x0010(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x001C(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.RemoveFactListener
	 */
	struct UKnowledgeBaseNodes_RemoveFactListener_Params
	{
	public:
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseFactKey                               FactName;                                                // 0x0008(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VDRQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FunctionName;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.RemoveExpressionListenerEvent
	 */
	struct UKnowledgeBaseNodes_RemoveExpressionListenerEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0010(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0048(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.RemoveExpressionListener
	 */
	struct UKnowledgeBaseNodes_RemoveExpressionListener_Params
	{
	public:
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0008(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FunctionName;                                            // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.RegisterFactKey
	 */
	struct UKnowledgeBaseNodes_RegisterFactKey_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FactName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EKnowledgeBaseFactType                                     Type;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CXRK[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0014(0x000C)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EKnowledgeBaseFactReplication                              ReplicationType;                                         // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.IsExpressionValidAndNotEmpty
	 */
	struct UKnowledgeBaseNodes_IsExpressionValidAndNotEmpty_Params
	{
	public:
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0000(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.GetFactKey
	 */
	struct UKnowledgeBaseNodes_GetFactKey_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseFactKey                               ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.EvaluateNumericExpressionForWorldPositionAndObjects
	 */
	struct UKnowledgeBaseNodes_EvaluateNumericExpressionForWorldPositionAndObjects_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0008(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldPosition;                                           // 0x0040(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G1KV[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UKnowledgeBaseComponent*>                     AdditionalObjects;                                       // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.EvaluateNumericExpressionForWorldPosition
	 */
	struct UKnowledgeBaseNodes_EvaluateNumericExpressionForWorldPosition_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0008(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldPosition;                                           // 0x0040(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.EvaluateNumericExpression
	 */
	struct UKnowledgeBaseNodes_EvaluateNumericExpression_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0008(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UKnowledgeBaseComponent*>                     Objects;                                                 // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.EvaluateExpressionForWorldPositionAndObjects
	 */
	struct UKnowledgeBaseNodes_EvaluateExpressionForWorldPositionAndObjects_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0008(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldPosition;                                           // 0x0040(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RM0P[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UKnowledgeBaseComponent*>                     AdditionalObjects;                                       // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.EvaluateExpressionForWorldPosition
	 */
	struct UKnowledgeBaseNodes_EvaluateExpressionForWorldPosition_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0008(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldPosition;                                           // 0x0040(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.EvaluateExpression
	 */
	struct UKnowledgeBaseNodes_EvaluateExpression_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0008(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UKnowledgeBaseComponent*>                     Objects;                                                 // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.EqualEqual_FactKeyFactKey
	 */
	struct UKnowledgeBaseNodes_EqualEqual_FactKeyFactKey_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               A;                                                       // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseFactKey                               B;                                                       // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.Conv_StringToFactKey
	 */
	struct UKnowledgeBaseNodes_Conv_StringToFactKey_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseFactKey                               ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.Conv_StringToExpression
	 */
	struct UKnowledgeBaseNodes_Conv_StringToExpression_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.Conv_NameToFactKey
	 */
	struct UKnowledgeBaseNodes_Conv_NameToFactKey_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseFactKey                               ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.Conv_NameToExpression
	 */
	struct UKnowledgeBaseNodes_Conv_NameToExpression_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            ReturnValue;                                             // 0x0008(0x0038)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.Conv_FactKeyToString
	 */
	struct UKnowledgeBaseNodes_Conv_FactKeyToString_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YJY0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.Conv_FactKeyToName
	 */
	struct UKnowledgeBaseNodes_Conv_FactKeyToName_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.Conv_ExpressionToString
	 */
	struct UKnowledgeBaseNodes_Conv_ExpressionToString_Params
	{
	public:
		struct FKnowledgeBaseExpression                            InExpression;                                            // 0x0000(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.Conv_ExpressionToName
	 */
	struct UKnowledgeBaseNodes_Conv_ExpressionToName_Params
	{
	public:
		struct FKnowledgeBaseExpression                            InExpression;                                            // 0x0000(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.AddNumericExpressionListenerEvent
	 */
	struct UKnowledgeBaseNodes_AddNumericExpressionListenerEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0010(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0048(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bCallOnRegister;                                         // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.AddNumericExpressionListener
	 */
	struct UKnowledgeBaseNodes_AddNumericExpressionListener_Params
	{
	public:
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0008(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FunctionName;                                            // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCallOnRegister;                                         // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.AddFactListenerEvent
	 */
	struct UKnowledgeBaseNodes_AddFactListenerEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseFactKey                               FactName;                                                // 0x0010(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x001C(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bCallOnRegister;                                         // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.AddFactListener
	 */
	struct UKnowledgeBaseNodes_AddFactListener_Params
	{
	public:
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseFactKey                               FactName;                                                // 0x0008(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G77B[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FunctionName;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCallOnRegister;                                         // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.AddExpressionListenerEvent
	 */
	struct UKnowledgeBaseNodes_AddExpressionListenerEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0010(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0048(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bCallOnRegister;                                         // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseNodes.AddExpressionListener
	 */
	struct UKnowledgeBaseNodes_AddExpressionListener_Params
	{
	public:
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0008(0x0038)  (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FunctionName;                                            // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCallOnRegister;                                         // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateVec3FactValue
	 */
	struct UKnowledgeBaseValueFunctionLibrary_CreateVec3FactValue_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LP3E[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKnowledgeBaseValueSelector                         ReturnValue;                                             // 0x0018(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateStringFactValue
	 */
	struct UKnowledgeBaseValueFunctionLibrary_CreateStringFactValue_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKnowledgeBaseValueSelector                         ReturnValue;                                             // 0x0018(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateIntFactValue
	 */
	struct UKnowledgeBaseValueFunctionLibrary_CreateIntFactValue_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NY9A[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKnowledgeBaseValueSelector                         ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateFloatFactValue
	 */
	struct UKnowledgeBaseValueFunctionLibrary_CreateFloatFactValue_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0Y0W[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKnowledgeBaseValueSelector                         ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateBoolFactValue
	 */
	struct UKnowledgeBaseValueFunctionLibrary_CreateBoolFactValue_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValue;                                                  // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0O67[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKnowledgeBaseValueSelector                         ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.RemoveLocalDisableReason
	 */
	struct AScopedKnowledgeBaseExpressionActor_RemoveLocalDisableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.RemoveDisableReason
	 */
	struct AScopedKnowledgeBaseExpressionActor_RemoveDisableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnReset
	 */
	struct AScopedKnowledgeBaseExpressionActor_OnReset_Params
	{	};

	/**
	 * Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnRep_IsActorActiveOnServer
	 */
	struct AScopedKnowledgeBaseExpressionActor_OnRep_IsActorActiveOnServer_Params
	{	};

	/**
	 * Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnEnabled
	 */
	struct AScopedKnowledgeBaseExpressionActor_OnEnabled_Params
	{	};

	/**
	 * Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnDisabled
	 */
	struct AScopedKnowledgeBaseExpressionActor_OnDisabled_Params
	{	};

	/**
	 * Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.IsActive
	 */
	struct AScopedKnowledgeBaseExpressionActor_IsActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.EditorSetActiveExpression
	 */
	struct AScopedKnowledgeBaseExpressionActor_EditorSetActiveExpression_Params
	{
	public:
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.AddLocalDisableReason
	 */
	struct AScopedKnowledgeBaseExpressionActor_AddLocalDisableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.AddDisableReason
	 */
	struct AScopedKnowledgeBaseExpressionActor_AddDisableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.ScopedKnowledgeBaseExpressionListenerFunctionLibrary.ShutdownExpressionListener
	 */
	struct UScopedKnowledgeBaseExpressionListenerFunctionLibrary_ShutdownExpressionListener_Params
	{
	public:
		struct FScopedKnowledgeBaseExpressionListener              Expression;                                              // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function KnowledgeBase.ScopedKnowledgeBaseExpressionListenerFunctionLibrary.SetupExpressionListener
	 */
	struct UScopedKnowledgeBaseExpressionListenerFunctionLibrary_SetupExpressionListener_Params
	{
	public:
		struct FScopedKnowledgeBaseExpressionListener              Expression;                                              // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              Owner;                                                   // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0068(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
