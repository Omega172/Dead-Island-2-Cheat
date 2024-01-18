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
	 * Class BehaviourModifiers.BehaviourModifier
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBehaviourModifier : public UObject
	{
	public:
		void OnEnd(class AController* Controller);
		void OnBegin(class AController* Controller);
		static UClass* StaticClass();
	};

	/**
	 * Class BehaviourModifiers.BehaviourModifierComponent
	 * Size -> 0x0050 (FullSize[0x0138] - InheritedSize[0x00E8])
	 */
	class UBehaviourModifierComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_WK9U[0x50];                                  // 0x00E8(0x0050) MISSED OFFSET (PADDING)

	public:
		void EndBehaviourModifier(class UClass* BehaviourModifierClass);
		void BeginBehaviourModifier(class UClass* BehaviourModifierClass);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
