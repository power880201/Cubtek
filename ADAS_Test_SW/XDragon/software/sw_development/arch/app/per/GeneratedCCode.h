#ifndef GENERATED_CODE_H
#define GENERATED_CODE_H
#define GH_a459_288_4165_b98_ae7f9e666a 

#include <stdint.h>

#define DateTimeKind_Unspecified ((int32_t)0)
#define DateTimeKind_Utc ((int32_t)1)
#define DateTimeKind_Local ((int32_t)2)
#define ObstacleType_Vehicle ((int32_t)0)
#define ObstacleType_Truck ((int32_t)1)
#define ObstacleType_Bike ((int32_t)2)
#define ObstacleType_Ped ((int32_t)3)
#define ObstacleType_Bicycle ((int32_t)4)
#define ObstacleType_None ((int32_t)7)
#define ObstacleStatus_Undefined ((int32_t)0)
#define ObstacleStatus_Standing ((int32_t)1)
#define ObstacleStatus_Stopped ((int32_t)2)
#define ObstacleStatus_Moving ((int32_t)3)
#define ObstacleStatus_Oncoming ((int32_t)4)
#define ObstacleStatus_Parked ((int32_t)5)
#define DynamicProperty_Unclassified ((int32_t)0)
#define DynamicProperty_Standing ((int32_t)1)
#define DynamicProperty_NeverMoved ((int32_t)2)
#define DynamicProperty_Moving ((int32_t)3)
#define DynamicProperty_Oncoming ((int32_t)4)
#define MeasurementStatus_NoObject ((int32_t)0)
#define MeasurementStatus_NewObject ((int32_t)1)
#define MeasureStatus_ObejctNotMeasured ((int32_t)2)
#define MeasuremenStatus_ObjectMeasured ((int32_t)3)
#define ExcepResou_Argume_ImplemICompar ((int32_t)0)
#define ExceptResour_Argume_InvalidType ((int32_t)1)
#define ExceReso_Argu_InvaArgumForCompa ((int32_t)2)
#define ExcRes_Argu_InvaRegiKeyPermChec ((int32_t)3)
#define ExcRes_ArgOutOfRan_NeeNonNegNum ((int32_t)4)
#define ExceReso_Arg_ArraPlusOffTooSmal ((int32_t)5)
#define ExceResou_Arg_NonZeroLowerBound ((int32_t)6)
#define ExceReso_Arg_RankMultDimNotSupp ((int32_t)7)
#define ExceptResourc_Arg_RegKeyDelHive ((int32_t)8)
#define ExcepResour_Arg_RegKeyStrLenBug ((int32_t)9)
#define ExcepResou_Arg_RegSetStrArrNull ((int32_t)10)
#define ExcepResou_Arg_RegSetMismatKind ((int32_t)11)
#define ExcepResour_Arg_RegSubKeyAbsent ((int32_t)12)
#define ExceReso_Arg_RegSubKeyValuAbsen ((int32_t)13)
#define ExcepResour_Argume_AddingDuplic ((int32_t)14)
#define ExcepResou_Serial_InvaliOnDeser ((int32_t)15)
#define ExceptResour_Serial_MissingKeys ((int32_t)16)
#define ExceptiResourc_Serializ_NullKey ((int32_t)17)
#define ExcepResou_Argum_InvalArrayType ((int32_t)18)
#define ExcepResou_NotSuppo_KeyColleSet ((int32_t)19)
#define ExceReso_NotSuppo_ValueColleSet ((int32_t)20)
#define ExceReso_ArguOutOfRang_SmalCapa ((int32_t)21)
#define ExceResou_ArgumOutOfRange_Index ((int32_t)22)
#define ExcepResour_Argume_InvaliOffLen ((int32_t)23)
#define ExcepResour_Argume_ItemNotExist ((int32_t)24)
#define ExceResou_ArgumOutOfRange_Count ((int32_t)25)
#define ExceReso_ArguOutOfRang_InvaThre ((int32_t)26)
#define ExceReso_ArguOutOfRang_ListInse ((int32_t)27)
#define ExceReso_NotSuppo_ReadOnlyColle ((int32_t)28)
#define ExcRes_InvOpe_CanRemFroStaOrQue ((int32_t)29)
#define ExceResou_InvalOpera_EmptyQueue ((int32_t)30)
#define ExcReso_InvaOper_EnumOpCantHapp ((int32_t)31)
#define ExceReso_InvaOper_EnumFailVersi ((int32_t)32)
#define ExceResou_InvalOpera_EmptyStack ((int32_t)33)
#define ExcRes_ArgOutOfRan_BiggThanColl ((int32_t)34)
#define ExceReso_InvaOpera_EnumNotStart ((int32_t)35)
#define ExcepResou_InvalOpera_EnumEnded ((int32_t)36)
#define ExcRes_NotSupp_SortListNestWrit ((int32_t)37)
#define ExcepResou_InvaliOperat_NoValue ((int32_t)38)
#define ExceReso_InvaOper_RegRemoSubKey ((int32_t)39)
#define ExcepResour_Securi_RegistPermis ((int32_t)40)
#define ExceReso_UnauAcces_RegisNoWrite ((int32_t)41)
#define ExceReso_ObjecDispo_RegKeyClose ((int32_t)42)
#define ExcepResou_NotSuppo_InCompaType ((int32_t)43)
#define ExceReso_Argu_InvaRegiOptiCheck ((int32_t)44)
#define ExceReso_Argu_InvaRegiViewCheck ((int32_t)45)
#ifndef CODE_API
#define CODE_API 
#endif /* CODE_API */

struct DateTime
{
	uint64_t dateData;
};

struct Object
{
	int32_t ReferenceCount;
};

struct SubmatrixFullDimension
{
	int8_t variableToDelete;
};

struct TimeSpan
{
	int64_t _ticks;
};

typedef uint8_t bool_t;

typedef int32_t DateTimeKind;

typedef double float64_t;

typedef int32_t ObstacleType;

typedef int32_t ObstacleStatus;

typedef int32_t DynamicProperty;

typedef int32_t MeasurementStatus;

typedef int32_t ExceptionResource;

struct LinearAlgebra
{
	struct Object base;
};

struct StaticListFactory
{
	struct Object base;
	int32_t _maximumCount;
};

struct StaticListFactory_1
{
	struct Object base;
	int32_t _maximumCount;
};

struct StaticListFactory_2
{
	struct Object base;
	int32_t _maximumCount;
};

struct StaticListFactory_3
{
	struct Object base;
	int32_t _maximumCount;
};

struct StaticAssociationTableFactory
{
	struct Object base;
	int32_t _maximumRows;
	int32_t _maximumColumns;
};

struct StaticListFactory_4
{
	struct Object base;
	int32_t _maximumCount;
};

struct StaticListFactory_5
{
	struct Object base;
	int32_t _maximumCount;
};

struct MemberInfo
{
	struct Object base;
};

struct SquaredMahalanobisDistance
{
	struct Object base;
};

struct IMetric
{
	struct Object base;
};

struct IEnumerable
{
	struct Object base;
};

struct IEnumerable_1
{
	struct Object base;
};

struct IEnumerable_2
{
	struct Object base;
};

struct IAssociationAlgorithm
{
	struct Object base;
};

struct IAssociationTable
{
	struct Object base;
};

struct IEvaluable
{
	struct Object base;
};

struct IEvaluable_1
{
	struct Object base;
};

struct IEvaluable_2
{
	struct Object base;
};

struct IListFactory
{
	struct Object base;
};

struct SquaredMahalanobisDistance_1
{
	struct Object base;
};

struct IMetric_1
{
	struct Object base;
};

struct IEnumerable_3
{
	struct Object base;
};

struct IEnumerable_4
{
	struct Object base;
};

struct IEvaluable_3
{
	struct Object base;
};

struct int32_t_1D_13
{
	struct Object base;
	int32_t Elements[13];
};

struct int32_t_1D_0
{
	struct Object base;
	int32_t Elements[1];
};

struct int32_t_1D_1
{
	struct Object base;
	int32_t Elements[1];
};

struct int32_t_1D_56
{
	struct Object base;
	int32_t Elements[56];
};

struct int32_t_1D_4
{
	struct Object base;
	int32_t Elements[4];
};

struct int32_t_1D_40
{
	struct Object base;
	int32_t Elements[40];
};

struct int32_t_1D_5
{
	struct Object base;
	int32_t Elements[5];
};

struct Nullable
{
	bool_t hasValue;
	int32_t value;
};

struct Nullable_1
{
	bool_t hasValue;
	struct DateTime value;
};

struct Nullable_2
{
	bool_t hasValue;
	float64_t value;
};

struct Measure
{
	struct Object base;
	float64_t Value;
};

struct Measure_1
{
	struct Object base;
	float64_t Value;
};

struct Vector2D
{
	float64_t X;
	float64_t Y;
};

struct CovarianceEllipseParameters
{
	float64_t MajorSemiAxis;
	float64_t MinorSemiAxis;
	float64_t Angle;
};

struct float64_t_1D_0
{
	struct Object base;
	float64_t Elements[1];
};

struct float64_t_1D_5
{
	struct Object base;
	float64_t Elements[5];
};

struct float64_t_1D_25
{
	struct Object base;
	float64_t Elements[25];
};

struct float64_t_1D_1
{
	struct Object base;
	float64_t Elements[1];
};

struct float64_t_1D_3
{
	struct Object base;
	float64_t Elements[3];
};

struct float64_t_1D_4
{
	struct Object base;
	float64_t Elements[4];
};

struct float64_t_1D_2
{
	struct Object base;
	float64_t Elements[2];
};

struct float64_t_1D_6
{
	struct Object base;
	float64_t Elements[6];
};

struct float64_t_1D_36
{
	struct Object base;
	float64_t Elements[36];
};

struct float64_t_1D_12
{
	struct Object base;
	float64_t Elements[12];
};

struct float64_t_1D_9
{
	struct Object base;
	float64_t Elements[9];
};

struct float64_t_1D_15
{
	struct Object base;
	float64_t Elements[15];
};

struct float64_t_1D_16
{
	struct Object base;
	float64_t Elements[16];
};

struct float64_t_1D_20
{
	struct Object base;
	float64_t Elements[20];
};

struct float64_t_1D_200
{
	struct Object base;
	float64_t Elements[200];
};

struct float64_t_2D_15_40
{
	struct Object base;
	float64_t Elements[600];
};

struct float64_t_1D_40
{
	struct Object base;
	float64_t Elements[40];
};

struct float64_t_1D_41
{
	struct Object base;
	float64_t Elements[41];
};

struct float64_t_1D_250
{
	struct Object base;
	float64_t Elements[250];
};

struct Obstacle
{
	struct Object base;
	int32_t Id;
	float64_t PositionX;
	float64_t PositionY;
	float64_t VelocityX;
	float64_t VelocityY;
	float64_t Width;
	float64_t Length;
	uint32_t Timestamp;
	ObstacleType ObstacleType;
	ObstacleStatus ObstacleStatus;
	float64_t AngleRate;
	float64_t AccelerationX;
	float64_t Angle;
	bool_t CIPVFlag;
};

struct Object_1
{
	struct Object base;
	uint32_t RollingCounter;
	uint32_t ID;
	float64_t LongitudinalDisplacement;
	float64_t RelativeLongitudinalVelocity;
	float64_t AccelerationLongitudinal;
	float64_t ProbabilityOfExistance;
	DynamicProperty DynamicProperty;
	float64_t LateralDisplacement;
	float64_t Length;
	float64_t Width;
	MeasurementStatus MeasurementStatus;
	float64_t RCSValue;
	float64_t LateralSpeed;
	float64_t ObstacleProbability;
};

struct StatiIPDATrackColleFactorProvid
{
	struct Object base;
	struct StaticListFactory_2 *_hypothesisListFactory;
	struct StaticAssociationTableFactory *_associationTableFactory;
	struct StaticListFactory_4 *_trackListFactory;
	struct StaticListFactory_5 *_measurementListFactory;
	struct StaticListFactory_3 *_trueElementsListFactory;
};

struct Type
{
	struct MemberInfo base;
	int32_t _id;
};

struct Gate
{
	struct Object base;
	struct SquaredMahalanobisDistance *_metric;
	float64_t MaximumDistance;
};

struct Gate_1
{
	struct Object base;
	struct SquaredMahalanobisDistance_1 *_metric;
	float64_t MaximumDistance;
};

struct Random
{
	struct Object base;
	int32_t inext;
	int32_t inextp;
	struct int32_t_1D_56 *SeedArray;
};

