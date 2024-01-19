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
	 * BlueprintGeneratedClass BP_StatusEffectTypeState_Disoriented.BP_StatusEffectTypeState_Disoriented_C
	 * Size -> 0x0018 (FullSize[0x00E8] - InheritedSize[0x00D0])
	 */
	class UBP_StatusEffectTypeState_Disoriented_C : public UBP_Base_StatusEffectTypeState_Stun_C
	{
	public:
		struct FGuid                                               DeviationModifierID;                                     // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UModifiableValuesComponent*                          ModifiableValuesComponent;                               // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
