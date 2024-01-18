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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_AnimNotify_AttackEarlyEndOpportunity.BP_AnimNotify_AttackEarlyEndOpportunity_C
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UBP_AnimNotify_AttackEarlyEndOpportunity_C : public UAnimNotify
	{
	public:
		class FName                                                AnimSetName;                                             // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendOutTime;                                            // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTargetFacingAngle;                                    // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InverseFacingCheck;                                      // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F750[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxTargetDistance;                                       // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            OwnerExpressionRequirement;                              // 0x0050(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash

	public:
		void PerformKnowledgeBaseCheck(class ADICharacter* OwnerCharacter, class UDSLogChannelHandle* LoggerHandle, const class FString& MontageName, bool* Result);
		void PerformDistanceCheck(class ADICharacter* OwnerCharacter, class UDSLogChannelHandle* LoggerHandle, const class FString& MontageName, bool* Result);
		void PerformFacingCheck(class AActor* OwnerCharacter, class UDSLogChannelHandle* LoggerHandle, const class FString& MontageName, bool* Result);
		bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
