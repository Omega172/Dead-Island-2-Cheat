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
	 * Class PrototypeTools.PrototypeComponent
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	class UPrototypeComponent : public UActorComponent
	{
	public:
		class FString                                              PrototypeClassInfo;                                      // 0x00E8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              PrototypeInstanceInfo;                                   // 0x00F8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FPrototypeComponent_ReferencedActorInfo>     ActorsPartOfSetup;                                       // 0x0108(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrototypeTools.PrototypeToolsManager
	 * Size -> 0x0068 (FullSize[0x0318] - InheritedSize[0x02B0])
	 */
	class APrototypeToolsManager : public AInfo
	{
	public:
		TArray<class UPrototypeComponent*>                         RegisteredPrototypeComponents;                           // 0x02B0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class UClass*, uint32_t>                              NumComponentsPerClass;                                   // 0x02C0(0x0050) Transient, NativeAccessSpecifierPrivate
		uint32_t                                                   PrototypeInstanceNumWarningThreshold;                    // 0x0310(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KWOR[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
