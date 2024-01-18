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
	 * Class GameplayEvents.GameplayEventComponent
	 * Size -> 0x0050 (FullSize[0x0138] - InheritedSize[0x00E8])
	 */
	class UGameplayEventComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_QVG6[0x50];                                  // 0x00E8(0x0050) MISSED OFFSET (PADDING)

	public:
		void ServerMulticastDispatchEvent(const struct FGameplayEvent& GameplayEvent);
		void ServerDispatchEvent(const struct FGameplayEvent& GameplayEvent);
		void NetMulticastDispatchEvent(const struct FGameplayEvent& GameplayEvent, EGameplayEventInstigator Instigator);
		void ClientDispatchEvent(const struct FGameplayEvent& GameplayEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayEvents.GameplayEventManager
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class AGameplayEventManager : public AInfo
	{
	public:
		class UGameplayEventComponent*                             GameplayEventComponent;                                  // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68BK[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
