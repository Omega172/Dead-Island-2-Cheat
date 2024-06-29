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
	 * BlueprintGeneratedClass BP_Action_AnimatedKnockback_AI.BP_Action_AnimatedKnockback_AI_C
	 * Size -> 0x0038 (FullSize[0x01F0] - InheritedSize[0x01B8])
	 */
	class UBP_Action_AnimatedKnockback_AI_C : public UAnimatedKnockbackHitReactAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_AI_C*                                       AIPawn;                                                  // 0x01C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               OverlappingHitDetectionGUID;                             // 0x01C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UImpactOnCollisionDetectionComponent*                CollisionDetection;                                      // 0x01D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FEventInstigator                                    Instigator;                                              // 0x01E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		bool OnBeginEarly();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_AnimatedKnockback_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
