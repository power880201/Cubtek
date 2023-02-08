/*
  *
  *   --- THIS FILE GENERATED BY S-FUNCTION BUILDER: 3.0 ---
  *
  *   This file is a wrapper S-function produced by the S-Function
  *   Builder which only recognizes certain fields.  Changes made
  *   outside these fields will be lost the next time the block is
  *   used to load, edit, and resave this file. This file will be overwritten
  *   by the S-function Builder block. If you want to edit this file by hand, 
  *   you must change it only in the area defined as:  
  *
  *        %%%-SFUNWIZ_wrapper_XXXXX_Changes_BEGIN 
  *            Your Changes go here
  *        %%%-SFUNWIZ_wrapper_XXXXXX_Changes_END
  *
  *   For better compatibility with the Simulink Coder, the
  *   "wrapper" S-function technique is used.  This is discussed
  *   in the Simulink Coder User's Manual in the Chapter titled,
  *   "Wrapper S-functions".
  *
  *   Created: Fri Jul 22 13:09:50 2016
  */


/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif
#include "DataFusion_bus.h"

/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include "TrackingWrapper.h"
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1
#define y_width 1
/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
uint32_T cmpfunc (const void * a, const void * b)
{
   return ( *(uint32_T*)a - *(uint32_T*)b );
}
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output functions
 *
 */
void DataFusion_Outputs_wrapper(const VelocityList *velocity,
                          const YawRateList *yawRate,
                          const ObjectList *objects,
                          const ObstacleList *obstacles,
                          TrackList *tracks)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
uint32_T allMeasurementsTimestamp [240] [3], timeStamp;
    int index,
        allMeasurementsIndex,
        velocityId,
        yawRateId,
        objectId,
        obstacleId,
        allMeasurementsCount,
        rowIndex,
        measurementId;
    static uint32_T lastTimestamp = 0;

    allMeasurementsIndex = 0;
    velocityId = 0;
    yawRateId = 1;
    objectId = 2;
    obstacleId = 3;
    allMeasurementsCount = velocity->count + yawRate->count + objects->timestampCount + obstacles->timestampCount;
    tracks->count = 0;
    for(index=0; index<velocity->count; index++)
    {
        allMeasurementsTimestamp[allMeasurementsIndex][0] = velocity->timestamp[index];
        allMeasurementsTimestamp[allMeasurementsIndex][1] = velocityId;
        allMeasurementsTimestamp[allMeasurementsIndex][2] = index;
        allMeasurementsIndex++;
    }

    for(index = 0; index<yawRate->count; index++)
    {
        allMeasurementsTimestamp[allMeasurementsIndex][0] = yawRate->timestamp[index];
        allMeasurementsTimestamp[allMeasurementsIndex][1] = yawRateId;
        allMeasurementsTimestamp[allMeasurementsIndex][2] = index;
        allMeasurementsIndex++;
    }

    for (index = 0; index<objects->timestampCount; index++)
    {
        allMeasurementsTimestamp[allMeasurementsIndex][0] = objects->timestamp[index];
        allMeasurementsTimestamp[allMeasurementsIndex][1] = objectId;
        allMeasurementsTimestamp[allMeasurementsIndex][2] = index;
        allMeasurementsIndex++;
    }

    for (index = 0; index<obstacles->timestampCount; index++)
    {
        allMeasurementsTimestamp[allMeasurementsIndex][0] = obstacles->timestamp[index];
        allMeasurementsTimestamp[allMeasurementsIndex][1] = obstacleId;
        allMeasurementsTimestamp[allMeasurementsIndex][2] = index;
        allMeasurementsIndex++;
    }

    for(allMeasurementsIndex; allMeasurementsIndex<240; allMeasurementsIndex++)
    {
        allMeasurementsTimestamp[allMeasurementsIndex] [0] = 1000000000;
    }

    qsort(allMeasurementsTimestamp, 240, sizeof(allMeasurementsTimestamp[0]), cmpfunc);

    for(index = 0; index< allMeasurementsCount; index++)
    {
        timeStamp = allMeasurementsTimestamp[index][0];
        rowIndex = allMeasurementsTimestamp[index][2];
        measurementId = allMeasurementsTimestamp[index] [1];

        if (lastTimestamp > timeStamp)
        {
            timeStamp = lastTimestamp;
        }
        else
        {
            lastTimestamp = timeStamp;
        }

        if ( measurementId ==  velocityId)
        {
            ProcessVelocity(timeStamp, velocity->velocity[rowIndex]);
        }
        else if(measurementId == yawRateId)
        {
            ProcessYawRate(timeStamp, yawRate->yawRate[rowIndex]);
        }
        else if(measurementId == objectId)
        {
            ProcessFrontRadarObjectDetections(timeStamp, tracks, objects, rowIndex);
        }
        else if(measurementId == obstacleId)
        {
            ProcessMobilEyeDetections(timeStamp, tracks, obstacles, rowIndex);
        }
    }
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}