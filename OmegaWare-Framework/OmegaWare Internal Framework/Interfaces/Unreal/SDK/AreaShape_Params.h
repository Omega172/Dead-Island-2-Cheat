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
	 * Function AreaShape.AreaShapeComponent.UpdateAreaBounds
	 */
	struct UAreaShapeComponent_UpdateAreaBounds_Params
	{	};

	/**
	 * Function AreaShape.AreaShapeComponent.SetSphereProperties
	 */
	struct UAreaShapeComponent_SetSphereProperties_Params
	{
	public:
		float                                                      InRadius;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AreaShape.AreaShapeComponent.SetShapeType
	 */
	struct UAreaShapeComponent_SetShapeType_Params
	{
	public:
		EAreaShapeType                                             InType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AreaShape.AreaShapeComponent.SetShapeProperties
	 */
	struct UAreaShapeComponent_SetShapeProperties_Params
	{
	public:
		TArray<struct FVector2D>                                   InPoints;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      InHeight;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AreaShape.AreaShapeComponent.SetCylinderProperties
	 */
	struct UAreaShapeComponent_SetCylinderProperties_Params
	{
	public:
		float                                                      InHeight;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InRadius;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AreaShape.AreaShapeComponent.SetBoxProperties
	 */
	struct UAreaShapeComponent_SetBoxProperties_Params
	{
	public:
		float                                                      InHeight;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InWidth;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InLength;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AreaShape.AreaShapeComponent.IsPointWithinAreaLocal
	 */
	struct UAreaShapeComponent_IsPointWithinAreaLocal_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AreaShape.AreaShapeComponent.IsPointWithinArea2D
	 */
	struct UAreaShapeComponent_IsPointWithinArea2D_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AreaShape.AreaShapeComponent.IsPointWithinArea
	 */
	struct UAreaShapeComponent_IsPointWithinArea_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AreaShape.AreaShapeComponent.IsBoxWithinArea2D
	 */
	struct UAreaShapeComponent_IsBoxWithinArea2D_Params
	{
	public:
		struct FBox                                                Box;                                                     // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AreaShape.AreaShapeComponent.IsBoxWithinArea
	 */
	struct UAreaShapeComponent_IsBoxWithinArea_Params
	{
	public:
		struct FBox                                                Box;                                                     // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AreaShape.AreaShapeComponent.CenterOnShape
	 */
	struct UAreaShapeComponent_CenterOnShape_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
