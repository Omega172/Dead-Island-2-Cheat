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
	 * Class BlueprintLinks.BlueprintLinks
	 * Size -> 0x0050 (FullSize[0x0138] - InheritedSize[0x00E8])
	 */
	class UBlueprintLinks : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnUpdateLinks;                                           // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FBlueprintLink>                              LinksTo;                                                 // 0x00F8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FBlueprintLink>                              LinksBack;                                               // 0x0108(0x0010) Edit, ZeroConstructor, DuplicateTransient, NativeAccessSpecifierPrivate
		TArray<struct FComponentLinkInformation>                   ComponentLinksTo;                                        // 0x0118(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FComponentLinkInformation>                   ComponentLinksBack;                                      // 0x0128(0x0010) Edit, ZeroConstructor, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void AddLinks(TArray<class AActor*> ActorsToPointTo);
		static UClass* StaticClass();
	};

	/**
	 * Class BlueprintLinks.BlueprintLinksInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBlueprintLinksInterface : public UInterface
	{
	public:
		void GatherComponentBlueprintLinks(TArray<struct FComponentLinkInformation>* ComponentLinks);
		void GatherBlueprintLinks(TArray<class AActor*>* ActorsToPointTo);
		TArray<class AActor*> CollectBlueprintLinks();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
