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
	 * Class KnowledgeBase.ConditionalListQueryParameters
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UConditionalListQueryParameters : public UObject
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AMSI[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.ConditionalDataList
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UConditionalDataList : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.ConditionalListRequirement
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConditionalListRequirement : public UObject
	{
	public:
		class FString ReceiveGetDebugDescription();
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KBFactRequirement
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UKBFactRequirement : public UConditionalListRequirement
	{
	public:
		class FString                                              OwnerKBExpression;                                       // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PKD1[0x48];                                  // 0x0038(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KBExpressionRequirement
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UKBExpressionRequirement : public UConditionalListRequirement
	{
	public:
		struct FKnowledgeBaseExpression                            OwnerKBExpression;                                       // 0x0028(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseFactListenerObject
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UKnowledgeBaseFactListenerObject : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseComponent
	 * Size -> 0x0418 (FullSize[0x0500] - InheritedSize[0x00E8])
	 */
	class UKnowledgeBaseComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_QT4X[0xB8];                                  // 0x00E8(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKnowledgeBaseValueSelector>                 InitialFacts;                                            // 0x01A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UAkSwitchValue*>                              AkSwitchValues;                                          // 0x01B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bUseLocationInDefaultExpressionListener;                 // 0x01C0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoUpdateKBLocation;                                   // 0x01C1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bReplicateFacts;                                         // 0x01C2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DR2D[0x1];                                   // 0x01C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UpdateLocationThreshold;                                 // 0x01C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FKnowledgeBaseNetworkedDataArray                    ServerReplicatedFacts;                                   // 0x01C8(0x0120) Net, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FKnowledgeBaseNetworkedDataArray                    OwnerReplicatedFacts;                                    // 0x02E8(0x0120) Net, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UKnowledgeBaseExpressionListener*                    ExpressionListener;                                      // 0x0408(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9JBT[0xF0];                                  // 0x0410(0x00F0) MISSED OFFSET (PADDING)

	public:
		void SetReplicateFacts(bool Value);
		void ServerOwnerFactRemoved(const class FString& FactName);
		void ServerOwnerFactChanged(const struct FKnowledgeBaseNetworkedData& DataArray);
		void BueprintGetFloatFact(const struct FKnowledgeBaseFactKey& FactKey, float* FactValue, bool* IsValid);
		void BlueprintSetVectorFact(const struct FKnowledgeBaseFactKey& FactKey, const struct FVector& Value, bool* Success);
		void BlueprintSetStringFact(const struct FKnowledgeBaseFactKey& FactKey, const class FString& Value, bool* Success);
		void BlueprintSetIntegerFact(const struct FKnowledgeBaseFactKey& FactKey, int32_t Value, bool* Success);
		void BlueprintSetFloatFact(const struct FKnowledgeBaseFactKey& FactKey, float Value, bool* Success);
		void BlueprintSetDateTimeFact(const struct FKnowledgeBaseFactKey& FactKey, const struct FDateTime& Value, bool* Success);
		void BlueprintSetBoolFact(const struct FKnowledgeBaseFactKey& FactKey, bool Value, bool* Success);
		void BlueprintRemoveFact(const struct FKnowledgeBaseFactKey& FactKey, bool* Success, float Delay);
		void BlueprintModifyVectorFact(const struct FKnowledgeBaseFactKey& FactKey, const struct FVector& Delta, struct FVector* NewValue, bool* Success);
		void BlueprintModifyIntegerFact(const struct FKnowledgeBaseFactKey& FactKey, int32_t Delta, int32_t* NewValue, bool* Success);
		void BlueprintModifyFloatFact(const struct FKnowledgeBaseFactKey& FactKey, float Delta, float* NewValue, bool* Success);
		void BlueprintIncrementCounterFact(const struct FKnowledgeBaseFactKey& FactKey, bool* Success, class UObject* InvokerObject, const class FName& InvokerName);
		void BlueprintGetVectorFact(const struct FKnowledgeBaseFactKey& FactKey, struct FVector* FactValue, bool* IsValid);
		void BlueprintGetStringFact(const struct FKnowledgeBaseFactKey& FactKey, class FString* FactValue, bool* IsValid);
		void BlueprintGetIntegerFact(const struct FKnowledgeBaseFactKey& FactKey, int32_t* FactValue, bool* IsValid);
		class UKnowledgeBaseExpressionListener* BlueprintGetExpressionListener();
		void BlueprintGetDateTimeFact(const struct FKnowledgeBaseFactKey& FactKey, struct FDateTime* FactValue, bool* IsValid);
		void BlueprintGetCounterFact(const struct FKnowledgeBaseFactKey& FactKey, int32_t* FactValue, bool* IsValid);
		void BlueprintGetBoolFact(const struct FKnowledgeBaseFactKey& FactKey, bool* FactValue, bool* IsValid);
		float BlueprintEvaluateNumericExpression(const struct FKnowledgeBaseExpression& Expression);
		bool BlueprintEvaluateExpression(const struct FKnowledgeBaseExpression& Expression);
		void BlueprintDecrementCounterFact(const struct FKnowledgeBaseFactKey& FactKey, bool* Success, class UObject* InvokerObject, const class FName& InvokerName, float Delay);
		void BlueprintCancelDeferredRemoval(const struct FKnowledgeBaseFactKey& Fact, bool* Success);
		void BlueprintCancelDeferredDecrement(const struct FKnowledgeBaseFactKey& Fact, const class FName& DecrementerName, bool* Success);
		void BlueprintAddVectorFact(const struct FKnowledgeBaseFactKey& FactKey, const struct FVector& Value, bool* Success);
		void BlueprintAddStringFact(const struct FKnowledgeBaseFactKey& FactKey, const class FString& Value, bool* Success);
		void BlueprintAddIntegerFact(const struct FKnowledgeBaseFactKey& FactKey, int32_t Value, bool* Success);
		void BlueprintAddFloatFact(const struct FKnowledgeBaseFactKey& FactKey, float Value, bool* Success);
		void BlueprintAddDateTimeFact(const struct FKnowledgeBaseFactKey& FactKey, const struct FDateTime& Value, bool* Success);
		void BlueprintAddBoolFact(const struct FKnowledgeBaseFactKey& FactKey, bool Value, bool* Success);
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseExpressionAliasDataAsset
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UKnowledgeBaseExpressionAliasDataAsset : public UDataAsset
	{
	public:
		TMap<class FName, struct FKnowledgeBaseExpression>         Expressions;                                             // 0x0030(0x0050) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseExpressionBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UKnowledgeBaseExpressionBuilder : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseExpressionBuilder_Default
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UKnowledgeBaseExpressionBuilder_Default : public UKnowledgeBaseExpressionBuilder
	{
	public:
		TArray<class UKnowledgeBaseExpressionBuilderObject*>       ExpressionObjects;                                       // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseExpressionBuilder_AllOf
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UKnowledgeBaseExpressionBuilder_AllOf : public UKnowledgeBaseExpressionBuilder_Default
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseExpressionBuilder_AnyOf
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UKnowledgeBaseExpressionBuilder_AnyOf : public UKnowledgeBaseExpressionBuilder_Default
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseExpressionBuilder_Complex
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UKnowledgeBaseExpressionBuilder_Complex : public UKnowledgeBaseExpressionBuilder
	{
	public:
		TMap<class FName, class UKnowledgeBaseExpressionBuilderObject*> ExpressionObjects;                                       // 0x0028(0x0050) Edit, ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FKnowledgeBaseExpression                            ComplexExpression;                                       // 0x0078(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseExpressionBuilder_NumberOf
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UKnowledgeBaseExpressionBuilder_NumberOf : public UKnowledgeBaseExpressionBuilder_Default
	{
	public:
		int32_t                                                    NumberOfTrueExpressions;                                 // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4TA6[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseExpressionBuilder_Total
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UKnowledgeBaseExpressionBuilder_Total : public UKnowledgeBaseExpressionBuilder_Default
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseExpressionBuilderObject
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UKnowledgeBaseExpressionBuilderObject : public UObject
	{
	public:
		bool                                                       bNOTResult;                                              // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AUEO[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            EvaluatedExpression;                                     // 0x0030(0x0038) Edit, EditConst, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseExpressionBuilderObject_Expression
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	class UKnowledgeBaseExpressionBuilderObject_Expression : public UKnowledgeBaseExpressionBuilderObject
	{
	public:
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0068(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseExpressionCache
	 * Size -> 0x0188 (FullSize[0x01B0] - InheritedSize[0x0028])
	 */
	class UKnowledgeBaseExpressionCache : public UKnowledgeBaseFactListenerObject
	{
	public:
		unsigned char                                              UnknownData_K2D6[0x188];                                 // 0x0028(0x0188) MISSED OFFSET (PADDING)

	public:
		void UpdateTimeExpressions();
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseExpressionListener
	 * Size -> 0x0050 (FullSize[0x0200] - InheritedSize[0x01B0])
	 */
	class UKnowledgeBaseExpressionListener : public UKnowledgeBaseExpressionCache
	{
	public:
		unsigned char                                              UnknownData_EOOU[0x50];                                  // 0x01B0(0x0050) MISSED OFFSET (PADDING)

	public:
		void RemoveObjectForActor(class AActor* ActorToRemove);
		void RemoveObject(class UKnowledgeBaseComponent* KBObject);
		void RemoveNamedObjectForActor(class AActor* ActorToRemove, const class FName& ObjectName);
		void RemoveNamedObject(class UKnowledgeBaseComponent* KBObject, const class FName& ObjectName);
		void OnGameplayEventFired(const struct FGameplayEvent& GameplayEvent);
		void ListenToNumericExpressionByFunctionName(const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName, bool bCallOnRegister);
		void ListenToExpressionByFunctionName(const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName, bool bCallOnRegister);
		void AddObjectForActor(class AActor* ActorToAdd);
		void AddObject(class UKnowledgeBaseComponent* KBObject);
		void AddNamedObjectForActor(class AActor* ActorToAdd, const class FName& ObjectName);
		void AddNamedObject(class UKnowledgeBaseComponent* KBObject, const class FName& ObjectName);
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseFactRegistry
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UKnowledgeBaseFactRegistry : public UObject
	{
	public:
		TArray<class UDataTable*>                                  ExpressionAliasList;                                     // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UKnowledgeBaseExpressionAliasDataAsset*>      ExpressionAliasAssets;                                   // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7UU3[0xA0];                                  // 0x0048(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UKnowledgeBaseExpressionCache*>               RegisteredCaches;                                        // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AMMS[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBasePersistentDataCollection
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UKnowledgeBasePersistentDataCollection : public UPersistentDataCollectionBase
	{
	public:
		unsigned char                                              UnknownData_5WHW[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseNodes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UKnowledgeBaseNodes : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RemoveNumericExpressionListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, const class FScriptDelegate& Delegate);
		void STATIC_RemoveNumericExpressionListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName);
		void STATIC_RemoveFactListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseFactKey& FactName, const class FScriptDelegate& Delegate);
		void STATIC_RemoveFactListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseFactKey& FactName, class UObject* Object, const class FName& FunctionName);
		void STATIC_RemoveExpressionListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, const class FScriptDelegate& Delegate);
		void STATIC_RemoveExpressionListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName);
		void STATIC_RegisterFactKey(class UObject* WorldContextObject, const class FName& FactName, EKnowledgeBaseFactType Type, struct FKnowledgeBaseFactKey* FactKey, EKnowledgeBaseFactReplication ReplicationType, bool* bSuccess);
		bool STATIC_IsExpressionValidAndNotEmpty(const struct FKnowledgeBaseExpression& Expression);
		struct FKnowledgeBaseFactKey STATIC_GetFactKey(const class FName& Name);
		float STATIC_EvaluateNumericExpressionForWorldPositionAndObjects(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, const struct FVector& WorldPosition, TArray<class UKnowledgeBaseComponent*> AdditionalObjects);
		float STATIC_EvaluateNumericExpressionForWorldPosition(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, const struct FVector& WorldPosition);
		float STATIC_EvaluateNumericExpression(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, TArray<class UKnowledgeBaseComponent*> Objects);
		bool STATIC_EvaluateExpressionForWorldPositionAndObjects(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, const struct FVector& WorldPosition, TArray<class UKnowledgeBaseComponent*> AdditionalObjects);
		bool STATIC_EvaluateExpressionForWorldPosition(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, const struct FVector& WorldPosition);
		bool STATIC_EvaluateExpression(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, TArray<class UKnowledgeBaseComponent*> Objects);
		bool STATIC_EqualEqual_FactKeyFactKey(const struct FKnowledgeBaseFactKey& A, const struct FKnowledgeBaseFactKey& B);
		struct FKnowledgeBaseFactKey STATIC_Conv_StringToFactKey(const class FString& inString);
		struct FKnowledgeBaseExpression STATIC_Conv_StringToExpression(const class FString& inString);
		struct FKnowledgeBaseFactKey STATIC_Conv_NameToFactKey(const class FName& InName);
		struct FKnowledgeBaseExpression STATIC_Conv_NameToExpression(const class FName& InName);
		class FString STATIC_Conv_FactKeyToString(const struct FKnowledgeBaseFactKey& InKey);
		class FName STATIC_Conv_FactKeyToName(const struct FKnowledgeBaseFactKey& InKey);
		class FString STATIC_Conv_ExpressionToString(const struct FKnowledgeBaseExpression& InExpression);
		class FName STATIC_Conv_ExpressionToName(const struct FKnowledgeBaseExpression& InExpression);
		void STATIC_AddNumericExpressionListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, const class FScriptDelegate& Delegate, bool bCallOnRegister);
		void STATIC_AddNumericExpressionListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName, bool bCallOnRegister);
		void STATIC_AddFactListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseFactKey& FactName, const class FScriptDelegate& Delegate, bool bCallOnRegister);
		void STATIC_AddFactListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseFactKey& FactName, class UObject* Object, const class FName& FunctionName, bool bCallOnRegister);
		void STATIC_AddExpressionListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, const class FScriptDelegate& Delegate, bool bCallOnRegister);
		void STATIC_AddExpressionListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName, bool bCallOnRegister);
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.FactsState
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFactsState : public UDataAsset
	{
	public:
		TArray<struct FKnowledgeBaseValueSelector>                 Facts;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.KnowledgeBaseValueFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UKnowledgeBaseValueFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FKnowledgeBaseValueSelector STATIC_CreateVec3FactValue(const class FName& Name, const struct FVector& Value);
		struct FKnowledgeBaseValueSelector STATIC_CreateStringFactValue(const class FName& Name, const class FString& Value);
		struct FKnowledgeBaseValueSelector STATIC_CreateIntFactValue(const class FName& Name, int32_t Value);
		struct FKnowledgeBaseValueSelector STATIC_CreateFloatFactValue(const class FName& Name, float Value);
		struct FKnowledgeBaseValueSelector STATIC_CreateBoolFactValue(const class FName& Name, bool bValue);
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.ScopedKnowledgeBaseExpressionActor
	 * Size -> 0x0098 (FullSize[0x0348] - InheritedSize[0x02B0])
	 */
	class AScopedKnowledgeBaseExpressionActor : public AActor
	{
	public:
		bool                                                       bShouldAllowStateReinforcement;                          // 0x02B0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShouldDeferDisableReasonEvaluation;                     // 0x02B1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FJ80[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScopedKnowledgeBaseExpressionListener              ActiveExpression;                                        // 0x02B8(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G9SV[0x20];                                  // 0x0318(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsActorActiveOnServer;                                  // 0x0338(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KBRM[0xF];                                   // 0x0339(0x000F) MISSED OFFSET (PADDING)

	public:
		void RemoveLocalDisableReason(const class FName& Reason);
		void RemoveDisableReason(const class FName& Reason);
		void OnReset();
		void OnRep_IsActorActiveOnServer();
		void OnEnabled();
		void OnDisabled();
		bool IsActive();
		void EditorSetActiveExpression(const struct FKnowledgeBaseExpression& Expression);
		void AddLocalDisableReason(const class FName& Reason);
		void AddDisableReason(const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class KnowledgeBase.ScopedKnowledgeBaseExpressionListenerFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScopedKnowledgeBaseExpressionListenerFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ShutdownExpressionListener(struct FScopedKnowledgeBaseExpressionListener* Expression);
		void STATIC_SetupExpressionListener(struct FScopedKnowledgeBaseExpressionListener* Expression, class AActor* Owner, const class FScriptDelegate& Delegate);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