struct StaticList
{
	struct Object base;
	struct int32_t_1D_40 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct Measure_2
{
	struct Measure base;
};

struct Measure_3
{
	struct Measure_1 base;
};

struct Vector2D_1D_10
{
	struct Object base;
	struct Vector2D Elements[10];
};

struct MatrixData
{
	struct Object base;
	struct float64_t_1D_5 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_1
{
	struct Object base;
	struct float64_t_1D_5 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_2
{
	struct Object base;
	struct float64_t_1D_25 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_3
{
	struct Object base;
	struct float64_t_1D_1 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_4
{
	struct Object base;
	struct float64_t_1D_3 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct FrontRadarNearParameters
{
	struct Object base;
	struct float64_t_1D_3 *_noiseMatrixDiagonal;
	float64_t _sigmaRange;
	float64_t _sigmaAngle;
	float64_t _sigmaRangeRate;
	float64_t PositionX;
	float64_t PositionY;
	float64_t PositionZ;
	float64_t RotationZ;
	float64_t MinimumRange;
	float64_t MaximumRange;
	float64_t MinimumAngle;
	float64_t MaximumAngle;
	float64_t DetectionProbability;
	float64_t ClutterLambda;
};

struct FrontRadarFarParameters
{
	struct Object base;
	struct float64_t_1D_3 *_noiseMatrixDiagonal;
	float64_t _sigmaRange;
	float64_t _sigmaAngle;
	float64_t _sigmaRangeRate;
	float64_t PositionX;
	float64_t PositionY;
	float64_t PositionZ;
	float64_t RotationZ;
	float64_t MinimumRange;
	float64_t MaximumRange;
	float64_t MinimumAngle;
	float64_t MaximumAngle;
	float64_t DetectionProbability;
	float64_t ClutterLambda;
};

struct MatrixData_5
{
	struct Object base;
	struct float64_t_1D_4 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MobilEyeParameters
{
	struct Object base;
	struct float64_t_1D_4 *_noiseMatrixDiagonal;
	float64_t _sigmaX;
	float64_t _sigmaY;
	float64_t _sigmaVx;
	float64_t _sigmaVy;
	float64_t PositionX;
	float64_t PositionY;
	float64_t PositionZ;
	float64_t RotationZ;
	float64_t DetectionProbability;
	float64_t ClutterLambda;
	float64_t MinimumRange;
	float64_t MaximumRange;
	float64_t MinimumAngle;
	float64_t MaximumAngle;
	float64_t FieldOfViewOffsetX;
	float64_t FieldOfViewOffsetY;
};

struct MatrixData_6
{
	struct Object base;
	struct float64_t_1D_4 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_7
{
	struct Object base;
	struct float64_t_1D_4 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_8
{
	struct Object base;
	struct float64_t_1D_2 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_9
{
	struct Object base;
	struct float64_t_1D_6 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_10
{
	struct Object base;
	struct float64_t_1D_6 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_11
{
	struct Object base;
	struct float64_t_1D_36 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_12
{
	struct Object base;
	struct float64_t_1D_12 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_13
{
	struct Object base;
	struct float64_t_1D_9 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_14
{
	struct Object base;
	struct float64_t_1D_15 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_15
{
	struct Object base;
	struct float64_t_1D_16 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_16
{
	struct Object base;
	struct float64_t_1D_20 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_17
{
	struct Object base;
	struct float64_t_1D_20 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct MatrixData_18
{
	struct Object base;
	struct float64_t_1D_200 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct AssociationTable
{
	struct Object base;
	struct float64_t_2D_15_40 *_items;
	int32_t _rows;
	int32_t _columns;
};

struct StaticList_1
{
	struct Object base;
	struct float64_t_1D_40 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct StaticList_2
{
	struct Object base;
	struct float64_t_1D_41 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct MatrixData_19
{
	struct Object base;
	struct float64_t_1D_250 *_data;
	int32_t Rows;
	int32_t Columns;
};

struct Obstacle_1D_40
{
	struct Object base;
	struct Obstacle *Elements[40];
};

struct MultipleLocalNearestNeighbor
{
	struct Object base;
	struct StatiIPDATrackColleFactorProvid *_factoryProvider;
};

struct GaussianGate
{
	struct Gate base;
	float64_t GateProbability;
};

struct GaussianGate_1
{
	struct Gate_1 base;
	float64_t GateProbability;
};

struct UniformRandomGenerator
{
	struct Object base;
	struct Random *_random;
};

struct StaticListEnumerator
{
	struct Object base;
	struct StaticList *_list;
	int32_t _current;
};

struct StaticList_1D_15
{
	struct Object base;
	struct StaticList *Elements[15];
};

struct FrontRadarObjectParameters
{
	struct Object base;
	struct float64_t_1D_5 *_noiseMatrixDiagonal;
	float64_t _sigmaX;
	float64_t _sigmaY;
	float64_t _sigmaVx;
	float64_t _sigmaVy;
	float64_t _sigmaAx;
	float64_t PositionX;
	float64_t PositionY;
	float64_t PositionZ;
	float64_t RotationZ;
	float64_t DetectionProbability;
	float64_t ClutterLambda;
	struct Vector2D_1D_10 *FieldOfView;
};

struct StaticList_3
{
	struct Object base;
	struct Vector2D_1D_10 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct Space
{
	struct Object base;
	struct MatrixData *_vector;
	int32_t Dimensions;
	struct Object *_spaceInformationLock;
	struct Nullable LastSetIndex;
	struct Nullable LastGetIndex;
};

struct MatrixData_1D_0
{
	struct Object base;
	struct MatrixData *Elements[1];
};

struct MatrixData_2_1D_1
{
	struct Object base;
	struct MatrixData_2 *Elements[1];
};

struct Space_1
{
	struct Object base;
	struct MatrixData_3 *_vector;
	int32_t Dimensions;
	struct Object *_spaceInformationLock;
	struct Nullable LastSetIndex;
	struct Nullable LastGetIndex;
};

struct Space_2
{
	struct Object base;
	struct MatrixData_4 *_vector;
	int32_t Dimensions;
	struct Object *_spaceInformationLock;
	struct Nullable LastGetIndex;
};

struct Space_3
{
	struct Object base;
	struct MatrixData_5 *_vector;
	int32_t Dimensions;
	struct Object *_spaceInformationLock;
	struct Nullable LastSetIndex;
	struct Nullable LastGetIndex;
};

struct InverseCartesianMeasuremenModel
{
	struct Object base;
	float64_t CosRotZ;
	float64_t SinRotZ;
	struct MobilEyeParameters *SensorParameters;
};

struct Space_4
{
	struct Object base;
	struct MatrixData_8 *_vector;
	int32_t Dimensions;
	struct Object *_spaceInformationLock;
	struct Nullable LastGetIndex;
};

struct Space_5
{
	struct Object base;
	struct MatrixData_9 *_vector;
	int32_t Dimensions;
	struct Object *_spaceInformationLock;
	struct Nullable LastSetIndex;
	struct Nullable LastGetIndex;
};

struct StaticListEnumerator_1
{
	struct Object base;
	struct StaticList_2 *_list;
	int32_t _current;
};

struct StaticList_4
{
	struct Object base;
	struct Obstacle_1D_40 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct ProbabilityGate
{
	struct GaussianGate base;
};

struct ProbabilityGate_1
{
	struct GaussianGate_1 base;
};

struct StaticList_5
{
	struct Object base;
	struct StaticList_1D_15 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct SensorProperties
{
	struct Object base;
	struct FrontRadarNearParameters *_frontRadarNearParameters;
	struct FrontRadarFarParameters *_frontRadarFarParameters;
	struct MobilEyeParameters *_mobilEyeParameters;
	struct FrontRadarObjectParameters *_frontRadarObjectParameters;
};

struct InverseCartesianMeasuremeModel
{
	struct Object base;
	float64_t CosRotZ;
	float64_t SinRotZ;
	struct FrontRadarObjectParameters *SensorParameters;
};

struct AngularSpace
{
	struct Space base;
	struct int32_t_1D_1 *AngularDimensionsIndices;
};

struct CVComponentsSpace
{
	struct Space base;
};

struct FiniteSpace
{
	struct Space_1 base;
};

struct VelocitySpace
{
	struct Space_1 base;
};

struct YawRateSpace
{
	struct Space_1 base;
};

struct CardinalitySpace
{
	struct Space_1 base;
};

struct AngularSpace_1
{
	struct Space_2 base;
	struct int32_t_1D_1 *AngularDimensionsIndices;
};

struct CAErrorSpace
{
	struct Space_2 base;
};

struct MobilEyeSpace
{
	struct Space_3 base;
};

struct InverseMobilEyeMeasurementModel
{
	struct InverseCartesianMeasuremenModel base;
	float64_t EgoVelocity;
	float64_t EgoYawRate;
};

struct CTRAErrorSpace
{
	struct Space_4 base;
};

struct AngularSpace_2
{
	struct Space_5 base;
	struct int32_t_1D_1 *AngularDimensionsIndices;
};

struct InveCartMeasModelWithVectoVeloc
{
	struct InverseCartesianMeasuremeModel base;
	float64_t EgoVelocity;
	float64_t EgoYawRate;
	float64_t EgoAcceleration;
};

struct CVSpace
{
	struct AngularSpace base;
};

struct FrontRadarObjectSpace
{
	struct CVComponentsSpace base;
	struct Object_1 *Ars308Object;
};

struct ExistenceSpace
{
	struct FiniteSpace base;
};

struct Matrix
{
	struct Object base;
	struct MatrixData_3 *_matrix;
	struct VelocitySpace *EmptyRowSpace;
	struct VelocitySpace *EmptyColumnSpace;
	int32_t Rows;
	int32_t Columns;
};

struct Matrix_1
{
	struct Object base;
	struct MatrixData_3 *_matrix;
	struct YawRateSpace *EmptyRowSpace;
	struct YawRateSpace *EmptyColumnSpace;
	int32_t Rows;
	int32_t Columns;
};

struct RadarSpace
{
	struct AngularSpace_1 base;
};

struct Matrix_2
{
	struct Object base;
	struct MatrixData_13 *_matrix;
	struct CAErrorSpace *EmptyRowSpace;
	struct CAErrorSpace *EmptyColumnSpace;
	int32_t Rows;
	int32_t Columns;
};

struct DetectionModel
{
	struct Object base;
	struct MobilEyeSpace *Condition;
};

struct Matrix_3
{
	struct Object base;
	struct MatrixData_15 *_matrix;
	struct MobilEyeSpace *EmptyRowSpace;
	struct MobilEyeSpace *EmptyColumnSpace;
	int32_t Rows;
	int32_t Columns;
	struct MatrixData *CachedTranspose;
};

struct SampleProbabilityPair
{
	struct Object base;
	struct MobilEyeSpace *Sample;
	float64_t Probability;
};

struct MobilEyeSpace_1D_40
{
	struct Object base;
	struct MobilEyeSpace *Elements[40];
};

struct MobilEyeSpace_1D_50
{
	struct Object base;
	struct MobilEyeSpace *Elements[50];
};

struct MobilEyeSpace_1D_1
{
	struct Object base;
	struct MobilEyeSpace *Elements[1];
};

struct Matrix_4
{
	struct Object base;
	struct MatrixData_6 *_matrix;
	struct CTRAErrorSpace *EmptyRowSpace;
	struct CTRAErrorSpace *EmptyColumnSpace;
	int32_t Rows;
	int32_t Columns;
};

struct CTRASpace
{
	struct AngularSpace_2 base;
};

struct CASpace
{
	struct CVSpace base;
};

struct Matrix_5
{
	struct Object base;
	struct MatrixData_2 *_matrix;
	struct FrontRadarObjectSpace *EmptyRowSpace;
	struct FrontRadarObjectSpace *EmptyColumnSpace;
	int32_t Rows;
	int32_t Columns;
};

struct DetectionModel_1
{
	struct Object base;
	struct FrontRadarObjectSpace *Condition;
};

struct SampleProbabilityPair_1
{
	struct Object base;
	struct FrontRadarObjectSpace *Sample;
	float64_t Probability;
};

struct FrontRadarObjectSpace_1D_40
{
	struct Object base;
	struct FrontRadarObjectSpace *Elements[40];
};

struct FrontRadarObjectSpace_1D_50
{
	struct Object base;
	struct FrontRadarObjectSpace *Elements[50];
};

struct FrontRadarObjectSpace_1D_1
{
	struct Object base;
	struct FrontRadarObjectSpace *Elements[1];
};

struct SampleProbabilityPair_2
{
	struct Object base;
	struct ExistenceSpace *Sample;
	float64_t Probability;
};

struct PersistenceModel
{
	struct Object base;
	float64_t _existenceProcessNoise;
	struct ExistenceSpace *Condition;
	struct TimeSpan TimeCondition;
};

struct MeasurementSetLikelihood
{
	struct Object base;
	float64_t _likelihoodGivenExistent;
	float64_t _likelihoodGivenNonExistent;
	struct ExistenceSpace *Condition;
};

struct SquareMatrix
{
	struct Matrix base;
	struct VelocitySpace *EmptySpace;
	int32_t Dimensions;
};

struct SquareMatrix_1
{
	struct Matrix_1 base;
	struct YawRateSpace *EmptySpace;
	int32_t Dimensions;
};

struct RadarSpace_1D_15
{
	struct Object base;
	struct RadarSpace *Elements[15];
};

struct SquareMatrix_2
{
	struct Matrix_2 base;
	struct CAErrorSpace *EmptySpace;
	int32_t Dimensions;
};

struct SingleDetectionModel
{
	struct DetectionModel base;
	float64_t _gateProbability;
};

struct SquareMatrix_3
{
	struct Matrix_3 base;
	struct MobilEyeSpace *EmptySpace;
	int32_t Dimensions;
	struct Nullable_2 CachedDeterminant;
};

struct SampleProbabilityPair_1D_50
{
	struct Object base;
	struct SampleProbabilityPair *Elements[50];
};

struct StaticList_6
{
	struct Object base;
	struct MobilEyeSpace_1D_40 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct StaticList_7
{
	struct Object base;
	struct MobilEyeSpace_1D_50 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct StaticList_8
{
	struct Object base;
	struct MobilEyeSpace_1D_1 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct SquareMatrix_4
{
	struct Matrix_4 base;
	struct CTRAErrorSpace *EmptySpace;
	int32_t Dimensions;
};

struct Matrix_6
{
	struct Object base;
	struct MatrixData_11 *_matrix;
	struct CTRASpace *EmptyRowSpace;
	struct CTRASpace *EmptyColumnSpace;
	int32_t Rows;
	int32_t Columns;
	struct MatrixData *CachedTranspose;
};

struct Matrix_7
{
	struct Object base;
	struct MatrixData_12 *_matrix;
	struct CTRAErrorSpace *EmptyRowSpace;
	struct CTRASpace *EmptyColumnSpace;
	int32_t Rows;
	int32_t Columns;
	struct MatrixData *CachedTranspose;
};

struct Matrix_8
{
	struct Object base;
	struct MatrixData_10 *_matrix;
	struct CTRASpace *EmptyRowSpace;
	struct VelocitySpace *EmptyColumnSpace;
	int32_t Rows;
	int32_t Columns;
	struct MatrixData *CachedTranspose;
};

struct Matrix_9
{
	struct Object base;
	struct MatrixData_10 *_matrix;
	struct CTRASpace *EmptyRowSpace;
	struct YawRateSpace *EmptyColumnSpace;
	int32_t Rows;
	int32_t Columns;
	struct MatrixData *CachedTranspose;
};

struct Matrix_10
{
	struct Object base;
	struct MatrixData_2 *_matrix;
	struct CASpace *EmptyRowSpace;
	struct CASpace *EmptyColumnSpace;
	int32_t Rows;
	int32_t Columns;
	struct MatrixData *CachedTranspose;
};

struct Matrix_11
{
	struct Object base;
	struct MatrixData_16 *_matrix;
	struct CASpace *EmptyRowSpace;
	struct MobilEyeSpace *EmptyColumnSpace;
	int32_t Rows;
	int32_t Columns;
	struct MatrixData *CachedTranspose;
};

struct EgoMotionCompensation
{
	struct Object base;
	struct CASpace *Condition;
	struct CTRASpace *Condition2;
};

struct Matrix_12
{
	struct Object base;
	struct MatrixData_14 *_matrix;
	struct CAErrorSpace *EmptyRowSpace;
	struct CASpace *EmptyColumnSpace;
	int32_t Rows;
	int32_t Columns;
	struct MatrixData *CachedTranspose;
};

struct Matrix_13
{
	struct Object base;
	struct MatrixData_2 *_matrix;
	struct CASpace *EmptyRowSpace;
	struct FrontRadarObjectSpace *EmptyColumnSpace;
	int32_t Rows;
	int32_t Columns;
	struct MatrixData *CachedTranspose;
};

struct SquareMatrix_5
{
	struct Matrix_5 base;
	struct FrontRadarObjectSpace *EmptySpace;
	int32_t Dimensions;
	struct Nullable_2 CachedDeterminant;
};

struct SingleDetectionModel_1
{
	struct DetectionModel_1 base;
	float64_t _gateProbability;
};

struct SampleProbabilityPair_1_1D_50
{
	struct Object base;
	struct SampleProbabilityPair_1 *Elements[50];
};

struct StaticList_9
{
	struct Object base;
	struct FrontRadarObjectSpace_1D_40 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct StaticList_10
{
	struct Object base;
	struct FrontRadarObjectSpace_1D_50 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct StaticList_11
{
	struct Object base;
	struct FrontRadarObjectSpace_1D_1 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct SampleProbabilityPair_2_1D_2
{
	struct Object base;
	struct SampleProbabilityPair_2 *Elements[2];
};

struct PositiveDefiniteMatrix
{
	struct SquareMatrix base;
};

struct PositiveDefiniteMatrix_1
{
	struct SquareMatrix_1 base;
};

struct StaticList_12
{
	struct Object base;
	struct RadarSpace_1D_15 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct PositiveDefiniteMatrix_2
{
	struct SquareMatrix_2 base;
};

struct MobilEyeDetectionModel
{
	struct SingleDetectionModel base;
	struct MobilEyeParameters *_parameters;
};

struct PositiveDefiniteMatrix_3
{
	struct SquareMatrix_3 base;
	struct MatrixData_15 *CachedInverse;
	struct MatrixData_15 *CachedCholeskyDecomposition;
};

struct StaticList_13
{
	struct Object base;
	struct SampleProbabilityPair_1D_50 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct StaticListEnumerator_2
{
	struct Object base;
	struct StaticList_6 *_list;
	int32_t _current;
};

struct StaticListEnumerator_3
{
	struct Object base;
	struct StaticList_7 *_list;
	int32_t _current;
};

struct TruePositivesHypothesis
{
	struct Object base;
	struct StaticList_8 *Elements;
	float64_t Weight;
};

struct StaticListEnumerator_4
{
	struct Object base;
	struct StaticList_8 *_list;
	int32_t _current;
};

struct PositiveDefiniteMatrix_4
{
	struct SquareMatrix_4 base;
};

struct SquareMatrix_6
{
	struct Matrix_6 base;
	struct CTRASpace *EmptySpace;
	int32_t Dimensions;
	struct Nullable_2 CachedDeterminant;
};

struct SquareMatrix_7
{
	struct Matrix_10 base;
	struct CASpace *EmptySpace;
	int32_t Dimensions;
	struct Nullable_2 CachedDeterminant;
};

struct Matrix_11_1D_15
{
	struct Object base;
	struct Matrix_11 *Elements[15];
};

struct Matrix_13_1D_15
{
	struct Object base;
	struct Matrix_13 *Elements[15];
};

struct PositiveDefiniteMatrix_5
{
	struct SquareMatrix_5 base;
	struct MatrixData_2 *CachedInverse;
	struct MatrixData_2 *CachedCholeskyDecomposition;
};

struct PolygonDetectionModel
{
	struct SingleDetectionModel_1 base;
	struct FrontRadarObjectParameters *_parameters;
	struct StaticList_3 *_polygonPointsInVehicleFrame;
};

struct StaticList_14
{
	struct Object base;
	struct SampleProbabilityPair_1_1D_50 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct StaticListEnumerator_5
{
	struct Object base;
	struct StaticList_9 *_list;
	int32_t _current;
};

struct StaticListEnumerator_6
{
	struct Object base;
	struct StaticList_10 *_list;
	int32_t _current;
};

struct TruePositivesHypothesis_1
{
	struct Object base;
	struct StaticList_11 *Elements;
	float64_t Weight;
};

struct StaticListEnumerator_7
{
	struct Object base;
	struct StaticList_11 *_list;
	int32_t _current;
};

struct StaticList_15
{
	struct Object base;
	struct SampleProbabilityPair_2_1D_2 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct MeasurementModel
{
	struct Object base;
	struct PositiveDefiniteMatrix *_measurementNoiseCovariance;
	struct CTRASpace *Condition;
};

struct Gaussian
{
	struct Object base;
	int32_t _dimensions;
	struct Nullable_2 NormalizationFactor;
	struct PositiveDefiniteMatrix *covariance;
	struct VelocitySpace *Expectation;
};

struct MeasurementModel_1
{
	struct Object base;
	struct PositiveDefiniteMatrix_1 *_measurementNoiseCovariance;
	struct CTRASpace *Condition;
};

struct Gaussian_1
{
	struct Object base;
	int32_t _dimensions;
	struct Nullable_2 NormalizationFactor;
	struct PositiveDefiniteMatrix_1 *covariance;
	struct YawRateSpace *Expectation;
};

struct SystemModel
{
	struct Object base;
	struct PositiveDefiniteMatrix_2 *_processNoiseCovariance;
	struct CASpace *Condition;
	struct CAErrorSpace *Condition2;
	struct TimeSpan TimeCondition;
};

struct Gaussian_2
{
	struct Object base;
	int32_t _dimensions;
	struct Nullable_2 NormalizationFactor;
	struct PositiveDefiniteMatrix_3 *covariance;
	struct MobilEyeSpace *Expectation;
};

struct MeasurementModel_2
{
	struct Object base;
	struct PositiveDefiniteMatrix_3 *_measurementNoiseCovariance;
	struct CASpace *Condition;
};

struct SampleSet
{
	struct Object base;
	struct StaticListFactory_1 *_listFactory;
	struct UniformRandomGenerator *_randomGenerator;
	struct StaticList_13 *Samples;
};

struct StaticListEnumerator_8
{
	struct Object base;
	struct StaticList_13 *_list;
	int32_t _current;
};

struct TruePositivesHypothesis_1D_41
{
	struct Object base;
	struct TruePositivesHypothesis *Elements[41];
};

struct SystemModel_1
{
	struct Object base;
	struct PositiveDefiniteMatrix_4 *_processNoiseCovariance;
	struct CTRASpace *Condition;
	struct CTRAErrorSpace *Condition2;
	struct TimeSpan TimeCondition;
};

struct PositiveDefiniteMatrix_6
{
	struct SquareMatrix_6 base;
	struct MatrixData *CachedInverse;
	struct MatrixData *CachedCholeskyDecomposition;
};

struct PositiveDefiniteMatrix_7
{
	struct SquareMatrix_7 base;
	struct MatrixData *CachedInverse;
	struct MatrixData *CachedCholeskyDecomposition;
};

struct StaticList_16
{
	struct Object base;
	struct Matrix_11_1D_15 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct StaticList_17
{
	struct Object base;
	struct Matrix_13_1D_15 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct Gaussian_3
{
	struct Object base;
	int32_t _dimensions;
	struct Nullable_2 NormalizationFactor;
	struct PositiveDefiniteMatrix_5 *covariance;
	struct FrontRadarObjectSpace *Expectation;
};

struct MeasurementModel_3
{
	struct Object base;
	struct PositiveDefiniteMatrix_5 *_measurementNoiseCovariance;
	struct CASpace *Condition;
};

struct FrontRadarObjectDetectionModel
{
	struct PolygonDetectionModel base;
};

struct SampleSet_1
{
	struct Object base;
	struct StaticListFactory_1 *_listFactory;
	struct UniformRandomGenerator *_randomGenerator;
	struct StaticList_14 *Samples;
};

struct StaticListEnumerator_9
{
	struct Object base;
	struct StaticList_14 *_list;
	int32_t _current;
};

struct TruePositivesHypothesis_1_1D_41
{
	struct Object base;
	struct TruePositivesHypothesis_1 *Elements[41];
};

struct SampleSet_2
{
	struct Object base;
	struct StaticListFactory *_listFactory;
	struct UniformRandomGenerator *_randomGenerator;
	struct StaticList_15 *Samples;
};

struct MeasurementModel_4
{
	struct MeasurementModel base;
};

struct MeasurementModel_5
{
	struct MeasurementModel_1 base;
};

struct SystemModel_2
{
	struct SystemModel base;
};

struct Gaussian_2_1D_15
{
	struct Object base;
	struct Gaussian_2 *Elements[15];
};

struct MeasurementModel_6
{
	struct MeasurementModel_2 base;
};

struct MarginalizedEvaluable
{
	struct Object base;
	struct MobilEyeDetectionModel *_conditionalDistribution;
	struct SampleSet *_condition;
};

struct StaticList_18
{
	struct Object base;
	struct TruePositivesHypothesis_1D_41 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct SystemModel_3
{
	struct SystemModel_1 base;
};

struct Gaussian_4
{
	struct Object base;
	int32_t _dimensions;
	struct Nullable_2 NormalizationFactor;
	struct PositiveDefiniteMatrix_6 *covariance;
	struct CTRASpace *Expectation;
};

struct Gaussian_5
{
	struct Object base;
	int32_t _dimensions;
	struct Nullable_2 NormalizationFactor;
	struct PositiveDefiniteMatrix_7 *covariance;
	struct CASpace *Expectation;
};

struct Gaussian_3_1D_15
{
	struct Object base;
	struct Gaussian_3 *Elements[15];
};

struct MeasurementModel_7
{
	struct MeasurementModel_3 base;
};

struct MarginalizedEvaluable_1
{
	struct Object base;
	struct FrontRadarObjectDetectionModel *_conditionalDistribution;
	struct SampleSet_1 *_condition;
};

struct StaticList_19
{
	struct Object base;
	struct TruePositivesHypothesis_1_1D_41 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct TwoPointDistribution
{
	struct SampleSet_2 base;
	float64_t _logOdds;
	bool_t _useLogOdds;
	struct ExistenceSpace *SuccessSample;
	struct ExistenceSpace *FailureSample;
};

struct MeasurementModel_8
{
	struct MeasurementModel_4 base;
};

struct YawRateMeasurementModel
{
	struct MeasurementModel_5 base;
	float64_t YawRateBias;
};

struct SystemModel_4
{
	struct SystemModel_2 base;
};

struct StaticList_20
{
	struct Object base;
	struct Gaussian_2_1D_15 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct CartesianMeasurementModel
{
	struct MeasurementModel_6 base;
	float64_t CosRotZ;
	float64_t SinRotZ;
	struct MobilEyeParameters *SensorParameters;
	float64_t Condition2;
};

struct MarginalizedEvaluable_1D_15
{
	struct Object base;
	struct MarginalizedEvaluable *Elements[15];
};

struct IPDA
{
	struct Object base;
	struct StaticList_18 *_hypotheses;
	struct MeasurementSetLikelihood *_elementsLikelihood;
	float64_t Lambda;
};

struct StaticListEnumerator_10
{
	struct Object base;
	struct StaticList_18 *_list;
	int32_t _current;
};

struct SystemModel_5
{
	struct SystemModel_3 base;
};

struct Gaussian_5_1D_15
{
	struct Object base;
	struct Gaussian_5 *Elements[15];
};

struct Gaussian_5_1D_41
{
	struct Object base;
	struct Gaussian_5 *Elements[41];
};

struct StaticList_21
{
	struct Object base;
	struct Gaussian_3_1D_15 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct CartesianMeasurementModel_1
{
	struct MeasurementModel_7 base;
	float64_t CosRotZ;
	float64_t SinRotZ;
	struct FrontRadarObjectParameters *SensorParameters;
	float64_t Condition2;
};

struct MarginalizedEvaluable_1_1D_15
{
	struct Object base;
	struct MarginalizedEvaluable_1 *Elements[15];
};

struct IPDA_1
{
	struct Object base;
	struct StaticList_19 *_hypotheses;
	struct MeasurementSetLikelihood *_elementsLikelihood;
	float64_t Lambda;
};

struct StaticListEnumerator_11
{
	struct Object base;
	struct StaticList_19 *_list;
	int32_t _current;
};

struct Existence
{
	struct TwoPointDistribution base;
};

struct VelocityMeasurementModel
{
	struct MeasurementModel_8 base;
	float64_t VelocityScale;
};

struct CAModel
{
	struct SystemModel_4 base;
};

struct Association
{
	struct Object base;
	struct StaticList_5 *_associations;
	struct StaticList *_notAssociatedObjects;
	struct MultipleLocalNearestNeighbor *_associationAlgorithm;
	struct StatiIPDATrackColleFactorProvid *_factoryProvider;
	struct AssociationTable *AssociationTable;
	struct StaticList_20 *Objects1;
	struct StaticList_6 *Objects2;
};

struct StaticListEnumerator_12
{
	struct Object base;
	struct StaticList_20 *_list;
	int32_t _current;
};

struct MobilEyeMeasurementModel
{
	struct CartesianMeasurementModel base;
	struct MobilEyeSpace *_measurementIndices;
	float64_t EgoYawRate;
};

struct StaticList_22
{
	struct Object base;
	struct MarginalizedEvaluable_1D_15 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct CTRAModel
{
	struct SystemModel_5 base;
};

struct StaticList_23
{
	struct Object base;
	struct Gaussian_5_1D_15 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct StaticList_24
{
	struct Object base;
	struct Gaussian_5_1D_41 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct Association_1
{
	struct Object base;
	struct StaticList_5 *_associations;
	struct StaticList *_notAssociatedObjects;
	struct MultipleLocalNearestNeighbor *_associationAlgorithm;
	struct StatiIPDATrackColleFactorProvid *_factoryProvider;
	struct AssociationTable *AssociationTable;
	struct StaticList_21 *Objects1;
	struct StaticList_9 *Objects2;
};

struct StaticListEnumerator_13
{
	struct Object base;
	struct StaticList_21 *_list;
	int32_t _current;
};

struct CartMeasModeWithVectVeloAndAcce
{
	struct CartesianMeasurementModel_1 base;
	float64_t EgoYawRate;
	float64_t EgoAcceleration;
};

struct StaticList_25
{
	struct Object base;
	struct MarginalizedEvaluable_1_1D_15 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct GaussianTrack
{
	struct Object base;
	struct Gaussian_5 *State;
	struct Existence *Existence;
	uint64_t ID;
};

struct Existence_1D_15
{
	struct Object base;
	struct Existence *Elements[15];
};

struct MeasurementAssociation
{
	struct Association base;
};

struct EgoMotionFilter
{
	struct Object base;
	struct CTRAModel *_systemModel;
	struct VelocityMeasurementModel *_velocityMeasurementModel;
	struct YawRateMeasurementModel *_yawRateMeasurementModel;
	bool_t _isVelocityFiltered;
	bool_t _isYawRateFiltered;
	struct Nullable_1 _lastCorrectionTime;
	struct Gaussian_4 *_state;
	struct Object *_stateLock;
};

struct GaussianMixture
{
	struct Object base;
	struct StaticList_24 *_gaussians;
	struct StaticList_2 *_weights;
	int32_t Dimensions;
};

struct MeasurementAssociation_1
{
	struct Association_1 base;
};

struct FrontRadarObjectMeasuremenModel
{
	struct CartMeasModeWithVectVeloAndAcce base;
};

struct TrackWithMeasurements
{
	struct GaussianTrack base;
	struct Obstacle *Obstacle;
	struct Object_1 *ARS308Object;
};

struct StaticList_26
{
	struct Object base;
	struct Existence_1D_15 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct TrackWithMeasurements_1D_15
{
	struct Object base;
	struct TrackWithMeasurements *Elements[15];
};

struct StaticListEnumerator_14
{
	struct Object base;
	struct StaticList_26 *_list;
	int32_t _current;
};

struct StaticList_27
{
	struct Object base;
	struct TrackWithMeasurements_1D_15 *_items;
	int32_t MaximumCount;
	int32_t Count;
};

struct Tracking
{
	struct Object base;
	bool_t InitializeFromMobilEye;
	bool_t InitializeFromFrontRadarObjects;
	bool_t UpdateFromMobilEye;
	bool_t UpdateFromFrontRadarObjects;
	struct EgoMotionFilter *_egoMotionFilter;
	struct MatrixData_2 *_velocityNormalization;
	struct Nullable_1 _lastUpdateTime;
	struct StaticList_27 *_tracks;
	struct Object *_tracksLock;
	struct SensorProperties *_sensorProperties;
	float64_t _gateProbability;
	float64_t ExistenceProbabilityForDeletion;
	float64_t EnclosinCircleDeletionThreshold;
	float64_t ProcessNoiseSigmaA;
	float64_t ProcessNoiseSigmaJerk;
	float64_t ProcessNoiseSigmaW;
	float64_t ProcessNoiseExistence;
};

struct StaticListEnumerator_15
{
	struct Object base;
	struct StaticList_27 *_list;
	int32_t _current;
};

CODE_API extern bool_t DateTime_1_IsLeapYear(int32_t year);

CODE_API extern struct int32_t_1D_13 *New_int32_t_1D_13(void);

CODE_API extern struct int32_t_1D_13 *Assign_int32_t_1D_13(struct int32_t_1D_13 **const left, struct int32_t_1D_13 *const right);

CODE_API extern void DateTime_ctor(struct DateTime *const self, int64_t ticks, DateTimeKind kind);

CODE_API extern void DateTime_ctor_1(struct DateTime *const self, int32_t year, int32_t month, int32_t day);

CODE_API extern struct StaticList_27 *New_StaticList_27(void);

CODE_API extern struct StaticList_27 *Assign_StaticList_27(struct StaticList_27 **const left, struct StaticList_27 *const right);

CODE_API extern void Object_ctor(struct Object *const self);

CODE_API extern struct TrackWithMeasurements *New_TrackWithMeasurements(void);

CODE_API extern struct TrackWithMeasurements *Assign_TrackWithMeasurements(struct TrackWithMeasurements **const left, struct TrackWithMeasurements *const right);

CODE_API extern struct TrackWithMeasurements_1D_15 *New_TrackWithMeasurements_1D_15(void);

CODE_API extern struct TrackWithMeasurements_1D_15 *Assign_TrackWithMeasureme_1D_15(struct TrackWithMeasurements_1D_15 **const left, struct TrackWithMeasurements_1D_15 *const right);

CODE_API extern void StaticList_27_ctor(struct StaticList_27 *const self, int32_t maximumCount);

CODE_API extern struct CASpace *New_CASpace(void);

CODE_API extern struct CASpace *Assign_CASpace(struct CASpace **const left, struct CASpace *const right);

CODE_API extern struct int32_t_1D_0 *New_int32_t_1D_0(void);

CODE_API extern struct int32_t_1D_0 *Assign_int32_t_1D_0(struct int32_t_1D_0 **const left, struct int32_t_1D_0 *const right);

CODE_API extern struct int32_t_1D_1 *New_int32_t_1D_1(void);

CODE_API extern struct int32_t_1D_1 *Assign_int32_t_1D_1(struct int32_t_1D_1 **const left, struct int32_t_1D_1 *const right);

CODE_API extern struct Object *New_Object(void);

CODE_API extern struct Object *Assign_Object(struct Object **const left, struct Object *const right);

CODE_API extern struct float64_t_1D_0 *New_float64_t_1D_0(void);

CODE_API extern struct float64_t_1D_0 *Assign_float64_t_1D_0(struct float64_t_1D_0 **const left, struct float64_t_1D_0 *const right);

CODE_API extern struct MatrixData *New_MatrixData(void);

CODE_API extern struct MatrixData *Assign_MatrixData(struct MatrixData **const left, struct MatrixData *const right);

CODE_API extern struct float64_t_1D_5 *New_float64_t_1D_5(void);

CODE_API extern struct float64_t_1D_5 *Assign_float64_t_1D_5(struct float64_t_1D_5 **const left, struct float64_t_1D_5 *const right);

CODE_API extern void MatrixData_ctor(struct MatrixData *const self, int32_t rows, int32_t columns);

CODE_API extern struct MatrixData *MatrixData_20_Zeros(int32_t rows, int32_t columns);

CODE_API extern struct int32_t_1D_1 *AngulSpace_get_AngulDimenIndice(struct AngularSpace *const self);

CODE_API extern void CASpace_ctor(struct CASpace *const self);

CODE_API extern struct PositiveDefiniteMatrix_7 *New_PositiveDefiniteMatrix_7(void);

CODE_API extern struct PositiveDefiniteMatrix_7 *Assign_PositiveDefiniteMatrix_7(struct PositiveDefiniteMatrix_7 **const left, struct PositiveDefiniteMatrix_7 *const right);

CODE_API extern void Matrix_10_ctor(struct Matrix_10 *const self);

CODE_API extern void SquareMatrix_7_ctor(struct SquareMatrix_7 *const self);

CODE_API extern struct MatrixData_2 *New_MatrixData_2(void);

CODE_API extern struct MatrixData_2 *Assign_MatrixData_2(struct MatrixData_2 **const left, struct MatrixData_2 *const right);

CODE_API extern struct float64_t_1D_25 *New_float64_t_1D_25(void);

CODE_API extern struct float64_t_1D_25 *Assign_float64_t_1D_25(struct float64_t_1D_25 **const left, struct float64_t_1D_25 *const right);

CODE_API extern void MatrixData_2_ctor(struct MatrixData_2 *const self, int32_t rows, int32_t columns);

CODE_API extern struct float64_t_1D_25 *MatrixData_2_get_DataReference(struct MatrixData_2 *const self);

CODE_API extern struct MatrixData_2 *MatrixData_20_Diag(struct float64_t_1D_5 *diagonalElements);

CODE_API extern bool_t Double_IsNaN(float64_t d);

CODE_API extern struct MatrixData_2 *MatrixData_20_Zeros_1(int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_2 *Matrix_10_get_MatrixData(struct Matrix_10 *const self);

CODE_API extern bool_t MatrixData_2_get_IsZero(struct MatrixData_2 *const self);

CODE_API extern bool_t Matrix_10_get_IsZero(struct Matrix_10 *const self);

CODE_API extern float64_t MatrixData_2_get_Item(struct MatrixData_2 *const self, int32_t row, int32_t column);

CODE_API extern int64_t BitConverter_DoubleToInt64Bits(float64_t value);

CODE_API extern int32_t Math_Max(int32_t val1, int32_t val2);

CODE_API extern float64_t Math_Pow(float64_t x, float64_t y);

CODE_API extern float64_t Math_Abs(float64_t value);

CODE_API extern int32_t float64_t_CompareTo(float64_t *const self, float64_t value);

CODE_API extern int32_t FloatCompare_Compare(float64_t d1, float64_t d2);

CODE_API extern bool_t MatrixData_2_get_IsEmpty(struct MatrixData_2 *const self);

CODE_API extern struct LinearAlgebra *New_LinearAlgebra(void);

CODE_API extern struct LinearAlgebra *Assign_LinearAlgebra(struct LinearAlgebra **const left, struct LinearAlgebra *const right);

CODE_API extern void LinearAlgebra_ctor(struct LinearAlgebra *const self);

CODE_API extern float64_t Math_Sqrt(float64_t d);

CODE_API extern void LinearAlgebra_FactorCholesky(struct LinearAlgebra *const self, struct float64_t_1D_25 *a, int32_t rows);

CODE_API extern struct MatrixData_2 *MatrixMath_Chol(struct MatrixData_2 *matrix);

CODE_API extern void SquareMatrix_7_ctor_1(struct PositiveDefiniteMatrix_7 *const self, struct float64_t_1D_5 *mainDiagonal);

CODE_API extern void PositiveDefiniteMatrix_7_ctor(struct PositiveDefiniteMatrix_7 *const self, struct float64_t_1D_5 *mainDiagonal);

CODE_API extern struct Gaussian_5 *New_Gaussian_5(void);

CODE_API extern struct Gaussian_5 *Assign_Gaussian_5(struct Gaussian_5 **const left, struct Gaussian_5 *const right);

CODE_API extern struct MatrixData *MatrixData_get_Copy(struct MatrixData *const self);

CODE_API extern struct CASpace *SpaceExtensions_Clone(struct CASpace *space);

CODE_API extern void PositiveDefiniteMatrix_7_ctor_1(struct PositiveDefiniteMatrix_7 *const self);

CODE_API extern struct MatrixData_2 *MatrixData_2_get_Copy(struct MatrixData_2 *const self);

CODE_API extern struct PositiveDefiniteMatrix_7 *PositiveDefiniteMatrix_7_Clone(struct PositiveDefiniteMatrix_7 *const self);

CODE_API extern void Gaussian_5_ctor(struct Gaussian_5 *const self, struct CASpace *expectation, struct PositiveDefiniteMatrix_7 *covariance);

CODE_API extern struct Existence *New_Existence(void);

CODE_API extern struct Existence *Assign_Existence(struct Existence **const left, struct Existence *const right);

CODE_API extern struct ExistenceSpace *New_ExistenceSpace(void);

CODE_API extern struct ExistenceSpace *Assign_ExistenceSpace(struct ExistenceSpace **const left, struct ExistenceSpace *const right);

CODE_API extern struct MatrixData_3 *New_MatrixData_3(void);

CODE_API extern struct MatrixData_3 *Assign_MatrixData_3(struct MatrixData_3 **const left, struct MatrixData_3 *const right);

CODE_API extern struct float64_t_1D_1 *New_float64_t_1D_1(void);

CODE_API extern struct float64_t_1D_1 *Assign_float64_t_1D_1(struct float64_t_1D_1 **const left, struct float64_t_1D_1 *const right);

CODE_API extern void MatrixData_3_ctor(struct MatrixData_3 *const self, int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_3 *MatrixData_20_Zeros_2(int32_t rows, int32_t columns);

CODE_API extern void ExistenceSpace_ctor(struct ExistenceSpace *const self);

CODE_API extern void MatrixData_3_ctor_1(struct MatrixData_3 *const self, struct float64_t_1D_1 *data, int32_t rows, int32_t columns);

CODE_API extern struct StaticListFactory *New_StaticListFactory(void);

CODE_API extern struct StaticListFactory *Assign_StaticListFactory(struct StaticListFactory **const left, struct StaticListFactory *const right);

CODE_API extern void StaticListFactory_ctor(struct StaticListFactory *const self, int32_t maximumCount);

CODE_API extern struct UniformRandomGenerator *New_UniformRandomGenerator(void);

CODE_API extern struct UniformRandomGenerator *Assign_UniformRandomGenerator(struct UniformRandomGenerator **const left, struct UniformRandomGenerator *const right);

CODE_API extern int64_t Stopwatch_GetTimestamp(void);

CODE_API extern int32_t Environment_get_TickCount(void);

CODE_API extern struct Random *New_Random(void);

CODE_API extern struct Random *Assign_Random(struct Random **const left, struct Random *const right);

CODE_API extern struct int32_t_1D_56 *New_int32_t_1D_56(void);

CODE_API extern struct int32_t_1D_56 *Assign_int32_t_1D_56(struct int32_t_1D_56 **const left, struct int32_t_1D_56 *const right);

CODE_API extern int32_t Math_Abs_1(int32_t value);

CODE_API extern void Random_ctor(struct Random *const self, int32_t Seed);

CODE_API extern void UniformRandomGenerator_ctor(struct UniformRandomGenerator *const self);

CODE_API extern int32_t StatiListFactor_get_MaximuCount(struct StaticListFactory *const self);

CODE_API extern struct StaticList_15 *New_StaticList_15(void);

CODE_API extern struct StaticList_15 *Assign_StaticList_15(struct StaticList_15 **const left, struct StaticList_15 *const right);

CODE_API extern struct SampleProbabilityPair_2 *New_SampleProbabilityPair_2(void);

CODE_API extern struct SampleProbabilityPair_2 *Assign_SampleProbabilityPair_2(struct SampleProbabilityPair_2 **const left, struct SampleProbabilityPair_2 *const right);

CODE_API extern struct SampleProbabilityPair_2_1D_2 *New_SampleProbabilitPair_2_1D_2(void);

CODE_API extern struct SampleProbabilityPair_2_1D_2 *Assign_SampleProbabiPair_2_1D_2(struct SampleProbabilityPair_2_1D_2 **const left, struct SampleProbabilityPair_2_1D_2 *const right);

CODE_API extern void StaticList_15_ctor(struct StaticList_15 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_15 *StaticListFactory_CreateInstanc(struct StaticListFactory *const self, int32_t capacity);

CODE_API extern void SampleSet_2_ctor(struct SampleSet_2 *const self, int32_t capacity, struct StaticListFactory *listFactory);

CODE_API extern void SampleProbabilPair_2_set_Sample(struct SampleProbabilityPair_2 *const self, struct ExistenceSpace *value);

CODE_API extern void SampleProbabiPair_2_set_Probabi(struct SampleProbabilityPair_2 *const self, float64_t value);

CODE_API extern void SampleProbabilityPair_2_ctor(struct SampleProbabilityPair_2 *const self, struct ExistenceSpace *sample, float64_t probability);

CODE_API extern int32_t StaticList_15_get_Count(struct StaticList_15 *const self);

CODE_API extern void StaticList_15_Add(struct StaticList_15 *const self, struct SampleProbabilityPair_2 *value);

CODE_API extern struct SampleProbabilityPair_2 *StaticList_15_get_Item(struct StaticList_15 *const self, int32_t index);

CODE_API extern float64_t Math_Exp(float64_t d);

CODE_API extern float64_t SampleProbabiPair_2_get_Probabi(struct SampleProbabilityPair_2 *const self);

CODE_API extern void TwoPointDistributio_set_LogOdds(struct TwoPointDistribution *const self, float64_t value);

CODE_API extern void TwoPointDistribution_ctor(struct TwoPointDistribution *const self, struct ExistenceSpace *successSample, struct ExistenceSpace *failureSample);

CODE_API extern void Existence_ctor(struct Existence *const self);

CODE_API extern float64_t Math_Log(float64_t d);

CODE_API extern void Existenc_set_ExistenceProbabili(struct Existence *const self, float64_t value);

CODE_API extern void Existence_ctor_1(struct Existence *const self, float64_t existenceProbability);

CODE_API extern struct Obstacle *New_Obstacle(void);

CODE_API extern struct Obstacle *Assign_Obstacle(struct Obstacle **const left, struct Obstacle *const right);

CODE_API extern struct Object_1 *New_Object_1(void);

CODE_API extern struct Object_1 *Assign_Object_1(struct Object_1 **const left, struct Object_1 *const right);

CODE_API extern struct float64_t_1D_5 *MatrixData_get_DataReference(struct MatrixData *const self);

CODE_API extern struct MatrixData *MatrixData_20_Vec(int32_t start, int32_t end);

CODE_API extern void Space_set_MatrixData(struct Space *const self, struct MatrixData *value);

CODE_API extern struct CASpace *Space_6_GetIndices(void);

CODE_API extern void GaussianTrack_ctor(struct GaussianTrack *const self, struct Gaussian_5 *state, struct Existence *existence, uint64_t id);

CODE_API extern void TrackWithMeasurements_ctor(struct TrackWithMeasurements *const self, struct Gaussian_5 *state, struct Existence *existence, uint64_t id, struct Obstacle *obstacle, struct Object_1 *ars308Object);

CODE_API extern struct StaticList_12 *New_StaticList_12(void);

CODE_API extern struct StaticList_12 *Assign_StaticList_12(struct StaticList_12 **const left, struct StaticList_12 *const right);

CODE_API extern struct float64_t_1D_3 *New_float64_t_1D_3(void);

CODE_API extern struct float64_t_1D_3 *Assign_float64_t_1D_3(struct float64_t_1D_3 **const left, struct float64_t_1D_3 *const right);

CODE_API extern struct RadarSpace_1D_15 *New_RadarSpace_1D_15(void);

CODE_API extern struct RadarSpace_1D_15 *Assign_RadarSpace_1D_15(struct RadarSpace_1D_15 **const left, struct RadarSpace_1D_15 *const right);

CODE_API extern void StaticList_12_ctor(struct StaticList_12 *const self, int32_t maximumCount);

CODE_API extern struct RadarSpace *New_RadarSpace(void);

CODE_API extern struct RadarSpace *Assign_RadarSpace(struct RadarSpace **const left, struct RadarSpace *const right);

CODE_API extern struct MatrixData_4 *New_MatrixData_4(void);

CODE_API extern struct MatrixData_4 *Assign_MatrixData_4(struct MatrixData_4 **const left, struct MatrixData_4 *const right);

CODE_API extern void MatrixData_4_ctor(struct MatrixData_4 *const self, int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_4 *MatrixData_20_Zeros_3(int32_t rows, int32_t columns);

CODE_API extern struct int32_t_1D_1 *AnguSpace_1_get_AngulDimenIndic(struct AngularSpace_1 *const self);

CODE_API extern void RadarSpace_ctor(struct RadarSpace *const self);

CODE_API extern int32_t StaticList_12_get_Count(struct StaticList_12 *const self);

CODE_API extern void StaticList_12_Add(struct StaticList_12 *const self, struct RadarSpace *value);

CODE_API extern struct StaticList_4 *New_StaticList_4(void);

CODE_API extern struct StaticList_4 *Assign_StaticList_4(struct StaticList_4 **const left, struct StaticList_4 *const right);

CODE_API extern struct Obstacle_1D_40 *New_Obstacle_1D_40(void);

CODE_API extern struct Obstacle_1D_40 *Assign_Obstacle_1D_40(struct Obstacle_1D_40 **const left, struct Obstacle_1D_40 *const right);

CODE_API extern void StaticList_4_ctor(struct StaticList_4 *const self, int32_t maximumCount);

CODE_API extern void Obstacle_ctor(struct Obstacle *const self, uint32_t timestamp, int32_t id, float64_t positionX, float64_t positionY, float64_t velocityX, float64_t velocityY, ObstacleType obstacleType, ObstacleStatus obstacleStatus, float64_t length, float64_t width, float64_t angleRate, float64_t accelerationX, float64_t angle, bool_t cipvFlag);

CODE_API extern int32_t StaticList_4_get_Count(struct StaticList_4 *const self);

CODE_API extern void StaticList_4_Add(struct StaticList_4 *const self, struct Obstacle *value);

CODE_API extern struct StaticList_6 *New_StaticList_6(void);

CODE_API extern struct StaticList_6 *Assign_StaticList_6(struct StaticList_6 **const left, struct StaticList_6 *const right);

CODE_API extern struct float64_t_1D_4 *New_float64_t_1D_4(void);

CODE_API extern struct float64_t_1D_4 *Assign_float64_t_1D_4(struct float64_t_1D_4 **const left, struct float64_t_1D_4 *const right);

CODE_API extern struct MobilEyeSpace_1D_40 *New_MobilEyeSpace_1D_40(void);

CODE_API extern struct MobilEyeSpace_1D_40 *Assign_MobilEyeSpace_1D_40(struct MobilEyeSpace_1D_40 **const left, struct MobilEyeSpace_1D_40 *const right);

CODE_API extern void StaticList_6_ctor(struct StaticList_6 *const self, int32_t maximumCount);

CODE_API extern struct MobilEyeSpace *New_MobilEyeSpace(void);

CODE_API extern struct MobilEyeSpace *Assign_MobilEyeSpace(struct MobilEyeSpace **const left, struct MobilEyeSpace *const right);

CODE_API extern struct MatrixData_5 *New_MatrixData_5(void);

CODE_API extern struct MatrixData_5 *Assign_MatrixData_5(struct MatrixData_5 **const left, struct MatrixData_5 *const right);

CODE_API extern void MatrixData_5_ctor(struct MatrixData_5 *const self, int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_5 *MatrixData_20_Zeros_4(int32_t rows, int32_t columns);

CODE_API extern void MobilEyeSpace_ctor(struct MobilEyeSpace *const self);

CODE_API extern int32_t StaticList_6_get_Count(struct StaticList_6 *const self);

CODE_API extern void StaticList_6_Add(struct StaticList_6 *const self, struct MobilEyeSpace *value);

CODE_API extern void Object_1_ctor(struct Object_1 *const self, uint32_t rollingCounter, uint32_t id, float64_t longitudinalDisplacement, float64_t relativeLongitudinalVelocity, float64_t accelerationLongitudinal, float64_t probabilityOfExistance, DynamicProperty dynamicProperty, float64_t lateralDisplacement, float64_t length, float64_t width, MeasurementStatus measurementStatus, float64_t rcsValue, float64_t lateralSpeed, float64_t obstacleProbability);

CODE_API extern void Object_1_ctor_1(struct Object_1 *const self, uint32_t rollingCounter, uint32_t id, float64_t longitudinalDisplacement, float64_t relativeLongitudinalVelocity, float64_t accelerationLongitudinal, float64_t probabilityOfExistance, int32_t dynamicProperty, float64_t lateralDisplacement, float64_t length, float64_t width, int32_t measurementStatus, float64_t rcsValue, float64_t lateralSpeed, float64_t obstacleProbability);

CODE_API extern struct StaticList_9 *New_StaticList_9(void);

CODE_API extern struct StaticList_9 *Assign_StaticList_9(struct StaticList_9 **const left, struct StaticList_9 *const right);

CODE_API extern struct FrontRadarObjectSpace *New_FrontRadarObjectSpace(void);

CODE_API extern struct FrontRadarObjectSpace *Assign_FrontRadarObjectSpace(struct FrontRadarObjectSpace **const left, struct FrontRadarObjectSpace *const right);

CODE_API extern struct FrontRadarObjectSpace_1D_40 *New_FrontRadarObjectSpace_1D_40(void);

CODE_API extern struct FrontRadarObjectSpace_1D_40 *Assi_FrontRadarObjecSpace_1D_40(struct FrontRadarObjectSpace_1D_40 **const left, struct FrontRadarObjectSpace_1D_40 *const right);

CODE_API extern void StaticList_9_ctor(struct StaticList_9 *const self, int32_t maximumCount);

CODE_API extern void FrontRadarObjectSpace_ctor(struct FrontRadarObjectSpace *const self);

CODE_API extern float64_t Object_1_get_LongitudiDisplacem(struct Object_1 *const self);

CODE_API extern void Nullable_ctor(struct Nullable *const self, int32_t value);

CODE_API extern struct MatrixData *Space_get_MatrixData(struct Space *const self);

CODE_API extern void MatrixData_set_Item(struct MatrixData *const self, int32_t index, float64_t value);

CODE_API extern void Space_set_Item(struct Space *const self, int32_t index, float64_t value);

CODE_API extern void CVComponentsSpace_set_X(struct CVComponentsSpace *const self, float64_t value);

CODE_API extern float64_t Object_1_get_LateralDisplacemen(struct Object_1 *const self);

CODE_API extern void CVComponentsSpace_set_Y(struct CVComponentsSpace *const self, float64_t value);

CODE_API extern float64_t Object_1_get_RelatiLongitVeloci(struct Object_1 *const self);

CODE_API extern void CVComponentsSpace_set_Vx(struct CVComponentsSpace *const self, float64_t value);

CODE_API extern float64_t Object_1_get_LateralSpeed(struct Object_1 *const self);

CODE_API extern void CVComponentsSpace_set_Vy(struct CVComponentsSpace *const self, float64_t value);

CODE_API extern float64_t Object_1_get_AcceleratLongitudi(struct Object_1 *const self);

CODE_API extern void FrontRadarObjectSpace_set_A(struct FrontRadarObjectSpace *const self, float64_t value);

CODE_API extern void FronRadaObjeSpac_set_Ars308Obje(struct FrontRadarObjectSpace *const self, struct Object_1 *value);

CODE_API extern int32_t StaticList_9_get_Count(struct StaticList_9 *const self);

CODE_API extern void StaticList_9_Add(struct StaticList_9 *const self, struct FrontRadarObjectSpace *value);

CODE_API extern struct Measure_2 *New_Measure_2(void);

CODE_API extern struct Measure_2 *Assign_Measure_2(struct Measure_2 **const left, struct Measure_2 *const right);

CODE_API extern void Measure_set_Value(struct Measure *const self, float64_t value);

CODE_API extern void Measure_ctor(struct Measure *const self, float64_t Value);

CODE_API extern void Measure_2_ctor(struct Measure_2 *const self, float64_t Value);

CODE_API extern struct Measure_3 *New_Measure_3(void);

CODE_API extern struct Measure_3 *Assign_Measure_3(struct Measure_3 **const left, struct Measure_3 *const right);

CODE_API extern void Measure_1_set_Value(struct Measure_1 *const self, float64_t value);

CODE_API extern void Measure_1_ctor(struct Measure_1 *const self, float64_t Value);

CODE_API extern void Measure_3_ctor(struct Measure_3 *const self, float64_t Value);

CODE_API extern struct FrontRadarObjectSpace *Space_6_GetIndices_1(void);

CODE_API extern struct float64_t_1D_4 *MatrixData_5_get_DataReference(struct MatrixData_5 *const self);

CODE_API extern struct MatrixData_5 *MatrixData_20_Vec_1(int32_t start, int32_t end);

CODE_API extern void Space_3_set_MatrixData(struct Space_3 *const self, struct MatrixData_5 *value);

CODE_API extern struct MobilEyeSpace *Space_6_GetIndices_2(void);

CODE_API extern struct Tracking *New_Tracking(void);

CODE_API extern struct Tracking *Assign_Tracking(struct Tracking **const left, struct Tracking *const right);

CODE_API extern struct SensorProperties *New_SensorProperties(void);

CODE_API extern struct SensorProperties *Assign_SensorProperties(struct SensorProperties **const left, struct SensorProperties *const right);

CODE_API extern struct FrontRadarNearParameters *New_FrontRadarNearParameters(void);

CODE_API extern struct FrontRadarNearParameters *Assign_FrontRadarNearParameters(struct FrontRadarNearParameters **const left, struct FrontRadarNearParameters *const right);

CODE_API extern void FrontRadarNearParameters_ctor(struct FrontRadarNearParameters *const self);

CODE_API extern void FrontRadarNearParam_set_PositiX(struct FrontRadarNearParameters *const self, float64_t value);

CODE_API extern void FrontRadarNearParam_set_PositiY(struct FrontRadarNearParameters *const self, float64_t value);

CODE_API extern void FrontRadarNearParam_set_PositiZ(struct FrontRadarNearParameters *const self, float64_t value);

CODE_API extern void FrontRadarNearParam_set_RotatiZ(struct FrontRadarNearParameters *const self, float64_t value);

CODE_API extern void FronRadaNearPara_set_MinimRange(struct FrontRadarNearParameters *const self, float64_t value);

CODE_API extern void FronRadaNearPara_set_MaximRange(struct FrontRadarNearParameters *const self, float64_t value);

CODE_API extern void FronRadaNearPara_set_MinimAngle(struct FrontRadarNearParameters *const self, float64_t value);

CODE_API extern void FronRadaNearPara_set_MaximAngle(struct FrontRadarNearParameters *const self, float64_t value);

CODE_API extern void FronRadaNearPara_set_DetecProba(struct FrontRadarNearParameters *const self, float64_t value);

CODE_API extern void FronRadaNearPara_set_CluttLambd(struct FrontRadarNearParameters *const self, float64_t value);

CODE_API extern void FronRadaNearPara_set_SigmaRange(struct FrontRadarNearParameters *const self, float64_t value);

CODE_API extern void FronRadaNearPara_set_SigmaAngle(struct FrontRadarNearParameters *const self, float64_t value);

CODE_API extern void FroRadNearPara_set_SigmRangRate(struct FrontRadarNearParameters *const self, float64_t value);

CODE_API extern struct FrontRadarFarParameters *New_FrontRadarFarParameters(void);

CODE_API extern struct FrontRadarFarParameters *Assign_FrontRadarFarParameters(struct FrontRadarFarParameters **const left, struct FrontRadarFarParameters *const right);

CODE_API extern void FrontRadarFarParameters_ctor(struct FrontRadarFarParameters *const self);

CODE_API extern float64_t FrontRadarNearParam_get_PositiX(struct FrontRadarNearParameters *const self);

CODE_API extern void FrontRadarFarParame_set_PositiX(struct FrontRadarFarParameters *const self, float64_t value);

CODE_API extern float64_t FrontRadarNearParam_get_PositiY(struct FrontRadarNearParameters *const self);

CODE_API extern void FrontRadarFarParame_set_PositiY(struct FrontRadarFarParameters *const self, float64_t value);

CODE_API extern float64_t FrontRadarNearParam_get_PositiZ(struct FrontRadarNearParameters *const self);

CODE_API extern void FrontRadarFarParame_set_PositiZ(struct FrontRadarFarParameters *const self, float64_t value);

CODE_API extern float64_t FrontRadarNearParam_get_RotatiZ(struct FrontRadarNearParameters *const self);

CODE_API extern void FrontRadarFarParame_set_RotatiZ(struct FrontRadarFarParameters *const self, float64_t value);

CODE_API extern void FronRadaFarParam_set_MinimRange(struct FrontRadarFarParameters *const self, float64_t value);

CODE_API extern void FronRadaFarParam_set_MaximRange(struct FrontRadarFarParameters *const self, float64_t value);

CODE_API extern void FronRadaFarParam_set_MinimAngle(struct FrontRadarFarParameters *const self, float64_t value);

CODE_API extern void FronRadaFarParam_set_MaximAngle(struct FrontRadarFarParameters *const self, float64_t value);

CODE_API extern void FronRadaFarParam_set_DetecProba(struct FrontRadarFarParameters *const self, float64_t value);

CODE_API extern void FronRadaFarParam_set_CluttLambd(struct FrontRadarFarParameters *const self, float64_t value);

CODE_API extern void FronRadaFarParam_set_SigmaRange(struct FrontRadarFarParameters *const self, float64_t value);

CODE_API extern void FronRadaFarParam_set_SigmaAngle(struct FrontRadarFarParameters *const self, float64_t value);

CODE_API extern void FroRadaFarPara_set_SigmRangRate(struct FrontRadarFarParameters *const self, float64_t value);

CODE_API extern struct MobilEyeParameters *New_MobilEyeParameters(void);

CODE_API extern struct MobilEyeParameters *Assign_MobilEyeParameters(struct MobilEyeParameters **const left, struct MobilEyeParameters *const right);

CODE_API extern void MobilEyeParameters_ctor(struct MobilEyeParameters *const self);

CODE_API extern void MobilEyeParameter_set_PositionX(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobilEyeParameter_set_PositionY(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobilEyeParameter_set_PositionZ(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobilEyeParameter_set_RotationZ(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobilEyeParame_set_MinimumRange(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobilEyeParame_set_MaximumRange(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobilEyeParame_set_MinimumAngle(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobilEyeParame_set_MaximumAngle(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobiEyePara_set_FielOfViewOffsX(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobiEyePara_set_FielOfViewOffsY(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobilEyeParameters_set_SigmaX(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobilEyeParameters_set_SigmaY(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobilEyeParameters_set_SigmaVx(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobilEyeParameters_set_SigmaVy(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobilEyeParame_set_DetectProbab(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern void MobilEyeParame_set_ClutteLambda(struct MobilEyeParameters *const self, float64_t value);

CODE_API extern float64_t FronRadaNearPara_get_MinimRange(struct FrontRadarNearParameters *const self);

CODE_API extern float64_t FronRadaNearPara_get_MaximRange(struct FrontRadarNearParameters *const self);

CODE_API extern float64_t FronRadaFarParam_get_MaximRange(struct FrontRadarFarParameters *const self);

CODE_API extern float64_t FronRadaNearPara_get_MinimAngle(struct FrontRadarNearParameters *const self);

CODE_API extern float64_t Math_Sin(float64_t a);

CODE_API extern float64_t Math_Cos(float64_t d);

CODE_API extern float64_t FronRadaFarParam_get_MinimAngle(struct FrontRadarFarParameters *const self);

CODE_API extern float64_t FronRadaNearPara_get_MaximAngle(struct FrontRadarNearParameters *const self);

CODE_API extern float64_t FronRadaFarParam_get_MaximAngle(struct FrontRadarFarParameters *const self);

CODE_API extern void Vector2D_ctor(struct Vector2D *const self, float64_t x, float64_t y);

CODE_API extern struct Vector2D_1D_10 *New_Vector2D_1D_10(void);

CODE_API extern struct Vector2D_1D_10 *Assign_Vector2D_1D_10(struct Vector2D_1D_10 **const left, struct Vector2D_1D_10 *const right);

CODE_API extern struct FrontRadarObjectParameters *New_FrontRadarObjectParameters(void);

CODE_API extern struct FrontRadarObjectParameters *Assign_FrontRadarObjectParamete(struct FrontRadarObjectParameters **const left, struct FrontRadarObjectParameters *const right);

CODE_API extern void FrontRadarObjectParameters_ctor(struct FrontRadarObjectParameters *const self);

CODE_API extern void FrontRadarObjecParam_set_PositX(struct FrontRadarObjectParameters *const self, float64_t value);

CODE_API extern void FrontRadarObjecParam_set_PositY(struct FrontRadarObjectParameters *const self, float64_t value);

CODE_API extern void FrontRadarObjecParam_set_PositZ(struct FrontRadarObjectParameters *const self, float64_t value);

CODE_API extern void FrontRadarObjecParam_set_RotatZ(struct FrontRadarObjectParameters *const self, float64_t value);

CODE_API extern void FronRadaObjePara_set_DetecProba(struct FrontRadarObjectParameters *const self, float64_t value);

CODE_API extern void FronRadaObjePara_set_CluttLambd(struct FrontRadarObjectParameters *const self, float64_t value);

CODE_API extern void FrontRadarObjecParam_set_SigmaX(struct FrontRadarObjectParameters *const self, float64_t value);

CODE_API extern void FrontRadarObjecParam_set_SigmaY(struct FrontRadarObjectParameters *const self, float64_t value);

CODE_API extern void FronRadarObjecParam_set_SigmaVx(struct FrontRadarObjectParameters *const self, float64_t value);

CODE_API extern void FronRadarObjecParam_set_SigmaVy(struct FrontRadarObjectParameters *const self, float64_t value);

CODE_API extern void FronRadarObjecParam_set_SigmaAx(struct FrontRadarObjectParameters *const self, float64_t value);

CODE_API extern void FronRadaObjePara_set_FielOfView(struct FrontRadarObjectParameters *const self, struct Vector2D_1D_10 *value);

CODE_API extern void SensorProperties_ctor(struct SensorProperties *const self);

CODE_API extern void Tracking_set_ProcessNoiseSigmaA(struct Tracking *const self, float64_t value);

CODE_API extern void Tracki_set_ProcesNoiseSigmaJerk(struct Tracking *const self, float64_t value);

CODE_API extern void Tracking_set_ProcessNoiseSigmaW(struct Tracking *const self, float64_t value);

CODE_API extern void Trackin_set_ProcessNoiseExisten(struct Tracking *const self, float64_t value);

CODE_API extern void Tracking_set_GateProbability(struct Tracking *const self, float64_t value);

CODE_API extern void Track_set_ExisteProbabForDeleti(struct Tracking *const self, float64_t value);

CODE_API extern void Track_set_EncloCirclDeletThresh(struct Tracking *const self, float64_t value);

CODE_API extern int32_t Math_Min(int32_t val1, int32_t val2);

CODE_API extern struct MatrixData_2 *MatrixData_20_Eye(int32_t rows, int32_t columns);

CODE_API extern float64_t MatrixData_get_Item(struct MatrixData *const self, int32_t index);

CODE_API extern float64_t Space_get_Item(struct Space *const self, int32_t index);

CODE_API extern float64_t CVSpace_get_V(struct CVSpace *const self);

CODE_API extern void MatrixData_2_set_Item(struct MatrixData_2 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern float64_t CASpace_get_A(struct CASpace *const self);

CODE_API extern void Tracking_ctor(struct Tracking *const self, struct SensorProperties *sensorProperties);

CODE_API extern void Tracking_ctor_1(struct Tracking *const self);

CODE_API extern struct EgoMotionFilter *New_EgoMotionFilter(void);

CODE_API extern struct EgoMotionFilter *Assign_EgoMotionFilter(struct EgoMotionFilter **const left, struct EgoMotionFilter *const right);

CODE_API extern struct float64_t_1D_2 *New_float64_t_1D_2(void);

CODE_API extern struct float64_t_1D_2 *Assign_float64_t_1D_2(struct float64_t_1D_2 **const left, struct float64_t_1D_2 *const right);

CODE_API extern struct PositiveDefiniteMatrix_4 *New_PositiveDefiniteMatrix_4(void);

CODE_API extern struct PositiveDefiniteMatrix_4 *Assign_PositiveDefiniteMatrix_4(struct PositiveDefiniteMatrix_4 **const left, struct PositiveDefiniteMatrix_4 *const right);

CODE_API extern struct CTRAErrorSpace *New_CTRAErrorSpace(void);

CODE_API extern struct CTRAErrorSpace *Assign_CTRAErrorSpace(struct CTRAErrorSpace **const left, struct CTRAErrorSpace *const right);

CODE_API extern struct MatrixData_8 *New_MatrixData_8(void);

CODE_API extern struct MatrixData_8 *Assign_MatrixData_8(struct MatrixData_8 **const left, struct MatrixData_8 *const right);

CODE_API extern void MatrixData_8_ctor(struct MatrixData_8 *const self, int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_8 *MatrixData_20_Zeros_5(int32_t rows, int32_t columns);

CODE_API extern void CTRAErrorSpace_ctor(struct CTRAErrorSpace *const self);

CODE_API extern void Matrix_4_ctor(struct Matrix_4 *const self);

CODE_API extern void SquareMatrix_4_ctor(struct SquareMatrix_4 *const self);

CODE_API extern struct MatrixData_6 *New_MatrixData_6(void);

CODE_API extern struct MatrixData_6 *Assign_MatrixData_6(struct MatrixData_6 **const left, struct MatrixData_6 *const right);

CODE_API extern void MatrixData_6_ctor(struct MatrixData_6 *const self, int32_t rows, int32_t columns);

CODE_API extern struct float64_t_1D_4 *MatrixData_6_get_DataReference(struct MatrixData_6 *const self);

CODE_API extern struct MatrixData_6 *MatrixData_20_Diag_1(struct float64_t_1D_2 *diagonalElements);

CODE_API extern struct MatrixData_6 *MatrixData_20_Zeros_6(int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_6 *Matrix_4_get_MatrixData(struct Matrix_4 *const self);

CODE_API extern bool_t MatrixData_6_get_IsZero(struct MatrixData_6 *const self);

CODE_API extern bool_t Matrix_4_get_IsZero(struct Matrix_4 *const self);

CODE_API extern float64_t MatrixData_6_get_Item(struct MatrixData_6 *const self, int32_t row, int32_t column);

CODE_API extern bool_t MatrixData_6_get_IsEmpty(struct MatrixData_6 *const self);

CODE_API extern void LinearAlgebra_FactorCholesky_1(struct LinearAlgebra *const self, struct float64_t_1D_4 *a, int32_t rows);

CODE_API extern struct MatrixData_6 *MatrixMath_Chol_1(struct MatrixData_6 *matrix);

CODE_API extern void SquareMatrix_4_ctor_1(struct PositiveDefiniteMatrix_4 *const self, struct float64_t_1D_2 *mainDiagonal);

CODE_API extern void PositiveDefiniteMatrix_4_ctor(struct PositiveDefiniteMatrix_4 *const self, struct float64_t_1D_2 *mainDiagonal);

CODE_API extern struct CTRASpace *New_CTRASpace(void);

CODE_API extern struct CTRASpace *Assign_CTRASpace(struct CTRASpace **const left, struct CTRASpace *const right);

CODE_API extern struct MatrixData_9 *New_MatrixData_9(void);

CODE_API extern struct MatrixData_9 *Assign_MatrixData_9(struct MatrixData_9 **const left, struct MatrixData_9 *const right);

CODE_API extern struct float64_t_1D_6 *New_float64_t_1D_6(void);

CODE_API extern struct float64_t_1D_6 *Assign_float64_t_1D_6(struct float64_t_1D_6 **const left, struct float64_t_1D_6 *const right);

CODE_API extern void MatrixData_9_ctor(struct MatrixData_9 *const self, int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_9 *MatrixData_20_Zeros_7(int32_t rows, int32_t columns);

CODE_API extern struct int32_t_1D_1 *AnguSpace_2_get_AngulDimenIndic(struct AngularSpace_2 *const self);

CODE_API extern void CTRASpace_ctor(struct CTRASpace *const self);

CODE_API extern struct float64_t_1D_6 *MatrixData_9_get_DataReference(struct MatrixData_9 *const self);

CODE_API extern struct MatrixData_9 *MatrixData_20_Vec_2(int32_t start, int32_t end);

CODE_API extern void Space_5_set_MatrixData(struct Space_5 *const self, struct MatrixData_9 *value);

CODE_API extern struct CTRASpace *Space_6_GetIndices_3(void);

CODE_API extern struct float64_t_1D_2 *MatrixData_8_get_DataReference(struct MatrixData_8 *const self);

CODE_API extern struct MatrixData_8 *MatrixData_20_Vec_3(int32_t start, int32_t end);

CODE_API extern void Space_4_set_MatrixData(struct Space_4 *const self, struct MatrixData_8 *value);

CODE_API extern struct CTRAErrorSpace *Space_6_GetIndices_4(void);

CODE_API extern struct CTRAModel *New_CTRAModel(void);

CODE_API extern struct CTRAModel *Assign_CTRAModel(struct CTRAModel **const left, struct CTRAModel *const right);

CODE_API extern void SystemModel_1_set_Condition(struct SystemModel_1 *const self, struct CTRASpace *value);

CODE_API extern void SystemModel_1_set_Condition2(struct SystemModel_1 *const self, struct CTRAErrorSpace *value);

CODE_API extern void TimeSpan_ctor(struct TimeSpan *const self, int64_t ticks);

CODE_API extern void SystemModel_1_set_TimeCondition(struct SystemModel_1 *const self, struct TimeSpan value);

CODE_API extern void CTRAModel_ctor(struct CTRAModel *const self, struct PositiveDefiniteMatrix_4 *processNoiseCovariance);

CODE_API extern struct PositiveDefiniteMatrix *New_PositiveDefiniteMatrix(void);

CODE_API extern struct PositiveDefiniteMatrix *Assign_PositiveDefiniteMatrix(struct PositiveDefiniteMatrix **const left, struct PositiveDefiniteMatrix *const right);

CODE_API extern struct VelocitySpace *New_VelocitySpace(void);

CODE_API extern struct VelocitySpace *Assign_VelocitySpace(struct VelocitySpace **const left, struct VelocitySpace *const right);

CODE_API extern void VelocitySpace_ctor(struct VelocitySpace *const self);

CODE_API extern void Matrix_ctor(struct Matrix *const self);

CODE_API extern void SquareMatrix_ctor(struct SquareMatrix *const self);

CODE_API extern struct float64_t_1D_1 *MatrixData_3_get_DataReference(struct MatrixData_3 *const self);

CODE_API extern struct MatrixData_3 *MatrixData_20_Diag_2(struct float64_t_1D_1 *diagonalElements);

CODE_API extern struct MatrixData_3 *Matrix_get_MatrixData(struct Matrix *const self);

CODE_API extern bool_t MatrixData_3_get_IsZero(struct MatrixData_3 *const self);

CODE_API extern bool_t Matrix_get_IsZero(struct Matrix *const self);

CODE_API extern float64_t MatrixData_3_get_Item(struct MatrixData_3 *const self, int32_t row, int32_t column);

CODE_API extern bool_t MatrixData_3_get_IsEmpty(struct MatrixData_3 *const self);

CODE_API extern void LinearAlgebra_FactorCholesky_2(struct LinearAlgebra *const self, struct float64_t_1D_1 *a, int32_t rows);

CODE_API extern struct MatrixData_3 *MatrixMath_Chol_2(struct MatrixData_3 *matrix);

CODE_API extern void SquareMatrix_ctor_1(struct PositiveDefiniteMatrix *const self, struct float64_t_1D_1 *mainDiagonal);

CODE_API extern void PositiveDefiniteMatrix_ctor(struct PositiveDefiniteMatrix *const self, struct float64_t_1D_1 *mainDiagonal);

CODE_API extern struct MatrixData_3 *MatrixData_20_Vec_4(int32_t start, int32_t end);

CODE_API extern void Space_1_set_MatrixData(struct Space_1 *const self, struct MatrixData_3 *value);

CODE_API extern struct VelocitySpace *Space_6_GetIndices_5(void);

CODE_API extern struct VelocityMeasurementModel *New_VelocityMeasurementModel(void);

CODE_API extern struct VelocityMeasurementModel *Assign_VelocityMeasurementModel(struct VelocityMeasurementModel **const left, struct VelocityMeasurementModel *const right);

CODE_API extern void MeasurementModel_set_Condition(struct MeasurementModel *const self, struct CTRASpace *value);

CODE_API extern void VelocMeasuModel_set_VelociScale(struct VelocityMeasurementModel *const self, float64_t value);

CODE_API extern void VelocityMeasurementModel_ctor(struct VelocityMeasurementModel *const self, struct PositiveDefiniteMatrix *measurementNoiseCovariance);

CODE_API extern struct PositiveDefiniteMatrix_1 *New_PositiveDefiniteMatrix_1(void);

CODE_API extern struct PositiveDefiniteMatrix_1 *Assign_PositiveDefiniteMatrix_1(struct PositiveDefiniteMatrix_1 **const left, struct PositiveDefiniteMatrix_1 *const right);

CODE_API extern struct YawRateSpace *New_YawRateSpace(void);

CODE_API extern struct YawRateSpace *Assign_YawRateSpace(struct YawRateSpace **const left, struct YawRateSpace *const right);

CODE_API extern void YawRateSpace_ctor(struct YawRateSpace *const self);

CODE_API extern void Matrix_1_ctor(struct Matrix_1 *const self);

CODE_API extern void SquareMatrix_1_ctor(struct SquareMatrix_1 *const self);

CODE_API extern struct MatrixData_3 *Matrix_1_get_MatrixData(struct Matrix_1 *const self);

CODE_API extern bool_t Matrix_1_get_IsZero(struct Matrix_1 *const self);

CODE_API extern void SquareMatrix_1_ctor_1(struct PositiveDefiniteMatrix_1 *const self, struct float64_t_1D_1 *mainDiagonal);

CODE_API extern void PositiveDefiniteMatrix_1_ctor(struct PositiveDefiniteMatrix_1 *const self, struct float64_t_1D_1 *mainDiagonal);

CODE_API extern struct YawRateSpace *Space_6_GetIndices_6(void);

CODE_API extern struct YawRateMeasurementModel *New_YawRateMeasurementModel(void);

CODE_API extern struct YawRateMeasurementModel *Assign_YawRateMeasurementModel(struct YawRateMeasurementModel **const left, struct YawRateMeasurementModel *const right);

CODE_API extern void MeasuremenModel_1_set_Condition(struct MeasurementModel_1 *const self, struct CTRASpace *value);

CODE_API extern void YawRateMeasMode_set_YawRateBias(struct YawRateMeasurementModel *const self, float64_t value);

CODE_API extern void YawRateMeasurementModel_ctor(struct YawRateMeasurementModel *const self, struct PositiveDefiniteMatrix_1 *measurementNoiseCovariance);

CODE_API extern struct Gaussian_4 *New_Gaussian_4(void);

CODE_API extern struct Gaussian_4 *Assign_Gaussian_4(struct Gaussian_4 **const left, struct Gaussian_4 *const right);

CODE_API extern struct PositiveDefiniteMatrix_6 *New_PositiveDefiniteMatrix_6(void);

CODE_API extern struct PositiveDefiniteMatrix_6 *Assign_PositiveDefiniteMatrix_6(struct PositiveDefiniteMatrix_6 **const left, struct PositiveDefiniteMatrix_6 *const right);

CODE_API extern void Matrix_6_ctor(struct Matrix_6 *const self);

CODE_API extern void SquareMatrix_6_ctor(struct SquareMatrix_6 *const self);

CODE_API extern void PositiveDefiniteMatrix_6_ctor(struct PositiveDefiniteMatrix_6 *const self);

CODE_API extern void Gaussian_4_ctor(struct Gaussian_4 *const self);

CODE_API extern struct PositiveDefiniteMatrix_6 *Gaussian_4_get_Covariance(struct Gaussian_4 *const self);

CODE_API extern struct float64_t_1D_36 *New_float64_t_1D_36(void);

CODE_API extern struct float64_t_1D_36 *Assign_float64_t_1D_36(struct float64_t_1D_36 **const left, struct float64_t_1D_36 *const right);

CODE_API extern struct MatrixData_11 *New_MatrixData_11(void);

CODE_API extern struct MatrixData_11 *Assign_MatrixData_11(struct MatrixData_11 **const left, struct MatrixData_11 *const right);

CODE_API extern void MatrixData_11_ctor(struct MatrixData_11 *const self, int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_11 *MatrixData_20_Zeros_8(int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_11 *Matrix_6_get_MatrixData(struct Matrix_6 *const self);

CODE_API extern struct float64_t_1D_36 *MatrixData_11_get_DataReference(struct MatrixData_11 *const self);

CODE_API extern void MatrixData_11_set_Item(struct MatrixData_11 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void PositivDefinitMatrix_6_set_Item(struct PositiveDefiniteMatrix_6 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void EgoMotionFilter_Reset(struct EgoMotionFilter *const self);

CODE_API extern void EgoMotionFilter_ctor(struct EgoMotionFilter *const self);

CODE_API extern void Tracking_Initialize(struct Tracking *const self);

CODE_API extern bool_t Nullable_1_get_HasValue(struct Nullable_1 *const self);

CODE_API extern struct StaticListEnumerator_15 *New_StaticListEnumerator_15(void);

CODE_API extern struct StaticListEnumerator_15 *Assign_StaticListEnumerator_15(struct StaticListEnumerator_15 **const left, struct StaticListEnumerator_15 *const right);

CODE_API extern void StaticListEnumerator_15_ctor(struct StaticListEnumerator_15 *const self, struct StaticList_27 *list);

CODE_API extern struct StaticListEnumerator_15 *StaticList_27_GetEnumerator(struct StaticList_27 *const self);

CODE_API extern int32_t StaticList_27_get_Count(struct StaticList_27 *const self);

CODE_API extern bool_t StaticListEnumerato_15_MoveNext(struct StaticListEnumerator_15 *const self);

CODE_API extern struct TrackWithMeasurements *StaticList_27_get_Item(struct StaticList_27 *const self, int32_t index);

CODE_API extern struct TrackWithMeasurements *StaticListEnumer_15_get_Current(struct StaticListEnumerator_15 *const self);

CODE_API extern struct Existence *GaussianTrack_get_Existence(struct GaussianTrack *const self);

CODE_API extern float64_t TwoPointDistributio_get_LogOdds(struct TwoPointDistribution *const self);

CODE_API extern void Existence_ctor_2(struct Existence *const self, struct TwoPointDistribution *twoPointDistribution);

CODE_API extern struct Gaussian_5 *GaussianTrack_get_State(struct GaussianTrack *const self);

CODE_API extern struct CASpace *Gaussian_5_get_Expectation(struct Gaussian_5 *const self);

CODE_API extern struct PositiveDefiniteMatrix_7 *Gaussian_5_get_Covariance(struct Gaussian_5 *const self);

CODE_API extern struct Gaussian_5 *Gaussian_5_Clone(struct Gaussian_5 *const self);

CODE_API extern uint64_t GaussianTrack_get_ID(struct GaussianTrack *const self);

CODE_API extern struct Obstacle *TrackWithMeasureme_get_Obstacle(struct TrackWithMeasurements *const self);

CODE_API extern struct Object_1 *TrackWithMeasu_get_ARS308Object(struct TrackWithMeasurements *const self);

CODE_API extern void StaticList_27_Add(struct StaticList_27 *const self, struct TrackWithMeasurements *value);

CODE_API extern void StaticListEnumerator_15_Dispose(struct StaticListEnumerator_15 *const self);

CODE_API extern struct StaticList_27 *Tracking_GetTracks(struct Tracking *const self);

CODE_API extern void Nullable_1_ctor(struct Nullable_1 *const self, struct DateTime value);

CODE_API extern struct DateTime Nullable_1_get_Value(struct Nullable_1 *const self);

CODE_API extern struct TimeSpan DateTime_1_op_Subtraction(struct DateTime d1, struct DateTime d2);

CODE_API extern struct CTRASpace *Gaussian_4_get_Expectation(struct Gaussian_4 *const self);

CODE_API extern struct SquareMatrix_6 *New_SquareMatrix_6(void);

CODE_API extern struct SquareMatrix_6 *Assign_SquareMatrix_6(struct SquareMatrix_6 **const left, struct SquareMatrix_6 *const right);

CODE_API extern struct MatrixData_11 *MatrixData_20_Eye_1(int32_t rows, int32_t columns);

CODE_API extern void Matrix_6_set_MatrixData(struct SquareMatrix_6 *const self, struct MatrixData_11 *value);

CODE_API extern struct SquareMatrix_6 *SquareMatrix_8_Eye(void);

CODE_API extern float64_t TimeSpan_get_TotalSeconds(struct TimeSpan *const self);

CODE_API extern struct MatrixData_9 *Space_5_get_MatrixData(struct Space_5 *const self);

CODE_API extern float64_t MatrixData_9_get_Item(struct MatrixData_9 *const self, int32_t index);

CODE_API extern float64_t Space_5_get_Item(struct Space_5 *const self, int32_t index);

CODE_API extern float64_t CTRASpace_get_G(struct CTRASpace *const self);

CODE_API extern float64_t CTRASpace_get_V(struct CTRASpace *const self);

CODE_API extern float64_t CTRASpace_get_W(struct CTRASpace *const self);

CODE_API extern float64_t CTRASpace_get_A(struct CTRASpace *const self);

CODE_API extern float64_t CTRASpace_get_X(struct CTRASpace *const self);

CODE_API extern void Matrix_6_set_Item(struct SquareMatrix_6 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void Matrix_6_set_Item_1(struct SquareMatrix_6 *const self, float64_t row, float64_t column, float64_t value);

CODE_API extern float64_t CTRASpace_get_Y(struct CTRASpace *const self);

CODE_API extern void CTRAModel_FillTransitionMatrix(struct CTRAModel *const self, struct CTRASpace *stateExpectation, struct TimeSpan deltaT, struct SquareMatrix_6 **F);

CODE_API extern struct SquareMatrix_6 *SystemModel_5_get_TransitMatrix(struct CTRAModel *const self);

CODE_API extern struct MatrixData_11 *MatrixData_11_get_Copy(struct MatrixData_11 *const self);

CODE_API extern bool_t Object_2_ReferenceEquals(struct Object *objA, struct Object *objB);

CODE_API extern void LinearAlgebra_MatrixMultiply(struct LinearAlgebra *const self, struct float64_t_1D_36 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_36 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_36 *c);

CODE_API extern struct MatrixData_11 *MatrixMath_Multiply(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_11 *left, struct MatrixData_11 *right);

CODE_API extern struct MatrixData_11 *MatrixMath_Multiply_1(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_11 *left, struct MatrixData_11 *right);

CODE_API extern struct MatrixData_11 *MatrixMath_Multiply_2(bool_t transposeFirst, bool_t transposeSecond, bool_t transposeThird, struct MatrixData_11 *first, struct MatrixData_11 *second, struct MatrixData_11 *third);

CODE_API extern struct Matrix_7 *New_Matrix_7(void);

CODE_API extern struct Matrix_7 *Assign_Matrix_7(struct Matrix_7 **const left, struct Matrix_7 *const right);

CODE_API extern void Matrix_7_ctor(struct Matrix_7 *const self);

CODE_API extern struct MatrixData_8 *Space_4_get_MatrixData(struct Space_4 *const self);

CODE_API extern float64_t MatrixData_8_get_Item(struct MatrixData_8 *const self, int32_t index);

CODE_API extern float64_t Space_4_get_Item(struct Space_4 *const self, int32_t index);

CODE_API extern float64_t CTRAErrorSpace_get_J(struct CTRAErrorSpace *const self);

CODE_API extern struct float64_t_1D_12 *New_float64_t_1D_12(void);

CODE_API extern struct float64_t_1D_12 *Assign_float64_t_1D_12(struct float64_t_1D_12 **const left, struct float64_t_1D_12 *const right);

CODE_API extern struct MatrixData_12 *New_MatrixData_12(void);

CODE_API extern struct MatrixData_12 *Assign_MatrixData_12(struct MatrixData_12 **const left, struct MatrixData_12 *const right);

CODE_API extern void MatrixData_12_ctor(struct MatrixData_12 *const self, int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_12 *MatrixData_20_Zeros_9(int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_12 *Matrix_7_get_MatrixData(struct Matrix_7 *const self);

CODE_API extern struct float64_t_1D_12 *MatrixData_12_get_DataReference(struct MatrixData_12 *const self);

CODE_API extern void MatrixData_12_set_Item(struct MatrixData_12 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void Matrix_7_set_Item(struct Matrix_7 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void Matrix_7_set_Item_1(struct Matrix_7 *const self, float64_t row, float64_t column, float64_t value);

CODE_API extern float64_t CTRAErrorSpace_get_Alpha(struct CTRAErrorSpace *const self);

CODE_API extern void CTRAModel_FillNoiseDiscreMatrix(struct CTRAModel *const self, struct CTRASpace *stateExpectation, struct TimeSpan deltaT, struct Matrix_7 **G);

CODE_API extern struct PositiveDefiniteMatrix_4 *SystemModel_1_get_NoiseCovarian(struct SystemModel_1 *const self);

CODE_API extern void LinearAlgebra_MatrixMultiply_1(struct LinearAlgebra *const self, struct float64_t_1D_12 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_4 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_12 *c);

CODE_API extern struct MatrixData_12 *MatrixMath_Multiply_3(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_12 *left, struct MatrixData_6 *right);

CODE_API extern void LinearAlgebra_MatrixMultiply_2(struct LinearAlgebra *const self, struct float64_t_1D_12 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_12 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_36 *c);

CODE_API extern struct MatrixData_11 *MatrixMath_Multiply_4(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_12 *left, struct MatrixData_12 *right);

CODE_API extern struct MatrixData_11 *MatrixMath_Multiply_5(bool_t transposeFirst, bool_t transposeSecond, bool_t transposeThird, struct MatrixData_12 *first, struct MatrixData_6 *second, struct MatrixData_12 *third);

CODE_API extern float64_t MatrixData_11_get_Item(struct MatrixData_11 *const self, int32_t row, int32_t column);

CODE_API extern int32_t Math_Sign(float64_t value);

CODE_API extern struct PositiveDefiniteMatrix_6 *PositiveDefiniteMatrix_8_Create(struct MatrixData_11 *matrix);

CODE_API extern struct PositiveDefiniteMatrix_6 *PositDefinMatri_8_CreatAndCorre(struct MatrixData_11 *matrix);

CODE_API extern struct PositiveDefiniteMatrix_6 *SystemModel_3_get_Covariance(struct CTRAModel *const self);

CODE_API extern struct MatrixData_11 *MatrixMath_Add(struct MatrixData_11 *left, struct MatrixData_11 *right);

CODE_API extern struct MatrixData_9 *MatrixData_9_get_Copy(struct MatrixData_9 *const self);

CODE_API extern struct CTRASpace *SpaceExtensions_Clone_1(struct CTRASpace *space);

CODE_API extern void MatrixData_9_set_Item(struct MatrixData_9 *const self, int32_t index, float64_t value);

CODE_API extern void Space_5_set_Item(struct Space_5 *const self, int32_t index, float64_t value);

CODE_API extern void CTRASpace_set_X(struct CTRASpace *const self, float64_t value);

CODE_API extern void CTRASpace_set_Y(struct CTRASpace *const self, float64_t value);

CODE_API extern void CTRASpace_set_G(struct CTRASpace *const self, float64_t value);

CODE_API extern void CTRASpace_set_V(struct CTRASpace *const self, float64_t value);

CODE_API extern void CTRASpace_set_A(struct CTRASpace *const self, float64_t value);

CODE_API extern void CTRASpace_set_W(struct CTRASpace *const self, float64_t value);

CODE_API extern void CTRAModel_f(struct CTRAModel *const self, struct CTRASpace *state, struct TimeSpan deltaT, struct CTRAErrorSpace *processNoise, struct CTRASpace **predictedState);

CODE_API extern struct CTRASpace *SystemModel_1_get_Expectation(struct CTRAModel *const self);

CODE_API extern struct Gaussian_4 *Gaussian_6_Create(struct CTRASpace *expectation, struct PositiveDefiniteMatrix_6 *covariance);

CODE_API extern struct Gaussian_4 *EKF_PredictState(struct TimeSpan deltaT, struct Gaussian_4 *state, struct CTRAModel *systemModel);

CODE_API extern float64_t Measure_get_Value(struct Measure *const self);

CODE_API extern float64_t Measure_4_op_Implicit(struct Measure *measure);

CODE_API extern struct MatrixData_3 *Space_1_get_MatrixData(struct Space_1 *const self);

CODE_API extern void MatrixData_3_set_Item(struct MatrixData_3 *const self, int32_t index, float64_t value);

CODE_API extern void Space_1_set_Item(struct Space_1 *const self, int32_t index, float64_t value);

CODE_API extern void VelocitySpace_set_V(struct VelocitySpace *const self, float64_t value);

CODE_API extern struct Matrix_8 *New_Matrix_8(void);

CODE_API extern struct Matrix_8 *Assign_Matrix_8(struct Matrix_8 **const left, struct Matrix_8 *const right);

CODE_API extern void Matrix_8_ctor(struct Matrix_8 *const self);

CODE_API extern float64_t MatrixData_3_get_Item_1(struct MatrixData_3 *const self, int32_t index);

CODE_API extern float64_t Space_1_get_Item(struct Space_1 *const self, int32_t index);

CODE_API extern float64_t VelocitySpace_get_V(struct VelocitySpace *const self);

CODE_API extern float64_t VelocMeasuModel_get_VelociScale(struct VelocityMeasurementModel *const self);

CODE_API extern struct MatrixData_10 *New_MatrixData_10(void);

CODE_API extern struct MatrixData_10 *Assign_MatrixData_10(struct MatrixData_10 **const left, struct MatrixData_10 *const right);

CODE_API extern void MatrixData_10_ctor(struct MatrixData_10 *const self, int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_10 *MatrixData_20_Zeros_10(int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_10 *Matrix_8_get_MatrixData(struct Matrix_8 *const self);

CODE_API extern struct float64_t_1D_6 *MatrixData_10_get_DataReference(struct MatrixData_10 *const self);

CODE_API extern void MatrixData_10_set_Item(struct MatrixData_10 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void Matrix_8_set_Item(struct Matrix_8 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void Matrix_8_set_Item_1(struct Matrix_8 *const self, float64_t row, float64_t column, float64_t value);

CODE_API extern void VelocMeasuModel_FillTransMatrix(struct VelocityMeasurementModel *const self, struct Matrix_8 **H);

CODE_API extern void MeasurModel_8_FillTransitMatrix(struct VelocityMeasurementModel *const self, struct CTRASpace *predictedStateExpectation, struct Matrix_8 **H);

CODE_API extern struct Matrix_8 *MeasurModel_4_get_TransitMatrix(struct VelocityMeasurementModel *const self);

CODE_API extern void LinearAlgebra_MatrixMultiply_3(struct LinearAlgebra *const self, struct float64_t_1D_6 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_36 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_6 *c);

CODE_API extern struct MatrixData_10 *MatrixMath_Multiply_6(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_10 *left, struct MatrixData_11 *right);

CODE_API extern void LinearAlgebra_MatrixMultiply_4(struct LinearAlgebra *const self, struct float64_t_1D_6 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_6 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_1 *c);

CODE_API extern struct MatrixData_3 *MatrixMath_Multiply_7(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_10 *left, struct MatrixData_10 *right);

CODE_API extern struct MatrixData_3 *MatrixMath_Multiply_8(bool_t transposeFirst, bool_t transposeSecond, bool_t transposeThird, struct MatrixData_10 *first, struct MatrixData_11 *second, struct MatrixData_10 *third);

CODE_API extern struct PositiveDefiniteMatrix *MeasuremModel_get_NoiseCovarian(struct MeasurementModel *const self);

CODE_API extern struct PositiveDefiniteMatrix *MeasurementModel_get_Covariance(struct MeasurementModel *const self);

CODE_API extern struct MatrixData_3 *MatrixMath_Add_1(struct MatrixData_3 *left, struct MatrixData_3 *right);

CODE_API extern void MatrixData_3_set_Item_1(struct MatrixData_3 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void PositiveDefiniteMatrix_ctor_1(struct PositiveDefiniteMatrix *const self);

CODE_API extern struct PositiveDefiniteMatrix *PositiveDefiniteMatrix_9_Create(struct MatrixData_3 *matrix);

CODE_API extern struct PositiveDefiniteMatrix *PositDefinMatri_9_CreatAndCorre(struct MatrixData_3 *matrix);

CODE_API extern struct MatrixData_3 *MatrixMath_Multiply_9(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_10 *left, struct MatrixData_9 *right);

CODE_API extern struct MatrixData_3 *MatrixMath_Multiply_10(struct MatrixData_10 *left, struct MatrixData_9 *right);

CODE_API extern void MeasurementModel_8_h(struct VelocityMeasurementModel *const self, struct CTRASpace *state, struct VelocitySpace **predictedMeasurement);

CODE_API extern struct VelocitySpace *MeasuremenModel_get_Expectation(struct VelocityMeasurementModel *const self);

CODE_API extern struct Gaussian *New_Gaussian(void);

CODE_API extern struct Gaussian *Assign_Gaussian(struct Gaussian **const left, struct Gaussian *const right);

CODE_API extern struct Gaussian *Gaussian_7_Create(struct VelocitySpace *expectation, struct PositiveDefiniteMatrix *covariance);

CODE_API extern struct Gaussian *EKF_PredictMeasurement(struct Gaussian_4 *predictedState, struct VelocityMeasurementModel *measurementModel, struct Matrix_8 **transitionMatrix);

CODE_API extern struct PositiveDefiniteMatrix *Gaussian_get_Covariance(struct Gaussian *const self);

CODE_API extern struct MatrixData_3 *MatrixData_20_Eye_2(int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_3 *MatrixData_3_get_Copy(struct MatrixData_3 *const self);

CODE_API extern void LinearAlgebra_FactorLU(struct LinearAlgebra *const self, struct float64_t_1D_1 *a, int32_t rows, struct int32_t_1D_1 *pivotIndices);

CODE_API extern void LinearAlgebra_SolveLU(struct LinearAlgebra *const self, struct float64_t_1D_1 *a, int32_t rows, struct int32_t_1D_1 *pivotIndices, struct float64_t_1D_1 *b);

CODE_API extern struct MatrixData_3 *MatrixMath_LinsolveSquare(struct MatrixData_3 *left, struct MatrixData_3 *right);

CODE_API extern void LinearAlgebra_MatrixMultiply_5(struct LinearAlgebra *const self, struct float64_t_1D_36 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_6 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_6 *c);

CODE_API extern struct MatrixData_9 *MatrixMath_Multiply_11(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_11 *left, struct MatrixData_10 *right);

CODE_API extern void LinearAlgebra_MatrixMultiply_6(struct LinearAlgebra *const self, struct float64_t_1D_6 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_1 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_6 *c);

CODE_API extern struct MatrixData_9 *MatrixMath_Multiply_12(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_9 *left, struct MatrixData_3 *right);

CODE_API extern struct MatrixData_9 *MatrixMath_Multiply_13(bool_t transposeFirst, bool_t transposeSecond, bool_t transposeThird, struct MatrixData_11 *first, struct MatrixData_10 *second, struct MatrixData_3 *third);

CODE_API extern struct VelocitySpace *Gaussian_get_Expectation(struct Gaussian *const self);

CODE_API extern struct MatrixData_3 *MatrixMath_Subtract(struct MatrixData_3 *left, struct MatrixData_3 *right);

CODE_API extern struct float64_t_1D_1 *Space_6_op_Subtraction(struct Space_1 *left, struct Space_1 *right);

CODE_API extern struct MatrixData_3 *MatrixData_20_Create(struct float64_t_1D_1 *data);

CODE_API extern struct MatrixData_9 *MatrixMath_Add_2(struct MatrixData_9 *left, struct MatrixData_9 *right);

CODE_API extern void LinearAlgebra_MatrixMultiply_7(struct LinearAlgebra *const self, struct float64_t_1D_6 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_6 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_36 *c);

CODE_API extern struct MatrixData_11 *MatrixMath_Multiply_14(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_9 *left, struct MatrixData_9 *right);

CODE_API extern struct MatrixData_11 *MatrixMath_Multiply_15(bool_t transposeFirst, bool_t transposeSecond, bool_t transposeThird, struct MatrixData_9 *first, struct MatrixData_3 *second, struct MatrixData_9 *third);

CODE_API extern struct MatrixData_11 *MatrixMath_Subtract_1(struct MatrixData_11 *left, struct MatrixData_11 *right);

CODE_API extern void Space_6_Create(struct CTRASpace **space, struct MatrixData_9 *vector);

CODE_API extern struct CTRASpace *Space_6_Create_1(struct MatrixData_9 *vector);

CODE_API extern struct MatrixData_9 *MatrixMath_Subtract_2(struct MatrixData_9 *left, struct MatrixData_9 *right);

CODE_API extern float64_t Math_Floor(float64_t d);

CODE_API extern float64_t Math_1_Modulus(float64_t numerator, float64_t denumerator);

CODE_API extern struct float64_t_1D_6 *Space_6_op_Subtraction_1(struct AngularSpace_2 *left, struct Space_5 *right);

CODE_API extern struct CTRASpace *SpaceExtensions_FitToDomain(struct CTRASpace *space);

CODE_API extern struct Gaussian_4 *EKF_Update(struct Gaussian_4 *predictedState, struct Gaussian *predictedMeasurement, struct VelocitySpace *measurement, struct Matrix_8 *transitionMatrix);

CODE_API extern struct Gaussian_4 *EKF_Update_1(struct Gaussian_4 *predictedState, struct VelocitySpace *measurement, struct VelocityMeasurementModel *measurementModel);

CODE_API extern void EgoMotionFilter_FilterVelocity(struct EgoMotionFilter *const self, struct DateTime time_1, struct Measure_2 *velocity);

CODE_API extern void Tracking_ProcessVelocity(struct Tracking *const self, struct DateTime time_1, struct Measure_2 *velocity);

CODE_API extern float64_t Measure_1_get_Value(struct Measure_1 *const self);

CODE_API extern float64_t Measure_5_op_Implicit(struct Measure_1 *measure);

CODE_API extern void YawRateSpace_set_W(struct YawRateSpace *const self, float64_t value);

CODE_API extern struct Matrix_9 *New_Matrix_9(void);

CODE_API extern struct Matrix_9 *Assign_Matrix_9(struct Matrix_9 **const left, struct Matrix_9 *const right);

CODE_API extern void Matrix_9_ctor(struct Matrix_9 *const self);

CODE_API extern float64_t YawRateSpace_get_W(struct YawRateSpace *const self);

CODE_API extern struct MatrixData_10 *Matrix_9_get_MatrixData(struct Matrix_9 *const self);

CODE_API extern void Matrix_9_set_Item(struct Matrix_9 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void Matrix_9_set_Item_1(struct Matrix_9 *const self, float64_t row, float64_t column, float64_t value);

CODE_API extern void YawRateMeasModel_FillTransMatri(struct YawRateMeasurementModel *const self, struct CTRASpace *predictedStateExpectation, struct Matrix_9 **H);

CODE_API extern struct Matrix_9 *MeasurModel_5_get_TransitMatrix(struct YawRateMeasurementModel *const self);

CODE_API extern struct PositiveDefiniteMatrix_1 *MeasureModel_1_get_NoiseCovaria(struct MeasurementModel_1 *const self);

CODE_API extern struct PositiveDefiniteMatrix_1 *MeasuremeModel_1_get_Covariance(struct MeasurementModel_1 *const self);

CODE_API extern void PositiveDefiniteMatrix_1_ctor_1(struct PositiveDefiniteMatrix_1 *const self);

CODE_API extern struct PositiveDefiniteMatrix_1 *PositivDefiniteMatrix_10_Create(struct MatrixData_3 *matrix);

CODE_API extern struct PositiveDefiniteMatrix_1 *PosiDefinMatri_10_CreatAndCorre(struct MatrixData_3 *matrix);

CODE_API extern float64_t YawRateMeasMode_get_YawRateBias(struct YawRateMeasurementModel *const self);

CODE_API extern void YawRateMeasurementModel_h(struct YawRateMeasurementModel *const self, struct CTRASpace *state, struct YawRateSpace **predictedMeasurement);

CODE_API extern struct YawRateSpace *MeasuremeModel_1_get_Expectatio(struct YawRateMeasurementModel *const self);

CODE_API extern struct Gaussian_1 *New_Gaussian_1(void);

CODE_API extern struct Gaussian_1 *Assign_Gaussian_1(struct Gaussian_1 **const left, struct Gaussian_1 *const right);

CODE_API extern struct Gaussian_1 *Gaussian_8_Create(struct YawRateSpace *expectation, struct PositiveDefiniteMatrix_1 *covariance);

CODE_API extern struct Gaussian_1 *EKF_PredictMeasurement_1(struct Gaussian_4 *predictedState, struct YawRateMeasurementModel *measurementModel, struct Matrix_9 **transitionMatrix);

CODE_API extern struct PositiveDefiniteMatrix_1 *Gaussian_1_get_Covariance(struct Gaussian_1 *const self);

CODE_API extern struct YawRateSpace *Gaussian_1_get_Expectation(struct Gaussian_1 *const self);

CODE_API extern struct Gaussian_4 *EKF_Update_2(struct Gaussian_4 *predictedState, struct Gaussian_1 *predictedMeasurement, struct YawRateSpace *measurement, struct Matrix_9 *transitionMatrix);

CODE_API extern struct Gaussian_4 *EKF_Update_3(struct Gaussian_4 *predictedState, struct YawRateSpace *measurement, struct YawRateMeasurementModel *measurementModel);

CODE_API extern void EgoMotionFilter_FilterYawRate(struct EgoMotionFilter *const self, struct DateTime time_1, struct Measure_3 *yawRate);

CODE_API extern void Tracking_ProcessYawRate(struct Tracking *const self, struct DateTime time_1, struct Measure_3 *yawRate);

CODE_API extern struct StaticListFactory_1 *New_StaticListFactory_1(void);

CODE_API extern struct StaticListFactory_1 *Assign_StaticListFactory_1(struct StaticListFactory_1 **const left, struct StaticListFactory_1 *const right);

CODE_API extern void StaticListFactory_1_ctor(struct StaticListFactory_1 *const self, int32_t maximumCount);

CODE_API extern struct StatiIPDATrackColleFactorProvid *New_StatIPDATracColleFactoProvi(void);

CODE_API extern struct StatiIPDATrackColleFactorProvid *Assi_StatIPDATracCollFactoProvi(struct StatiIPDATrackColleFactorProvid **const left, struct StatiIPDATrackColleFactorProvid *const right);

CODE_API extern struct StaticListFactory_2 *New_StaticListFactory_2(void);

CODE_API extern struct StaticListFactory_2 *Assign_StaticListFactory_2(struct StaticListFactory_2 **const left, struct StaticListFactory_2 *const right);

CODE_API extern void StaticListFactory_2_ctor(struct StaticListFactory_2 *const self, int32_t maximumCount);

CODE_API extern struct StaticListFactory_3 *New_StaticListFactory_3(void);

CODE_API extern struct StaticListFactory_3 *Assign_StaticListFactory_3(struct StaticListFactory_3 **const left, struct StaticListFactory_3 *const right);

CODE_API extern void StaticListFactory_3_ctor(struct StaticListFactory_3 *const self, int32_t maximumCount);

CODE_API extern struct StaticAssociationTableFactory *New_StaticAssociatiTableFactory(void);

CODE_API extern struct StaticAssociationTableFactory *Assign_StaticAssociTableFactory(struct StaticAssociationTableFactory **const left, struct StaticAssociationTableFactory *const right);

CODE_API extern void StaticAssociatTableFactory_ctor(struct StaticAssociationTableFactory *const self, int32_t maximumRows, int32_t maximumColumns);

CODE_API extern struct StaticListFactory_4 *New_StaticListFactory_4(void);

CODE_API extern struct StaticListFactory_4 *Assign_StaticListFactory_4(struct StaticListFactory_4 **const left, struct StaticListFactory_4 *const right);

CODE_API extern void StaticListFactory_4_ctor(struct StaticListFactory_4 *const self, int32_t maximumCount);

CODE_API extern struct StaticListFactory_5 *New_StaticListFactory_5(void);

CODE_API extern struct StaticListFactory_5 *Assign_StaticListFactory_5(struct StaticListFactory_5 **const left, struct StaticListFactory_5 *const right);

CODE_API extern void StaticListFactory_5_ctor(struct StaticListFactory_5 *const self, int32_t maximumCount);

CODE_API extern void StatIPDATracCollFactoProvi_ctor(struct StatiIPDATrackColleFactorProvid *const self, int32_t maximumTrackCount, int32_t maximumMeasurementCount);

CODE_API extern struct MobilEyeParameters *SensorProper_get_MobilEyeParame(struct SensorProperties *const self);

CODE_API extern bool_t EgoMotionFilter_get_IsStable(struct EgoMotionFilter *const self);

CODE_API extern struct PositiveDefiniteMatrix_6 *PositiveDefiniteMatrix_6_Clone(struct PositiveDefiniteMatrix_6 *const self);

CODE_API extern void Gaussian_4_ctor_1(struct Gaussian_4 *const self, struct CTRASpace *expectation, struct PositiveDefiniteMatrix_6 *covariance);

CODE_API extern struct Gaussian_4 *Gaussian_4_Clone(struct Gaussian_4 *const self);

CODE_API extern struct Gaussian_4 *EgoMotionFilter_PredicXAndReset(struct EgoMotionFilter *const self, struct DateTime time_1);

CODE_API extern bool_t DateTime_1_op_LessThan(struct DateTime t1, struct DateTime t2);

CODE_API extern struct StaticListFactory_4 *StIPDATrColFacPro_get_TraLisFac(struct StatiIPDATrackColleFactorProvid *const self);

CODE_API extern int32_t StatiListFacto_4_get_MaximCount(struct StaticListFactory_4 *const self);

CODE_API extern struct StaticList_23 *New_StaticList_23(void);

CODE_API extern struct StaticList_23 *Assign_StaticList_23(struct StaticList_23 **const left, struct StaticList_23 *const right);

CODE_API extern struct Gaussian_5_1D_15 *New_Gaussian_5_1D_15(void);

CODE_API extern struct Gaussian_5_1D_15 *Assign_Gaussian_5_1D_15(struct Gaussian_5_1D_15 **const left, struct Gaussian_5_1D_15 *const right);

CODE_API extern void StaticList_23_ctor(struct StaticList_23 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_23 *StaticListFactor_4_CreateInstan(struct StaticListFactory_4 *const self, int32_t capacity);

CODE_API extern struct StaticList_20 *New_StaticList_20(void);

CODE_API extern struct StaticList_20 *Assign_StaticList_20(struct StaticList_20 **const left, struct StaticList_20 *const right);

CODE_API extern struct Gaussian_2 *New_Gaussian_2(void);

CODE_API extern struct Gaussian_2 *Assign_Gaussian_2(struct Gaussian_2 **const left, struct Gaussian_2 *const right);

CODE_API extern struct Gaussian_2_1D_15 *New_Gaussian_2_1D_15(void);

CODE_API extern struct Gaussian_2_1D_15 *Assign_Gaussian_2_1D_15(struct Gaussian_2_1D_15 **const left, struct Gaussian_2_1D_15 *const right);

CODE_API extern void StaticList_20_ctor(struct StaticList_20 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_20 *StatiListFactor_4_CreateInstan(struct StaticListFactory_4 *const self, int32_t capacity);

CODE_API extern struct StaticList_16 *New_StaticList_16(void);

CODE_API extern struct StaticList_16 *Assign_StaticList_16(struct StaticList_16 **const left, struct StaticList_16 *const right);

CODE_API extern struct Matrix_11 *New_Matrix_11(void);

CODE_API extern struct Matrix_11 *Assign_Matrix_11(struct Matrix_11 **const left, struct Matrix_11 *const right);

CODE_API extern struct Matrix_11_1D_15 *New_Matrix_11_1D_15(void);

CODE_API extern struct Matrix_11_1D_15 *Assign_Matrix_11_1D_15(struct Matrix_11_1D_15 **const left, struct Matrix_11_1D_15 *const right);

CODE_API extern void StaticList_16_ctor(struct StaticList_16 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_16 *StatiListFacto_4_CreateInstan(struct StaticListFactory_4 *const self, int32_t capacity);

CODE_API extern struct StaticList_26 *New_StaticList_26(void);

CODE_API extern struct StaticList_26 *Assign_StaticList_26(struct StaticList_26 **const left, struct StaticList_26 *const right);

CODE_API extern struct Existence_1D_15 *New_Existence_1D_15(void);

CODE_API extern struct Existence_1D_15 *Assign_Existence_1D_15(struct Existence_1D_15 **const left, struct Existence_1D_15 *const right);

CODE_API extern void StaticList_26_ctor(struct StaticList_26 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_26 *StatiListFacto_4_CreateInstan_1(struct StaticListFactory_4 *const self, int32_t capacity);

CODE_API extern struct StaticList_22 *New_StaticList_22(void);

CODE_API extern struct StaticList_22 *Assign_StaticList_22(struct StaticList_22 **const left, struct StaticList_22 *const right);

CODE_API extern struct MarginalizedEvaluable *New_MarginalizedEvaluable(void);

CODE_API extern struct MarginalizedEvaluable *Assign_MarginalizedEvaluable(struct MarginalizedEvaluable **const left, struct MarginalizedEvaluable *const right);

CODE_API extern struct MarginalizedEvaluable_1D_15 *New_MarginalizedEvaluable_1D_15(void);

CODE_API extern struct MarginalizedEvaluable_1D_15 *Assign_MarginaliEvaluable_1D_15(struct MarginalizedEvaluable_1D_15 **const left, struct MarginalizedEvaluable_1D_15 *const right);

CODE_API extern void StaticList_22_ctor(struct StaticList_22 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_22 *StatiListFacto_4_CreateInstan_2(struct StaticListFactory_4 *const self, int32_t capacity);

CODE_API extern float64_t Tracking_get_ProcessNoiseSigmaA(struct Tracking *const self);

CODE_API extern float64_t Tracki_get_ProcesNoiseSigmaJerk(struct Tracking *const self);

CODE_API extern float64_t Tracking_get_ProcessNoiseSigmaW(struct Tracking *const self);

CODE_API extern struct PositiveDefiniteMatrix_2 *New_PositiveDefiniteMatrix_2(void);

CODE_API extern struct PositiveDefiniteMatrix_2 *Assign_PositiveDefiniteMatrix_2(struct PositiveDefiniteMatrix_2 **const left, struct PositiveDefiniteMatrix_2 *const right);

CODE_API extern struct CAErrorSpace *New_CAErrorSpace(void);

CODE_API extern struct CAErrorSpace *Assign_CAErrorSpace(struct CAErrorSpace **const left, struct CAErrorSpace *const right);

CODE_API extern void CAErrorSpace_ctor(struct CAErrorSpace *const self);

CODE_API extern void Matrix_2_ctor(struct Matrix_2 *const self);

CODE_API extern void SquareMatrix_2_ctor(struct SquareMatrix_2 *const self);

CODE_API extern struct MatrixData_13 *New_MatrixData_13(void);

CODE_API extern struct MatrixData_13 *Assign_MatrixData_13(struct MatrixData_13 **const left, struct MatrixData_13 *const right);

CODE_API extern struct float64_t_1D_9 *New_float64_t_1D_9(void);

CODE_API extern struct float64_t_1D_9 *Assign_float64_t_1D_9(struct float64_t_1D_9 **const left, struct float64_t_1D_9 *const right);

CODE_API extern void MatrixData_13_ctor(struct MatrixData_13 *const self, int32_t rows, int32_t columns);

CODE_API extern struct float64_t_1D_9 *MatrixData_13_get_DataReference(struct MatrixData_13 *const self);

CODE_API extern struct MatrixData_13 *MatrixData_20_Diag_3(struct float64_t_1D_3 *diagonalElements);

CODE_API extern struct MatrixData_13 *MatrixData_20_Zeros_11(int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_13 *Matrix_2_get_MatrixData(struct Matrix_2 *const self);

CODE_API extern bool_t MatrixData_13_get_IsZero(struct MatrixData_13 *const self);

CODE_API extern bool_t Matrix_2_get_IsZero(struct Matrix_2 *const self);

CODE_API extern float64_t MatrixData_13_get_Item(struct MatrixData_13 *const self, int32_t row, int32_t column);

CODE_API extern bool_t MatrixData_13_get_IsEmpty(struct MatrixData_13 *const self);

CODE_API extern void LinearAlgebra_FactorCholesky_3(struct LinearAlgebra *const self, struct float64_t_1D_9 *a, int32_t rows);

CODE_API extern struct MatrixData_13 *MatrixMath_Chol_3(struct MatrixData_13 *matrix);

CODE_API extern void SquareMatrix_2_ctor_1(struct PositiveDefiniteMatrix_2 *const self, struct float64_t_1D_3 *mainDiagonal);

CODE_API extern void PositiveDefiniteMatrix_2_ctor(struct PositiveDefiniteMatrix_2 *const self, struct float64_t_1D_3 *mainDiagonal);

CODE_API extern struct float64_t_1D_3 *MatrixData_4_get_DataReference(struct MatrixData_4 *const self);

CODE_API extern struct MatrixData_4 *MatrixData_20_Vec_5(int32_t start, int32_t end);

CODE_API extern void Space_2_set_MatrixData(struct Space_2 *const self, struct MatrixData_4 *value);

CODE_API extern struct CAErrorSpace *Space_6_GetIndices_7(void);

CODE_API extern struct CAModel *New_CAModel(void);

CODE_API extern struct CAModel *Assign_CAModel(struct CAModel **const left, struct CAModel *const right);

CODE_API extern void SystemModel_set_Condition(struct SystemModel *const self, struct CASpace *value);

CODE_API extern void SystemModel_set_Condition2(struct SystemModel *const self, struct CAErrorSpace *value);

CODE_API extern void SystemModel_set_TimeCondition(struct SystemModel *const self, struct TimeSpan value);

CODE_API extern void CAModel_ctor(struct CAModel *const self, struct PositiveDefiniteMatrix_2 *processNoiseCovariance);

CODE_API extern float64_t Trackin_get_ProcessNoiseExisten(struct Tracking *const self);

CODE_API extern struct PersistenceModel *New_PersistenceModel(void);

CODE_API extern struct PersistenceModel *Assign_PersistenceModel(struct PersistenceModel **const left, struct PersistenceModel *const right);

CODE_API extern void PersiModel_set_ExistProcesNoise(struct PersistenceModel *const self, float64_t value);

CODE_API extern void PersistenceModel_ctor(struct PersistenceModel *const self, float64_t existenceProcessNoise);

CODE_API extern void PersisteModel_set_TimeCondition(struct PersistenceModel *const self, struct TimeSpan value);

CODE_API extern float64_t Tracking_get_GateProbability(struct Tracking *const self);

CODE_API extern struct MobilEyeDetectionModel *New_MobilEyeDetectionModel(void);

CODE_API extern struct MobilEyeDetectionModel *Assign_MobilEyeDetectionModel(struct MobilEyeDetectionModel **const left, struct MobilEyeDetectionModel *const right);

CODE_API extern void DetectionModel_set_Condition(struct DetectionModel *const self, struct MobilEyeSpace *value);

CODE_API extern void SinglDetectModel_set_GateProbab(struct SingleDetectionModel *const self, float64_t value);

CODE_API extern void MobilEyeDetectionModel_ctor(struct MobilEyeDetectionModel *const self, struct MobilEyeParameters *parameters, float64_t gateProbability);

CODE_API extern struct EgoMotionCompensation *New_EgoMotionCompensation(void);

CODE_API extern struct EgoMotionCompensation *Assign_EgoMotionCompensation(struct EgoMotionCompensation **const left, struct EgoMotionCompensation *const right);

CODE_API extern void EgoMotionCompensation_ctor(struct EgoMotionCompensation *const self);

CODE_API extern void EgoMotionCompensa_set_Condition(struct EgoMotionCompensation *const self, struct CASpace *value);

CODE_API extern void EgoMotionCompensa_set_Conditio2(struct EgoMotionCompensation *const self, struct CTRASpace *value);

CODE_API extern struct CASpace *EgoMotionCompensa_get_Condition(struct EgoMotionCompensation *const self);

CODE_API extern float64_t CVSpace_get_X(struct CVSpace *const self);

CODE_API extern struct CTRASpace *EgoMotionCompensa_get_Conditio2(struct EgoMotionCompensation *const self);

CODE_API extern float64_t CVSpace_get_Y(struct CVSpace *const self);

CODE_API extern void CVSpace_set_X(struct CVSpace *const self, float64_t value);

CODE_API extern void CVSpace_set_Y(struct CVSpace *const self, float64_t value);

CODE_API extern float64_t CVSpace_get_G(struct CVSpace *const self);

CODE_API extern void CVSpace_set_G(struct CVSpace *const self, float64_t value);

CODE_API extern struct CASpace *EgoMotionCompensa_get_Expectati(struct EgoMotionCompensation *const self);

CODE_API extern void LinearAlgebra_MatrixMultiply_8(struct LinearAlgebra *const self, struct float64_t_1D_25 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_25 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_25 *c);

CODE_API extern struct MatrixData_2 *MatrixMath_Multiply_16(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_2 *left, struct MatrixData_2 *right);

CODE_API extern struct MatrixData_2 *MatrixMath_Multiply_17(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_2 *left, struct MatrixData_2 *right);

CODE_API extern struct MatrixData_2 *MatrixMath_Multiply_18(bool_t transposeFirst, bool_t transposeSecond, bool_t transposeThird, struct MatrixData_2 *first, struct MatrixData_2 *second, struct MatrixData_2 *third);

CODE_API extern struct PositiveDefiniteMatrix_7 *PositivDefiniteMatrix_11_Create(struct MatrixData_2 *matrix);

CODE_API extern struct Gaussian_5 *Gaussian_9_Create(struct CASpace *expectation, struct PositiveDefiniteMatrix_7 *covariance);

CODE_API extern struct Gaussian_5 *CreateExtensions_Marginalize(struct EgoMotionCompensation *egoMotionCompensation, struct GaussianTrack *track, struct Gaussian_4 *egoMotionState);

CODE_API extern struct SquareMatrix_7 *New_SquareMatrix_7(void);

CODE_API extern struct SquareMatrix_7 *Assign_SquareMatrix_7(struct SquareMatrix_7 **const left, struct SquareMatrix_7 *const right);

CODE_API extern void Matrix_10_set_MatrixData(struct SquareMatrix_7 *const self, struct MatrixData_2 *value);

CODE_API extern struct SquareMatrix_7 *SquareMatrix_9_Eye(void);

CODE_API extern void Matrix_10_set_Item(struct SquareMatrix_7 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void Matrix_10_set_Item_1(struct SquareMatrix_7 *const self, float64_t row, float64_t column, float64_t value);

CODE_API extern void CAModel_FillTransitionMatrix(struct CAModel *const self, struct CASpace *stateExpectation, struct TimeSpan deltaT, struct SquareMatrix_7 **F);

CODE_API extern struct SquareMatrix_7 *SystemModel_4_get_TransitMatrix(struct CAModel *const self);

CODE_API extern struct Matrix_12 *New_Matrix_12(void);

CODE_API extern struct Matrix_12 *Assign_Matrix_12(struct Matrix_12 **const left, struct Matrix_12 *const right);

CODE_API extern void Matrix_12_ctor(struct Matrix_12 *const self);

CODE_API extern struct MatrixData_4 *Space_2_get_MatrixData(struct Space_2 *const self);

CODE_API extern float64_t MatrixData_4_get_Item(struct MatrixData_4 *const self, int32_t index);

CODE_API extern float64_t Space_2_get_Item(struct Space_2 *const self, int32_t index);

CODE_API extern float64_t CAErrorSpace_get_A(struct CAErrorSpace *const self);

CODE_API extern struct float64_t_1D_15 *New_float64_t_1D_15(void);

CODE_API extern struct float64_t_1D_15 *Assign_float64_t_1D_15(struct float64_t_1D_15 **const left, struct float64_t_1D_15 *const right);

CODE_API extern struct MatrixData_14 *New_MatrixData_14(void);

CODE_API extern struct MatrixData_14 *Assign_MatrixData_14(struct MatrixData_14 **const left, struct MatrixData_14 *const right);

CODE_API extern void MatrixData_14_ctor(struct MatrixData_14 *const self, int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_14 *MatrixData_20_Zeros_12(int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_14 *Matrix_12_get_MatrixData(struct Matrix_12 *const self);

CODE_API extern struct float64_t_1D_15 *MatrixData_14_get_DataReference(struct MatrixData_14 *const self);

CODE_API extern void MatrixData_14_set_Item(struct MatrixData_14 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void Matrix_12_set_Item(struct Matrix_12 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void Matrix_12_set_Item_1(struct Matrix_12 *const self, float64_t row, float64_t column, float64_t value);

CODE_API extern float64_t CAErrorSpace_get_J(struct CAErrorSpace *const self);

CODE_API extern float64_t CAErrorSpace_get_W(struct CAErrorSpace *const self);

CODE_API extern void CAModel_FillNoiseDiscretiMatrix(struct CAModel *const self, struct CASpace *stateExpectation, struct TimeSpan deltaT, struct Matrix_12 **G);

CODE_API extern struct PositiveDefiniteMatrix_2 *SystemModel_get_NoiseCovariance(struct SystemModel *const self);

CODE_API extern void LinearAlgebra_MatrixMultiply_9(struct LinearAlgebra *const self, struct float64_t_1D_15 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_9 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_15 *c);

CODE_API extern struct MatrixData_14 *MatrixMath_Multiply_19(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_14 *left, struct MatrixData_13 *right);

CODE_API extern void LinearAlgebra_MatrixMultiply_10(struct LinearAlgebra *const self, struct float64_t_1D_15 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_15 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_25 *c);

CODE_API extern struct MatrixData_2 *MatrixMath_Multiply_20(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_14 *left, struct MatrixData_14 *right);

CODE_API extern struct MatrixData_2 *MatrixMath_Multiply_21(bool_t transposeFirst, bool_t transposeSecond, bool_t transposeThird, struct MatrixData_14 *first, struct MatrixData_13 *second, struct MatrixData_14 *third);

CODE_API extern struct PositiveDefiniteMatrix_7 *PosiDefinMatri_11_CreatAndCorre(struct MatrixData_2 *matrix);

CODE_API extern struct PositiveDefiniteMatrix_7 *SystemModel_2_get_Covariance(struct CAModel *const self);

CODE_API extern struct MatrixData_2 *MatrixMath_Add_3(struct MatrixData_2 *left, struct MatrixData_2 *right);

CODE_API extern void CASpace_set_A(struct CASpace *const self, float64_t value);

CODE_API extern void CVSpace_set_V(struct CVSpace *const self, float64_t value);

CODE_API extern void CAModel_f(struct CAModel *const self, struct CASpace *state, struct TimeSpan deltaT, struct CAErrorSpace *processNoise, struct CASpace **predictedState);

CODE_API extern struct CASpace *SystemModel_get_Expectation(struct CAModel *const self);

CODE_API extern struct Gaussian_5 *EKF_PredictState_1(struct TimeSpan deltaT, struct Gaussian_5 *state, struct CAModel *systemModel);

CODE_API extern int32_t StaticList_23_get_Count(struct StaticList_23 *const self);

CODE_API extern void StaticList_23_Add(struct StaticList_23 *const self, struct Gaussian_5 *value);

CODE_API extern struct ExistenceSpace *TwoPointDistri_get_SuccesSample(struct TwoPointDistribution *const self);

CODE_API extern struct ExistenceSpace *TwoPointDistri_get_FailurSample(struct TwoPointDistribution *const self);

CODE_API extern struct TwoPointDistribution *New_TwoPointDistribution(void);

CODE_API extern struct TwoPointDistribution *Assign_TwoPointDistribution(struct TwoPointDistribution **const left, struct TwoPointDistribution *const right);

CODE_API extern struct TwoPointDistribution *TwoPointDistribution_Clone(struct TwoPointDistribution *const self);

CODE_API extern void PersistenceModel_set_Condition(struct PersistenceModel *const self, struct ExistenceSpace *value);

CODE_API extern struct Type *New_Type(void);

CODE_API extern struct Type *Assign_Type(struct Type **const left, struct Type *const right);

CODE_API extern struct Type *Object_GetType(struct ExistenceSpace *const self);

CODE_API extern bool_t Type_1_op_Inequality(struct Type *left, struct Type *right);

CODE_API extern bool_t float64_t_Equals(float64_t *const self, float64_t obj);

CODE_API extern bool_t MatrixData_3_Equals(struct MatrixData_3 *const self, struct MatrixData_3 *other);

CODE_API extern bool_t Space_1_Equals(struct ExistenceSpace *const self, struct ExistenceSpace *other);

CODE_API extern bool_t Space_6_op_Equality(struct ExistenceSpace *left, struct ExistenceSpace *right);

CODE_API extern float64_t PersiModel_get_ExistProcesNoise(struct PersistenceModel *const self);

CODE_API extern float64_t PersistenceModel_Evaluate(struct PersistenceModel *const self, struct ExistenceSpace *sample);

CODE_API extern void BayesFilter_Predict(struct TwoPointDistribution **state, struct PersistenceModel *systemModel);

CODE_API extern struct TwoPointDistribution *BayesFilter_Predict_1(struct TwoPointDistribution *state, struct PersistenceModel *systemModel);

CODE_API extern int32_t StaticList_26_get_Count(struct StaticList_26 *const self);

CODE_API extern void StaticList_26_Add(struct StaticList_26 *const self, struct Existence *value);

CODE_API extern struct MobilEyeMeasurementModel *New_MobilEyeMeasurementModel(void);

CODE_API extern struct MobilEyeMeasurementModel *Assign_MobilEyeMeasurementModel(struct MobilEyeMeasurementModel **const left, struct MobilEyeMeasurementModel *const right);

CODE_API extern struct float64_t_1D_4 *MobiEyePara_get_NoiseMatriDiago(struct MobilEyeParameters *const self);

CODE_API extern struct PositiveDefiniteMatrix_3 *New_PositiveDefiniteMatrix_3(void);

CODE_API extern struct PositiveDefiniteMatrix_3 *Assign_PositiveDefiniteMatrix_3(struct PositiveDefiniteMatrix_3 **const left, struct PositiveDefiniteMatrix_3 *const right);

CODE_API extern void Matrix_3_ctor(struct Matrix_3 *const self);

CODE_API extern void SquareMatrix_3_ctor(struct SquareMatrix_3 *const self);

CODE_API extern struct MatrixData_15 *New_MatrixData_15(void);

CODE_API extern struct MatrixData_15 *Assign_MatrixData_15(struct MatrixData_15 **const left, struct MatrixData_15 *const right);

CODE_API extern struct float64_t_1D_16 *New_float64_t_1D_16(void);

CODE_API extern struct float64_t_1D_16 *Assign_float64_t_1D_16(struct float64_t_1D_16 **const left, struct float64_t_1D_16 *const right);

CODE_API extern void MatrixData_15_ctor(struct MatrixData_15 *const self, int32_t rows, int32_t columns);

CODE_API extern struct float64_t_1D_16 *MatrixData_15_get_DataReference(struct MatrixData_15 *const self);

CODE_API extern struct MatrixData_15 *MatrixData_20_Diag_4(struct float64_t_1D_4 *diagonalElements);

CODE_API extern struct MatrixData_15 *MatrixData_20_Zeros_13(int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_15 *Matrix_3_get_MatrixData(struct Matrix_3 *const self);

CODE_API extern bool_t MatrixData_15_get_IsZero(struct MatrixData_15 *const self);

CODE_API extern bool_t Matrix_3_get_IsZero(struct Matrix_3 *const self);

CODE_API extern float64_t MatrixData_15_get_Item(struct MatrixData_15 *const self, int32_t row, int32_t column);

CODE_API extern bool_t MatrixData_15_get_IsEmpty(struct MatrixData_15 *const self);

CODE_API extern void LinearAlgebra_FactorCholesky_4(struct LinearAlgebra *const self, struct float64_t_1D_16 *a, int32_t rows);

CODE_API extern struct MatrixData_15 *MatrixMath_Chol_4(struct MatrixData_15 *matrix);

CODE_API extern void SquareMatrix_3_ctor_1(struct PositiveDefiniteMatrix_3 *const self, struct float64_t_1D_4 *mainDiagonal);

CODE_API extern void PositiveDefiniteMatrix_3_ctor(struct PositiveDefiniteMatrix_3 *const self, struct float64_t_1D_4 *mainDiagonal);

CODE_API extern void MeasuremenModel_2_set_Condition(struct MeasurementModel_2 *const self, struct CASpace *value);

CODE_API extern struct MobilEyeParameters *CarteMeasuModel_get_SensoParame(struct CartesianMeasurementModel *const self);

CODE_API extern float64_t MobilEyeParameter_get_RotationZ(struct MobilEyeParameters *const self);

CODE_API extern void CartesMeasureModel_set_Conditi2(struct CartesianMeasurementModel *const self, float64_t value);

CODE_API extern void CartesMeasurModel_set_EgoVeloci(struct CartesianMeasurementModel *const self, float64_t value);

CODE_API extern float64_t MobilEyeParameters_get_SigmaX(struct MobilEyeParameters *const self);

CODE_API extern float64_t Math_Max_1(float64_t val1, float64_t val2);

CODE_API extern struct PositiveDefiniteMatrix_3 *MeasureModel_2_get_NoiseCovaria(struct MeasurementModel_2 *const self);

CODE_API extern void MatrixData_15_set_Item(struct MatrixData_15 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void PositivDefinitMatrix_3_set_Item(struct PositiveDefiniteMatrix_3 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void MobilEyeMeasurementModel_ctor(struct MobilEyeMeasurementModel *const self, struct MobilEyeParameters *sensorParameters, struct CTRASpace *egoMotionExpectation, struct CASpace *predictedState);

CODE_API extern void Matrix_11_ctor(struct Matrix_11 *const self);

CODE_API extern struct MatrixData_5 *Space_3_get_MatrixData(struct Space_3 *const self);

CODE_API extern float64_t MatrixData_5_get_Item(struct MatrixData_5 *const self, int32_t index);

CODE_API extern float64_t Space_3_get_Item(struct Space_3 *const self, int32_t index);

CODE_API extern float64_t MobilEyeSpace_get_X(struct MobilEyeSpace *const self);

CODE_API extern struct float64_t_1D_20 *New_float64_t_1D_20(void);

CODE_API extern struct float64_t_1D_20 *Assign_float64_t_1D_20(struct float64_t_1D_20 **const left, struct float64_t_1D_20 *const right);

CODE_API extern struct MatrixData_16 *New_MatrixData_16(void);

CODE_API extern struct MatrixData_16 *Assign_MatrixData_16(struct MatrixData_16 **const left, struct MatrixData_16 *const right);

CODE_API extern void MatrixData_16_ctor(struct MatrixData_16 *const self, int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_16 *MatrixData_20_Zeros_14(int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_16 *Matrix_11_get_MatrixData(struct Matrix_11 *const self);

CODE_API extern struct float64_t_1D_20 *MatrixData_16_get_DataReference(struct MatrixData_16 *const self);

CODE_API extern void MatrixData_16_set_Item(struct MatrixData_16 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void Matrix_11_set_Item(struct Matrix_11 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void Matrix_11_set_Item_1(struct Matrix_11 *const self, float64_t row, float64_t column, float64_t value);

CODE_API extern float64_t MobilEyeSpace_get_Y(struct MobilEyeSpace *const self);

CODE_API extern float64_t MobilEyeSpace_get_Vx(struct MobilEyeSpace *const self);

CODE_API extern float64_t MobilEyeSpace_get_Vy(struct MobilEyeSpace *const self);

CODE_API extern void MobiEyeMeasModel_FillTransMatri(struct MobilEyeMeasurementModel *const self, struct CASpace *predictedStateExpectation, struct Matrix_11 **H);

CODE_API extern struct Matrix_11 *MeasurModel_6_get_TransitMatrix(struct MobilEyeMeasurementModel *const self);

CODE_API extern void LinearAlgebra_MatrixMultiply_11(struct LinearAlgebra *const self, struct float64_t_1D_20 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_25 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_20 *c);

CODE_API extern struct MatrixData_16 *MatrixMath_Multiply_22(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_16 *left, struct MatrixData_2 *right);

CODE_API extern void LinearAlgebra_MatrixMultiply_12(struct LinearAlgebra *const self, struct float64_t_1D_20 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_20 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_16 *c);

CODE_API extern struct MatrixData_15 *MatrixMath_Multiply_23(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_16 *left, struct MatrixData_16 *right);

CODE_API extern struct MatrixData_15 *MatrixMath_Multiply_24(bool_t transposeFirst, bool_t transposeSecond, bool_t transposeThird, struct MatrixData_16 *first, struct MatrixData_2 *second, struct MatrixData_16 *third);

CODE_API extern struct PositiveDefiniteMatrix_3 *MeasuremeModel_2_get_Covariance(struct MeasurementModel_2 *const self);

CODE_API extern struct MatrixData_15 *MatrixMath_Add_4(struct MatrixData_15 *left, struct MatrixData_15 *right);

CODE_API extern void PositiveDefiniteMatrix_3_ctor_1(struct PositiveDefiniteMatrix_3 *const self);

CODE_API extern struct PositiveDefiniteMatrix_3 *PositivDefiniteMatrix_12_Create(struct MatrixData_15 *matrix);

CODE_API extern struct PositiveDefiniteMatrix_3 *PosiDefinMatri_12_CreatAndCorre(struct MatrixData_15 *matrix);

CODE_API extern float64_t MobilEyeParameter_get_PositionX(struct MobilEyeParameters *const self);

CODE_API extern float64_t MobilEyeParameter_get_PositionY(struct MobilEyeParameters *const self);

CODE_API extern void MatrixData_5_set_Item(struct MatrixData_5 *const self, int32_t index, float64_t value);

CODE_API extern void Space_3_set_Item(struct Space_3 *const self, int32_t index, float64_t value);

CODE_API extern void MobilEyeSpace_set_X(struct MobilEyeSpace *const self, float64_t value);

CODE_API extern void MobilEyeSpace_set_Y(struct MobilEyeSpace *const self, float64_t value);

CODE_API extern void CartesianMeasurementModel_h(struct CartesianMeasurementModel *const self, struct CASpace *state, struct MobilEyeSpace **predictedMeasurement);

CODE_API extern float64_t CartesMeasurModel_get_EgoVeloci(struct CartesianMeasurementModel *const self);

CODE_API extern void MobilEyeSpace_set_Vx(struct MobilEyeSpace *const self, float64_t value);

CODE_API extern void MobilEyeSpace_set_Vy(struct MobilEyeSpace *const self, float64_t value);

CODE_API extern void MobilEyeMeasurementModel_h(struct MobilEyeMeasurementModel *const self, struct CASpace *state, struct MobilEyeSpace **predictedMeasurement);

CODE_API extern struct MobilEyeSpace *MeasuremeModel_2_get_Expectatio(struct MobilEyeMeasurementModel *const self);

CODE_API extern struct Gaussian_2 *Gaussian_10_Create(struct MobilEyeSpace *expectation, struct PositiveDefiniteMatrix_3 *covariance);

CODE_API extern struct Gaussian_2 *EKF_PredictMeasurement_2(struct Gaussian_5 *predictedState, struct MobilEyeMeasurementModel *measurementModel, struct Matrix_11 **transitionMatrix);

CODE_API extern int32_t StaticList_16_get_Count(struct StaticList_16 *const self);

CODE_API extern void StaticList_16_Add(struct StaticList_16 *const self, struct Matrix_11 *value);

CODE_API extern int32_t StaticList_20_get_Count(struct StaticList_20 *const self);

CODE_API extern void StaticList_20_Add(struct StaticList_20 *const self, struct Gaussian_2 *value);

CODE_API extern struct PositiveDefiniteMatrix_3 *Gaussian_2_get_Covariance(struct Gaussian_2 *const self);

CODE_API extern struct MatrixData_15 *MatrixData_15_get_T(struct MatrixData_15 *const self);

CODE_API extern struct SquareMatrix_3 *New_SquareMatrix_3(void);

CODE_API extern struct SquareMatrix_3 *Assign_SquareMatrix_3(struct SquareMatrix_3 **const left, struct SquareMatrix_3 *const right);

CODE_API extern struct SquareMatrix_3 *SquareMatrix_10_Create(struct MatrixData_15 *matrix);

CODE_API extern struct SquareMatrix_3 *PosiDefinMatri_3_get_CholeDecom(struct PositiveDefiniteMatrix_3 *const self);

CODE_API extern struct MobilEyeSpace *Gaussian_2_get_Expectation(struct Gaussian_2 *const self);

CODE_API extern struct MatrixData_18 *New_MatrixData_18(void);

CODE_API extern struct MatrixData_18 *Assign_MatrixData_18(struct MatrixData_18 **const left, struct MatrixData_18 *const right);

CODE_API extern struct float64_t_1D_200 *New_float64_t_1D_200(void);

CODE_API extern struct float64_t_1D_200 *Assign_float64_t_1D_200(struct float64_t_1D_200 **const left, struct float64_t_1D_200 *const right);

CODE_API extern void MatrixData_18_ctor(struct MatrixData_18 *const self, int32_t rows, int32_t columns);

CODE_API extern struct float64_t_1D_200 *MatrixData_18_get_DataReference(struct MatrixData_18 *const self);

CODE_API extern void Random_ctor_1(struct Random *const self);

CODE_API extern float64_t Random_NextDouble(struct Random *const self);

CODE_API extern void LinearAlgebra_MatrixMultiply_13(struct LinearAlgebra *const self, struct float64_t_1D_16 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_200 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_200 *c);

CODE_API extern struct MatrixData_18 *MatrixMath_Multiply_25(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_15 *left, struct MatrixData_18 *right);

CODE_API extern struct MatrixData_18 *MatrixMath_Multiply_26(struct MatrixData_15 *left, struct MatrixData_18 *right);

CODE_API extern struct StaticList_7 *New_StaticList_7(void);

CODE_API extern struct StaticList_7 *Assign_StaticList_7(struct StaticList_7 **const left, struct StaticList_7 *const right);

CODE_API extern struct MobilEyeSpace_1D_50 *New_MobilEyeSpace_1D_50(void);

CODE_API extern struct MobilEyeSpace_1D_50 *Assign_MobilEyeSpace_1D_50(struct MobilEyeSpace_1D_50 **const left, struct MobilEyeSpace_1D_50 *const right);

CODE_API extern void StaticList_7_ctor(struct StaticList_7 *const self, int32_t maximumCount);

CODE_API extern int32_t StaticList_7_get_Count(struct StaticList_7 *const self);

CODE_API extern void StaticList_7_Add(struct StaticList_7 *const self, struct MobilEyeSpace *value);

CODE_API extern void StaticList_7_set_Item(struct StaticList_7 *const self, int32_t index, struct MobilEyeSpace *value);

CODE_API extern struct MobilEyeSpace *StaticList_7_get_Item(struct StaticList_7 *const self, int32_t index);

CODE_API extern struct SampleSet *New_SampleSet(void);

CODE_API extern struct SampleSet *Assign_SampleSet(struct SampleSet **const left, struct SampleSet *const right);

CODE_API extern int32_t StatiListFacto_1_get_MaximCount(struct StaticListFactory_1 *const self);

CODE_API extern struct StaticList_13 *New_StaticList_13(void);

CODE_API extern struct StaticList_13 *Assign_StaticList_13(struct StaticList_13 **const left, struct StaticList_13 *const right);

CODE_API extern struct SampleProbabilityPair *New_SampleProbabilityPair(void);

CODE_API extern struct SampleProbabilityPair *Assign_SampleProbabilityPair(struct SampleProbabilityPair **const left, struct SampleProbabilityPair *const right);

CODE_API extern struct SampleProbabilityPair_1D_50 *New_SampleProbabilityPair_1D_50(void);

CODE_API extern struct SampleProbabilityPair_1D_50 *Assign_SampleProbabilPair_1D_50(struct SampleProbabilityPair_1D_50 **const left, struct SampleProbabilityPair_1D_50 *const right);

CODE_API extern void StaticList_13_ctor(struct StaticList_13 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_13 *StaticListFactor_1_CreateInstan(struct StaticListFactory_1 *const self, int32_t capacity);

CODE_API extern void SampleSet_ctor(struct SampleSet *const self, int32_t capacity, struct StaticListFactory_1 *listFactory);

CODE_API extern void SampleSet_ctor_1(struct SampleSet *const self, struct StaticListFactory_1 *listFactory);

CODE_API extern struct StaticListEnumerator_3 *New_StaticListEnumerator_3(void);

CODE_API extern struct StaticListEnumerator_3 *Assign_StaticListEnumerator_3(struct StaticListEnumerator_3 **const left, struct StaticListEnumerator_3 *const right);

CODE_API extern void StaticListEnumerator_3_ctor(struct StaticListEnumerator_3 *const self, struct StaticList_7 *list);

CODE_API extern struct StaticListEnumerator_3 *StaticList_7_GetEnumerator(struct StaticList_7 *const self);

CODE_API extern bool_t StaticListEnumerator_3_MoveNext(struct StaticListEnumerator_3 *const self);

CODE_API extern struct MobilEyeSpace *StaticListEnumera_3_get_Current(struct StaticListEnumerator_3 *const self);

CODE_API extern struct MatrixData_5 *MatrixData_5_get_Copy(struct MatrixData_5 *const self);

CODE_API extern struct MobilEyeSpace *SpaceExtensions_Clone_2(struct MobilEyeSpace *space);

CODE_API extern void SampleProbabilitPair_set_Sample(struct SampleProbabilityPair *const self, struct MobilEyeSpace *value);

CODE_API extern void SampleProbabilPair_set_Probabil(struct SampleProbabilityPair *const self, float64_t value);

CODE_API extern void SampleProbabilityPair_ctor(struct SampleProbabilityPair *const self, struct MobilEyeSpace *sample, float64_t probability);

CODE_API extern int32_t StaticList_13_get_Count(struct StaticList_13 *const self);

CODE_API extern void StaticList_13_Add(struct StaticList_13 *const self, struct SampleProbabilityPair *value);

CODE_API extern void SampleSet_Add(struct SampleSet *const self, struct MobilEyeSpace *sample, float64_t probability);

CODE_API extern void StaticListEnumerator_3_Dispose(struct StaticListEnumerator_3 *const self);

CODE_API extern struct StaticListEnumerator_8 *New_StaticListEnumerator_8(void);

CODE_API extern struct StaticListEnumerator_8 *Assign_StaticListEnumerator_8(struct StaticListEnumerator_8 **const left, struct StaticListEnumerator_8 *const right);

CODE_API extern void StaticListEnumerator_8_ctor(struct StaticListEnumerator_8 *const self, struct StaticList_13 *list);

CODE_API extern struct StaticListEnumerator_8 *StaticList_13_GetEnumerator(struct StaticList_13 *const self);

CODE_API extern bool_t StaticListEnumerator_8_MoveNext(struct StaticListEnumerator_8 *const self);

CODE_API extern struct SampleProbabilityPair *StaticList_13_get_Item(struct StaticList_13 *const self, int32_t index);

CODE_API extern struct SampleProbabilityPair *StaticListEnumera_8_get_Current(struct StaticListEnumerator_8 *const self);

CODE_API extern float64_t SampleProbabilPair_get_Probabil(struct SampleProbabilityPair *const self);

CODE_API extern void StaticListEnumerator_8_Dispose(struct StaticListEnumerator_8 *const self);

CODE_API extern int32_t SampleSet_get_Count(struct SampleSet *const self);

CODE_API extern void SampleSet_Normalize(struct SampleSet *const self);

CODE_API extern void SampleSet_ctor_2(struct SampleSet *const self, struct StaticList_7 *samples, struct StaticListFactory_1 *listFactory);

CODE_API extern void MarginalizedEvaluable_ctor(struct MarginalizedEvaluable *const self, struct MobilEyeDetectionModel *conditionalDistribution, struct SampleSet *condition);

CODE_API extern int32_t StaticList_22_get_Count(struct StaticList_22 *const self);

CODE_API extern void StaticList_22_Add(struct StaticList_22 *const self, struct MarginalizedEvaluable *value);

CODE_API extern struct ProbabilityGate *New_ProbabilityGate(void);

CODE_API extern struct ProbabilityGate *Assign_ProbabilityGate(struct ProbabilityGate **const left, struct ProbabilityGate *const right);

CODE_API extern float64_t Gaus_10_GetMaximMahalDistaSquar(float64_t gateProbability);

CODE_API extern struct SquaredMahalanobisDistance *New_SquaredMahalanobisDistance(void);

CODE_API extern struct SquaredMahalanobisDistance *Assign_SquaredMahalanobDistance(struct SquaredMahalanobisDistance **const left, struct SquaredMahalanobisDistance *const right);

CODE_API extern void SquaredMahalanobisDistance_ctor(struct SquaredMahalanobisDistance *const self);

CODE_API extern struct IMetric *New_IMetric(void);

CODE_API extern struct IMetric *Assign_IMetric(struct IMetric **const left, struct IMetric *const right);

CODE_API extern void Gate_ctor(struct Gate *const self, struct SquaredMahalanobisDistance *metric, float64_t maximumDistance);

CODE_API extern void ProbabilityGate_ctor(struct ProbabilityGate *const self, float64_t gateProbability);

CODE_API extern struct MultipleLocalNearestNeighbor *New_MultiplLocalNearestNeighbor(void);

CODE_API extern struct MultipleLocalNearestNeighbor *Assign_MultipLocalNearesNeighbo(struct MultipleLocalNearestNeighbor **const left, struct MultipleLocalNearestNeighbor *const right);

CODE_API extern void MultiplLocalNearestNeighbo_ctor(struct MultipleLocalNearestNeighbor *const self, struct StatiIPDATrackColleFactorProvid *factoryProvider);

CODE_API extern struct IEnumerable *New_IEnumerable(void);

CODE_API extern struct IEnumerable *Assign_IEnumerable(struct IEnumerable **const left, struct IEnumerable *const right);

CODE_API extern struct IEnumerable_1 *New_IEnumerable_1(void);

CODE_API extern struct IEnumerable_1 *Assign_IEnumerable_1(struct IEnumerable_1 **const left, struct IEnumerable_1 *const right);

CODE_API extern struct IEnumerable_2 *New_IEnumerable_2(void);

CODE_API extern struct IEnumerable_2 *Assign_IEnumerable_2(struct IEnumerable_2 **const left, struct IEnumerable_2 *const right);

CODE_API extern struct IAssociationAlgorithm *New_IAssociationAlgorithm(void);

CODE_API extern struct IAssociationAlgorithm *Assign_IAssociationAlgorithm(struct IAssociationAlgorithm **const left, struct IAssociationAlgorithm *const right);

CODE_API extern struct MeasurementAssociation *New_MeasurementAssociation(void);

CODE_API extern struct MeasurementAssociation *Assign_MeasurementAssociation(struct MeasurementAssociation **const left, struct MeasurementAssociation *const right);

CODE_API extern struct StaticListFactory_4 *StIPDATrCoFacPro_get_Obj1LisFac(struct StatiIPDATrackColleFactorProvid *const self);

CODE_API extern struct StaticListFactory_5 *StIPDATrCoFacPro_get_Obj2LisFac(struct StatiIPDATrackColleFactorProvid *const self);

CODE_API extern int32_t StatiListFacto_5_get_MaximCount(struct StaticListFactory_5 *const self);

CODE_API extern struct StaticList_6 *StaticListFactor_5_CreateInstan(struct StaticListFactory_5 *const self, int32_t capacity);

CODE_API extern struct StaticListEnumerator_12 *New_StaticListEnumerator_12(void);

CODE_API extern struct StaticListEnumerator_12 *Assign_StaticListEnumerator_12(struct StaticListEnumerator_12 **const left, struct StaticListEnumerator_12 *const right);

CODE_API extern void StaticListEnumerator_12_ctor(struct StaticListEnumerator_12 *const self, struct StaticList_20 *list);

CODE_API extern struct StaticListEnumerator_12 *StaticList_20_GetEnumerator(struct StaticList_20 *const self);

CODE_API extern bool_t StaticListEnumerato_12_MoveNext(struct StaticListEnumerator_12 *const self);

CODE_API extern struct Gaussian_2 *StaticList_20_get_Item(struct StaticList_20 *const self, int32_t index);

CODE_API extern struct Gaussian_2 *StaticListEnumer_12_get_Current(struct StaticListEnumerator_12 *const self);

CODE_API extern void StaticListEnumerator_12_Dispose(struct StaticListEnumerator_12 *const self);

CODE_API extern struct StaticListEnumerator_2 *New_StaticListEnumerator_2(void);

CODE_API extern struct StaticListEnumerator_2 *Assign_StaticListEnumerator_2(struct StaticListEnumerator_2 **const left, struct StaticListEnumerator_2 *const right);

CODE_API extern void StaticListEnumerator_2_ctor(struct StaticListEnumerator_2 *const self, struct StaticList_6 *list);

CODE_API extern struct StaticListEnumerator_2 *StaticList_6_GetEnumerator(struct StaticList_6 *const self);

CODE_API extern bool_t StaticListEnumerator_2_MoveNext(struct StaticListEnumerator_2 *const self);

CODE_API extern struct MobilEyeSpace *StaticList_6_get_Item(struct StaticList_6 *const self, int32_t index);

CODE_API extern struct MobilEyeSpace *StaticListEnumera_2_get_Current(struct StaticListEnumerator_2 *const self);

CODE_API extern void StaticListEnumerator_2_Dispose(struct StaticListEnumerator_2 *const self);

CODE_API extern struct StaticAssociationTableFactory *StIPDATrColFacPro_get_AssTabFac(struct StatiIPDATrackColleFactorProvid *const self);

CODE_API extern int32_t StatAssoTablFacto_get_MaximRows(struct StaticAssociationTableFactory *const self);

CODE_API extern int32_t StatAssoTablFact_get_MaximColum(struct StaticAssociationTableFactory *const self);

CODE_API extern struct AssociationTable *New_AssociationTable(void);

CODE_API extern struct AssociationTable *Assign_AssociationTable(struct AssociationTable **const left, struct AssociationTable *const right);

CODE_API extern struct float64_t_2D_15_40 *New_float64_t_2D_15_40(void);

CODE_API extern struct float64_t_2D_15_40 *Assign_float64_t_2D_15_40(struct float64_t_2D_15_40 **const left, struct float64_t_2D_15_40 *const right);

CODE_API extern struct AssociationTable *StatiAssocTableFacto_CreatInsta(struct StaticAssociationTableFactory *const self, int32_t rows, int32_t columns);

CODE_API extern struct StaticListEnumerator_14 *New_StaticListEnumerator_14(void);

CODE_API extern struct StaticListEnumerator_14 *Assign_StaticListEnumerator_14(struct StaticListEnumerator_14 **const left, struct StaticListEnumerator_14 *const right);

CODE_API extern void StaticListEnumerator_14_ctor(struct StaticListEnumerator_14 *const self, struct StaticList_26 *list);

CODE_API extern struct StaticListEnumerator_14 *StaticList_26_GetEnumerator(struct StaticList_26 *const self);

CODE_API extern int32_t AssociationTable_get_Rows(struct AssociationTable *const self);

CODE_API extern int32_t Association_get_Count1(struct Association *const self);

CODE_API extern bool_t StaticListEnumerato_14_MoveNext(struct StaticListEnumerator_14 *const self);

CODE_API extern int32_t AssociationTable_get_Columns(struct AssociationTable *const self);

CODE_API extern int32_t Association_get_Count2(struct Association *const self);

CODE_API extern struct MatrixData_5 *MatrixMath_Subtract_3(struct MatrixData_5 *left, struct MatrixData_5 *right);

CODE_API extern struct float64_t_1D_4 *Space_6_op_Subtraction_2(struct Space_3 *left, struct Space_3 *right);

CODE_API extern struct MatrixData_5 *MatrixData_20_Create_1(struct float64_t_1D_4 *data);

CODE_API extern struct MatrixData_15 *MatrixData_20_Eye_3(int32_t rows, int32_t columns);

CODE_API extern struct MatrixData_15 *MatrixData_15_get_Copy(struct MatrixData_15 *const self);

CODE_API extern void LinearAlgebra_SolveCholesky(struct LinearAlgebra *const self, struct float64_t_1D_16 *a, int32_t rows, struct float64_t_1D_16 *b);

CODE_API extern struct MatrixData_15 *MatrixMath_LinsolveHermitian(struct MatrixData_15 *left, struct MatrixData_15 *right);

CODE_API extern struct PositiveDefiniteMatrix_3 *PositiDefiniMatrix_3_get_Invers(struct PositiveDefiniteMatrix_3 *const self);

CODE_API extern struct MatrixData_7 *New_MatrixData_7(void);

CODE_API extern struct MatrixData_7 *Assign_MatrixData_7(struct MatrixData_7 **const left, struct MatrixData_7 *const right);

CODE_API extern void MatrixData_7_ctor(struct MatrixData_7 *const self, int32_t rows, int32_t columns);

CODE_API extern struct float64_t_1D_4 *MatrixData_7_get_DataReference(struct MatrixData_7 *const self);

CODE_API extern void LinearAlgebra_MatrixMultiply_14(struct LinearAlgebra *const self, struct float64_t_1D_4 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_16 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_4 *c);

CODE_API extern struct MatrixData_7 *MatrixMath_Multiply_27(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_5 *left, struct MatrixData_15 *right);

CODE_API extern void LinearAlgebra_MatrixMultiply_15(struct LinearAlgebra *const self, struct float64_t_1D_4 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_4 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_1 *c);

CODE_API extern struct MatrixData_3 *MatrixMath_Multiply_28(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_7 *left, struct MatrixData_5 *right);

CODE_API extern struct MatrixData_3 *MatrixMath_Multiply_29(bool_t transposeFirst, bool_t transposeSecond, bool_t transposeThird, struct MatrixData_5 *first, struct MatrixData_15 *second, struct MatrixData_5 *third);

CODE_API extern float64_t Gaussi_2_GetMahalaDistanSquared(struct Gaussian_2 *const self, struct MobilEyeSpace *sample);

CODE_API extern float64_t SquaredMahalanDistanc_GetMetric(struct SquaredMahalanobisDistance *const self, struct Gaussian_2 *object1, struct MobilEyeSpace *object2);

CODE_API extern float64_t Gate_get_MaximumDistance(struct Gate *const self);

CODE_API extern bool_t Gate_IsInside(struct Gate *const self, struct Gaussian_2 *object1, struct MobilEyeSpace *object2);

CODE_API extern struct Existence *StaticList_26_get_Item(struct StaticList_26 *const self, int32_t index);

CODE_API extern struct Existence *StaticListEnumer_14_get_Current(struct StaticListEnumerator_14 *const self);

CODE_API extern float64_t TwoPointDistribution_Evaluate(struct TwoPointDistribution *const self, struct ExistenceSpace *sample);

CODE_API extern bool_t Nullable_2_get_HasValue(struct Nullable_2 *const self);

CODE_API extern int32_t Gaussian_2_get_Dimensions(struct Gaussian_2 *const self);

CODE_API extern bool_t MatrixData_15_get_IsScalar(struct MatrixData_15 *const self);

CODE_API extern struct int32_t_1D_4 *New_int32_t_1D_4(void);

CODE_API extern struct int32_t_1D_4 *Assign_int32_t_1D_4(struct int32_t_1D_4 **const left, struct int32_t_1D_4 *const right);

CODE_API extern void LinearAlgebra_FactorLU_1(struct LinearAlgebra *const self, struct float64_t_1D_16 *a, int32_t rows, struct int32_t_1D_4 *pivotIndices);

CODE_API extern float64_t MatrixMath_Det(struct MatrixData_15 *matrix);

CODE_API extern void Nullable_2_ctor(struct Nullable_2 *const self, float64_t value);

CODE_API extern float64_t Nullable_2_get_Value(struct Nullable_2 *const self);

CODE_API extern float64_t SquareMatrix_3_get_Determinant(struct PositiveDefiniteMatrix_3 *const self);

CODE_API extern float64_t Gaussian_2_Evaluate(struct Gaussian_2 *const self, float64_t mahalanobisSquared);

CODE_API extern float64_t Gaussian_2_Evaluate_1(struct Gaussian_2 *const self, struct MobilEyeSpace *sample);

CODE_API extern void AssociationTable_set_Item(struct AssociationTable *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern struct int32_t_1D_40 *New_int32_t_1D_40(void);

CODE_API extern struct int32_t_1D_40 *Assign_int32_t_1D_40(struct int32_t_1D_40 **const left, struct int32_t_1D_40 *const right);

CODE_API extern struct IAssociationTable *New_IAssociationTable(void);

CODE_API extern struct IAssociationTable *Assign_IAssociationTable(struct IAssociationTable **const left, struct IAssociationTable *const right);

CODE_API extern struct StaticList_5 *New_StaticList_5(void);

CODE_API extern struct StaticList_5 *Assign_StaticList_5(struct StaticList_5 **const left, struct StaticList_5 *const right);

CODE_API extern struct StaticList_1D_15 *New_StaticList_1D_15(void);

CODE_API extern struct StaticList_1D_15 *Assign_StaticList_1D_15(struct StaticList_1D_15 **const left, struct StaticList_1D_15 *const right);

CODE_API extern void StaticList_5_ctor(struct StaticList_5 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_5 *StatiListFacto_4_CreateInstan_3(struct StaticListFactory_4 *const self, int32_t capacity);

CODE_API extern struct StaticList *New_StaticList(void);

CODE_API extern struct StaticList *Assign_StaticList(struct StaticList **const left, struct StaticList *const right);

CODE_API extern void StaticList_ctor(struct StaticList *const self, int32_t maximumCount);

CODE_API extern struct StaticList *StatiListFactor_5_CreateInstan(struct StaticListFactory_5 *const self, int32_t capacity);

CODE_API extern int32_t StaticList_5_get_Count(struct StaticList_5 *const self);

CODE_API extern void StaticList_5_Add(struct StaticList_5 *const self, struct StaticList *value);

CODE_API extern float64_t AssociationTable_get_Item(struct AssociationTable *const self, int32_t row, int32_t column);

CODE_API extern int32_t StaticList_get_Count(struct StaticList *const self);

CODE_API extern void StaticList_Add(struct StaticList *const self, int32_t value);

CODE_API extern struct StaticList *StaticList_5_get_Item(struct StaticList_5 *const self, int32_t index);

CODE_API extern struct StaticList_5 *MultiLocalNeareNeighb_GetAssoci(struct MultipleLocalNearestNeighbor *const self, struct AssociationTable *associationTable, struct StaticList **notAssociated);

CODE_API extern void MeasurementAssociation_ctor(struct MeasurementAssociation *const self, struct StaticList_20 *likelihoods, struct StaticList_26 *existences, struct StaticList_6 *measurements, struct MultipleLocalNearestNeighbor *associationAlgorithm, struct ProbabilityGate *gate, struct StatiIPDATrackColleFactorProvid *factoryProvider);

CODE_API extern struct MeasurementAssociation *MeasurementAssociation_2_Create(struct StaticList_20 *likelihoodIntegralDistributions, struct StaticList_26 *existences, struct StaticList_6 *measurements, struct MultipleLocalNearestNeighbor *associationAlgorithm, struct ProbabilityGate *gate, struct StatiIPDATrackColleFactorProvid *factoryProvider);

CODE_API extern struct StaticList_27 *StatiListFacto_4_CreateInstan_4(struct StaticListFactory_4 *const self, int32_t capacity);

CODE_API extern struct StaticListEnumerator *New_StaticListEnumerator(void);

CODE_API extern struct StaticListEnumerator *Assign_StaticListEnumerator(struct StaticListEnumerator **const left, struct StaticListEnumerator *const right);

CODE_API extern void StaticListEnumerator_ctor(struct StaticListEnumerator *const self, struct StaticList *list);

CODE_API extern struct StaticListEnumerator *StaticList_GetEnumerator(struct StaticList *const self);

CODE_API extern bool_t StaticListEnumerator_MoveNext(struct StaticListEnumerator *const self);

CODE_API extern int32_t StaticList_get_Item(struct StaticList *const self, int32_t index);

CODE_API extern int32_t StaticListEnumerato_get_Current(struct StaticListEnumerator *const self);

CODE_API extern void StaticListEnumerator_Dispose(struct StaticListEnumerator *const self);

CODE_API extern struct StaticList_6 *Associatio_GetAssociatedObjects(struct Association *const self, int32_t object1Index);

CODE_API extern struct MarginalizedEvaluable *StaticList_22_get_Item(struct StaticList_22 *const self, int32_t index);

CODE_API extern float64_t MobilEyeParame_get_ClutteLambda(struct MobilEyeParameters *const self);

CODE_API extern struct IEvaluable *New_IEvaluable(void);

CODE_API extern struct IEvaluable *Assign_IEvaluable(struct IEvaluable **const left, struct IEvaluable *const right);

CODE_API extern struct IEvaluable_1 *New_IEvaluable_1(void);

CODE_API extern struct IEvaluable_1 *Assign_IEvaluable_1(struct IEvaluable_1 **const left, struct IEvaluable_1 *const right);

CODE_API extern struct IEvaluable_2 *New_IEvaluable_2(void);

CODE_API extern struct IEvaluable_2 *Assign_IEvaluable_2(struct IEvaluable_2 **const left, struct IEvaluable_2 *const right);

CODE_API extern struct IPDA *New_IPDA(void);

CODE_API extern struct IPDA *Assign_IPDA(struct IPDA **const left, struct IPDA *const right);

CODE_API extern struct CardinalitySpace *New_CardinalitySpace(void);

CODE_API extern struct CardinalitySpace *Assign_CardinalitySpace(struct CardinalitySpace **const left, struct CardinalitySpace *const right);

CODE_API extern void CardinalitySpace_ctor(struct CardinalitySpace *const self);

CODE_API extern void CardinalitSpace_set_Cardinality(struct CardinalitySpace *const self, int32_t value);

CODE_API extern struct CardinalitySpace *CardinalitySpace_1_Create(int32_t cardinality);

CODE_API extern struct CardinalitySpace *CardinalitySpace_1_op_Implicit(int32_t cardinality);

CODE_API extern struct StaticListEnumerator_8 *SampleSet_GetEnumerator(struct SampleSet *const self);

CODE_API extern struct MobilEyeSpace *SampleProbabilitPair_get_Sample(struct SampleProbabilityPair *const self);

CODE_API extern int32_t CardinalitSpace_get_Cardinality(struct CardinalitySpace *const self);

CODE_API extern float64_t Math_Atan2(float64_t y, float64_t x);

CODE_API extern float64_t MobilEyeParame_get_MaximumRange(struct MobilEyeParameters *const self);

CODE_API extern float64_t MobilEyeParame_get_MinimumRange(struct MobilEyeParameters *const self);

CODE_API extern float64_t MobilEyeParame_get_MinimumAngle(struct MobilEyeParameters *const self);

CODE_API extern float64_t MobilEyeParame_get_MaximumAngle(struct MobilEyeParameters *const self);

CODE_API extern float64_t MobilEyeParame_get_DetectProbab(struct MobilEyeParameters *const self);

CODE_API extern float64_t SinglDetectModel_get_GateProbab(struct SingleDetectionModel *const self);

CODE_API extern float64_t DetectionModel_Evaluate(struct MobilEyeDetectionModel *const self, struct CardinalitySpace *sample);

CODE_API extern float64_t MarginalizedEvaluable_Evaluate(struct MarginalizedEvaluable *const self, struct CardinalitySpace *sample);

CODE_API extern struct StaticListFactory_5 *StIPDATrColFacPro_get_MeaLisFac(struct StatiIPDATrackColleFactorProvid *const self);

CODE_API extern struct StaticList_1 *New_StaticList_1(void);

CODE_API extern struct StaticList_1 *Assign_StaticList_1(struct StaticList_1 **const left, struct StaticList_1 *const right);

CODE_API extern struct float64_t_1D_40 *New_float64_t_1D_40(void);

CODE_API extern struct float64_t_1D_40 *Assign_float64_t_1D_40(struct float64_t_1D_40 **const left, struct float64_t_1D_40 *const right);

CODE_API extern void StaticList_1_ctor(struct StaticList_1 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_1 *StatiListFacto_5_CreateInstan(struct StaticListFactory_5 *const self, int32_t capacity);

CODE_API extern int32_t StaticList_1_get_Count(struct StaticList_1 *const self);

CODE_API extern void StaticList_1_Add(struct StaticList_1 *const self, float64_t value);

CODE_API extern struct MeasurementSetLikelihood *New_MeasurementSetLikelihood(void);

CODE_API extern struct MeasurementSetLikelihood *Assign_MeasurementSetLikelihood(struct MeasurementSetLikelihood **const left, struct MeasurementSetLikelihood *const right);

CODE_API extern void MeasurementSetLikelihood_ctor(struct MeasurementSetLikelihood *const self, float64_t likelihoodGivenExistent, float64_t likelihoodGivenNonExistent);

CODE_API extern struct StaticListFactory_2 *StIPDATrColFacPro_get_HypLisFac(struct StatiIPDATrackColleFactorProvid *const self);

CODE_API extern int32_t StatiListFacto_2_get_MaximCount(struct StaticListFactory_2 *const self);

CODE_API extern struct StaticList_18 *New_StaticList_18(void);

CODE_API extern struct StaticList_18 *Assign_StaticList_18(struct StaticList_18 **const left, struct StaticList_18 *const right);

CODE_API extern struct TruePositivesHypothesis *New_TruePositivesHypothesis(void);

CODE_API extern struct TruePositivesHypothesis *Assign_TruePositivesHypothesis(struct TruePositivesHypothesis **const left, struct TruePositivesHypothesis *const right);

CODE_API extern struct TruePositivesHypothesis_1D_41 *New_TruePositiveHypothesi_1D_41(void);

CODE_API extern struct TruePositivesHypothesis_1D_41 *Assign_TruePositivHypothe_1D_41(struct TruePositivesHypothesis_1D_41 **const left, struct TruePositivesHypothesis_1D_41 *const right);

CODE_API extern void StaticList_18_ctor(struct StaticList_18 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_18 *StaticListFactor_2_CreateInstan(struct StaticListFactory_2 *const self, int32_t capacity);

CODE_API extern struct StaticListFactory_3 *StIPDATrCoFaPr_get_TruEleLisFac(struct StatiIPDATrackColleFactorProvid *const self);

CODE_API extern int32_t StatiListFacto_3_get_MaximCount(struct StaticListFactory_3 *const self);

CODE_API extern struct StaticList_8 *New_StaticList_8(void);

CODE_API extern struct StaticList_8 *Assign_StaticList_8(struct StaticList_8 **const left, struct StaticList_8 *const right);

CODE_API extern struct MobilEyeSpace_1D_1 *New_MobilEyeSpace_1D_1(void);

CODE_API extern struct MobilEyeSpace_1D_1 *Assign_MobilEyeSpace_1D_1(struct MobilEyeSpace_1D_1 **const left, struct MobilEyeSpace_1D_1 *const right);

CODE_API extern void StaticList_8_ctor(struct StaticList_8 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_8 *StaticListFactor_3_CreateInstan(struct StaticListFactory_3 *const self, int32_t capacity);

CODE_API extern void TruePositivesHypothesis_ctor(struct TruePositivesHypothesis *const self, float64_t weight, struct StaticList_8 *elements);

CODE_API extern int32_t StaticList_18_get_Count(struct StaticList_18 *const self);

CODE_API extern void StaticList_18_Add(struct StaticList_18 *const self, struct TruePositivesHypothesis *value);

CODE_API extern float64_t StaticList_1_get_Item(struct StaticList_1 *const self, int32_t index);

CODE_API extern int32_t StaticList_8_get_Count(struct StaticList_8 *const self);

CODE_API extern void StaticList_8_Add(struct StaticList_8 *const self, struct MobilEyeSpace *value);

CODE_API extern void IPDA_ctor(struct IPDA *const self, struct Gaussian_2 *spatialLikelihood, struct Existence *existence, struct MarginalizedEvaluable *truePositiveLikelihood, struct StaticList_6 *elements, float64_t lambda, struct StatiIPDATrackColleFactorProvid *factoryProvider);

CODE_API extern struct IPDA *IPDA_2_Create(struct Gaussian_2 *spatialLikelihood, struct Existence *existence, struct MarginalizedEvaluable *truePositiveLikelihood, struct StaticList_6 *elements, float64_t lambda, struct StatiIPDATrackColleFactorProvid *factoryProvider);

CODE_API extern struct StaticList_18 *IPDA_GetHypotheses(struct IPDA *const self);

CODE_API extern struct GaussianMixture *New_GaussianMixture(void);

CODE_API extern struct GaussianMixture *Assign_GaussianMixture(struct GaussianMixture **const left, struct GaussianMixture *const right);

CODE_API extern struct IListFactory *New_IListFactory(void);

CODE_API extern struct IListFactory *Assign_IListFactory(struct IListFactory **const left, struct IListFactory *const right);

CODE_API extern struct StaticList_24 *New_StaticList_24(void);

CODE_API extern struct StaticList_24 *Assign_StaticList_24(struct StaticList_24 **const left, struct StaticList_24 *const right);

CODE_API extern struct Gaussian_5_1D_41 *New_Gaussian_5_1D_41(void);

CODE_API extern struct Gaussian_5_1D_41 *Assign_Gaussian_5_1D_41(struct Gaussian_5_1D_41 **const left, struct Gaussian_5_1D_41 *const right);

CODE_API extern void StaticList_24_ctor(struct StaticList_24 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_24 *StatiListFactor_2_CreateInstan(struct StaticListFactory_2 *const self, int32_t capacity);

CODE_API extern struct StaticList_2 *New_StaticList_2(void);

CODE_API extern struct StaticList_2 *Assign_StaticList_2(struct StaticList_2 **const left, struct StaticList_2 *const right);

CODE_API extern struct float64_t_1D_41 *New_float64_t_1D_41(void);

CODE_API extern struct float64_t_1D_41 *Assign_float64_t_1D_41(struct float64_t_1D_41 **const left, struct float64_t_1D_41 *const right);

CODE_API extern void StaticList_2_ctor(struct StaticList_2 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_2 *StatiListFacto_2_CreateInstan(struct StaticListFactory_2 *const self, int32_t capacity);

CODE_API extern void GaussianMixture_ctor(struct GaussianMixture *const self, int32_t capacity, struct StaticListFactory_2 *listFactory);

CODE_API extern struct MeasurementSetLikelihood *IPDA_GetElementsLikelihood(struct IPDA *const self);

CODE_API extern struct StaticListEnumerator_10 *New_StaticListEnumerator_10(void);

CODE_API extern struct StaticListEnumerator_10 *Assign_StaticListEnumerator_10(struct StaticListEnumerator_10 **const left, struct StaticListEnumerator_10 *const right);

CODE_API extern void StaticListEnumerator_10_ctor(struct StaticListEnumerator_10 *const self, struct StaticList_18 *list);

CODE_API extern struct StaticListEnumerator_10 *StaticList_18_GetEnumerator(struct StaticList_18 *const self);

CODE_API extern bool_t StaticListEnumerato_10_MoveNext(struct StaticListEnumerator_10 *const self);

CODE_API extern struct TruePositivesHypothesis *StaticList_18_get_Item(struct StaticList_18 *const self, int32_t index);

CODE_API extern struct TruePositivesHypothesis *StaticListEnumer_10_get_Current(struct StaticListEnumerator_10 *const self);

CODE_API extern struct StaticList_8 *TruePositivHypothe_get_Elements(struct TruePositivesHypothesis *const self);

CODE_API extern struct StaticListEnumerator_4 *New_StaticListEnumerator_4(void);

CODE_API extern struct StaticListEnumerator_4 *Assign_StaticListEnumerator_4(struct StaticListEnumerator_4 **const left, struct StaticListEnumerator_4 *const right);

CODE_API extern void StaticListEnumerator_4_ctor(struct StaticListEnumerator_4 *const self, struct StaticList_8 *list);

CODE_API extern struct StaticListEnumerator_4 *StaticList_8_GetEnumerator(struct StaticList_8 *const self);

CODE_API extern bool_t StaticListEnumerator_4_MoveNext(struct StaticListEnumerator_4 *const self);

CODE_API extern struct MobilEyeSpace *StaticList_8_get_Item(struct StaticList_8 *const self, int32_t index);

CODE_API extern struct MobilEyeSpace *StaticListEnumera_4_get_Current(struct StaticListEnumerator_4 *const self);

CODE_API extern void StaticListEnumerator_4_Dispose(struct StaticListEnumerator_4 *const self);

CODE_API extern struct MobilEyeSpace *Trackin_1_SimplifFirstOrDefault(struct StaticList_8 *source);

CODE_API extern struct Space *New_Space(void);

CODE_API extern struct Space *Assign_Space(struct Space **const left, struct Space *const right);

CODE_API extern struct Type *Object_GetType_1(struct Space *const self);

CODE_API extern struct Type *Object_GetType_2(struct MobilEyeSpace *const self);

CODE_API extern bool_t MatrixData_5_Equals(struct MatrixData_5 *const self, struct MatrixData *other);

CODE_API extern bool_t Space_3_Equals(struct MobilEyeSpace *const self, struct Space *other);

CODE_API extern bool_t Space_6_op_Equality_1(struct MobilEyeSpace *left, struct Space *right);

CODE_API extern struct Gaussian_5 *StaticList_23_get_Item(struct StaticList_23 *const self, int32_t index);

CODE_API extern float64_t TruePositiveHypothes_get_Weight(struct TruePositivesHypothesis *const self);

CODE_API extern int32_t StaticList_24_get_Count(struct StaticList_24 *const self);

CODE_API extern void StaticList_24_Add(struct StaticList_24 *const self, struct Gaussian_5 *value);

CODE_API extern int32_t StaticList_2_get_Count(struct StaticList_2 *const self);

CODE_API extern void StaticList_2_Add(struct StaticList_2 *const self, float64_t value);

CODE_API extern void GaussianMixture_Add(struct GaussianMixture *const self, struct Gaussian_5 *gaussian, float64_t weight);

CODE_API extern struct Matrix_11 *StaticList_16_get_Item(struct StaticList_16 *const self, int32_t index);

CODE_API extern void LinearAlgebra_SolveLU_1(struct LinearAlgebra *const self, struct float64_t_1D_16 *a, int32_t rows, struct int32_t_1D_4 *pivotIndices, struct float64_t_1D_16 *b);

CODE_API extern struct MatrixData_15 *MatrixMath_LinsolveSquare_1(struct MatrixData_15 *left, struct MatrixData_15 *right);

CODE_API extern struct MatrixData_17 *New_MatrixData_17(void);

CODE_API extern struct MatrixData_17 *Assign_MatrixData_17(struct MatrixData_17 **const left, struct MatrixData_17 *const right);

CODE_API extern void MatrixData_17_ctor(struct MatrixData_17 *const self, int32_t rows, int32_t columns);

CODE_API extern struct float64_t_1D_20 *MatrixData_17_get_DataReference(struct MatrixData_17 *const self);

CODE_API extern void LinearAlgebra_MatrixMultiply_16(struct LinearAlgebra *const self, struct float64_t_1D_25 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_20 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_20 *c);

CODE_API extern struct MatrixData_17 *MatrixMath_Multiply_30(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_2 *left, struct MatrixData_16 *right);

CODE_API extern void LinearAlgebra_MatrixMultiply_17(struct LinearAlgebra *const self, struct float64_t_1D_20 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_16 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_20 *c);

CODE_API extern struct MatrixData_17 *MatrixMath_Multiply_31(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_17 *left, struct MatrixData_15 *right);

CODE_API extern struct MatrixData_17 *MatrixMath_Multiply_32(bool_t transposeFirst, bool_t transposeSecond, bool_t transposeThird, struct MatrixData_2 *first, struct MatrixData_16 *second, struct MatrixData_15 *third);

CODE_API extern void LinearAlgebra_MatrixMultiply_18(struct LinearAlgebra *const self, struct float64_t_1D_20 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_4 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_5 *c);

CODE_API extern struct MatrixData *MatrixMath_Multiply_33(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_17 *left, struct MatrixData_5 *right);

CODE_API extern struct MatrixData *MatrixMath_Add_5(struct MatrixData *left, struct MatrixData *right);

CODE_API extern void LinearAlgebra_MatrixMultiply_19(struct LinearAlgebra *const self, struct float64_t_1D_20 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_20 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_25 *c);

CODE_API extern struct MatrixData_2 *MatrixMath_Multiply_34(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_17 *left, struct MatrixData_17 *right);

CODE_API extern struct MatrixData_2 *MatrixMath_Multiply_35(bool_t transposeFirst, bool_t transposeSecond, bool_t transposeThird, struct MatrixData_17 *first, struct MatrixData_15 *second, struct MatrixData_17 *third);

CODE_API extern struct MatrixData_2 *MatrixMath_Subtract_4(struct MatrixData_2 *left, struct MatrixData_2 *right);

CODE_API extern void Space_6_Create_2(struct CASpace **space, struct MatrixData *vector);

CODE_API extern struct CASpace *Space_6_Create_3(struct MatrixData *vector);

CODE_API extern struct MatrixData *MatrixMath_Subtract_5(struct MatrixData *left, struct MatrixData *right);

CODE_API extern struct float64_t_1D_5 *Space_6_op_Subtraction_3(struct AngularSpace *left, struct Space *right);

CODE_API extern struct CASpace *SpaceExtensions_FitToDomain_1(struct CASpace *space);

CODE_API extern struct Gaussian_5 *EKF_Update_4(struct Gaussian_5 *predictedState, struct Gaussian_2 *predictedMeasurement, struct MobilEyeSpace *measurement, struct Matrix_11 *transitionMatrix);

CODE_API extern int32_t Tracking_1_SimplifiedIndexOf(struct StaticList_6 *source, struct MobilEyeSpace *value);

CODE_API extern struct Obstacle *StaticList_4_get_Item(struct StaticList_4 *const self, int32_t index);

CODE_API extern void StaticListEnumerator_10_Dispose(struct StaticListEnumerator_10 *const self);

CODE_API extern int32_t GaussianMixture_get_Count(struct GaussianMixture *const self);

CODE_API extern void Gaussian_5_ctor_1(struct Gaussian_5 *const self);

CODE_API extern struct Gaussian_5 *StaticList_24_get_Item(struct StaticList_24 *const self, int32_t index);

CODE_API extern struct StaticListEnumerator_1 *New_StaticListEnumerator_1(void);

CODE_API extern struct StaticListEnumerator_1 *Assign_StaticListEnumerator_1(struct StaticListEnumerator_1 **const left, struct StaticListEnumerator_1 *const right);

CODE_API extern void StaticListEnumerator_1_ctor(struct StaticListEnumerator_1 *const self, struct StaticList_2 *list);

CODE_API extern struct StaticListEnumerator_1 *StaticList_2_GetEnumerator(struct StaticList_2 *const self);

CODE_API extern bool_t StaticListEnumerator_1_MoveNext(struct StaticListEnumerator_1 *const self);

CODE_API extern float64_t StaticList_2_get_Item(struct StaticList_2 *const self, int32_t index);

CODE_API extern float64_t StaticListEnumera_1_get_Current(struct StaticListEnumerator_1 *const self);

CODE_API extern void StaticListEnumerator_1_Dispose(struct StaticListEnumerator_1 *const self);

CODE_API extern float64_t Enumerable_Sum(struct StaticList_2 *source);

CODE_API extern void StaticList_2_set_Item(struct StaticList_2 *const self, int32_t index, float64_t value);

CODE_API extern void GaussianMixture_Normalize(struct GaussianMixture *const self);

CODE_API extern void MatrixData_ctor_1(struct MatrixData *const self, struct float64_t_1D_5 *data, int32_t rows, int32_t columns);

CODE_API extern struct MatrixData *MatrixMath_MultiplyElem(struct MatrixData *matrix, float64_t scalar);

CODE_API extern struct MatrixData *MatrixData_20_Create_2(struct float64_t_1D_5 *data);

CODE_API extern void LinearAlgebra_MatrixMultiply_20(struct LinearAlgebra *const self, struct float64_t_1D_5 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_5 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_25 *c);

CODE_API extern struct MatrixData_2 *MatrixMath_Multiply_36(bool_t transposeLeft, bool_t transposeRight, struct MatrixData *left, struct MatrixData *right);

CODE_API extern struct MatrixData_2 *MatrixMath_MultiplyElem_1(struct MatrixData_2 *matrix, float64_t scalar);

CODE_API extern struct Gaussian_5 *GaussianMixture_ToGaussian(struct GaussianMixture *const self);

CODE_API extern void MeasureSetLikeliho_set_Conditio(struct MeasurementSetLikelihood *const self, struct ExistenceSpace *value);

CODE_API extern float64_t MeasuremeSetLikelihood_Evaluate(struct MeasurementSetLikelihood *const self);

CODE_API extern void BayesFilter_Update(struct TwoPointDistribution **predictedState, struct MeasurementSetLikelihood *measurementLikelihood);

CODE_API extern struct TwoPointDistribution *BayesFilter_Update_1(struct TwoPointDistribution *predictedState, struct MeasurementSetLikelihood *measurementLikelihood);

CODE_API extern float64_t Existenc_get_ExistenceProbabili(struct Existence *const self);

CODE_API extern float64_t Track_get_ExisteProbabForDeleti(struct Tracking *const self);

CODE_API extern float64_t Matrix_10_get_Item(struct Matrix_10 *const self, int32_t row, int32_t column);

CODE_API extern float64_t PositivDefinitMatrix_7_get_Item(struct PositiveDefiniteMatrix_7 *const self, int32_t row, int32_t column);

CODE_API extern float64_t Matrix_10_get_Item_1(struct PositiveDefiniteMatrix_7 *const self, float64_t row, float64_t column);

CODE_API extern float64_t PositiDefinitMatrix_7_get_Item(struct PositiveDefiniteMatrix_7 *const self, float64_t row, float64_t column);

CODE_API extern void CovariancEllipseParameters_ctor(struct CovarianceEllipseParameters *const self, float64_t majorSemiAxis, float64_t minorSemiAxis, float64_t angle);

CODE_API extern struct CovarianceEllipseParameters Covari_GetCovariaEllipseParamet(struct Gaussian_5 *distribution, float64_t mahalanobisDistance);

CODE_API extern float64_t CovaElliParam_get_MajorSemiAxis(struct CovarianceEllipseParameters *const self);

CODE_API extern float64_t Track_get_EncloCirclDeletThresh(struct Tracking *const self);

CODE_API extern struct StaticList_6 *Associat_GetNotAssociateObjects(struct Association *const self);

CODE_API extern float64_t Obstacle_get_PositionX(struct Obstacle *const self);

CODE_API extern struct InverseMobilEyeMeasurementModel *New_InverseMobilEyeMeasureModel(void);

CODE_API extern struct InverseMobilEyeMeasurementModel *Assig_InversMobilEyeMeasurModel(struct InverseMobilEyeMeasurementModel **const left, struct InverseMobilEyeMeasurementModel *const right);

CODE_API extern struct MobilEyeParameters *InveCartMeasMode_get_SensoParam(struct InverseCartesianMeasuremenModel *const self);

CODE_API extern void InverseCartesiMeasureModel_ctor(struct InverseCartesianMeasuremenModel *const self, struct MobilEyeParameters *sensorParameters);

CODE_API extern void InveMobiEyeMeasMode_set_EgoVelo(struct InverseMobilEyeMeasurementModel *const self, float64_t value);

CODE_API extern void InvMobEyeMeaMode_set_EgoYawRate(struct InverseMobilEyeMeasurementModel *const self, float64_t value);

CODE_API extern void InversMobilEyeMeasureModel_ctor(struct InverseMobilEyeMeasurementModel *const self, struct MobilEyeParameters *sensorParameters, float64_t egoVelocity, float64_t egoYawRate);

CODE_API extern void InversCartesMeasurModel_Transfo(struct InverseCartesianMeasuremenModel *const self, struct MobilEyeSpace *measurement, struct CASpace **state);

CODE_API extern float64_t InveMobiEyeMeasMode_get_EgoVelo(struct InverseMobilEyeMeasurementModel *const self);

CODE_API extern float64_t InvMobEyeMeaMode_get_EgoYawRate(struct InverseMobilEyeMeasurementModel *const self);

CODE_API extern void InverMobilEyeMeasurModel_Transf(struct InverseMobilEyeMeasurementModel *const self, struct MobilEyeSpace *measurement, struct CASpace **state);

CODE_API extern void MatrixData_17_set_Item(struct MatrixData_17 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void PositivDefinitMatrix_7_set_Item(struct PositiveDefiniteMatrix_7 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern uint32_t IDGenerator_GetNextID(void);

CODE_API extern struct MatrixData_2_1D_1 *New_MatrixData_2_1D_1(void);

CODE_API extern struct MatrixData_2_1D_1 *Assign_MatrixData_2_1D_1(struct MatrixData_2_1D_1 **const left, struct MatrixData_2_1D_1 *const right);

CODE_API extern struct MatrixData_1D_0 *New_MatrixData_1D_0(void);

CODE_API extern struct MatrixData_1D_0 *Assign_MatrixData_1D_0(struct MatrixData_1D_0 **const left, struct MatrixData_1D_0 *const right);

CODE_API extern struct MatrixData_2 *MatrixMath_Multiply_37(struct MatrixData_2 *first, struct MatrixData_2 *second, struct MatrixData_2_1D_1 *matrices);

CODE_API extern void Matrix_10_set_MatrixData_1(struct PositiveDefiniteMatrix_7 *const self, struct MatrixData_2 *value);

CODE_API extern void Tracking_NormalizeVelocity(struct Tracking *const self, struct StaticList_27 **tracks);

CODE_API extern struct StaticList_27 *Trackin_ProcessMobilEyeDetectio(struct Tracking *const self, struct DateTime time_1, struct StaticList_6 *measurements, struct StaticList_4 *obstacles);

CODE_API extern struct FrontRadarObjectParameters *SensProp_get_FronRadaObjecParam(struct SensorProperties *const self);

CODE_API extern struct StaticList_21 *New_StaticList_21(void);

CODE_API extern struct StaticList_21 *Assign_StaticList_21(struct StaticList_21 **const left, struct StaticList_21 *const right);

CODE_API extern struct Gaussian_3 *New_Gaussian_3(void);

CODE_API extern struct Gaussian_3 *Assign_Gaussian_3(struct Gaussian_3 **const left, struct Gaussian_3 *const right);

CODE_API extern struct Gaussian_3_1D_15 *New_Gaussian_3_1D_15(void);

CODE_API extern struct Gaussian_3_1D_15 *Assign_Gaussian_3_1D_15(struct Gaussian_3_1D_15 **const left, struct Gaussian_3_1D_15 *const right);

CODE_API extern void StaticList_21_ctor(struct StaticList_21 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_21 *StatiListFacto_4_CreateInstan_5(struct StaticListFactory_4 *const self, int32_t capacity);

CODE_API extern struct StaticList_17 *New_StaticList_17(void);

CODE_API extern struct StaticList_17 *Assign_StaticList_17(struct StaticList_17 **const left, struct StaticList_17 *const right);

CODE_API extern struct Matrix_13 *New_Matrix_13(void);

CODE_API extern struct Matrix_13 *Assign_Matrix_13(struct Matrix_13 **const left, struct Matrix_13 *const right);

CODE_API extern struct Matrix_13_1D_15 *New_Matrix_13_1D_15(void);

CODE_API extern struct Matrix_13_1D_15 *Assign_Matrix_13_1D_15(struct Matrix_13_1D_15 **const left, struct Matrix_13_1D_15 *const right);

CODE_API extern void StaticList_17_ctor(struct StaticList_17 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_17 *StatiListFacto_4_CreateInstan_6(struct StaticListFactory_4 *const self, int32_t capacity);

CODE_API extern struct StaticList_25 *New_StaticList_25(void);

CODE_API extern struct StaticList_25 *Assign_StaticList_25(struct StaticList_25 **const left, struct StaticList_25 *const right);

CODE_API extern struct MarginalizedEvaluable_1 *New_MarginalizedEvaluable_1(void);

CODE_API extern struct MarginalizedEvaluable_1 *Assign_MarginalizedEvaluable_1(struct MarginalizedEvaluable_1 **const left, struct MarginalizedEvaluable_1 *const right);

CODE_API extern struct MarginalizedEvaluable_1_1D_15 *New_MarginalizEvaluable_1_1D_15(void);

CODE_API extern struct MarginalizedEvaluable_1_1D_15 *Assign_MarginalEvaluabl_1_1D_15(struct MarginalizedEvaluable_1_1D_15 **const left, struct MarginalizedEvaluable_1_1D_15 *const right);

CODE_API extern void StaticList_25_ctor(struct StaticList_25 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_25 *StatiListFacto_4_CreateInstan_7(struct StaticListFactory_4 *const self, int32_t capacity);

CODE_API extern struct FrontRadarObjectMeasuremenModel *New_FrontRadarObjectMeasurModel(void);

CODE_API extern struct FrontRadarObjectMeasuremenModel *Assig_FrontRadarObjecMeasuModel(struct FrontRadarObjectMeasuremenModel **const left, struct FrontRadarObjectMeasuremenModel *const right);

CODE_API extern struct float64_t_1D_5 *FroRadObjePara_get_NoisMatrDiag(struct FrontRadarObjectParameters *const self);

CODE_API extern struct PositiveDefiniteMatrix_5 *New_PositiveDefiniteMatrix_5(void);

CODE_API extern struct PositiveDefiniteMatrix_5 *Assign_PositiveDefiniteMatrix_5(struct PositiveDefiniteMatrix_5 **const left, struct PositiveDefiniteMatrix_5 *const right);

CODE_API extern void Matrix_5_ctor(struct Matrix_5 *const self);

CODE_API extern void SquareMatrix_5_ctor(struct SquareMatrix_5 *const self);

CODE_API extern struct MatrixData_2 *Matrix_5_get_MatrixData(struct Matrix_5 *const self);

CODE_API extern bool_t Matrix_5_get_IsZero(struct Matrix_5 *const self);

CODE_API extern void SquareMatrix_5_ctor_1(struct PositiveDefiniteMatrix_5 *const self, struct float64_t_1D_5 *mainDiagonal);

CODE_API extern void PositiveDefiniteMatrix_5_ctor(struct PositiveDefiniteMatrix_5 *const self, struct float64_t_1D_5 *mainDiagonal);

CODE_API extern void MeasuremenModel_3_set_Condition(struct MeasurementModel_3 *const self, struct CASpace *value);

CODE_API extern struct FrontRadarObjectParameters *CartMeasuModel_1_get_SensoParam(struct CartesianMeasurementModel_1 *const self);

CODE_API extern float64_t FrontRadarObjecParam_get_RotatZ(struct FrontRadarObjectParameters *const self);

CODE_API extern void CartesMeasurModel_1_set_Condit2(struct CartesianMeasurementModel_1 *const self, float64_t value);

CODE_API extern void CarteMeasuModel_1_set_EgoVeloci(struct CartesianMeasurementModel_1 *const self, float64_t value);

CODE_API extern void FrontRadarObjecMeasurModel_ctor(struct FrontRadarObjectMeasuremenModel *const self, float64_t egoVelocity, float64_t egoYawRate, float64_t egoAcceleration, struct FrontRadarObjectParameters *sensorParameters);

CODE_API extern struct FrontRadarObjectDetectionModel *New_FrontRadarObjectDetectModel(void);

CODE_API extern struct FrontRadarObjectDetectionModel *Assig_FrontRadarObjecDetecModel(struct FrontRadarObjectDetectionModel **const left, struct FrontRadarObjectDetectionModel *const right);

CODE_API extern void DetectionModel_1_set_Condition(struct DetectionModel_1 *const self, struct FrontRadarObjectSpace *value);

CODE_API extern void SinglDetecModel_1_set_GateProba(struct SingleDetectionModel_1 *const self, float64_t value);

CODE_API extern struct Vector2D_1D_10 *FronRadaObjePara_get_FielOfView(struct FrontRadarObjectParameters *const self);

CODE_API extern struct StaticList_3 *New_StaticList_3(void);

CODE_API extern struct StaticList_3 *Assign_StaticList_3(struct StaticList_3 **const left, struct StaticList_3 *const right);

CODE_API extern void StaticList_3_ctor(struct StaticList_3 *const self, int32_t maximumCount);

CODE_API extern float64_t FrontRadarObjecParam_get_PositX(struct FrontRadarObjectParameters *const self);

CODE_API extern float64_t FrontRadarObjecParam_get_PositY(struct FrontRadarObjectParameters *const self);

CODE_API extern int32_t StaticList_3_get_Count(struct StaticList_3 *const self);

CODE_API extern void StaticList_3_Add(struct StaticList_3 *const self, struct Vector2D value);

CODE_API extern void PolygonDetectionModel_ctor(struct PolygonDetectionModel *const self, struct FrontRadarObjectParameters *parameters, float64_t gateProbability);

CODE_API extern void FrontRadarObjecDetectModel_ctor(struct FrontRadarObjectDetectionModel *const self, struct FrontRadarObjectParameters *parameters, float64_t gateProbability);

CODE_API extern void Matrix_13_ctor(struct Matrix_13 *const self);

CODE_API extern float64_t CVComponentsSpace_get_X(struct CVComponentsSpace *const self);

CODE_API extern struct MatrixData_2 *Matrix_13_get_MatrixData(struct Matrix_13 *const self);

CODE_API extern void Matrix_13_set_Item(struct Matrix_13 *const self, int32_t row, int32_t column, float64_t value);

CODE_API extern void Matrix_13_set_Item_1(struct Matrix_13 *const self, float64_t row, float64_t column, float64_t value);

CODE_API extern float64_t CVComponentsSpace_get_Y(struct CVComponentsSpace *const self);

CODE_API extern float64_t CVComponentsSpace_get_Vx(struct CVComponentsSpace *const self);

CODE_API extern float64_t CVComponentsSpace_get_Vy(struct CVComponentsSpace *const self);

CODE_API extern float64_t FrontRadarObjectSpace_get_A(struct FrontRadarObjectSpace *const self);

CODE_API extern void CaMeMoWitVecVelAndAcc_FilTraMat(struct CartMeasModeWithVectVeloAndAcce *const self, struct CASpace *predictedStateExpectation, struct Matrix_13 **H);

CODE_API extern struct Matrix_13 *MeasurModel_7_get_TransitMatrix(struct CartMeasModeWithVectVeloAndAcce *const self);

CODE_API extern struct PositiveDefiniteMatrix_5 *MeasureModel_3_get_NoiseCovaria(struct MeasurementModel_3 *const self);

CODE_API extern struct PositiveDefiniteMatrix_5 *MeasuremeModel_3_get_Covariance(struct MeasurementModel_3 *const self);

CODE_API extern void PositiveDefiniteMatrix_5_ctor_1(struct PositiveDefiniteMatrix_5 *const self);

CODE_API extern struct PositiveDefiniteMatrix_5 *PositivDefiniteMatrix_13_Create(struct MatrixData_2 *matrix);

CODE_API extern struct PositiveDefiniteMatrix_5 *PosiDefinMatri_13_CreatAndCorre(struct MatrixData_2 *matrix);

CODE_API extern void CartesianMeasurementModel_1_h(struct CartesianMeasurementModel_1 *const self, struct CASpace *state, struct FrontRadarObjectSpace **predictedMeasurement);

CODE_API extern float64_t CarteMeasuModel_1_get_EgoVeloci(struct CartesianMeasurementModel_1 *const self);

CODE_API extern void CarMeaModeWithVectVeloAndAcce_h(struct CartMeasModeWithVectVeloAndAcce *const self, struct CASpace *state, struct FrontRadarObjectSpace **predictedMeasurement);

CODE_API extern struct FrontRadarObjectSpace *MeasuremeModel_3_get_Expectatio(struct CartMeasModeWithVectVeloAndAcce *const self);

CODE_API extern struct Gaussian_3 *Gaussian_11_Create(struct FrontRadarObjectSpace *expectation, struct PositiveDefiniteMatrix_5 *covariance);

CODE_API extern struct Gaussian_3 *EKF_PredictMeasurement_3(struct Gaussian_5 *predictedState, struct FrontRadarObjectMeasuremenModel *measurementModel, struct Matrix_13 **transitionMatrix);

CODE_API extern int32_t StaticList_17_get_Count(struct StaticList_17 *const self);

CODE_API extern void StaticList_17_Add(struct StaticList_17 *const self, struct Matrix_13 *value);

CODE_API extern int32_t StaticList_21_get_Count(struct StaticList_21 *const self);

CODE_API extern void StaticList_21_Add(struct StaticList_21 *const self, struct Gaussian_3 *value);

CODE_API extern struct PositiveDefiniteMatrix_5 *Gaussian_3_get_Covariance(struct Gaussian_3 *const self);

CODE_API extern struct MatrixData_2 *MatrixData_2_get_T(struct MatrixData_2 *const self);

CODE_API extern struct SquareMatrix_5 *New_SquareMatrix_5(void);

CODE_API extern struct SquareMatrix_5 *Assign_SquareMatrix_5(struct SquareMatrix_5 **const left, struct SquareMatrix_5 *const right);

CODE_API extern struct SquareMatrix_5 *SquareMatrix_11_Create(struct MatrixData_2 *matrix);

CODE_API extern struct SquareMatrix_5 *PosiDefinMatri_5_get_CholeDecom(struct PositiveDefiniteMatrix_5 *const self);

CODE_API extern struct FrontRadarObjectSpace *Gaussian_3_get_Expectation(struct Gaussian_3 *const self);

CODE_API extern struct MatrixData_19 *New_MatrixData_19(void);

CODE_API extern struct MatrixData_19 *Assign_MatrixData_19(struct MatrixData_19 **const left, struct MatrixData_19 *const right);

CODE_API extern struct float64_t_1D_250 *New_float64_t_1D_250(void);

CODE_API extern struct float64_t_1D_250 *Assign_float64_t_1D_250(struct float64_t_1D_250 **const left, struct float64_t_1D_250 *const right);

CODE_API extern void MatrixData_19_ctor(struct MatrixData_19 *const self, int32_t rows, int32_t columns);

CODE_API extern struct float64_t_1D_250 *MatrixData_19_get_DataReference(struct MatrixData_19 *const self);

CODE_API extern void LinearAlgebra_MatrixMultiply_21(struct LinearAlgebra *const self, struct float64_t_1D_25 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_250 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_250 *c);

CODE_API extern struct MatrixData_19 *MatrixMath_Multiply_38(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_2 *left, struct MatrixData_19 *right);

CODE_API extern struct MatrixData_19 *MatrixMath_Multiply_39(struct MatrixData_2 *left, struct MatrixData_19 *right);

CODE_API extern struct StaticList_10 *New_StaticList_10(void);

CODE_API extern struct StaticList_10 *Assign_StaticList_10(struct StaticList_10 **const left, struct StaticList_10 *const right);

CODE_API extern struct FrontRadarObjectSpace_1D_50 *New_FrontRadarObjectSpace_1D_50(void);

CODE_API extern struct FrontRadarObjectSpace_1D_50 *Assi_FrontRadarObjecSpace_1D_50(struct FrontRadarObjectSpace_1D_50 **const left, struct FrontRadarObjectSpace_1D_50 *const right);

CODE_API extern void StaticList_10_ctor(struct StaticList_10 *const self, int32_t maximumCount);

CODE_API extern int32_t StaticList_10_get_Count(struct StaticList_10 *const self);

CODE_API extern void StaticList_10_Add(struct StaticList_10 *const self, struct FrontRadarObjectSpace *value);

CODE_API extern void StaticList_10_set_Item(struct StaticList_10 *const self, int32_t index, struct FrontRadarObjectSpace *value);

CODE_API extern struct FrontRadarObjectSpace *StaticList_10_get_Item(struct StaticList_10 *const self, int32_t index);

CODE_API extern struct SampleSet_1 *New_SampleSet_1(void);

CODE_API extern struct SampleSet_1 *Assign_SampleSet_1(struct SampleSet_1 **const left, struct SampleSet_1 *const right);

CODE_API extern struct StaticList_14 *New_StaticList_14(void);

CODE_API extern struct StaticList_14 *Assign_StaticList_14(struct StaticList_14 **const left, struct StaticList_14 *const right);

CODE_API extern struct SampleProbabilityPair_1 *New_SampleProbabilityPair_1(void);

CODE_API extern struct SampleProbabilityPair_1 *Assign_SampleProbabilityPair_1(struct SampleProbabilityPair_1 **const left, struct SampleProbabilityPair_1 *const right);

CODE_API extern struct SampleProbabilityPair_1_1D_50 *New_SampleProbabiliPair_1_1D_50(void);

CODE_API extern struct SampleProbabilityPair_1_1D_50 *Assign_SampleProbabPair_1_1D_50(struct SampleProbabilityPair_1_1D_50 **const left, struct SampleProbabilityPair_1_1D_50 *const right);

CODE_API extern void StaticList_14_ctor(struct StaticList_14 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_14 *StatiListFactor_1_CreateInstan(struct StaticListFactory_1 *const self, int32_t capacity);

CODE_API extern void SampleSet_1_ctor(struct SampleSet_1 *const self, int32_t capacity, struct StaticListFactory_1 *listFactory);

CODE_API extern void SampleSet_1_ctor_1(struct SampleSet_1 *const self, struct StaticListFactory_1 *listFactory);

CODE_API extern struct StaticListEnumerator_6 *New_StaticListEnumerator_6(void);

CODE_API extern struct StaticListEnumerator_6 *Assign_StaticListEnumerator_6(struct StaticListEnumerator_6 **const left, struct StaticListEnumerator_6 *const right);

CODE_API extern void StaticListEnumerator_6_ctor(struct StaticListEnumerator_6 *const self, struct StaticList_10 *list);

CODE_API extern struct StaticListEnumerator_6 *StaticList_10_GetEnumerator(struct StaticList_10 *const self);

CODE_API extern bool_t StaticListEnumerator_6_MoveNext(struct StaticListEnumerator_6 *const self);

CODE_API extern struct FrontRadarObjectSpace *StaticListEnumera_6_get_Current(struct StaticListEnumerator_6 *const self);

CODE_API extern struct FrontRadarObjectSpace *SpaceExtensions_Clone_3(struct FrontRadarObjectSpace *space);

CODE_API extern void SampleProbabilPair_1_set_Sample(struct SampleProbabilityPair_1 *const self, struct FrontRadarObjectSpace *value);

CODE_API extern void SampleProbabiPair_1_set_Probabi(struct SampleProbabilityPair_1 *const self, float64_t value);

CODE_API extern void SampleProbabilityPair_1_ctor(struct SampleProbabilityPair_1 *const self, struct FrontRadarObjectSpace *sample, float64_t probability);

CODE_API extern int32_t StaticList_14_get_Count(struct StaticList_14 *const self);

CODE_API extern void StaticList_14_Add(struct StaticList_14 *const self, struct SampleProbabilityPair_1 *value);

CODE_API extern void SampleSet_1_Add(struct SampleSet_1 *const self, struct FrontRadarObjectSpace *sample, float64_t probability);

CODE_API extern void StaticListEnumerator_6_Dispose(struct StaticListEnumerator_6 *const self);

CODE_API extern struct StaticListEnumerator_9 *New_StaticListEnumerator_9(void);

CODE_API extern struct StaticListEnumerator_9 *Assign_StaticListEnumerator_9(struct StaticListEnumerator_9 **const left, struct StaticListEnumerator_9 *const right);

CODE_API extern void StaticListEnumerator_9_ctor(struct StaticListEnumerator_9 *const self, struct StaticList_14 *list);

CODE_API extern struct StaticListEnumerator_9 *StaticList_14_GetEnumerator(struct StaticList_14 *const self);

CODE_API extern bool_t StaticListEnumerator_9_MoveNext(struct StaticListEnumerator_9 *const self);

CODE_API extern struct SampleProbabilityPair_1 *StaticList_14_get_Item(struct StaticList_14 *const self, int32_t index);

CODE_API extern struct SampleProbabilityPair_1 *StaticListEnumera_9_get_Current(struct StaticListEnumerator_9 *const self);

CODE_API extern float64_t SampleProbabiPair_1_get_Probabi(struct SampleProbabilityPair_1 *const self);

CODE_API extern void StaticListEnumerator_9_Dispose(struct StaticListEnumerator_9 *const self);

CODE_API extern int32_t SampleSet_1_get_Count(struct SampleSet_1 *const self);

CODE_API extern void SampleSet_1_Normalize(struct SampleSet_1 *const self);

CODE_API extern void SampleSet_1_ctor_2(struct SampleSet_1 *const self, struct StaticList_10 *samples, struct StaticListFactory_1 *listFactory);

CODE_API extern void MarginalizedEvaluable_1_ctor(struct MarginalizedEvaluable_1 *const self, struct FrontRadarObjectDetectionModel *conditionalDistribution, struct SampleSet_1 *condition);

CODE_API extern int32_t StaticList_25_get_Count(struct StaticList_25 *const self);

CODE_API extern void StaticList_25_Add(struct StaticList_25 *const self, struct MarginalizedEvaluable_1 *value);

CODE_API extern struct ProbabilityGate_1 *New_ProbabilityGate_1(void);

CODE_API extern struct ProbabilityGate_1 *Assign_ProbabilityGate_1(struct ProbabilityGate_1 **const left, struct ProbabilityGate_1 *const right);

CODE_API extern float64_t Gaus_11_GetMaximMahalDistaSquar(float64_t gateProbability);

CODE_API extern struct SquaredMahalanobisDistance_1 *New_SquaredMahalanobiDistance_1(void);

CODE_API extern struct SquaredMahalanobisDistance_1 *Assign_SquaredMahalanDistance_1(struct SquaredMahalanobisDistance_1 **const left, struct SquaredMahalanobisDistance_1 *const right);

CODE_API extern void SquaredMahalanobDistance_1_ctor(struct SquaredMahalanobisDistance_1 *const self);

CODE_API extern struct IMetric_1 *New_IMetric_1(void);

CODE_API extern struct IMetric_1 *Assign_IMetric_1(struct IMetric_1 **const left, struct IMetric_1 *const right);

CODE_API extern void Gate_1_ctor(struct Gate_1 *const self, struct SquaredMahalanobisDistance_1 *metric, float64_t maximumDistance);

CODE_API extern void ProbabilityGate_1_ctor(struct ProbabilityGate_1 *const self, float64_t gateProbability);

CODE_API extern struct IEnumerable_3 *New_IEnumerable_3(void);

CODE_API extern struct IEnumerable_3 *Assign_IEnumerable_3(struct IEnumerable_3 **const left, struct IEnumerable_3 *const right);

CODE_API extern struct IEnumerable_4 *New_IEnumerable_4(void);

CODE_API extern struct IEnumerable_4 *Assign_IEnumerable_4(struct IEnumerable_4 **const left, struct IEnumerable_4 *const right);

CODE_API extern struct MeasurementAssociation_1 *New_MeasurementAssociation_1(void);

CODE_API extern struct MeasurementAssociation_1 *Assign_MeasurementAssociation_1(struct MeasurementAssociation_1 **const left, struct MeasurementAssociation_1 *const right);

CODE_API extern struct StaticList_9 *StatiListFacto_5_CreateInstan_1(struct StaticListFactory_5 *const self, int32_t capacity);

CODE_API extern struct StaticListEnumerator_13 *New_StaticListEnumerator_13(void);

CODE_API extern struct StaticListEnumerator_13 *Assign_StaticListEnumerator_13(struct StaticListEnumerator_13 **const left, struct StaticListEnumerator_13 *const right);

CODE_API extern void StaticListEnumerator_13_ctor(struct StaticListEnumerator_13 *const self, struct StaticList_21 *list);

CODE_API extern struct StaticListEnumerator_13 *StaticList_21_GetEnumerator(struct StaticList_21 *const self);

CODE_API extern bool_t StaticListEnumerato_13_MoveNext(struct StaticListEnumerator_13 *const self);

CODE_API extern struct Gaussian_3 *StaticList_21_get_Item(struct StaticList_21 *const self, int32_t index);

CODE_API extern struct Gaussian_3 *StaticListEnumer_13_get_Current(struct StaticListEnumerator_13 *const self);

CODE_API extern void StaticListEnumerator_13_Dispose(struct StaticListEnumerator_13 *const self);

CODE_API extern struct StaticListEnumerator_5 *New_StaticListEnumerator_5(void);

CODE_API extern struct StaticListEnumerator_5 *Assign_StaticListEnumerator_5(struct StaticListEnumerator_5 **const left, struct StaticListEnumerator_5 *const right);

CODE_API extern void StaticListEnumerator_5_ctor(struct StaticListEnumerator_5 *const self, struct StaticList_9 *list);

CODE_API extern struct StaticListEnumerator_5 *StaticList_9_GetEnumerator(struct StaticList_9 *const self);

CODE_API extern bool_t StaticListEnumerator_5_MoveNext(struct StaticListEnumerator_5 *const self);

CODE_API extern struct FrontRadarObjectSpace *StaticList_9_get_Item(struct StaticList_9 *const self, int32_t index);

CODE_API extern struct FrontRadarObjectSpace *StaticListEnumera_5_get_Current(struct StaticListEnumerator_5 *const self);

CODE_API extern void StaticListEnumerator_5_Dispose(struct StaticListEnumerator_5 *const self);

CODE_API extern int32_t Association_1_get_Count1(struct Association_1 *const self);

CODE_API extern int32_t Association_1_get_Count2(struct Association_1 *const self);

CODE_API extern struct float64_t_1D_5 *Space_6_op_Subtraction_4(struct Space *left, struct Space *right);

CODE_API extern void LinearAlgebra_SolveCholesky_1(struct LinearAlgebra *const self, struct float64_t_1D_25 *a, int32_t rows, struct float64_t_1D_25 *b);

CODE_API extern struct MatrixData_2 *MatrixMath_LinsolveHermitian_1(struct MatrixData_2 *left, struct MatrixData_2 *right);

CODE_API extern struct PositiveDefiniteMatrix_5 *PositiDefiniMatrix_5_get_Invers(struct PositiveDefiniteMatrix_5 *const self);

CODE_API extern struct MatrixData_1 *New_MatrixData_1(void);

CODE_API extern struct MatrixData_1 *Assign_MatrixData_1(struct MatrixData_1 **const left, struct MatrixData_1 *const right);

CODE_API extern void MatrixData_1_ctor(struct MatrixData_1 *const self, int32_t rows, int32_t columns);

CODE_API extern struct float64_t_1D_5 *MatrixData_1_get_DataReference(struct MatrixData_1 *const self);

CODE_API extern void LinearAlgebra_MatrixMultiply_22(struct LinearAlgebra *const self, struct float64_t_1D_5 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_25 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_5 *c);

CODE_API extern struct MatrixData_1 *MatrixMath_Multiply_40(bool_t transposeLeft, bool_t transposeRight, struct MatrixData *left, struct MatrixData_2 *right);

CODE_API extern void LinearAlgebra_MatrixMultiply_23(struct LinearAlgebra *const self, struct float64_t_1D_5 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_5 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_1 *c);

CODE_API extern struct MatrixData_3 *MatrixMath_Multiply_41(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_1 *left, struct MatrixData *right);

CODE_API extern struct MatrixData_3 *MatrixMath_Multiply_42(bool_t transposeFirst, bool_t transposeSecond, bool_t transposeThird, struct MatrixData *first, struct MatrixData_2 *second, struct MatrixData *third);

CODE_API extern float64_t Gaussi_3_GetMahalaDistanSquared(struct Gaussian_3 *const self, struct FrontRadarObjectSpace *sample);

CODE_API extern float64_t SquareMahalaDistanc_1_GetMetric(struct SquaredMahalanobisDistance_1 *const self, struct Gaussian_3 *object1, struct FrontRadarObjectSpace *object2);

CODE_API extern float64_t Gate_1_get_MaximumDistance(struct Gate_1 *const self);

CODE_API extern bool_t Gate_1_IsInside(struct Gate_1 *const self, struct Gaussian_3 *object1, struct FrontRadarObjectSpace *object2);

CODE_API extern int32_t Gaussian_3_get_Dimensions(struct Gaussian_3 *const self);

CODE_API extern bool_t MatrixData_2_get_IsScalar(struct MatrixData_2 *const self);

CODE_API extern struct int32_t_1D_5 *New_int32_t_1D_5(void);

CODE_API extern struct int32_t_1D_5 *Assign_int32_t_1D_5(struct int32_t_1D_5 **const left, struct int32_t_1D_5 *const right);

CODE_API extern void LinearAlgebra_FactorLU_2(struct LinearAlgebra *const self, struct float64_t_1D_25 *a, int32_t rows, struct int32_t_1D_5 *pivotIndices);

CODE_API extern float64_t MatrixMath_Det_1(struct MatrixData_2 *matrix);

CODE_API extern float64_t SquareMatrix_5_get_Determinant(struct PositiveDefiniteMatrix_5 *const self);

CODE_API extern float64_t Gaussian_3_Evaluate(struct Gaussian_3 *const self, float64_t mahalanobisSquared);

CODE_API extern float64_t Gaussian_3_Evaluate_1(struct Gaussian_3 *const self, struct FrontRadarObjectSpace *sample);

CODE_API extern void MeasurementAssociation_1_ctor(struct MeasurementAssociation_1 *const self, struct StaticList_21 *likelihoods, struct StaticList_26 *existences, struct StaticList_9 *measurements, struct MultipleLocalNearestNeighbor *associationAlgorithm, struct ProbabilityGate_1 *gate, struct StatiIPDATrackColleFactorProvid *factoryProvider);

CODE_API extern struct MeasurementAssociation_1 *MeasuremenAssociation_2_Create(struct StaticList_21 *likelihoodIntegralDistributions, struct StaticList_26 *existences, struct StaticList_9 *measurements, struct MultipleLocalNearestNeighbor *associationAlgorithm, struct ProbabilityGate_1 *gate, struct StatiIPDATrackColleFactorProvid *factoryProvider);

CODE_API extern struct StaticList_9 *Associati_1_GetAssociateObjects(struct Association_1 *const self, int32_t object1Index);

CODE_API extern struct MarginalizedEvaluable_1 *StaticList_25_get_Item(struct StaticList_25 *const self, int32_t index);

CODE_API extern float64_t FronRadaObjePara_get_CluttLambd(struct FrontRadarObjectParameters *const self);

CODE_API extern struct IEvaluable_3 *New_IEvaluable_3(void);

CODE_API extern struct IEvaluable_3 *Assign_IEvaluable_3(struct IEvaluable_3 **const left, struct IEvaluable_3 *const right);

CODE_API extern struct IPDA_1 *New_IPDA_1(void);

CODE_API extern struct IPDA_1 *Assign_IPDA_1(struct IPDA_1 **const left, struct IPDA_1 *const right);

CODE_API extern struct StaticListEnumerator_9 *SampleSet_1_GetEnumerator(struct SampleSet_1 *const self);

CODE_API extern struct FrontRadarObjectSpace *SampleProbabilPair_1_get_Sample(struct SampleProbabilityPair_1 *const self);

CODE_API extern struct Vector2D StaticList_3_get_Item(struct StaticList_3 *const self, int32_t index);

CODE_API extern bool_t Polygon_IsPointWithin(struct Vector2D point, struct StaticList_3 *polygonPoints);

CODE_API extern float64_t FronRadaObjePara_get_DetecProba(struct FrontRadarObjectParameters *const self);

CODE_API extern float64_t SinglDetecModel_1_get_GateProba(struct SingleDetectionModel_1 *const self);

CODE_API extern float64_t DetectionModel_1_Evaluate(struct PolygonDetectionModel *const self, struct CardinalitySpace *sample);

CODE_API extern float64_t MarginalizeEvaluable_1_Evaluate(struct MarginalizedEvaluable_1 *const self, struct CardinalitySpace *sample);

CODE_API extern struct StaticList_19 *New_StaticList_19(void);

CODE_API extern struct StaticList_19 *Assign_StaticList_19(struct StaticList_19 **const left, struct StaticList_19 *const right);

CODE_API extern struct TruePositivesHypothesis_1 *New_TruePositivesHypothesis_1(void);

CODE_API extern struct TruePositivesHypothesis_1 *Assign_TruePositivesHypothesi_1(struct TruePositivesHypothesis_1 **const left, struct TruePositivesHypothesis_1 *const right);

CODE_API extern struct TruePositivesHypothesis_1_1D_41 *New_TruePositivHypothes_1_1D_41(void);

CODE_API extern struct TruePositivesHypothesis_1_1D_41 *Assign_TruePositiHypoth_1_1D_41(struct TruePositivesHypothesis_1_1D_41 **const left, struct TruePositivesHypothesis_1_1D_41 *const right);

CODE_API extern void StaticList_19_ctor(struct StaticList_19 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_19 *StatiListFacto_2_CreateInstan_1(struct StaticListFactory_2 *const self, int32_t capacity);

CODE_API extern struct StaticList_11 *New_StaticList_11(void);

CODE_API extern struct StaticList_11 *Assign_StaticList_11(struct StaticList_11 **const left, struct StaticList_11 *const right);

CODE_API extern struct FrontRadarObjectSpace_1D_1 *New_FrontRadarObjectSpace_1D_1(void);

CODE_API extern struct FrontRadarObjectSpace_1D_1 *Assig_FrontRadarObjecSpace_1D_1(struct FrontRadarObjectSpace_1D_1 **const left, struct FrontRadarObjectSpace_1D_1 *const right);

CODE_API extern void StaticList_11_ctor(struct StaticList_11 *const self, int32_t maximumCount);

CODE_API extern struct StaticList_11 *StatiListFactor_3_CreateInstan(struct StaticListFactory_3 *const self, int32_t capacity);

CODE_API extern void TruePositivesHypothesis_1_ctor(struct TruePositivesHypothesis_1 *const self, float64_t weight, struct StaticList_11 *elements);

CODE_API extern int32_t StaticList_19_get_Count(struct StaticList_19 *const self);

CODE_API extern void StaticList_19_Add(struct StaticList_19 *const self, struct TruePositivesHypothesis_1 *value);

CODE_API extern int32_t StaticList_11_get_Count(struct StaticList_11 *const self);

CODE_API extern void StaticList_11_Add(struct StaticList_11 *const self, struct FrontRadarObjectSpace *value);

CODE_API extern void IPDA_1_ctor(struct IPDA_1 *const self, struct Gaussian_3 *spatialLikelihood, struct Existence *existence, struct MarginalizedEvaluable_1 *truePositiveLikelihood, struct StaticList_9 *elements, float64_t lambda, struct StatiIPDATrackColleFactorProvid *factoryProvider);

CODE_API extern struct IPDA_1 *IPDA_2_Create_1(struct Gaussian_3 *spatialLikelihood, struct Existence *existence, struct MarginalizedEvaluable_1 *truePositiveLikelihood, struct StaticList_9 *elements, float64_t lambda, struct StatiIPDATrackColleFactorProvid *factoryProvider);

CODE_API extern struct StaticList_19 *IPDA_1_GetHypotheses(struct IPDA_1 *const self);

CODE_API extern struct MeasurementSetLikelihood *IPDA_1_GetElementsLikelihood(struct IPDA_1 *const self);

CODE_API extern struct StaticListEnumerator_11 *New_StaticListEnumerator_11(void);

CODE_API extern struct StaticListEnumerator_11 *Assign_StaticListEnumerator_11(struct StaticListEnumerator_11 **const left, struct StaticListEnumerator_11 *const right);

CODE_API extern void StaticListEnumerator_11_ctor(struct StaticListEnumerator_11 *const self, struct StaticList_19 *list);

CODE_API extern struct StaticListEnumerator_11 *StaticList_19_GetEnumerator(struct StaticList_19 *const self);

CODE_API extern bool_t StaticListEnumerato_11_MoveNext(struct StaticListEnumerator_11 *const self);

CODE_API extern struct TruePositivesHypothesis_1 *StaticList_19_get_Item(struct StaticList_19 *const self, int32_t index);

CODE_API extern struct TruePositivesHypothesis_1 *StaticListEnumer_11_get_Current(struct StaticListEnumerator_11 *const self);

CODE_API extern struct StaticList_11 *TruePositiHypothe_1_get_Element(struct TruePositivesHypothesis_1 *const self);

CODE_API extern struct StaticListEnumerator_7 *New_StaticListEnumerator_7(void);

CODE_API extern struct StaticListEnumerator_7 *Assign_StaticListEnumerator_7(struct StaticListEnumerator_7 **const left, struct StaticListEnumerator_7 *const right);

CODE_API extern void StaticListEnumerator_7_ctor(struct StaticListEnumerator_7 *const self, struct StaticList_11 *list);

CODE_API extern struct StaticListEnumerator_7 *StaticList_11_GetEnumerator(struct StaticList_11 *const self);

CODE_API extern bool_t StaticListEnumerator_7_MoveNext(struct StaticListEnumerator_7 *const self);

CODE_API extern struct FrontRadarObjectSpace *StaticList_11_get_Item(struct StaticList_11 *const self, int32_t index);

CODE_API extern struct FrontRadarObjectSpace *StaticListEnumera_7_get_Current(struct StaticListEnumerator_7 *const self);

CODE_API extern void StaticListEnumerator_7_Dispose(struct StaticListEnumerator_7 *const self);

CODE_API extern struct FrontRadarObjectSpace *Tracki_1_SimplifFirstOrDefault(struct StaticList_11 *source);

CODE_API extern struct Type *Object_GetType_3(struct FrontRadarObjectSpace *const self);

CODE_API extern bool_t MatrixData_Equals(struct MatrixData *const self, struct MatrixData *other);

CODE_API extern bool_t Space_Equals(struct FrontRadarObjectSpace *const self, struct Space *other);

CODE_API extern bool_t Space_6_op_Equality_2(struct FrontRadarObjectSpace *left, struct Space *right);

CODE_API extern float64_t TruePositivHypothe_1_get_Weight(struct TruePositivesHypothesis_1 *const self);

CODE_API extern struct Matrix_13 *StaticList_17_get_Item(struct StaticList_17 *const self, int32_t index);

CODE_API extern void LinearAlgebra_SolveLU_2(struct LinearAlgebra *const self, struct float64_t_1D_25 *a, int32_t rows, struct int32_t_1D_5 *pivotIndices, struct float64_t_1D_25 *b);

CODE_API extern struct MatrixData_2 *MatrixMath_LinsolveSquare_2(struct MatrixData_2 *left, struct MatrixData_2 *right);

CODE_API extern struct MatrixData_2 *MatrixMath_Multiply_43(bool_t transposeFirst, bool_t transposeSecond, bool_t transposeThird, struct MatrixData_2 *first, struct MatrixData_2 *second, struct MatrixData_2 *third);

CODE_API extern void LinearAlgebra_MatrixMultiply_24(struct LinearAlgebra *const self, struct float64_t_1D_25 *a, int32_t rowsA, bool_t transposeA, struct float64_t_1D_5 *b, int32_t rowsB, bool_t transposeB, struct float64_t_1D_5 *c);

CODE_API extern struct MatrixData *MatrixMath_Multiply_44(bool_t transposeLeft, bool_t transposeRight, struct MatrixData_2 *left, struct MatrixData *right);

CODE_API extern struct Gaussian_5 *EKF_Update_5(struct Gaussian_5 *predictedState, struct Gaussian_3 *predictedMeasurement, struct FrontRadarObjectSpace *measurement, struct Matrix_13 *transitionMatrix);

CODE_API extern struct Object_1 *FronRadaObjeSpac_get_Ars308Obje(struct FrontRadarObjectSpace *const self);

CODE_API extern void StaticListEnumerator_11_Dispose(struct StaticListEnumerator_11 *const self);

CODE_API extern struct StaticList_9 *Associa_1_GetNotAssociatObjects(struct Association_1 *const self);

CODE_API extern struct InveCartMeasModelWithVectoVeloc *New_InvCartMeasModeWithVectVelo(void);

CODE_API extern struct InveCartMeasModelWithVectoVeloc *Ass_InvCartMeasModeWithVectVelo(struct InveCartMeasModelWithVectoVeloc **const left, struct InveCartMeasModelWithVectoVeloc *const right);

CODE_API extern struct FrontRadarObjectParameters *InveCartMeasMode_get_SensParam(struct InverseCartesianMeasuremeModel *const self);

CODE_API extern void InversCartesiMeasureModel_ctor(struct InverseCartesianMeasuremeModel *const self, struct FrontRadarObjectParameters *sensorParameters);

CODE_API extern void InvCarMeasModeWithVectVelo_ctor(struct InveCartMeasModelWithVectoVeloc *const self, struct FrontRadarObjectParameters *sensorParameters, float64_t egoVelocity, float64_t egoYawRate, float64_t egoAcceleration);

CODE_API extern void InversCartesMeasurModel_Transf(struct InverseCartesianMeasuremeModel *const self, struct FrontRadarObjectSpace *measurement, struct CASpace **state);

CODE_API extern void InvCarMeasModeWithVectVelo_Tran(struct InveCartMeasModelWithVectoVeloc *const self, struct FrontRadarObjectSpace *measurement, struct CASpace **state);

CODE_API extern void PositiDefinitMatrix_7_set_Item(struct PositiveDefiniteMatrix_7 *const self, float64_t row, float64_t column, float64_t value);

CODE_API extern struct StaticList_27 *Track_ProceFrontRadarObjecDetec(struct Tracking *const self, struct DateTime time_1, struct StaticList_9 *measurements);

CODE_API extern void CodeGenerationHelper_EntryPoint(void);

CODE_API extern void Bootstrap(void);

CODE_API extern void WriteProfile(void);

extern struct DateTime DateTime_1_MinValue;

extern struct DateTime DateTime_1_MaxValue;

extern struct ExistenceSpace *ExistenceSpace_1_Existent;

extern struct ExistenceSpace *ExistenceSpace_1_NonExistent;

extern struct TimeSpan TimeSpan_1_Zero;

extern struct TimeSpan TimeSpan_1_MaxValue;

extern struct TimeSpan TimeSpan_1_MinValue;


#endif /* GENERATED_CODE_H */
