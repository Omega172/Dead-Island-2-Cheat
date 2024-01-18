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
	 * BlueprintGeneratedClass BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C
	 * Size -> 0x0A88 (FullSize[0x0B70] - InheritedSize[0x00E8])
	 */
	class UBPC_AttachmentSettings_AI_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UImpactEventComponent*                               ImpactEventComponent;                                    // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAttachmentConfig*                                   AttachmentConfig;                                        // 0x0108(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<struct FKnowledgeBaseFactKey, struct FAttachmentPieceSettings> AttachmentPieces;                                        // 0x0110(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FKnowledgeBaseFactKey>                       AttachmentKeys;                                          // 0x0160(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      CurrentMaxHealth;                                        // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z7K1[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADIAICharacter*                                      Character;                                               // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAttachmentPieceSettings>                    AttachmentValues;                                        // 0x0180(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      RegisteredLevel;                                         // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AYJ4[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVisceraComponent*                                   VisceraComponent;                                        // 0x0198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAttachmentPieceSettings                            PointImpactedAttachmentPiece;                            // 0x01A8(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              DebugTagString;                                          // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       PointImpactAttachmentHit;                                // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BF05[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPerksComponent*                                     PerkComponent;                                           // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FKnowledgeBaseFactKey>                       ForceDetachmentKeys;                                     // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FPointImpactEventResult                             PointImpactEventResult;                                  // 0x0280(0x0300) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FRadialImpactEventResult                            RadialImpactEventResult;                                 // 0x0580(0x0278) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FGeneralImpactEventResult                           GeneralImpactEventResult;                                // 0x07F8(0x0240) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FAttachmentPieceSettings>                    RadialImpactedAttachmentPieces;                          // 0x0A38(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       RadialImpactAttachmentHit;                               // 0x0A48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JRUL[0x7];                                   // 0x0A49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttachmentPieceSettings                            ImpactedAttachmentPieceRef;                              // 0x0A50(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FUniqueAttachmentPerksStorage>               UniquePerksList;                                         // 0x0AF8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UModifiableValuesComponent*                          ModifiableValuesComponent;                               // 0x0B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADICharacter*                                        ImpactInstigator;                                        // 0x0B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BlockImpactsBasedOnDamageRequirement;                    // 0x0B18(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2GBT[0x3];                                   // 0x0B19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlockDamageLessThan;                                     // 0x0B1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               ActionId;                                                // 0x0B20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       DetachmentActionHelper;                                  // 0x0B30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        DetachmentEvents;                                        // 0x0B38(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        ProcessedDetachmentEvents;                               // 0x0B48(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FKnowledgeBaseFactKey                               MaxNumberOfAttachmentsFact;                              // 0x0B58(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               CurrentNumberOfAttachmentsFact;                          // 0x0B64(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		class FName GetPerkSourceName(const struct FAttachmentPieceSettings& AttachmentPieceSettings);
		void CharacterActionParams(struct FCharacterActionRequestParams* CharacterActionRequestParams);
		void ImpactsToIgnore(const struct FAttachmentPieceSettings& AttachmentSettings, bool* HasImpactBeenBlocked);
		void IsDSLogInValidKey(const struct FAttachmentPieceSettings& AttachmentSettings);
		void SetUpAttachmentFact(const struct FKnowledgeBaseFactKey& FactKey, struct FAttachmentPieceSettings* AttachmentSettings, bool Condition);
		void ExternalFactAlteration(float Health, int32_t ImpactsRequired, const struct FAttachmentPieceSettings& AttachmentSettings);
		void EnableFactReplication(const struct FKnowledgeBaseFactKey& InKey, EKnowledgeBaseFactType Type, struct FKnowledgeBaseFactKey* FactKey);
		void SetUpFactReplicationInitialisation();
		void GetRequiredFuryForce(const struct FKnowledgeBaseFactKey& AttachedFact, float* RequiredForceValue);
		void GetRequiredFuryDamage(const struct FKnowledgeBaseFactKey& AttachedFact, float* RequiredDamageValue);
		float FuryDamageRequirement(const struct FAttachmentPieceSettings& AttachmentSettings, float OwnersMaxHealth);
		int32_t ClampImpactsRequired(int32_t Value, int32_t Min, int32_t Max, bool* ValueClamped);
		float ClampDamage(float Value, float Min, float Max, bool* ValueClamped);
		void RemoveUniquePerks(const struct FKnowledgeBaseFactKey& AttachedFact);
		void AddUniquePerks(const struct FAttachmentPieceSettings& AttachmentSettings);
		void RemoveFactOnBrokenAttachment();
		void AttachmentImpactResult(const struct FAttachmentPieceSettings& AttachmentSettings);
		void InitialiseRequiredImpacts(const struct FAttachmentPieceSettings& AttachmentSettings);
		void UpdateHealth(const struct FAttachmentPieceSettings& AttachmentSettings, float UpdatedMaxHealth);
		void AttachmentHealthAndImpactsRequiredLevelScaling();
		void ReceiveBeginPlay();
		void AnyImpactRecieved(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent);
		void PostImpact(class AActor* Actor, class UImpactEventComponent* ImpactEventComponent);
		void MaxHealthChanged(const struct FKnowledgeBaseFactKey& FactKey, class UKnowledgeBaseComponent* KnowledgeBaseComponent, EKnowledgeBaseFactChangeType FactChangeType);
		void RequestChangeAttachmentVariables(const struct FKnowledgeBaseFactKey& Key, float Health, int32_t ImpactsRequired);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BPC_AttachmentSettings_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
