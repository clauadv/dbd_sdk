
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/InteractiveToolsFramework.EInputCaptureState
/// Size: 0x05
enum class EInputCaptureState : uint8_t
{
	EInputCaptureState__Begin                                                        = 1,
	EInputCaptureState__Continue                                                     = 2,
	EInputCaptureState__End                                                          = 3,
	EInputCaptureState__Ignore                                                       = 4,
	EInputCaptureState__EInputCaptureState_MAX                                       = 5
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureRequestType
/// Size: 0x03
enum class EInputCaptureRequestType : uint8_t
{
	EInputCaptureRequestType__Begin                                                  = 1,
	EInputCaptureRequestType__Ignore                                                 = 2,
	EInputCaptureRequestType__EInputCaptureRequestType_MAX                           = 3
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureSide
/// Size: 0x06
enum class EInputCaptureSide : uint8_t
{
	EInputCaptureSide__None                                                          = 0,
	EInputCaptureSide__Left                                                          = 1,
	EInputCaptureSide__Right                                                         = 2,
	EInputCaptureSide__Both                                                          = 3,
	EInputCaptureSide__Any                                                           = 99,
	EInputCaptureSide__EInputCaptureSide_MAX                                         = 100
};

/// Enum /Script/InteractiveToolsFramework.EInputDevices
/// Size: 0x09
enum class EInputDevices : uint16_t
{
	EInputDevices__None                                                              = 0,
	EInputDevices__Keyboard                                                          = 1,
	EInputDevices__Mouse                                                             = 2,
	EInputDevices__Gamepad                                                           = 4,
	EInputDevices__OculusTouch                                                       = 8,
	EInputDevices__HTCViveWands                                                      = 16,
	EInputDevices__AnySpatialDevice                                                  = 24,
	EInputDevices__TabletFingers                                                     = 1024,
	EInputDevices__EInputDevices_MAX                                                 = 1025
};

/// Enum /Script/InteractiveToolsFramework.ETransformGizmoSubElements
/// Size: 0x26
enum class ETransformGizmoSubElements : uint32_t
{
	ETransformGizmoSubElements__None                                                 = 0,
	ETransformGizmoSubElements__TranslateAxisX                                       = 2,
	ETransformGizmoSubElements__TranslateAxisY                                       = 4,
	ETransformGizmoSubElements__TranslateAxisZ                                       = 8,
	ETransformGizmoSubElements__TranslateAllAxes                                     = 14,
	ETransformGizmoSubElements__TranslatePlaneXY                                     = 16,
	ETransformGizmoSubElements__TranslatePlaneXZ                                     = 32,
	ETransformGizmoSubElements__TranslatePlaneYZ                                     = 64,
	ETransformGizmoSubElements__TranslateAllPlanes                                   = 112,
	ETransformGizmoSubElements__RotateAxisX                                          = 128,
	ETransformGizmoSubElements__RotateAxisY                                          = 256,
	ETransformGizmoSubElements__RotateAxisZ                                          = 512,
	ETransformGizmoSubElements__RotateAllAxes                                        = 896,
	ETransformGizmoSubElements__ScaleAxisX                                           = 1024,
	ETransformGizmoSubElements__ScaleAxisY                                           = 2048,
	ETransformGizmoSubElements__ScaleAxisZ                                           = 4096,
	ETransformGizmoSubElements__ScaleAllAxes                                         = 7168,
	ETransformGizmoSubElements__ScalePlaneYZ                                         = 8192,
	ETransformGizmoSubElements__ScalePlaneXZ                                         = 16384,
	ETransformGizmoSubElements__ScalePlaneXY                                         = 32768,
	ETransformGizmoSubElements__ScaleAllPlanes                                       = 57344,
	ETransformGizmoSubElements__ScaleUniform                                         = 65536,
	ETransformGizmoSubElements__StandardTranslateRotate                              = 1022,
	ETransformGizmoSubElements__TranslateRotateUniformScale                          = 66558,
	ETransformGizmoSubElements__FullTranslateRotateScale                             = 131070,
	ETransformGizmoSubElements__ETransformGizmoSubElements_MAX                       = 131071
};

/// Enum /Script/InteractiveToolsFramework.EToolChangeTrackingMode
/// Size: 0x04
enum class EToolChangeTrackingMode : uint8_t
{
	EToolChangeTrackingMode__NoChangeTracking                                        = 1,
	EToolChangeTrackingMode__UndoToExit                                              = 2,
	EToolChangeTrackingMode__FullUndoRedo                                            = 3,
	EToolChangeTrackingMode__EToolChangeTrackingMode_MAX                             = 4
};

/// Enum /Script/InteractiveToolsFramework.EToolSide
/// Size: 0x04
enum class EToolSide : uint8_t
{
	EToolSide__Left                                                                  = 1,
	EToolSide__Mouse                                                                 = 1,
	EToolSide__Right                                                                 = 2,
	EToolSide__EToolSide_MAX                                                         = 3
};

/// Enum /Script/InteractiveToolsFramework.EViewInteractionState
/// Size: 0x04
enum class EViewInteractionState : uint8_t
{
	EViewInteractionState__None                                                      = 0,
	EViewInteractionState__Hovered                                                   = 1,
	EViewInteractionState__Focused                                                   = 2,
	EViewInteractionState__EViewInteractionState_MAX                                 = 3
};

/// Enum /Script/InteractiveToolsFramework.ESelectedObjectsModificationType
/// Size: 0x05
enum class ESelectedObjectsModificationType : uint8_t
{
	ESelectedObjectsModificationType__Replace                                        = 0,
	ESelectedObjectsModificationType__Add                                            = 1,
	ESelectedObjectsModificationType__Remove                                         = 2,
	ESelectedObjectsModificationType__Clear                                          = 3,
	ESelectedObjectsModificationType__ESelectedObjectsModificationType_MAX           = 4
};

/// Enum /Script/InteractiveToolsFramework.EToolMessageLevel
/// Size: 0x06
enum class EToolMessageLevel : uint8_t
{
	EToolMessageLevel__Internal                                                      = 0,
	EToolMessageLevel__UserMessage                                                   = 1,
	EToolMessageLevel__UserNotification                                              = 2,
	EToolMessageLevel__UserWarning                                                   = 3,
	EToolMessageLevel__UserError                                                     = 4,
	EToolMessageLevel__EToolMessageLevel_MAX                                         = 5
};

/// Enum /Script/InteractiveToolsFramework.EToolContextCoordinateSystem
/// Size: 0x03
enum class EToolContextCoordinateSystem : uint32_t
{
	EToolContextCoordinateSystem__World                                              = 0,
	EToolContextCoordinateSystem__Local                                              = 1,
	EToolContextCoordinateSystem__EToolContextCoordinateSystem_MAX                   = 2
};

/// Enum /Script/InteractiveToolsFramework.EStandardToolContextMaterials
/// Size: 0x02
enum class EStandardToolContextMaterials : uint8_t
{
	EStandardToolContextMaterials__VertexColorMaterial                               = 1,
	EStandardToolContextMaterials__EStandardToolContextMaterials_MAX                 = 2
};

/// Enum /Script/InteractiveToolsFramework.ESceneSnapQueryTargetType
/// Size: 0x06
enum class ESceneSnapQueryTargetType : uint8_t
{
	ESceneSnapQueryTargetType__None                                                  = 0,
	ESceneSnapQueryTargetType__MeshVertex                                            = 1,
	ESceneSnapQueryTargetType__MeshEdge                                              = 2,
	ESceneSnapQueryTargetType__Grid                                                  = 4,
	ESceneSnapQueryTargetType__All                                                   = 7,
	ESceneSnapQueryTargetType__ESceneSnapQueryTargetType_MAX                         = 8
};

/// Enum /Script/InteractiveToolsFramework.ESceneSnapQueryType
/// Size: 0x03
enum class ESceneSnapQueryType : uint8_t
{
	ESceneSnapQueryType__Position                                                    = 1,
	ESceneSnapQueryType__Rotation                                                    = 2,
	ESceneSnapQueryType__ESceneSnapQueryType_MAX                                     = 3
};

/// Class /Script/InteractiveToolsFramework.InputBehavior
/// Size: 0x0008 (0x000030 - 0x000038)
class UInputBehavior : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.AnyButtonInputBehavior
/// Size: 0x0048 (0x000038 - 0x000080)
class UAnyButtonInputBehavior : public UInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0038   (0x0048)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmoBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UInteractiveGizmoBuilder : public UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.AxisAngleGizmoBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmo
/// Size: 0x0010 (0x000030 - 0x000040)
class UInteractiveGizmo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UInputBehaviorSet*                           InputBehaviors;                                             // 0x0038   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.AxisAngleGizmo
/// Size: 0x00B8 (0x000040 - 0x0000F8)
class UAxisAngleGizmo : public UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0040   (0x0010)  MISSED
	SDK_UNDEFINED(16,4825) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,4826) /* TScriptInterface<Class> */ __um(AngleSource);                                        // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,4827) /* TScriptInterface<Class> */ __um(HitTarget);                                          // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,4828) /* TScriptInterface<Class> */ __um(StateTarget);                                        // 0x0080   (0x0010)  
	bool                                               bInInteraction;                                             // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	FVector                                            RotationOrigin;                                             // 0x0094   (0x000C)  
	FVector                                            RotationAxis;                                               // 0x00A0   (0x000C)  
	FVector                                            RotationPlaneX;                                             // 0x00AC   (0x000C)  
	FVector                                            RotationPlaneY;                                             // 0x00B8   (0x000C)  
	FVector                                            InteractionStartPoint;                                      // 0x00C4   (0x000C)  
	FVector                                            InteractionCurPoint;                                        // 0x00D0   (0x000C)  
	float                                              InteractionStartAngle;                                      // 0x00DC   (0x0004)  
	float                                              InteractionCurAngle;                                        // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x00E4   (0x0014)  MISSED
};

