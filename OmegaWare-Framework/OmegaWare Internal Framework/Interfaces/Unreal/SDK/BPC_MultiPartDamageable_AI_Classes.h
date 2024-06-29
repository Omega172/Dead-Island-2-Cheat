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
	 * BlueprintGeneratedClass BPC_MultiPartDamageable_AI.BPC_MultiPartDamageable_AI_C
	 * Size -> 0x0001 (FullSize[0x02F9] - InheritedSize[0x02F8])
	 */
	class UBPC_MultiPartDamageable_AI_C : public UMultiPartDamageableComponent
	{
	public:
		bool                                                       CanBecomeCrawler;                                        // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
