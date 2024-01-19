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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AILevelOfDetailSystem.AILevelOfDetailCategoryDefinition
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UAILevelOfDetailCategoryDefinition : public UDataAsset
	{
	public:
		class FName                                                Name;                                                    // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAILevelOfDetailDefinition>                  Levels;                                                  // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<float, class UAILevelOfDetailScoringCriteriaDefinition*> WeightedScoringCriteria;                                 // 0x0048(0x0050) Edit, ExportObject, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      MinimumTimeInLevelSeconds;                               // 0x0098(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTimeslicing;                                       // 0x009C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bServerAuthoritative;                                    // 0x009D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9H2X[0x2];                                   // 0x009E(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AILevelOfDetailSystem.AILevelOfDetailComponent
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UAILevelOfDetailComponent : public UActorComponent
	{
	public:
		TArray<class UAILevelOfDetailCategoryDefinition*>          Categories;                                              // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SVH3[0x18];                                  // 0x00F8(0x0018) MISSED OFFSET (PADDING)

	public:
		bool UnlockLevel(class UAILevelOfDetailCategoryDefinition* CategoryDefinition);
		bool LockToLevel(class UAILevelOfDetailCategoryDefinition* CategoryDefinition, int32_t Index);
		bool LockLevel(class UAILevelOfDetailCategoryDefinition* CategoryDefinition);
		class AController* GetController();
		class ACharacter* GetCharacter();
		static UClass* StaticClass();
	};

	/**
	 * Class AILevelOfDetailSystem.AILevelOfDetailFeature
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAILevelOfDetailFeature : public UObject
	{
	public:
		unsigned char                                              UnknownData_1KU4[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AILevelOfDetailSystem.AILevelOfDetailFeature_BP
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAILevelOfDetailFeature_BP : public UAILevelOfDetailFeature
	{
	public:
		void InitializeComparisonName(class FString* ResultComparisonName);
		void EnableFor(class UAILevelOfDetailComponent* Component, EAILevelOfDetailError* Result);
		void DisableFor(class UAILevelOfDetailComponent* Component, EAILevelOfDetailError* Result);
		static UClass* StaticClass();
	};

	/**
	 * Class AILevelOfDetailSystem.AILevelOfDetailFeature_GroundMovementMode
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UAILevelOfDetailFeature_GroundMovementMode : public UAILevelOfDetailFeature
	{
	public:
		EMovementMode                                              Mode;                                                    // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C26H[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AILevelOfDetailSystem.AILevelOfDetailFeature_SetComponentActivation
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UAILevelOfDetailFeature_SetComponentActivation : public UAILevelOfDetailFeature
	{
	public:
		class UClass*                                              Component;                                               // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComponentIsOptional;                                    // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDesiredEnabledState;                                    // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRevertOnDisable;                                        // 0x004A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0Y9[0x5];                                   // 0x004B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AILevelOfDetailSystem.AILevelOfDetailManager
	 * Size -> 0x0048 (FullSize[0x02F8] - InheritedSize[0x02B0])
	 */
	class AAILevelOfDetailManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_LT6W[0x48];                                  // 0x02B0(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AILevelOfDetailSystem.AILevelOfDetailScoringCriteriaDefinition
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAILevelOfDetailScoringCriteriaDefinition : public UObject
	{
	public:
		ECostOrBenefit                                             CostOrBenefit;                                           // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TA09[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AILevelOfDetailSystem.AILevelOfDetailScoringCriteriaDefinition_DistanceToLocalPlayer
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAILevelOfDetailScoringCriteriaDefinition_DistanceToLocalPlayer : public UAILevelOfDetailScoringCriteriaDefinition
	{
	public:
		float                                                      MinDistance;                                             // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AILevelOfDetailSystem.AILevelOfDetailScoringCriteriaDefinition_DistanceToNearestPlayer
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAILevelOfDetailScoringCriteriaDefinition_DistanceToNearestPlayer : public UAILevelOfDetailScoringCriteriaDefinition
	{
	public:
		float                                                      MinDistance;                                             // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AILevelOfDetailSystem.AILevelOfDetailScoringCriteriaDefinition_KnowledgeBasePriority
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UAILevelOfDetailScoringCriteriaDefinition_KnowledgeBasePriority : public UAILevelOfDetailScoringCriteriaDefinition
	{
	public:
		struct FKnowledgeBaseExpression                            KBExpression;                                            // 0x0030(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AILevelOfDetailSystem.AILevelOfDetailScoringCriteriaDefinition_ViewAngleOfLocalPlayer
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UAILevelOfDetailScoringCriteriaDefinition_ViewAngleOfLocalPlayer : public UAILevelOfDetailScoringCriteriaDefinition
	{
	public:
		float                                                      ScoreScaleWhenNotRendered;                               // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScoringCriteriaViewAngleMode                              AngleMode;                                               // 0x0034(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDFK[0x3];                                   // 0x0035(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      AngleRangeMin;                                           // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleRangeMax;                                           // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAngleFOVMultiplier;                                   // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAngleFOVMultiplier;                                   // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AILevelOfDetailSystem.BTDecorator_ScopedLockLevelOfDetail
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	class UBTDecorator_ScopedLockLevelOfDetail : public UBTDecorator
	{
	public:
		struct FBlackboardKeySelector                              TargetActor;                                             // 0x0068(0x0028) Edit, NativeAccessSpecifierPrivate
		class UAILevelOfDetailCategoryDefinition*                  Category;                                                // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Index;                                                   // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BXOX[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