/// Class /Script/InteractiveToolsFramework.AxisPositionGizmoBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.AxisPositionGizmo
/// Size: 0x00A0 (0x000040 - 0x0000E0)
class UAxisPositionGizmo : public UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0040   (0x0010)  MISSED
	SDK_UNDEFINED(16,4829) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,4830) /* TScriptInterface<Class> */ __um(ParameterSource);                                    // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,4831) /* TScriptInterface<Class> */ __um(HitTarget);                                          // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,4832) /* TScriptInterface<Class> */ __um(StateTarget);                                        // 0x0080   (0x0010)  
	bool                                               bEnableSignedAxis;                                          // 0x0090   (0x0001)  
	bool                                               bInInteraction;                                             // 0x0091   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0092   (0x0002)  MISSED
	FVector                                            InteractionOrigin;                                          // 0x0094   (0x000C)  
	FVector                                            interactionAxis;                                            // 0x00A0   (0x000C)  
	FVector                                            InteractionStartPoint;                                      // 0x00AC   (0x000C)  
	FVector                                            InteractionCurPoint;                                        // 0x00B8   (0x000C)  
	float                                              InteractionStartParameter;                                  // 0x00C4   (0x0004)  
	float                                              InteractionCurParameter;                                    // 0x00C8   (0x0004)  
	float                                              ParameterSign;                                              // 0x00CC   (0x0004)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00D0   (0x0010)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoConstantAxisSource
