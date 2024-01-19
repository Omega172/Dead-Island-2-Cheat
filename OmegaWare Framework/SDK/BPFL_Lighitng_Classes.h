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
	 * BlueprintGeneratedClass BPFL_Lighitng.BPFL_Lighitng_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_Lighitng_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GlitchOnImpact(class UMaterialInstanceDynamic* ScreenMaterialInsatance, const struct FHitResult& Hit, class USceneComponent* ScreenMesh, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
