#include "GeneratedCCode.h"
#include "TrackingWrapper.h"
#include "DataFusion_bus.h"
#include <stdbool.h>
#include <stdlib.h>

struct Tracking *_self = NULL;

void TrackingWrapper()
{
	Bootstrap();
	_self = New_Tracking();
	Tracking_ctor_1(_self);
}

void Initialize()
{
	Tracking_Initialize(_self);
	_self->InitializeFromFrontRadarObjects = false;
	_self->InitializeFromMobilEye = true;
	_self->UpdateFromFrontRadarObjects = true;
	_self->UpdateFromMobilEye = true;
}

void CreateTrackListAndRemoveTrackListCReference(TrackList *tracks, struct StaticList_27 *trackListC)
{
	struct TrackWithMeasurements *trackWithMeasurementsC;
	struct Gaussian_5 *stateC;
	struct CASpace *expectationC;
	struct Existence* existenceC;
	int trackCount, i;
	double minimumExistenceProbability, existenceProbability, mahalanobisDistance;
	struct CovarianceEllipseParameters covarianceEllipseParameters;

	mahalanobisDistance = 10;
	minimumExistenceProbability = 0.99;

	if (trackListC == NULL)
	{
		return;
	}

	trackCount = StaticList_27_get_Count(trackListC);
	tracks->count = 0;

	for (i = 0; i < trackCount; i++)
	{
		trackWithMeasurementsC = StaticList_27_get_Item(trackListC, i);
		existenceC = GaussianTrack_get_Existence(&trackWithMeasurementsC->base);
		existenceProbability = Existenc_get_ExistenceProbabili(existenceC);

		if (existenceProbability < minimumExistenceProbability)
		{
			Assign_TrackWithMeasurements(&trackWithMeasurementsC, NULL);
			continue;
		}

		tracks->id[tracks->count] = (uint32_T)GaussianTrack_get_ID(&trackWithMeasurementsC->base);
		stateC = GaussianTrack_get_State(&trackWithMeasurementsC->base);
		expectationC = Gaussian_5_get_Expectation(stateC);
		tracks->x[tracks->count] = CVSpace_get_X(&expectationC->base);
		tracks->y[tracks->count] = CVSpace_get_Y(&expectationC->base);
		tracks->g[tracks->count] = CVSpace_get_G(&expectationC->base);
		tracks->v[tracks->count] = CVSpace_get_V(&expectationC->base);
		tracks->a[tracks->count] = CASpace_get_A(expectationC);

		covarianceEllipseParameters = Covari_GetCovariaEllipseParamet(stateC, mahalanobisDistance);

		tracks->angle[tracks->count] = covarianceEllipseParameters.Angle;
		tracks->majorAxis[tracks->count] = covarianceEllipseParameters.MajorSemiAxis;
		tracks->minorAxis[tracks->count] = covarianceEllipseParameters.MinorSemiAxis;
		tracks->count++;

		Assign_TrackWithMeasurements(&trackWithMeasurementsC, NULL);
		Assign_Existence(&existenceC, NULL);
		Assign_Gaussian_5(&stateC, NULL);
		Assign_CASpace(&expectationC, NULL);
	}
	Assign_StaticList_27(&trackListC, NULL);
}

void ProcessVelocity(uint32_T timestamp, real_T velocity)
{
	struct DateTime dateTime;
	struct Measure_2 *velocityC;

	DateTime_ctor(&dateTime, timestamp, DateTimeKind_Unspecified);
	
	velocityC = New_Measure_2();
	Measure_2_ctor(velocityC, velocity);
	
	Tracking_ProcessVelocity(_self, dateTime, velocityC);

	Assign_Measure_2(&velocityC, NULL);
}

void ProcessYawRate(uint32_T timestamp, real_T yawRate)
{
	struct DateTime dateTime;
	struct Measure_3 *yawRateC;

	DateTime_ctor(&dateTime, timestamp, DateTimeKind_Unspecified);
	
	yawRateC = New_Measure_3();
	Measure_3_ctor(yawRateC, yawRate);

	Tracking_ProcessYawRate(_self, dateTime, yawRateC);

	Assign_Measure_3(&yawRateC, NULL);
}

