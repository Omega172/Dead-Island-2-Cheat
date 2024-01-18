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
	 * BlueprintGeneratedClass BP_CardGenerator_Latent_SetBoolFactOnDraw.BP_CardGenerator_Latent_SetBoolFactOnDraw_C
	 * Size -> 0x0015 (FullSize[0x0075] - InheritedSize[0x0060])
	 */
	class UBP_CardGenerator_Latent_SetBoolFactOnDraw_C : public UBP_CardGenerator_Base_Latent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0068(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       BoolValue;                                               // 0x0074(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class FString GetBlueprintDescription();
		void OnCardDrawn(bool bResultReturnedCard);
		void OnInitialise();
		void ExecuteUbergraph_BP_CardGenerator_Latent_SetBoolFactOnDraw(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
