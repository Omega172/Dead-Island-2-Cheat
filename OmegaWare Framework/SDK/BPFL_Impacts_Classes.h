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
	 * BlueprintGeneratedClass BPFL_Impacts.BPFL_Impacts_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_Impacts_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetHitComponentFromImpactEvent(const struct FPointImpactEventResult& PointImpactEventResult, class UObject* __WorldContext, class UPrimitiveComponent** PrimComp);
		void AddSoftBodyImpulseFromImpactEvent(const struct FPointImpactEventResult& PointImpactEventResult, class USoftBodyComponent** SoftBodyComp, const class FName& SoftBodyName, float Scale, float Radius, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