/// Size: 0x0020 (0x000030 - 0x000050)
class UGizmoConstantAxisSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FVector                                            Origin;                                                     // 0x0038   (0x000C)  
	FVector                                            Direction;                                                  // 0x0044   (0x000C)  
};

/// Class /Script/InteractiveToolsFramework.GizmoConstantFrameAxisSource
/// Size: 0x0038 (0x000030 - 0x000068)
class UGizmoConstantFrameAxisSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FVector                                            Origin;                                                     // 0x0038   (0x000C)  
	FVector                                            Direction;                                                  // 0x0044   (0x000C)  
	FVector                                            TangentX;                                                   // 0x0050   (0x000C)  
	FVector                                            TangentY;                                                   // 0x005C   (0x000C)  
};

/// Class /Script/InteractiveToolsFramework.GizmoWorldAxisSource
/// Size: 0x0018 (0x000030 - 0x000048)
class UGizmoWorldAxisSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FVector                                            Origin;                                                     // 0x0038   (0x000C)  
	int32_t                                            AxisIndex;                                                  // 0x0044   (0x0004)  
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentAxisSource
/// Size: 0x0018 (0x000030 - 0x000048)
class UGizmoComponentAxisSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	class USceneComponent*                             Component;                                                  // 0x0038   (0x0008)  
	int32_t                                            AxisIndex;                                                  // 0x0040   (0x0004)  
	bool                                               bLocalAxes;                                                 // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolPropertySet
/// Size: 0x0038 (0x000030 - 0x000068)
class UInteractiveToolPropertySet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0030   (0x0010)  MISSED
	class UInteractiveToolPropertySet*                 CachedProperties;                                           // 0x0040   (0x0008)  
	bool                                               bIsPropertySetEnabled;                                      // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x0049   (0x001F)  MISSED
};

/// Class /Script/InteractiveToolsFramework.BrushBaseProperties
/// Size: 0x0018 (0x000068 - 0x000080)
class UBrushBaseProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              BrushSize;                                                  // 0x0068   (0x0004)  
	bool                                               bSpecifyRadius;                                             // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              BrushRadius;                                                // 0x0070   (0x0004)  
	float                                              BrushStrength;                                              // 0x0074   (0x0004)  
	float                                              BrushFalloffAmount;                                         // 0x0078   (0x0004)  
	bool                                               bShowStrength;                                              // 0x007C   (0x0001)  
	bool                                               bShowFalloff;                                               // 0x007D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x007E   (0x0002)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveTool
/// Size: 0x0058 (0x000030 - 0x000088)
class UInteractiveTool : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0030   (0x0020)  MISSED
	class UInputBehaviorSet*                           InputBehaviors;                                             // 0x0050   (0x0008)  
	TArray<class UObject*>                             ToolPropertyObjects;                                        // 0x0058   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0068   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SingleSelectionTool
/// Size: 0x0008 (0x000088 - 0x000090)
class USingleSelectionTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MeshSurfacePointTool
/// Size: 0x0038 (0x000090 - 0x0000C8)
class UMeshSurfacePointTool : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0090   (0x0038)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.BrushStampData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FBrushStampData
{ 
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0000   (0x00B0)  MISSED
};

