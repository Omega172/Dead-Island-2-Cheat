/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_Impacts.BPFL_Impacts_C.GetHitComponentFromImpactEvent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointImpactEventResult                     PointImpactEventResult                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         PrimComp                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Impacts_C::GetHitComponentFromImpactEvent(const struct FPointImpactEventResult& PointImpactEventResult, class UObject* __WorldContext, class UPrimitiveComponent** PrimComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Impacts.BPFL_Impacts_C.GetHitComponentFromImpactEvent");
		
		UBPFL_Impacts_C_GetHitComponentFromImpactEvent_Params params {};
		params.PointImpactEventResult = PointImpactEventResult;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PrimComp != nullptr)
			*PrimComp = params.PrimComp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_Impacts.BPFL_Impacts_C.AddSoftBodyImpulseFromImpactEvent
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointImpactEventResult                     PointImpactEventResult                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class USoftBodyComponent*                          SoftBodyComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SoftBodyName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Impacts_C::AddSoftBodyImpulseFromImpactEvent(const struct FPointImpactEventResult& PointImpactEventResult, class USoftBodyComponent** SoftBodyComp, const class FName& SoftBodyName, float Scale, float Radius, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Impacts.BPFL_Impacts_C.AddSoftBodyImpulseFromImpactEvent");
		
		UBPFL_Impacts_C_AddSoftBodyImpulseFromImpactEvent_Params params {};
		params.PointImpactEventResult = PointImpactEventResult;
		params.SoftBodyName = SoftBodyName;
		params.Scale = Scale;
		params.Radius = Radius;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SoftBodyComp != nullptr)
			*SoftBodyComp = params.SoftBodyComp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_Impacts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_Impacts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_Impacts.BPFL_Impacts_C");
		return ptr;
	}

}


