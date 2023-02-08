#ifndef TRACKINGWRAPPER_H
#define TRACKINGWRAPPER_H

#include "GeneratedCCode.h"
#include "DataFusion_bus.h"
#include <stdbool.h>
#include <stdlib.h>

extern struct Tracking *_self;

void TrackingWrapper();

void Initialize();

void CreateTrackListAndRemoveTrackListCReference(TrackList *tracks, struct StaticList_27 *trackListC);

void ProcessVelocity(uint32_T timestamp, real_T velocity);

void ProcessYawRate(uint32_T timestamp, real_T yawRate);

void ProcessMobilEyeDetections(uint32_T timestamp, TrackList *tracks, const ObstacleList *obstacles, uint32_T index);

void ProcessFrontRadarObjectDetections(uint32_T timestamp, TrackList *tracks, const ObjectList *objects, uint32_T index);

#endif /* TRACKINGWRAPPER_H */