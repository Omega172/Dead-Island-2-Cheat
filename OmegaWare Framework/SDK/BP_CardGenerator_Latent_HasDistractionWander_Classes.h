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
	 * BlueprintGeneratedClass BP_CardGenerator_Latent_HasDistractionWander.BP_CardGenerator_Latent_HasDistractionWander_C
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBP_CardGenerator_Latent_HasDistractionWander_C : public UBP_CardGenerator_Base_Latent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_Base_Distraction_AI_C*                          DistractionComponent;                                    // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FString GetBlueprintDescription();
		void OnInitialise();
		void OnUninitialise();
		void OnDistractionWanderChanged(bool HasValidDistractionWander);
		void ExecuteUbergraph_BP_CardGenerator_Latent_HasDistractionWander(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
