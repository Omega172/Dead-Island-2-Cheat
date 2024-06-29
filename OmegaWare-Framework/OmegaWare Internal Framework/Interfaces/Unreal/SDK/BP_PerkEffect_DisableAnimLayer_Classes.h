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
	 * BlueprintGeneratedClass BP_PerkEffect_DisableAnimLayer.BP_PerkEffect_DisableAnimLayer_C
	 * Size -> 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
	 */
	class UBP_PerkEffect_DisableAnimLayer_C : public UInstancedPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_AnimationLayer_AI_C*                            AnimLayerComponent;                                      // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UAnimationLayer*>                             LayersToDisable;                                         // 0x0070(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                AnimLayerDisableReason;                                  // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FGuid>                                       LayerDisableRequestIDs;                                  // 0x0088(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnStart(const struct FPerkEffectStartParams& Params);
		void OnEnd(const struct FPerkEffectEndParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_DisableAnimLayer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
