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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Gateway.AirlockActor.RequestGatewayOpen
	 */
	struct AAirlockActor_RequestGatewayOpen_Params
	{
	public:
		class FName                                                GatewayName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Gateway.AirlockActor.OpenGateway
	 */
	struct AAirlockActor_OpenGateway_Params
	{	};

	/**
	 * Function Gateway.AirlockActor.GatherBlueprintLinks
	 */
	struct AAirlockActor_GatherBlueprintLinks_Params
	{
	public:
		TArray<class AActor*>                                      ActorsToPointTo;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
