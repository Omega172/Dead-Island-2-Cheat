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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum KnowledgeBase.EKnowledgeBaseFactChangeType
	 */
	enum class EKnowledgeBaseFactChangeType : uint8_t
	{
		Created = 0,
		Updated = 1,
		Removed = 2,
		MAX     = 3
	};

	/**
	 * Enum KnowledgeBase.EKnowledgeBaseContextSelection
	 */
	enum class EKnowledgeBaseContextSelection : uint8_t
	{
		None                   = 0,
		GlobalOnly             = 1,
		AreaOnly               = 2,
		LocalPlayerObjectsOnly = 3,
		All                    = 4,
		MAX                    = 5
	};

	/**
	 * Enum KnowledgeBase.EKnowledgeBaseObjectPriority
	 */
	enum class EKnowledgeBaseObjectPriority : uint8_t
	{
		Default      = 0,
		Area         = 1,
		Global       = 2,
		GameInstance = 3,
		MAX          = 4
	};

	/**
	 * Enum KnowledgeBase.EKnowledgeBaseFactReplication
	 */
	enum class EKnowledgeBaseFactReplication : uint8_t
	{
		NotReplicated   = 0,
		ServerAuthority = 1,
		OwnerAuthority  = 2,
		Count           = 3,
		MAX             = 4
	};

	/**
	 * Enum KnowledgeBase.EKnowledgeBaseFactType
	 */
	enum class EKnowledgeBaseFactType : uint8_t
	{
		Boolean   = 0,
		Integer   = 1,
		Float     = 2,
		String    = 3,
		Vec3      = 4,
		Counter   = 5,
		DateTime  = 6,
		Count     = 7,
		Undefined = 8,
		Invalid   = 9,
		MAX       = 10
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct KnowledgeBase.KnowledgeBaseExpression
	 * Size -> 0x0038
	 */
	struct FKnowledgeBaseExpression
	{
	public:
		class FString                                              Expression;                                              // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_98FB[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct KnowledgeBase.NamedReferenceCounter
	 * Size -> 0x0010
	 */
	struct FNamedReferenceCounter
	{
	public:
		unsigned char                                              UnknownData_31AH[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct KnowledgeBase.KnowledgeBaseValueSelector
	 * Size -> 0x0050
	 */
	struct FKnowledgeBaseValueSelector
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EKnowledgeBaseFactType                                     Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBooleanValue;                                           // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QRJ3[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IntegerValue;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WX16[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StringValue;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNamedReferenceCounter                              CounterValue;                                            // 0x0028(0x0010) Edit, NativeAccessSpecifierPublic
		struct FVector                                             VecValue;                                                // 0x0038(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHRQ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           DateTimeValue;                                           // 0x0048(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct KnowledgeBase.KnowledgeBaseNetworkedFactValueWrapper
	 * Size -> 0x0018
	 */
	struct FKnowledgeBaseNetworkedFactValueWrapper
	{
	public:
		unsigned char                                              UnknownData_9NAB[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct KnowledgeBase.KnowledgeBaseNetworkedData
	 * Size -> 0x0034 (FullSize[0x0040] - InheritedSize[0x000C])
	 */
	struct FKnowledgeBaseNetworkedData : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_4N31[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EKnowledgeBaseFactType                                     Type;                                                    // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZTI[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseNetworkedFactValueWrapper             FactValue;                                               // 0x0028(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct KnowledgeBase.KnowledgeBaseNetworkedDataArray
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	struct FKnowledgeBaseNetworkedDataArray : public FFastArraySerializer
	{
	public:
		TArray<struct FKnowledgeBaseNetworkedData>                 Data;                                                    // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UKnowledgeBaseComponent*                             Owner;                                                   // 0x0118(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct KnowledgeBase.ScopedKnowledgeBaseActorContext
	 * Size -> 0x0010
	 */
	struct FScopedKnowledgeBaseActorContext
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Actor;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct KnowledgeBase.ScopedKnowledgeBaseExpressionListener
	 * Size -> 0x0060
	 */
	struct FScopedKnowledgeBaseExpressionListener
	{
	public:
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0000(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FScopedKnowledgeBaseActorContext>            ActorContext;                                            // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPrivate
		class UKnowledgeBaseExpressionListener*                    ExpressionListener;                                      // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FIRZ[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct KnowledgeBase.KnowledgeBaseFactKey
	 * Size -> 0x000C
	 */
	struct FKnowledgeBaseFactKey
	{
	public:
		class FName                                                NameStorage;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OO1B[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct KnowledgeBase.KnowledgeBaseObjectSerializer
	 * Size -> 0x00B8
	 */
	struct FKnowledgeBaseObjectSerializer
	{
	public:
		unsigned char                                              UnknownData_O4JH[0xB8];                                  // 0x0000(0x00B8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct KnowledgeBase.ConditionalListElement
	 * Size -> 0x0028
	 */
	struct FConditionalListElement
	{
	public:
		unsigned char                                              UnknownData_Y8R3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UConditionalListRequirement*>                 Requirements;                                            // 0x0008(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FString                                              ArrayElementTitleText;                                   // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct KnowledgeBase.KnowledgeBaseExpressionAliasRow
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FKnowledgeBaseExpressionAliasRow : public FTableRowBase
	{
	public:
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0008(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct KnowledgeBase.KnowledgeBaseFactListener
	 * Size -> 0x0040
	 */
	struct FKnowledgeBaseFactListener
	{
	public:
		unsigned char                                              UnknownData_3BW4[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