/// Class /Script/InteractiveToolsFramework.BaseBrushTool
/// Size: 0x0108 (0x0000C8 - 0x0001D0)
class UBaseBrushTool : public UMeshSurfacePointTool
{ 
public:
	class UBrushBaseProperties*                        BrushProperties;                                            // 0x00C8   (0x0008)  
	bool                                               bInBrushStroke;                                             // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              WorldToLocalScale;                                          // 0x00D4   (0x0004)  
	FBrushStampData                                    LastBrushStamp;                                             // 0x00D8   (0x00B0)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0188   (0x0010)  MISSED
	SDK_UNDEFINED(48,4833) /* TWeakObjectPtr<UClass*> */ __um(PropertyClass);                                      // 0x0198   (0x0030)  
	class UBrushStampIndicator*                        BrushStampIndicator;                                        // 0x01C8   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.BrushStampIndicatorBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.BrushStampIndicator
/// Size: 0x0078 (0x000040 - 0x0000B8)
class UBrushStampIndicator : public UInteractiveGizmo
{ 
public:
	float                                              BrushRadius;                                                // 0x0040   (0x0004)  
	float                                              BrushFalloff;                                               // 0x0044   (0x0004)  
	FVector                                            BrushPosition;                                              // 0x0048   (0x000C)  
	FVector                                            BrushNormal;                                                // 0x0054   (0x000C)  
	bool                                               bDrawIndicatorLines;                                        // 0x0060   (0x0001)  
	bool                                               bDrawRadiusCircle;                                          // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0062   (0x0002)  MISSED
	int32_t                                            SampleStepCount;                                            // 0x0064   (0x0004)  
	FLinearColor                                       LineColor;                                                  // 0x0068   (0x0010)  
	float                                              LineThickness;                                              // 0x0078   (0x0004)  
	bool                                               bDepthTested;                                               // 0x007C   (0x0001)  
	bool                                               bDrawSecondaryLines;                                        // 0x007D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x007E   (0x0002)  MISSED
	float                                              SecondaryLineThickness;                                     // 0x0080   (0x0004)  
	FLinearColor                                       SecondaryLineColor;                                         // 0x0084   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	class UPrimitiveComponent*                         AttachedComponent;                                          // 0x0098   (0x0008)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x00A0   (0x0018)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ClickDragInputBehavior
/// Size: 0x00C0 (0x000080 - 0x000140)
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x0080   (0x00A0)  MISSED
	bool                                               bUpdateModifiersDuringDrag;                                 // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x0121   (0x001F)  MISSED
};

/// Class /Script/InteractiveToolsFramework.LocalClickDragInputBehavior
/// Size: 0x0140 (0x000140 - 0x000280)
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x140];                                     // 0x0140   (0x0140)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UInteractiveToolBuilder : public UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.ClickDragToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UClickDragToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.ClickDragTool
/// Size: 0x0008 (0x000088 - 0x000090)
class UClickDragTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InternalToolFrameworkActor
/// Size: 0x0000 (0x000230 - 0x000230)
class AInternalToolFrameworkActor : public AActor
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoActor
/// Size: 0x0000 (0x000230 - 0x000230)
class AGizmoActor : public AInternalToolFrameworkActor
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseComponent
/// Size: 0x0020 (0x000480 - 0x0004A0)
class UGizmoBaseComponent : public UPrimitiveComponent
{ 
public:
	FLinearColor                                       Color;                                                      // 0x0480   (0x0010)  
	float                                              HoverSizeMultiplier;                                        // 0x0490   (0x0004)  
	float                                              PixelHitDistanceThreshold;                                  // 0x0494   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0498   (0x0008)  MISSED


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	// void UpdateWorldLocalState(bool bWorldIn);                                                                            // [0x8446de0] Final|Native|Public  
	// Function /Script/InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
	// void UpdateHoverState(bool bHoveringIn);                                                                              // [0x8446d50] Final|Native|Public  
};

/// Class /Script/InteractiveToolsFramework.GizmoArrowComponent
/// Size: 0x0020 (0x0004A0 - 0x0004C0)
class UGizmoArrowComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            Direction;                                                  // 0x04A0   (0x000C)  
	float                                              Gap;                                                        // 0x04AC   (0x0004)  
	float                                              Length;                                                     // 0x04B0   (0x0004)  
	float                                              Thickness;                                                  // 0x04B4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x04B8   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoBoxComponent
/// Size: 0x0040 (0x0004A0 - 0x0004E0)
class UGizmoBoxComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            Origin;                                                     // 0x04A0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x04AC   (0x0004)  MISSED
	FQuat                                              Rotation;                                                   // 0x04B0   (0x0010)  
	FVector                                            Dimensions;                                                 // 0x04C0   (0x000C)  
	float                                              LineThickness;                                              // 0x04CC   (0x0004)  
	bool                                               bRemoveHiddenLines;                                         // 0x04D0   (0x0001)  
	bool                                               bEnableAxisFlip;                                            // 0x04D1   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x04D2   (0x000E)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoCircleComponent
/// Size: 0x0020 (0x0004A0 - 0x0004C0)
class UGizmoCircleComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            Normal;                                                     // 0x04A0   (0x000C)  
	float                                              Radius;                                                     // 0x04AC   (0x0004)  
	float                                              Thickness;                                                  // 0x04B0   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x04B4   (0x0004)  
	bool                                               bViewAligned;                                               // 0x04B8   (0x0001)  
	bool                                               bOnlyAllowFrontFacingHits;                                  // 0x04B9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x04BA   (0x0006)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformSource
/// Size: 0x0000 (0x000030 - 0x000030)
class UGizmoTransformSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoTransformSource.SetTransform
	// void SetTransform(FTransform& NewTransform);                                                                          // [0x8446c70] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/InteractiveToolsFramework.GizmoTransformSource.GetTransform
	// FTransform GetTransform();                                                                                            // [0x8446b40] Native|Public|HasDefaults|Const 
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisSource
/// Size: 0x0000 (0x000030 - 0x000030)
class UGizmoAxisSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
	// bool HasTangentVectors();                                                                                             // [0x8446bb0] Native|Public|Const  
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
	// void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut);                                                   // [0x8446a50] Native|Public|HasOutParms|HasDefaults|Const 
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetOrigin
	// FVector GetOrigin();                                                                                                  // [0x8048f30] Native|Public|HasDefaults|Const 
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetDirection
	// FVector GetDirection();                                                                                               // [0x84469a0] Native|Public|HasDefaults|Const 
};

/// Class /Script/InteractiveToolsFramework.GizmoClickTarget
/// Size: 0x0000 (0x000030 - 0x000030)
class UGizmoClickTarget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
	// void UpdateHoverState(bool bHovering);                                                                                // [0x49d6620] Native|Public|Const  
};

/// Class /Script/InteractiveToolsFramework.GizmoStateTarget
/// Size: 0x0000 (0x000030 - 0x000030)
class UGizmoStateTarget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoStateTarget.EndUpdate
	// void EndUpdate();                                                                                                     // [0x49e8cc0] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
	// void BeginUpdate();                                                                                                   // [0x49e2950] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoFloatParameterSource
