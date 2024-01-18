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
	 * Class WwisePlaybackRuntime.WwiseAlexaAudioComponent
	 * Size -> 0x0020 (FullSize[0x05B0] - InheritedSize[0x0590])
	 */
	class UWwiseAlexaAudioComponent : public UAkAudioInputComponent
	{
	public:
		unsigned char                                              UnknownData_GNZT[0x20];                                  // 0x0590(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwisePlaybackRuntime.ClefWwisePlaybackConfig
	 * Size -> 0x0150 (FullSize[0x0178] - InheritedSize[0x0028])
	 */
	class UClefWwisePlaybackConfig : public UObject
	{
	public:
		unsigned char                                              Speech[0x28];                                            // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Media[0x28];                                             // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Alerts[0x28];                                            // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Notifications[0x28];                                     // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SystemSounds[0x28];                                      // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Ringtones[0x28];                                         // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Comms[0x28];                                             // 0x0118(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAkAudioEvent*                                       SpeechEvent;                                             // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       MediaEvent;                                              // 0x0148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       AlertsEvent;                                             // 0x0150(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       NotificationsEvent;                                      // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       SystemSoundsEvent;                                       // 0x0160(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       RingtonesEvent;                                          // 0x0168(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       CommsEvent;                                              // 0x0170(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
