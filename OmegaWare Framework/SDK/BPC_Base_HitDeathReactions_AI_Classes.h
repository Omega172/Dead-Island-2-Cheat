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
	 * BlueprintGeneratedClass BPC_Base_HitDeathReactions_AI.BPC_Base_HitDeathReactions_AI_C
	 * Size -> 0x0008 (FullSize[0x01C8] - InheritedSize[0x01C0])
	 */
	class UBPC_Base_HitDeathReactions_AI_C : public UHitDeathReactions
	{
	public:
		bool                                                       CanBeLaunched;                                           // 0x01C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IN7M[0x3];                                   // 0x01C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LaunchWeightScalar;                                      // 0x01C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
