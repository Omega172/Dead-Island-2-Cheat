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
	 * BlueprintGeneratedClass BP_Action_SuicideDetonation_Suicider.BP_Action_SuicideDetonation_Suicider_C
	 * Size -> 0x0028 (FullSize[0x00F8] - InheritedSize[0x00D0])
	 */
	class UBP_Action_SuicideDetonation_Suicider_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADICharacter*                                        Character;                                               // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionComponent*                           CharacterAction;                                         // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KB;                                                      // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDIAnimInstance*                                     AnimInstance;                                            // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnFailedToPlay_95C75E92430BEFCD6ED2D99502055D4F(const class FName& NotifyName);
		void OnSectionChanged_95C75E92430BEFCD6ED2D99502055D4F(const class FName& SectionName);
		void OnNotifyEnd_95C75E92430BEFCD6ED2D99502055D4F(const class FName& NotifyName);
		void OnNotifyBegin_95C75E92430BEFCD6ED2D99502055D4F(const class FName& NotifyName);
		void OnInterrupted_95C75E92430BEFCD6ED2D99502055D4F(const class FName& NotifyName);
		void OnBlendOut_95C75E92430BEFCD6ED2D99502055D4F(const class FName& NotifyName);
		void OnCompleted_95C75E92430BEFCD6ED2D99502055D4F(const class FName& NotifyName);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnSuccessfulSuicide();
		void OnUnsuccessfulSuicide();
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void ExecuteUbergraph_BP_Action_SuicideDetonation_Suicider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
