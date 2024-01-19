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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BlueprintLinks.BlueprintLinks.AddLinks
	 */
	struct UBlueprintLinks_AddLinks_Params
	{
	public:
		TArray<class AActor*>                                      ActorsToPointTo;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintLinks.BlueprintLinksInterface.GatherComponentBlueprintLinks
	 */
	struct UBlueprintLinksInterface_GatherComponentBlueprintLinks_Params
	{
	public:
		TArray<struct FComponentLinkInformation>                   ComponentLinks;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintLinks.BlueprintLinksInterface.GatherBlueprintLinks
	 */
	struct UBlueprintLinksInterface_GatherBlueprintLinks_Params
	{
	public:
		TArray<class AActor*>                                      ActorsToPointTo;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintLinks.BlueprintLinksInterface.CollectBlueprintLinks
	 */
	struct UBlueprintLinksInterface_CollectBlueprintLinks_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
