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
	 * BlueprintGeneratedClass BP_EntryActivity_CeilingVent.BP_EntryActivity_CeilingVent_C
	 * Size -> 0x0002 (FullSize[0x086A] - InheritedSize[0x0868])
	 */
	class ABP_EntryActivity_CeilingVent_C : public ABP_Base_EntryActivity_Vent_C
	{
	public:
		bool                                                       HasOpened;                                               // 0x0868(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CloseVentHatchAfterUse;                                  // 0x0869(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BindOpening();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
