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
	 * BlueprintGeneratedClass BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	class UBP_Base_StatusEffectInstance_C : public UStatusEffectInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStatusEffectComponent*                              OwningComponent;                                         // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StatusEffectInstanceEnding;                              // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O521[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void LogRemoveRequest();
		void LogDoubleRemoveError();
		void RemoveInstanceFromComponent();
		void SetupActionListeners();
		void ResolveInstanceFromAction(class UCharacterActionRequestHelper* ActionHelper, class UStatusEffectComponent* StatusEffectComponent);
		void OnStatusEffectActionResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params);
		void OnStatusEffectActionEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnStatusEffectActionCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params);
		void CreateDSLogger();
		void ExecuteUbergraph_BP_Base_StatusEffectInstance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