/// Size: 0x0000 (0x000030 - 0x000030)
class UGizmoFloatParameterSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
	// void SetParameter(float NewValue);                                                                                    // [0x4a03c40] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
	// float GetParameter();                                                                                                 // [0x84469e0] Native|Public|Const  
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
	// void EndModify();                                                                                                     // [0x49efa30] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
	// void BeginModify();                                                                                                   // [0x49e8cc0] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoVec2ParameterSource
/// Size: 0x0000 (0x000030 - 0x000030)
class UGizmoVec2ParameterSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
	// void SetParameter(FVector2D& NewValue);                                                                               // [0x8446be0] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
	// FVector2D GetParameter();                                                                                             // [0x8446a10] Native|Public|HasDefaults|Const 
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
	// void EndModify();                                                                                                     // [0x49efa30] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
	// void BeginModify();                                                                                                   // [0x49e8cc0] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoLineHandleComponent
/// Size: 0x0030 (0x0004A0 - 0x0004D0)
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            Normal;                                                     // 0x04A0   (0x000C)  
	float                                              HandleSize;                                                 // 0x04AC   (0x0004)  
	float                                              Thickness;                                                  // 0x04B0   (0x0004)  
	FVector                                            Direction;                                                  // 0x04B4   (0x000C)  
	float                                              Length;                                                     // 0x04C0   (0x0004)  
	bool                                               bImageScale;                                                // 0x04C4   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x04C5   (0x000B)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoRectangleComponent
