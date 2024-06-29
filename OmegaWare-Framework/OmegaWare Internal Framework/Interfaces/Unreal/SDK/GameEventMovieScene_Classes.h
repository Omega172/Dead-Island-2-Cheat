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
	 * Class GameEventMovieScene.MovieSceneGameEventSection
	 * Size -> 0x0088 (FullSize[0x0168] - InheritedSize[0x00E0])
	 */
	class UMovieSceneGameEventSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneGameEventChannel                         GameEventChannel;                                        // 0x00E0(0x0088) ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameEventMovieScene.MovieSceneGameEventStateSection
	 * Size -> 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
	 */
	class UMovieSceneGameEventStateSection : public UMovieSceneSection
	{
	public:
		class UGameEventState*                                     GameEventState;                                          // 0x00E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OptionalDisplayName;                                     // 0x00E8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameEventMovieScene.MovieSceneGameEventTrack
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UMovieSceneGameEventTrack : public UMovieSceneNameableTrack
	{
	public:
		bool                                                       bFireEventsWhenForwards : 1;                             // 0x0058(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFireEventsWhenBackwards : 1;                            // 0x0058(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0LX[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFireEventsAtPosition                                      EventPosition;                                           // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FJ3E[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0060(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
