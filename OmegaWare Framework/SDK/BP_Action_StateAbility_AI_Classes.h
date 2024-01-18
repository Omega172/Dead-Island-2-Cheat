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
	 * BlueprintGeneratedClass BP_Action_StateAbility_AI.BP_Action_StateAbility_AI_C
	 * Size -> 0x0058 (FullSize[0x0128] - InheritedSize[0x00D0])
	 */
	class UBP_Action_StateAbility_AI_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADIAICharacter*                                      OwnerAI;                                                 // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStateTransmitterComponent*                          StateTransmitterComponent;                               // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FCosmeticEffectsID>                          CosmeticEffectRefs;                                      // 0x00E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UMultiPartHealthComponent*                           MultiPartHealthComponent;                                // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KBComponent;                                             // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_ActionParams_StateAbility_AI_C*                  UserParams;                                              // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        BodyParts;                                               // 0x0118(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void IsBodyPartNotRemoved(class UBodyPartState* BodyPartState, bool* Result);
		void OnBodyPartJustKilled(class AActor* DamagedActor, class FName* BodyPartName, class UBodyPartState* PartState);
		void SetAffectedBodyParts();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void ExecuteUbergraph_BP_Action_StateAbility_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