/// Size: 0x0030 (0x0004A0 - 0x0004D0)
class UGizmoRectangleComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            DirectionX;                                                 // 0x04A0   (0x000C)  
	FVector                                            DirectionY;                                                 // 0x04AC   (0x000C)  
	float                                              OffsetX;                                                    // 0x04B8   (0x0004)  
	float                                              OffsetY;                                                    // 0x04BC   (0x0004)  
	float                                              LengthX;                                                    // 0x04C0   (0x0004)  
	float                                              LengthY;                                                    // 0x04C4   (0x0004)  
	float                                              Thickness;                                                  // 0x04C8   (0x0004)  
	char                                               SegmentFlags;                                               // 0x04CC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x04CD   (0x0003)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoLambdaHitTarget
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UGizmoLambdaHitTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0030   (0x0090)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentHitTarget
/// Size: 0x0050 (0x000030 - 0x000080)
class UGizmoComponentHitTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UPrimitiveComponent*                         Component;                                                  // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0040   (0x0040)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.BehaviorInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FBehaviorInfo
{ 
	class UInputBehavior*                              Behavior;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0008   (0x0018)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InputBehaviorSet
/// Size: 0x0010 (0x000030 - 0x000040)
class UInputBehaviorSet : public UObject
{ 
public:
	TArray<FBehaviorInfo>                              Behaviors;                                                  // 0x0030   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.InputBehaviorSource
/// Size: 0x0000 (0x000030 - 0x000030)
class UInputBehaviorSource : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InputRouter
/// Size: 0x0088 (0x000030 - 0x0000B8)
class UInputRouter : public UObject
{ 
public:
	bool                                               bAutoInvalidateOnHover;                                     // 0x0030   (0x0001)  
	bool                                               bAutoInvalidateOnCapture;                                   // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0xE];                                       // 0x0032   (0x000E)  MISSED
	class UInputBehaviorSet*                           ActiveInputBehaviors;                                       // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x0048   (0x0070)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractionMechanic
/// Size: 0x0008 (0x000030 - 0x000038)
class UInteractionMechanic : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.ActiveGizmo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FActiveGizmo
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmoManager
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UInteractiveGizmoManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	TArray<FActiveGizmo>                               ActiveGizmos;                                               // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0048   (0x0018)  MISSED
	SDK_UNDEFINED(80,4834) /* TMap<FString, UInteractiveGizmoBuilder*> */ __um(GizmoBuilders);                     // 0x0060   (0x0050)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ToolContextTransactionProvider
/// Size: 0x0000 (0x000030 - 0x000030)
class UToolContextTransactionProvider : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolManager
/// Size: 0x0110 (0x000030 - 0x000140)
class UInteractiveToolManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UInteractiveTool*                            ActiveLeftTool;                                             // 0x0038   (0x0008)  
	class UInteractiveTool*                            ActiveRightTool;                                            // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0048   (0x0050)  MISSED
	SDK_UNDEFINED(80,4835) /* TMap<FString, UInteractiveToolBuilder*> */ __um(ToolBuilders);                       // 0x0098   (0x0050)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x00E8   (0x0058)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ToolFrameworkComponent
/// Size: 0x0000 (0x000030 - 0x000030)
class UToolFrameworkComponent : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolsContext
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UInteractiveToolsContext : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0030   (0x0030)  MISSED
	class UInputRouter*                                InputRouter;                                                // 0x0060   (0x0008)  
	class UInteractiveToolManager*                     ToolManager;                                                // 0x0068   (0x0008)  
	class UInteractiveGizmoManager*                    GizmoManager;                                               // 0x0070   (0x0008)  
	SDK_UNDEFINED(48,4836) /* TWeakObjectPtr<UClass*> */ __um(ToolManagerClass);                                   // 0x0078   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmoActor
/// Size: 0x0018 (0x000230 - 0x000248)
class AIntervalGizmoActor : public AGizmoActor
{ 
public:
	class UGizmoLineHandleComponent*                   UpIntervalComponent;                                        // 0x0230   (0x0008)  
	class UGizmoLineHandleComponent*                   DownIntervalComponent;                                      // 0x0238   (0x0008)  
	class UGizmoLineHandleComponent*                   ForwardIntervalComponent;                                   // 0x0240   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmoBuilder
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0030   (0x0090)  MISSED
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmo
/// Size: 0x0100 (0x000040 - 0x000140)
class UIntervalGizmo : public UInteractiveGizmo
{ 
public:
	class UGizmoTransformChangeStateTarget*            StateTarget;                                                // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0048   (0x0010)  MISSED
	class UTransformProxy*                             TransformProxy;                                             // 0x0058   (0x0008)  
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                           // 0x0060   (0x0010)  
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                               // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0080   (0x0018)  MISSED
	class UGizmoComponentAxisSource*                   AxisYSource;                                                // 0x0098   (0x0008)  
	class UGizmoComponentAxisSource*                   AxisZSource;                                                // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x98];                                      // 0x00A8   (0x0098)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseFloatParameterSource
/// Size: 0x0020 (0x000030 - 0x000050)
class UGizmoBaseFloatParameterSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisIntervalParameterSource
/// Size: 0x0018 (0x000050 - 0x000068)
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	SDK_UNDEFINED(16,4837) /* TScriptInterface<Class> */ __um(FloatParameterSource);                               // 0x0050   (0x0010)  
	float                                              MinParameter;                                               // 0x0060   (0x0004)  
	float                                              MaxParameter;                                               // 0x0064   (0x0004)  
};

/// Class /Script/InteractiveToolsFramework.KeyAsModifierInputBehavior
/// Size: 0x00F8 (0x000038 - 0x000130)
class UKeyAsModifierInputBehavior : public UInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0xF8];                                      // 0x0038   (0x00F8)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MeshSurfacePointToolBuilder
/// Size: 0x0008 (0x000030 - 0x000038)
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MouseHoverBehavior
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UMouseHoverBehavior : public UInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0038   (0x0068)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MultiClickSequenceInputBehavior
/// Size: 0x00B0 (0x000080 - 0x000130)
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0080   (0x00B0)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MultiSelectionTool
/// Size: 0x0010 (0x000088 - 0x000098)
class UMultiSelectionTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.GizmoFloatParameterChange
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGizmoFloatParameterChange
{ 
	float                                              InitialValue;                                               // 0x0000   (0x0004)  
	float                                              CurrentValue;                                               // 0x0004   (0x0004)  
};

/// Class /Script/InteractiveToolsFramework.GizmoLocalFloatParameterSource
/// Size: 0x0010 (0x000050 - 0x000060)
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	float                                              value;                                                      // 0x0050   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x0054   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseVec2ParameterSource
/// Size: 0x0020 (0x000030 - 0x000050)
class UGizmoBaseVec2ParameterSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.GizmoVec2ParameterChange
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGizmoVec2ParameterChange
{ 
	FVector2D                                          InitialValue;                                               // 0x0000   (0x0008)  
	FVector2D                                          CurrentValue;                                               // 0x0008   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.GizmoLocalVec2ParameterSource
/// Size: 0x0018 (0x000050 - 0x000068)
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{ 
public:
	FVector2D                                          value;                                                      // 0x0050   (0x0008)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x0058   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisTranslationParameterSource
/// Size: 0x00C0 (0x000050 - 0x000110)
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0050   (0x0040)  MISSED
	SDK_UNDEFINED(16,4838) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,4839) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x00A0   (0x0010)  
	float                                              Parameter;                                                  // 0x00B0   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x00B4   (0x0008)  
	FVector                                            CurTranslationAxis;                                         // 0x00BC   (0x000C)  
	FVector                                            CurTranslationOrigin;                                       // 0x00C8   (0x000C)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FTransform                                         InitialTransform;                                           // 0x00E0   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
/// Size: 0x00E0 (0x000050 - 0x000130)
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0050   (0x0040)  MISSED
	SDK_UNDEFINED(16,4840) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,4841) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x00A0   (0x0010)  
	FVector2D                                          Parameter;                                                  // 0x00B0   (0x0008)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x00B8   (0x0010)  
	FVector                                            CurTranslationOrigin;                                       // 0x00C8   (0x000C)  
	FVector                                            CurTranslationNormal;                                       // 0x00D4   (0x000C)  
	FVector                                            CurTranslationAxisX;                                        // 0x00E0   (0x000C)  
	FVector                                            CurTranslationAxisY;                                        // 0x00EC   (0x000C)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0100   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisRotationParameterSource
/// Size: 0x00C0 (0x000050 - 0x000110)
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0050   (0x0040)  MISSED
	SDK_UNDEFINED(16,4842) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,4843) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x00A0   (0x0010)  
	float                                              Angle;                                                      // 0x00B0   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x00B4   (0x0008)  
	FVector                                            CurRotationAxis;                                            // 0x00BC   (0x000C)  
	FVector                                            CurRotationOrigin;                                          // 0x00C8   (0x000C)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FTransform                                         InitialTransform;                                           // 0x00E0   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.GizmoUniformScaleParameterSource
/// Size: 0x00A0 (0x000050 - 0x0000F0)
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{ 
public:
	SDK_UNDEFINED(16,4844) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,4845) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x0060   (0x0010)  
	float                                              ScaleMultiplier;                                            // 0x0070   (0x0004)  
	FVector2D                                          Parameter;                                                  // 0x0074   (0x0008)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x007C   (0x0010)  
	FVector                                            CurScaleOrigin;                                             // 0x008C   (0x000C)  
	FVector                                            CurScaleNormal;                                             // 0x0098   (0x000C)  
	FVector                                            CurScaleAxisX;                                              // 0x00A4   (0x000C)  
	FVector                                            CurScaleAxisY;                                              // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	FTransform                                         InitialTransform;                                           // 0x00C0   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisScaleParameterSource
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	SDK_UNDEFINED(16,4846) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,4847) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x0060   (0x0010)  
	float                                              ScaleMultiplier;                                            // 0x0070   (0x0004)  
	float                                              Parameter;                                                  // 0x0074   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x0078   (0x0008)  
	FVector                                            CurScaleAxis;                                               // 0x0080   (0x000C)  
	FVector                                            CurScaleOrigin;                                             // 0x008C   (0x000C)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0098   (0x0008)  MISSED
	FTransform                                         InitialTransform;                                           // 0x00A0   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.GizmoPlaneScaleParameterSource
/// Size: 0x00E0 (0x000050 - 0x000130)
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0050   (0x0040)  MISSED
	SDK_UNDEFINED(16,4848) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,4849) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x00A0   (0x0010)  
	float                                              ScaleMultiplier;                                            // 0x00B0   (0x0004)  
	FVector2D                                          Parameter;                                                  // 0x00B4   (0x0008)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x00BC   (0x0010)  
	FVector                                            CurScaleOrigin;                                             // 0x00CC   (0x000C)  
	FVector                                            CurScaleNormal;                                             // 0x00D8   (0x000C)  
	FVector                                            CurScaleAxisX;                                              // 0x00E4   (0x000C)  
	FVector                                            CurScaleAxisY;                                              // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0100   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.PlanePositionGizmoBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.PlanePositionGizmo
