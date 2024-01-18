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
	 * BlueprintGeneratedClass BP_ActionParams_StateAbility_AI.BP_ActionParams_StateAbility_AI_C
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UBP_ActionParams_StateAbility_AI_C : public UCustomActionParamsBase
	{
	public:
		ETransmittableStatus                                       TransmitterStatusType;                                   // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_FTLV[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        AlteredBoneNames;                                        // 0x0040(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class UCosmeticEffectsDefinition*>                  AlteredBoneCosmeticEffects;                              // 0x0050(0x0010) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
