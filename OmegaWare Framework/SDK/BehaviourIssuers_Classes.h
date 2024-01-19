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
	 * Class BehaviourIssuers.BehaviourIssuerArbitratorComponent
	 * Size -> 0x0188 (FullSize[0x0270] - InheritedSize[0x00E8])
	 */
	class UBehaviourIssuerArbitratorComponent : public UActorComponent
	{
	public:
		TMap<class FName, int32_t>                                 BehaviourIssuerPriorities;                               // 0x00E8(0x0050) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJA3[0x138];                                 // 0x0138(0x0138) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BehaviourIssuers.BTComposite_BehaviourIssuer
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UBTComposite_BehaviourIssuer : public UBTCompositeNode
	{
	public:
		TArray<class FName>                                        BehaviourIssuers;                                        // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