/// Size: 0x00C8 (0x000040 - 0x000108)
class UPlanePositionGizmo : public UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0040   (0x0010)  MISSED
	SDK_UNDEFINED(16,4850) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,4851) /* TScriptInterface<Class> */ __um(ParameterSource);                                    // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,4852) /* TScriptInterface<Class> */ __um(HitTarget);                                          // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,4853) /* TScriptInterface<Class> */ __um(StateTarget);                                        // 0x0080   (0x0010)  
	bool                                               bEnableSignedAxis;                                          // 0x0090   (0x0001)  
	bool                                               bFlipX;                                                     // 0x0091   (0x0001)  
	bool                                               bFlipY;                                                     // 0x0092   (0x0001)  
	bool                                               bInInteraction;                                             // 0x0093   (0x0001)  
	FVector                                            InteractionOrigin;                                          // 0x0094   (0x000C)  
	FVector                                            InteractionNormal;                                          // 0x00A0   (0x000C)  
	FVector                                            InteractionAxisX;                                           // 0x00AC   (0x000C)  
	FVector                                            InteractionAxisY;                                           // 0x00B8   (0x000C)  
	FVector                                            InteractionStartPoint;                                      // 0x00C4   (0x000C)  
	FVector                                            InteractionCurPoint;                                        // 0x00D0   (0x000C)  
	FVector2D                                          InteractionStartParameter;                                  // 0x00DC   (0x0008)  
	FVector2D                                          InteractionCurParameter;                                    // 0x00E4   (0x0008)  
	FVector2D                                          ParameterSigns;                                             // 0x00EC   (0x0008)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x00F4   (0x0014)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SelectionSet
/// Size: 0x0018 (0x000030 - 0x000048)
class USelectionSet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MeshSelectionSet
/// Size: 0x0040 (0x000048 - 0x000088)
class UMeshSelectionSet : public USelectionSet
{ 
public:
	TArray<int32_t>                                    Vertices;                                                   // 0x0048   (0x0010)  
	TArray<int32_t>                                    Edges;                                                      // 0x0058   (0x0010)  
	TArray<int32_t>                                    Faces;                                                      // 0x0068   (0x0010)  
	TArray<int32_t>                                    Groups;                                                     // 0x0078   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.SingleClickInputBehavior
/// Size: 0x00B0 (0x000080 - 0x000130)
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0080   (0x0040)  MISSED
	bool                                               HitTestOnRelease;                                           // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6F];                                      // 0x00C1   (0x006F)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SingleClickToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class USingleClickToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.SingleClickTool
/// Size: 0x0008 (0x000088 - 0x000090)
class USingleClickTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoNilStateTarget
/// Size: 0x0008 (0x000030 - 0x000038)
class UGizmoNilStateTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoLambdaStateTarget
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UGizmoLambdaStateTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0030   (0x0090)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoObjectModifyStateTarget
/// Size: 0x0030 (0x000030 - 0x000060)
class UGizmoObjectModifyStateTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformChangeStateTarget
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UGizmoTransformChangeStateTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0030   (0x0028)  MISSED
	SDK_UNDEFINED(16,4854) /* TScriptInterface<Class> */ __um(TransactionManager);                                 // 0x0058   (0x0010)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x0068   (0x0088)  MISSED
};

