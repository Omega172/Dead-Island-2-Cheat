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
	 * UserDefinedStruct SArcFromSourceAffectedActorProperties.SArcFromSourceAffectedActorProperties
	 * Size -> 0x0018
	 */
	struct FSArcFromSourceAffectedActorProperties
	{
	public:
		bool                                                       IsInterceptable_15_EFB223B7452644AEB3619880DF34CF06;     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       MustBeAlive_1_20406CF64E9CE24556AF17B92D9414DB;          // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ApplyDamage_16_2F12D75A4124871D1A62478ED4C6F700;         // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6ON4[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TracingOffset_9_B583701B45ACB461BF13FEB0D1843425;        // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SphereRadius_6_B48E809F4C18A164307271988EC6CFD3;         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TransmittableStatusRadius_12_4D2B8E3D41A724580E19F08D3E924C66; // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
