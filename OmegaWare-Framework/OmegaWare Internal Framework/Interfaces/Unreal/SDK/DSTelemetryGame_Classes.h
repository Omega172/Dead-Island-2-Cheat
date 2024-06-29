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
	 * Class DSTelemetryGame.PacingVolume
	 * Size -> 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
	 */
	class APacingVolume : public ATriggerVolume
	{
	public:
		EPacingValue                                               ExpectedPacing;                                          // 0x02E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MA4A[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetExpectedPacing(EPacingValue Pacing);
		static UClass* StaticClass();
	};

	/**
	 * Class DSTelemetryGame.TelemetryGameSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UTelemetryGameSettings : public UObject
	{
	public:
		ECollisionChannel                                          PlayerCollisionChannel;                                  // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YY82[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxViewDistance;                                         // 0x002C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumDelayBetweenChanges;                              // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SweepSphereRadius;                                       // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