/// Class /Script/InteractiveToolsFramework.TransformGizmoActor
/// Size: 0x0080 (0x000230 - 0x0002B0)
class ATransformGizmoActor : public AGizmoActor
{ 
public:
	class UPrimitiveComponent*                         TranslateX;                                                 // 0x0230   (0x0008)  
	class UPrimitiveComponent*                         TranslateY;                                                 // 0x0238   (0x0008)  
	class UPrimitiveComponent*                         TranslateZ;                                                 // 0x0240   (0x0008)  
	class UPrimitiveComponent*                         TranslateYZ;                                                // 0x0248   (0x0008)  
	class UPrimitiveComponent*                         TranslateXZ;                                                // 0x0250   (0x0008)  
	class UPrimitiveComponent*                         TranslateXY;                                                // 0x0258   (0x0008)  
	class UPrimitiveComponent*                         RotateX;                                                    // 0x0260   (0x0008)  
	class UPrimitiveComponent*                         RotateY;                                                    // 0x0268   (0x0008)  
	class UPrimitiveComponent*                         RotateZ;                                                    // 0x0270   (0x0008)  
	class UPrimitiveComponent*                         UniformScale;                                               // 0x0278   (0x0008)  
	class UPrimitiveComponent*                         AxisScaleX;                                                 // 0x0280   (0x0008)  
	class UPrimitiveComponent*                         AxisScaleY;                                                 // 0x0288   (0x0008)  
	class UPrimitiveComponent*                         AxisScaleZ;                                                 // 0x0290   (0x0008)  
	class UPrimitiveComponent*                         PlaneScaleYZ;                                               // 0x0298   (0x0008)  
	class UPrimitiveComponent*                         PlaneScaleXZ;                                               // 0x02A0   (0x0008)  
	class UPrimitiveComponent*                         PlaneScaleXY;                                               // 0x02A8   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.TransformGizmoBuilder
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0030   (0x0090)  MISSED
};

/// Class /Script/InteractiveToolsFramework.TransformGizmo
/// Size: 0x0170 (0x000040 - 0x0001B0)
class UTransformGizmo : public UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0040   (0x0008)  MISSED
	class UTransformProxy*                             ActiveTarget;                                               // 0x0048   (0x0008)  
	bool                                               bSnapToWorldGrid;                                           // 0x0050   (0x0001)  
	bool                                               bGridSizeIsExplicit;                                        // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0052   (0x0002)  MISSED
	FVector                                            ExplicitGridSize;                                           // 0x0054   (0x000C)  
	bool                                               bRotationGridSizeIsExplicit;                                // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	FRotator                                           ExplicitRotationGridSize;                                   // 0x0064   (0x000C)  
	bool                                               bSnapToWorldRotGrid;                                        // 0x0070   (0x0001)  
	bool                                               bUseContextCoordinateSystem;                                // 0x0071   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0072   (0x0002)  MISSED
	EToolContextCoordinateSystem                       CurrentCoordinateSystem;                                    // 0x0074   (0x0004)  
	unsigned char                                      UnknownData04_5[0x98];                                      // 0x0078   (0x0098)  MISSED
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                           // 0x0110   (0x0010)  
	TArray<class UPrimitiveComponent*>                 NonuniformScaleComponents;                                  // 0x0120   (0x0010)  
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                               // 0x0130   (0x0010)  
	unsigned char                                      UnknownData05_5[0x10];                                      // 0x0140   (0x0010)  MISSED
	class UGizmoConstantFrameAxisSource*               CameraAxisSource;                                           // 0x0150   (0x0008)  
	class UGizmoComponentAxisSource*                   AxisXSource;                                                // 0x0158   (0x0008)  
	class UGizmoComponentAxisSource*                   AxisYSource;                                                // 0x0160   (0x0008)  
	class UGizmoComponentAxisSource*                   AxisZSource;                                                // 0x0168   (0x0008)  
	class UGizmoComponentAxisSource*                   UnitAxisXSource;                                            // 0x0170   (0x0008)  
	class UGizmoComponentAxisSource*                   UnitAxisYSource;                                            // 0x0178   (0x0008)  
	class UGizmoComponentAxisSource*                   UnitAxisZSource;                                            // 0x0180   (0x0008)  
	class UGizmoTransformChangeStateTarget*            StateTarget;                                                // 0x0188   (0x0008)  
	class UGizmoScaledTransformSource*                 ScaledTransformSource;                                      // 0x0190   (0x0008)  
	unsigned char                                      UnknownData06_6[0x18];                                      // 0x0198   (0x0018)  MISSED
};

/// Class /Script/InteractiveToolsFramework.TransformProxy
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UTransformProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0030   (0x0048)  MISSED
	bool                                               bRotatePerObject;                                           // 0x0078   (0x0001)  
	bool                                               bSetPivotMode;                                              // 0x0079   (0x0001)  
	unsigned char                                      UnknownData01_5[0x16];                                      // 0x007A   (0x0016)  MISSED
	FTransform                                         SharedTransform;                                            // 0x0090   (0x0030)  
	FTransform                                         InitialSharedTransform;                                     // 0x00C0   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseTransformSource
/// Size: 0x0020 (0x000030 - 0x000050)
class UGizmoBaseTransformSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentWorldTransformSource
/// Size: 0x0010 (0x000050 - 0x000060)
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{ 
public:
	class USceneComponent*                             Component;                                                  // 0x0050   (0x0008)  
	bool                                               bModifyComponentOnTransform;                                // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoScaledTransformSource
/// Size: 0x0090 (0x000050 - 0x0000E0)
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{ 
public:
	SDK_UNDEFINED(16,4855) /* TScriptInterface<Class> */ __um(ChildTransformSource);                               // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x80];                                      // 0x0060   (0x0080)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformProxyTransformSource
/// Size: 0x0008 (0x000050 - 0x000058)
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{ 
public:
	class UTransformProxy*                             Proxy;                                                      // 0x0050   (0x0008)  
};

/// Struct /Script/InteractiveToolsFramework.InputRayHit
/// Size: 0x0028 (0x000000 - 0x000028)
struct FInputRayHit
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

