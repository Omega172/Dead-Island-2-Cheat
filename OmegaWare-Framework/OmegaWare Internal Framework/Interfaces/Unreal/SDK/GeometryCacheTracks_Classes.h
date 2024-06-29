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
	 * Class GeometryCacheTracks.MovieSceneGeometryCacheSection
	 * Size -> 0x0040 (FullSize[0x0120] - InheritedSize[0x00E0])
	 */
	class UMovieSceneGeometryCacheSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneGeometryCacheParams                      Params;                                                  // 0x00E0(0x0040) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