void ProcessMobilEyeDetections(uint32_T timestamp, TrackList *tracks, const ObstacleList *obstacles, uint32_T index)
{
	struct DateTime dateTime;
	struct StaticList_6 *detectionsC;
	struct StaticList_4 *obstacleListC;
	struct Obstacle *obstacleC;
	struct MobilEyeSpace *mobilEyeSpaceC;
	struct StaticList_27 *trackList;
	int maxMeasurementCount;
	int obstacleIndex, maximumObstacleCount, offset;

	maxMeasurementCount = 40;
	maximumObstacleCount = 60;

	DateTime_ctor(&dateTime, timestamp, DateTimeKind_Unspecified);

	detectionsC = New_StaticList_6();
	StaticList_6_ctor(detectionsC, maxMeasurementCount);

	obstacleListC = New_StaticList_4();
	StaticList_4_ctor(obstacleListC, maxMeasurementCount);

	for (obstacleIndex = 0; obstacleIndex < obstacles->obstacleCount[index]; obstacleIndex++)
	{
		mobilEyeSpaceC = New_MobilEyeSpace();
		MobilEyeSpace_ctor(mobilEyeSpaceC);
		offset = maximumObstacleCount*obstacleIndex + index;
		MobilEyeSpace_set_X(mobilEyeSpaceC, obstacles->x[offset]);
		MobilEyeSpace_set_Y(mobilEyeSpaceC, obstacles->y[offset]);
		MobilEyeSpace_set_Vx(mobilEyeSpaceC, obstacles->vx[offset]);
		MobilEyeSpace_set_Vy(mobilEyeSpaceC, obstacles->vy[offset]);

		StaticList_6_Add(detectionsC, mobilEyeSpaceC);
		Assign_MobilEyeSpace(&mobilEyeSpaceC, NULL);

		obstacleC = New_Obstacle();
		Obstacle_ctor(obstacleC, obstacles->obstacleTimestamp[offset], obstacles->id[offset],
			obstacles->x[offset], obstacles->y[offset], obstacles->vx[offset], obstacles->vy[offset],
			(ObstacleType)obstacles->obstacleType[offset], (ObstacleStatus)obstacles->obstacleStatus[offset], 
			obstacles->length[offset], obstacles->width[offset], obstacles->angleRate[offset],
			obstacles->ax[offset], obstacles->angle[offset], obstacles->cipvFlag[offset]);

		StaticList_4_Add(obstacleListC, obstacleC);
		Assign_Obstacle(&obstacleC, NULL);
	}

	trackList = Trackin_ProcessMobilEyeDetectio(_self, dateTime, detectionsC, obstacleListC);

	Assign_StaticList_6(&detectionsC, NULL);
	Assign_StaticList_4(&obstacleListC, NULL);

	CreateTrackListAndRemoveTrackListCReference(tracks, trackList);
}

void ProcessFrontRadarObjectDetections(uint32_T timestamp, TrackList *tracks, const ObjectList *objects, uint32_T index)
{
	struct DateTime dateTime;
	struct StaticList_9 *detectionsC;
	struct FrontRadarObjectSpace *frontRadarObjectSpaceC;
	struct StaticList_27 *trackList;
	struct Object_1 *obj;
	int objectIndex, maximumObjectCount, offset;

	maximumObjectCount = 60;

	DateTime_ctor(&dateTime, timestamp, DateTimeKind_Unspecified);

	detectionsC = New_StaticList_9();
	StaticList_9_ctor(detectionsC, 40);

	for (objectIndex = 0; objectIndex < objects->objectCount[index]; objectIndex++)
	{
		frontRadarObjectSpaceC = New_FrontRadarObjectSpace();
		FrontRadarObjectSpace_ctor(frontRadarObjectSpaceC);
		offset = maximumObjectCount*objectIndex + index;
		CVComponentsSpace_set_X(&frontRadarObjectSpaceC->base, objects->x[offset]);
		CVComponentsSpace_set_Y(&frontRadarObjectSpaceC->base, objects->y[offset]);
		CVComponentsSpace_set_Vx(&frontRadarObjectSpaceC->base, objects->vx[offset]);
		CVComponentsSpace_set_Vy(&frontRadarObjectSpaceC->base, objects->vy[offset]);
		FrontRadarObjectSpace_set_A(frontRadarObjectSpaceC, objects->ax[offset]);

		obj = New_Object_1();
		Object_1_ctor_1(obj, objects->rollingCounter[offset], objects->id[offset], objects->x[offset],
			objects->vx[offset], objects->ax[offset], objects->existenceProbability[offset],
			objects->dynamicProperty[offset], objects->y[offset], objects->length[offset],
			objects->width[offset], objects->measurementStatus[offset], objects->rcsValue[offset],
			objects->vy[offset], objects->obstacleProbability[offset]);
		FronRadaObjeSpac_set_Ars308Obje(frontRadarObjectSpaceC, obj);

		StaticList_9_Add(detectionsC, frontRadarObjectSpaceC);
		Assign_FrontRadarObjectSpace(&frontRadarObjectSpaceC, NULL);
		Assign_Object_1(&obj, NULL);
	}

	trackList = Track_ProceFrontRadarObjecDetec(_self, dateTime, detectionsC);

	Assign_StaticList_9(&detectionsC, NULL);

	CreateTrackListAndRemoveTrackListCReference(tracks, trackList);
}