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
	 * UserDefinedStruct SWaitMovingMovementParams.SWaitMovingMovementParams
	 * Size -> 0x00ED
	 */
	struct FSWaitMovingMovementParams
	{
	public:
		class UEnvQuery*                                           Query_42_B19F9C844EE540FDD1239A92BFFA7DBF;               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEnvQueryRunMode                                           RunMode_54_166FC9794398AF557F6373BB98FEEB40;             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WL05[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnvQuery*                                           DryRunQuery_84_2DF8DECF4FFF25CFE4A928A56DEFD919;         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEnvQueryRunMode                                           DryRunMode_108_D77BD0584285AE4D8E43518157E7D4AC;         // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanMoveOnDryRunQueryResult_112_DDAFA01E4A29E1A6037A58AC683D03ED; // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AllowDryQueryToFail_114_81705B3C41A516F1EAF551AE964A8CED; // 0x001A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U1ZF[0x5];                                   // 0x001B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            AllowQueryExpression_73_ED35AFBA48CD7355F8807685A5D34BC2; // 0x0020(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		EWaitMovingMovementTypes                                   MovementType_45_21939D7E4EDE7F2FC6720AB8EE0BFE62;        // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFollowingMovement_68_4892AE014F32C68B60B05E8C43AC3DCC; // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       FocusCombatTarget_137_0E2012314B2A02A5EF728F91EB529074;  // 0x005A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OXTY[0x1];                                   // 0x005B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ValidationRadius_57_6C75D89E4AF04C08919503BC8A087606;    // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovementDirectionAtLocation                               DesiredDirectionAtLocation_138_E0462EBE4BBBC3E292BCB8BD5E688B34; // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KV3F[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            LeniencyFinishMovementExpression_66_37B8FEDD41E55383E2EF71A8DC97E8A6; // 0x0068(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               FactToAddOnQuerySuccess_89_BD20F2BC4A2379824DA31CBB5B570EA7; // 0x00A0(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UEP6[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCardDealerCounterModification>              CountersToModifyOnQuerySuccess_135_99F3A69947F3F69322F69F8B756C9DC8; // 0x00B0(0x0010) Edit, BlueprintVisible
		TArray<struct FSFloatQueryParams>                          FloatEQSParams_95_14E9D3CB4DCFE5F66F04FF8EB1703739;      // 0x00C0(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		EAreaMovementTypes                                         AreaMovementType_105_2AE2A3294BA1D5DF4D385E94EFE8DD63;   // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UAVP[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeLimit_102_251837F545A860AA3467448812B75294;          // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSMovementSphereTraceByChannelParams                TraceTestParams_128_0D3D9EC540D7468508835394890880C4;    // 0x00D8(0x0014) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       OnQueryFailFallbackToCurrentLocation_140_0129E80344294088AF2D74BB3DBB7018; // 0x00EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
