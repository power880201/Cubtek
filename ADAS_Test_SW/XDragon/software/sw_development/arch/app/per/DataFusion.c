/*
 * File: DataFusion.c
 *
 *
  *
  *   --- THIS FILE GENERATED BY S-FUNCTION BUILDER: 3.0 ---
  *
  *   This file is an S-function produced by the S-Function
  *   Builder which only recognizes certain fields.  Changes made
  *   outside these fields will be lost the next time the block is
  *   used to load, edit, and resave this file. This file will be overwritten
  *   by the S-function Builder block. If you want to edit this file by hand, 
  *   you must change it only in the area defined as:  
  *
  *        %%%-SFUNWIZ_defines_Changes_BEGIN
  *        #define NAME 'replacement text' 
  *        %%% SFUNWIZ_defines_Changes_END
  *
  *   DO NOT change NAME--Change the 'replacement text' only.
  *
  *   For better compatibility with the Simulink Coder, the
  *   "wrapper" S-function technique is used.  This is discussed
  *   in the Simulink Coder's Manual in the Chapter titled,
  *   "Wrapper S-functions".
  *
  *  -------------------------------------------------------------------------
  * | See matlabroot/simulink/src/sfuntmpl_doc.c for a more detailed template |
  *  ------------------------------------------------------------------------- 
 * Created: Fri Jul 22 13:09:50 2016
 * 
 *
 */
#include "TrackingWrapper.h"
#define S_FUNCTION_LEVEL 2
#define S_FUNCTION_NAME DataFusion
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
/* %%%-SFUNWIZ_defines_Changes_BEGIN --- EDIT HERE TO _END */
#define NUM_INPUTS          4
/* Input Port  0 */
#define IN_PORT_0_NAME      velocity
#define INPUT_0_WIDTH       1
#define INPUT_DIMS_0_COL    1
#define INPUT_0_DTYPE       real_T
#define INPUT_0_COMPLEX     COMPLEX_NO
#define IN_0_FRAME_BASED    FRAME_NO
#define IN_0_BUS_BASED      1
#define IN_0_BUS_NAME       VelocityList
#define IN_0_DIMS           1-D
#define INPUT_0_FEEDTHROUGH 1
#define IN_0_ISSIGNED        0
#define IN_0_WORDLENGTH      8
#define IN_0_FIXPOINTSCALING 1
#define IN_0_FRACTIONLENGTH  9
#define IN_0_BIAS            0
#define IN_0_SLOPE           0.125
/* Input Port  1 */
#define IN_PORT_1_NAME      yawRate
#define INPUT_1_WIDTH       1
#define INPUT_DIMS_1_COL    1
#define INPUT_1_DTYPE       real_T
#define INPUT_1_COMPLEX     COMPLEX_NO
#define IN_1_FRAME_BASED    FRAME_NO
#define IN_1_BUS_BASED      1
#define IN_1_BUS_NAME       YawRateList
#define IN_1_DIMS           1-D
#define INPUT_1_FEEDTHROUGH 1
#define IN_1_ISSIGNED        0
#define IN_1_WORDLENGTH      8
#define IN_1_FIXPOINTSCALING 1
#define IN_1_FRACTIONLENGTH  9
#define IN_1_BIAS            0
#define IN_1_SLOPE           0.125
/* Input Port  2 */
#define IN_PORT_2_NAME      objects
#define INPUT_2_WIDTH       1
#define INPUT_DIMS_2_COL    1
#define INPUT_2_DTYPE       real_T
#define INPUT_2_COMPLEX     COMPLEX_NO
#define IN_2_FRAME_BASED    FRAME_NO
#define IN_2_BUS_BASED      1
#define IN_2_BUS_NAME       ObjectList
#define IN_2_DIMS           1-D
#define INPUT_2_FEEDTHROUGH 1
#define IN_2_ISSIGNED        0
#define IN_2_WORDLENGTH      8
#define IN_2_FIXPOINTSCALING 1
#define IN_2_FRACTIONLENGTH  9
#define IN_2_BIAS            0
#define IN_2_SLOPE           0.125
/* Input Port  3 */
#define IN_PORT_3_NAME      obstacles
#define INPUT_3_WIDTH       1
#define INPUT_DIMS_3_COL    1
#define INPUT_3_DTYPE       real_T
#define INPUT_3_COMPLEX     COMPLEX_NO
#define IN_3_FRAME_BASED    FRAME_NO
#define IN_3_BUS_BASED      1
#define IN_3_BUS_NAME       ObstacleList
#define IN_3_DIMS           1-D
#define INPUT_3_FEEDTHROUGH 1
#define IN_3_ISSIGNED        0
#define IN_3_WORDLENGTH      8
#define IN_3_FIXPOINTSCALING 1
#define IN_3_FRACTIONLENGTH  9
#define IN_3_BIAS            0
#define IN_3_SLOPE           0.125

#define NUM_OUTPUTS          1
/* Output Port  0 */
#define OUT_PORT_0_NAME      tracks
#define OUTPUT_0_WIDTH       1
#define OUTPUT_DIMS_0_COL    1
#define OUTPUT_0_DTYPE       real_T
#define OUTPUT_0_COMPLEX     COMPLEX_NO
#define OUT_0_FRAME_BASED    FRAME_NO
#define OUT_0_BUS_BASED      1
#define OUT_0_BUS_NAME       TrackList
#define OUT_0_DIMS           1-D
#define OUT_0_ISSIGNED        1
#define OUT_0_WORDLENGTH      8
#define OUT_0_FIXPOINTSCALING 1
#define OUT_0_FRACTIONLENGTH  3
#define OUT_0_BIAS            0
#define OUT_0_SLOPE           0.125

#define NPARAMS              0

#define SAMPLE_TIME_0        INHERITED_SAMPLE_TIME
#define NUM_DISC_STATES      0
#define DISC_STATES_IC       [0]
#define NUM_CONT_STATES      0
#define CONT_STATES_IC       [0]

#define SFUNWIZ_GENERATE_TLC 1
#define SOURCEFILES "__SFB__TrackingWrapper.c__SFB__GeneratedCCode.c"
#define PANELINDEX           6
#define USE_SIMSTRUCT        0
#define SHOW_COMPILE_STEPS   0                   
#define CREATE_DEBUG_MEXFILE 1
#define SAVE_CODE_ONLY       0
#define SFUNWIZ_REVISION     3.0
/* %%%-SFUNWIZ_defines_Changes_END --- EDIT HERE TO _BEGIN */
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
#include "simstruc.h"
#include "DataFusion_bus.h"
/*
* Code Generation Environment flag (simulation or standalone target).
 */
static int_T isSimulationTarget;
/*  Utility function prototypes. */
static int_T GetRTWEnvironmentMode(SimStruct *S);
/* Macro used to check if Simulation mode is set to accelerator */
#define isDWorkPresent !(ssRTWGenIsCodeGen(S) && !isSimulationTarget)

extern void DataFusion_Outputs_wrapper(const VelocityList *velocity,
                          const YawRateList *yawRate,
                          const ObjectList *objects,
                          const ObstacleList *obstacles,
                          TrackList *tracks);

/*====================*
 * S-function methods *
 *====================*/
/* Function: mdlInitializeSizes ===============================================
 * Abstract:
 *   Setup sizes of the various vectors.
 */
static void mdlInitializeSizes(SimStruct *S)
{

    DECL_AND_INIT_DIMSINFO(inputDimsInfo);
    DECL_AND_INIT_DIMSINFO(outputDimsInfo);
    ssSetNumSFcnParams(S, NPARAMS);
     if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
	 return; /* Parameter mismatch will be reported by Simulink */
     }

    ssSetNumContStates(S, NUM_CONT_STATES);
    ssSetNumDiscStates(S, NUM_DISC_STATES);

    if (!ssSetNumInputPorts(S, NUM_INPUTS)) return;
    /*Input Port 0 */

  /* Register VelocityList datatype for Input port 0 */

    #if defined(MATLAB_MEX_FILE)
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY)
    {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(S, "VelocityList", &dataTypeIdReg);
      if(dataTypeIdReg == INVALID_DTYPE_ID) return;
      ssSetInputPortDataType(S,0, dataTypeIdReg);
    }
    #endif
    ssSetInputPortWidth(S, 0, INPUT_0_WIDTH);
    ssSetInputPortComplexSignal(S, 0, INPUT_0_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 0, INPUT_0_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 0, 1); /*direct input signal access*/
    ssSetBusInputAsStruct(S, 0,IN_0_BUS_BASED);
    ssSetInputPortBusMode(S, 0, SL_BUS_MODE);    /*Input Port 1 */

  /* Register YawRateList datatype for Input port 1 */

    #if defined(MATLAB_MEX_FILE)
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY)
    {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(S, "YawRateList", &dataTypeIdReg);
      if(dataTypeIdReg == INVALID_DTYPE_ID) return;
      ssSetInputPortDataType(S,1, dataTypeIdReg);
    }
    #endif
    ssSetInputPortWidth(S, 1, INPUT_1_WIDTH);
    ssSetInputPortComplexSignal(S, 1, INPUT_1_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 1, INPUT_1_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 1, 1); /*direct input signal access*/
    ssSetBusInputAsStruct(S, 1,IN_1_BUS_BASED);
    ssSetInputPortBusMode(S, 1, SL_BUS_MODE);    /*Input Port 2 */

  /* Register ObjectList datatype for Input port 2 */

    #if defined(MATLAB_MEX_FILE)
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY)
    {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(S, "ObjectList", &dataTypeIdReg);
      if(dataTypeIdReg == INVALID_DTYPE_ID) return;
      ssSetInputPortDataType(S,2, dataTypeIdReg);
    }
    #endif
    ssSetInputPortWidth(S, 2, INPUT_2_WIDTH);
    ssSetInputPortComplexSignal(S, 2, INPUT_2_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 2, INPUT_2_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 2, 1); /*direct input signal access*/
    ssSetBusInputAsStruct(S, 2,IN_2_BUS_BASED);
    ssSetInputPortBusMode(S, 2, SL_BUS_MODE);    /*Input Port 3 */

  /* Register ObstacleList datatype for Input port 3 */

    #if defined(MATLAB_MEX_FILE)
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY)
    {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(S, "ObstacleList", &dataTypeIdReg);
      if(dataTypeIdReg == INVALID_DTYPE_ID) return;
      ssSetInputPortDataType(S,3, dataTypeIdReg);
    }
    #endif
    ssSetInputPortWidth(S, 3, INPUT_3_WIDTH);
    ssSetInputPortComplexSignal(S, 3, INPUT_3_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 3, INPUT_3_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 3, 1); /*direct input signal access*/
    ssSetBusInputAsStruct(S, 3,IN_3_BUS_BASED);
    ssSetInputPortBusMode(S, 3, SL_BUS_MODE);
    if (!ssSetNumOutputPorts(S, NUM_OUTPUTS)) return;

  /* Register TrackList datatype for Output port 0 */

  #if defined(MATLAB_MEX_FILE)
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY)
    {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(S, "TrackList", &dataTypeIdReg);
      if(dataTypeIdReg == INVALID_DTYPE_ID) return;
        ssSetOutputPortDataType(S,0, dataTypeIdReg);
    }
    #endif

    ssSetBusOutputObjectName(S, 0, (void *) "TrackList");
    ssSetOutputPortWidth(S, 0, OUTPUT_0_WIDTH);
    ssSetOutputPortComplexSignal(S, 0, OUTPUT_0_COMPLEX);
    ssSetBusOutputAsStruct(S, 0,OUT_0_BUS_BASED);
    ssSetOutputPortBusMode(S, 0, SL_BUS_MODE);
    if (ssRTWGenIsCodeGen(S)) {
       isSimulationTarget = GetRTWEnvironmentMode(S);
    if (isSimulationTarget==-1) {
       ssSetErrorStatus(S, " Unable to determine a valid code generation environment mode");
       return;
     }
       isSimulationTarget |= ssRTWGenIsModelReferenceSimTarget(S);
    }
  
    /* Set the number of dworks */
    if (!isDWorkPresent) {
      if (!ssSetNumDWork(S, 0)) return;
    } else {
      if (!ssSetNumDWork(S, 5)) return;
    }


   if (isDWorkPresent) {
   
    /*
     * Configure the dwork 0 (u0."BUS")
     */
#if defined(MATLAB_MEX_FILE)

    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(S, "VelocityList", &dataTypeIdReg);
      if (dataTypeIdReg == INVALID_DTYPE_ID) return;
      ssSetDWorkDataType(S, 0, dataTypeIdReg);
    }

#endif

    ssSetDWorkUsageType(S, 0, SS_DWORK_USED_AS_DWORK);
    ssSetDWorkName(S, 0, "u0BUS");
    ssSetDWorkWidth(S, 0, DYNAMICALLY_SIZED);
    ssSetDWorkComplexSignal(S, 0, COMPLEX_NO);

    /*
     * Configure the dwork 1 (u1."BUS")
     */
#if defined(MATLAB_MEX_FILE)

    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(S, "YawRateList", &dataTypeIdReg);
      if (dataTypeIdReg == INVALID_DTYPE_ID) return;
      ssSetDWorkDataType(S, 1, dataTypeIdReg);
    }

#endif

    ssSetDWorkUsageType(S, 1, SS_DWORK_USED_AS_DWORK);
    ssSetDWorkName(S, 1, "u1BUS");
    ssSetDWorkWidth(S, 1, DYNAMICALLY_SIZED);
    ssSetDWorkComplexSignal(S, 1, COMPLEX_NO);

    /*
     * Configure the dwork 2 (u2."BUS")
     */
#if defined(MATLAB_MEX_FILE)

    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(S, "ObjectList", &dataTypeIdReg);
      if (dataTypeIdReg == INVALID_DTYPE_ID) return;
      ssSetDWorkDataType(S, 2, dataTypeIdReg);
    }

#endif

    ssSetDWorkUsageType(S, 2, SS_DWORK_USED_AS_DWORK);
    ssSetDWorkName(S, 2, "u2BUS");
    ssSetDWorkWidth(S, 2, DYNAMICALLY_SIZED);
    ssSetDWorkComplexSignal(S, 2, COMPLEX_NO);

    /*
     * Configure the dwork 3 (u3."BUS")
     */
#if defined(MATLAB_MEX_FILE)

    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(S, "ObstacleList", &dataTypeIdReg);
      if (dataTypeIdReg == INVALID_DTYPE_ID) return;
      ssSetDWorkDataType(S, 3, dataTypeIdReg);
    }

#endif

    ssSetDWorkUsageType(S, 3, SS_DWORK_USED_AS_DWORK);
    ssSetDWorkName(S, 3, "u3BUS");
    ssSetDWorkWidth(S, 3, DYNAMICALLY_SIZED);
    ssSetDWorkComplexSignal(S, 3, COMPLEX_NO);

    /*
     * Configure the dwork 4 (y0BUS)
     */
#if defined(MATLAB_MEX_FILE)

    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(S, "TrackList", &dataTypeIdReg);
      if (dataTypeIdReg == INVALID_DTYPE_ID) return;
      ssSetDWorkDataType(S, 4, dataTypeIdReg);
    }

#endif

    ssSetDWorkUsageType(S, 4, SS_DWORK_USED_AS_DWORK);
    ssSetDWorkName(S, 4, "y0BUS");
    ssSetDWorkWidth(S, 4, DYNAMICALLY_SIZED);
    ssSetDWorkComplexSignal(S, 4, COMPLEX_NO);
}
    ssSetNumSampleTimes(S, 1);
    ssSetNumRWork(S, 0);
    ssSetNumIWork(S, 0);
    ssSetNumPWork(S, 0);
    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);

    /* Take care when specifying exception free code - see sfuntmpl_doc.c */
    ssSetOptions(S, (SS_OPTION_EXCEPTION_FREE_CODE |
                     SS_OPTION_USE_TLC_WITH_ACCELERATOR | 
		     SS_OPTION_WORKS_WITH_CODE_REUSE));
}

# define MDL_SET_INPUT_PORT_FRAME_DATA
static void mdlSetInputPortFrameData(SimStruct  *S, 
                                     int_T      port,
                                     Frame_T    frameData)
{
    ssSetInputPortFrameData(S, port, frameData);
}
/* Function: mdlInitializeSampleTimes =========================================
 * Abstract:
 *    Specifiy  the sample time.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, SAMPLE_TIME_0);
    ssSetOffsetTime(S, 0, 0.0);
}


#define MDL_START  /* Change to #undef to remove function */
#if defined(MDL_START)
  /* Function: mdlStart =======================================================
   * Abstract:
   *    This function is called once at start of model execution. If you
   *    have states that should be initialized once, this is the place
   *    to do it.
   */
static void mdlStart(SimStruct *S)
{
    /* Bus Information */
    slDataTypeAccess *dta = ssGetDataTypeAccess(S);
    const char *bpath = ssGetPath(S);
	DTypeId ObjectListId = ssGetDataTypeId(S, "ObjectList");
	DTypeId ObstacleListId = ssGetDataTypeId(S, "ObstacleList");
	DTypeId TrackListId = ssGetDataTypeId(S, "TrackList");
	DTypeId VelocityListId = ssGetDataTypeId(S, "VelocityList");
	DTypeId YawRateListId = ssGetDataTypeId(S, "YawRateList");

	int_T *busInfo = (int_T *)malloc(100*sizeof(int_T));
	if(busInfo==NULL) {
        ssSetErrorStatus(S, "Memory allocation failure");
        return;
    }

      /* Calculate offsets of all primitive elements of the bus */

	busInfo[0] = dtaGetDataTypeElementOffset(dta, bpath,VelocityListId,0);
	busInfo[1] = dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[2] = dtaGetDataTypeElementOffset(dta, bpath,VelocityListId,1);
	busInfo[3] = 30 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint32"));
	busInfo[4] = dtaGetDataTypeElementOffset(dta, bpath,VelocityListId,2);
	busInfo[5] = 30 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[6] = dtaGetDataTypeElementOffset(dta, bpath,YawRateListId,0);
	busInfo[7] = dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[8] = dtaGetDataTypeElementOffset(dta, bpath,YawRateListId,1);
	busInfo[9] = 30 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint32"));
	busInfo[10] = dtaGetDataTypeElementOffset(dta, bpath,YawRateListId,2);
	busInfo[11] = 30 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[12] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,0);
	busInfo[13] = dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[14] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,1);
	busInfo[15] = 60 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint32"));
	busInfo[16] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,2);
	busInfo[17] = 60 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[18] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,3);
	busInfo[19] = 2400 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[20] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,4);
	busInfo[21] = 2400 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[22] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,5);
	busInfo[23] = 2400 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[24] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,6);
	busInfo[25] = 2400 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[26] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,7);
	busInfo[27] = 2400 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[28] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,8);
	busInfo[29] = 2400 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[30] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,9);
	busInfo[31] = 2400 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[32] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,10);
	busInfo[33] = 2400 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[34] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,11);
	busInfo[35] = 2400 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[36] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,12);
	busInfo[37] = 2400 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[38] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,13);
	busInfo[39] = 2400 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[40] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,14);
	busInfo[41] = 2400 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[42] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,15);
	busInfo[43] = 2400 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[44] = dtaGetDataTypeElementOffset(dta, bpath,ObjectListId,16);
	busInfo[45] = 2400 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[46] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,0);
	busInfo[47] = dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[48] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,1);
	busInfo[49] = 60 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint32"));
	busInfo[50] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,2);
	busInfo[51] = 60 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[52] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,3);
	busInfo[53] = 600 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[54] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,4);
	busInfo[55] = 600 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[56] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,5);
	busInfo[57] = 600 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[58] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,6);
	busInfo[59] = 600 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[60] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,7);
	busInfo[61] = 600 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[62] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,8);
	busInfo[63] = 600 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[64] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,9);
	busInfo[65] = 600 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[66] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,10);
	busInfo[67] = 600 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[68] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,11);
	busInfo[69] = 600 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[70] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,12);
	busInfo[71] = 600 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[72] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,13);
	busInfo[73] = 600 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[74] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,14);
	busInfo[75] = 600 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[76] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,15);
	busInfo[77] = 600 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[78] = dtaGetDataTypeElementOffset(dta, bpath,ObstacleListId,16);
	busInfo[79] = 600 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "boolean"));
	busInfo[80] = dtaGetDataTypeElementOffset(dta, bpath,TrackListId,0);
	busInfo[81] = dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint8"));
	busInfo[82] = dtaGetDataTypeElementOffset(dta, bpath,TrackListId,1);
	busInfo[83] = 15 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "uint32"));
	busInfo[84] = dtaGetDataTypeElementOffset(dta, bpath,TrackListId,2);
	busInfo[85] = 15 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[86] = dtaGetDataTypeElementOffset(dta, bpath,TrackListId,3);
	busInfo[87] = 15 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[88] = dtaGetDataTypeElementOffset(dta, bpath,TrackListId,4);
	busInfo[89] = 15 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[90] = dtaGetDataTypeElementOffset(dta, bpath,TrackListId,5);
	busInfo[91] = 15 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[92] = dtaGetDataTypeElementOffset(dta, bpath,TrackListId,6);
	busInfo[93] = 15 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[94] = dtaGetDataTypeElementOffset(dta, bpath,TrackListId,7);
	busInfo[95] = 15 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[96] = dtaGetDataTypeElementOffset(dta, bpath,TrackListId,8);
	busInfo[97] = 15 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[98] = dtaGetDataTypeElementOffset(dta, bpath,TrackListId,9);
	busInfo[99] = 15 * dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	ssSetUserData(S, busInfo);
    
    TrackingWrapper();
    Initialize();
}
#endif /*  MDL_START */

#define MDL_SET_INPUT_PORT_DATA_TYPE
static void mdlSetInputPortDataType(SimStruct *S, int port, DTypeId dType)
{
    ssSetInputPortDataType( S, 0, dType);
}
#define MDL_SET_OUTPUT_PORT_DATA_TYPE
static void mdlSetOutputPortDataType(SimStruct *S, int port, DTypeId dType)
{
    ssSetOutputPortDataType(S, 0, dType);
}

#define MDL_SET_DEFAULT_PORT_DATA_TYPES
static void mdlSetDefaultPortDataTypes(SimStruct *S)
{
  ssSetInputPortDataType( S, 0, SS_DOUBLE);
 ssSetOutputPortDataType(S, 0, SS_DOUBLE);
}

#define MDL_SET_WORK_WIDTHS
#if defined(MDL_SET_WORK_WIDTHS) && defined(MATLAB_MEX_FILE)

static void mdlSetWorkWidths(SimStruct *S)
{
  /* Set the width of DWork(s) used for marshalling the IOs */
  if (isDWorkPresent) {

     /* Update dwork 0 */
     ssSetDWorkWidth(S, 0, ssGetInputPortWidth(S, 0));
       
     /* Update dwork 1 */
     ssSetDWorkWidth(S, 1, ssGetInputPortWidth(S, 1));
       
     /* Update dwork 2 */
     ssSetDWorkWidth(S, 2, ssGetInputPortWidth(S, 2));
       
     /* Update dwork 3 */
     ssSetDWorkWidth(S, 3, ssGetInputPortWidth(S, 3));
       
     /* Update dwork 4 */
     ssSetDWorkWidth(S, 4, ssGetOutputPortWidth(S, 0));
        
    }
}

#endif
/* Function: mdlOutputs =======================================================
 *
*/
static void mdlOutputs(SimStruct *S, int_T tid)
{
    const char *velocity = (char *) ssGetInputPortSignal(S,0);
    const char *yawRate = (char *) ssGetInputPortSignal(S,1);
    const char *objects = (char *) ssGetInputPortSignal(S,2);
    const char *obstacles = (char *) ssGetInputPortSignal(S,3);
    char *tracks = (char *) ssGetOutputPortSignal(S,0);

	int_T* busInfo = (int_T *) ssGetUserData(S);

	/* Temporary bus copy declarations */
	VelocityList _u0BUS;
	YawRateList _u1BUS;
	ObjectList _u2BUS;
	ObstacleList _u3BUS;
	TrackList _y0BUS;

	/*Copy input bus into temporary structure*/
	(void) memcpy(&_u0BUS.count,velocity + busInfo[0], busInfo[1]);
	(void) memcpy(_u0BUS.timestamp,velocity + busInfo[2], busInfo[3]);
	(void) memcpy(_u0BUS.velocity,velocity + busInfo[4], busInfo[5]);
	(void) memcpy(&_u1BUS.count,yawRate + busInfo[6], busInfo[7]);
	(void) memcpy(_u1BUS.timestamp,yawRate + busInfo[8], busInfo[9]);
	(void) memcpy(_u1BUS.yawRate,yawRate + busInfo[10], busInfo[11]);
	(void) memcpy(&_u2BUS.timestampCount,objects + busInfo[12], busInfo[13]);
	(void) memcpy(_u2BUS.timestamp,objects + busInfo[14], busInfo[15]);
	(void) memcpy(_u2BUS.objectCount,objects + busInfo[16], busInfo[17]);
	(void) memcpy(_u2BUS.x,objects + busInfo[18], busInfo[19]);
	(void) memcpy(_u2BUS.y,objects + busInfo[20], busInfo[21]);
	(void) memcpy(_u2BUS.vx,objects + busInfo[22], busInfo[23]);
	(void) memcpy(_u2BUS.vy,objects + busInfo[24], busInfo[25]);
	(void) memcpy(_u2BUS.rollingCounter,objects + busInfo[26], busInfo[27]);
	(void) memcpy(_u2BUS.id,objects + busInfo[28], busInfo[29]);
	(void) memcpy(_u2BUS.ax,objects + busInfo[30], busInfo[31]);
	(void) memcpy(_u2BUS.existenceProbability,objects + busInfo[32], busInfo[33]);
	(void) memcpy(_u2BUS.dynamicProperty,objects + busInfo[34], busInfo[35]);
	(void) memcpy(_u2BUS.length,objects + busInfo[36], busInfo[37]);
	(void) memcpy(_u2BUS.width,objects + busInfo[38], busInfo[39]);
	(void) memcpy(_u2BUS.measurementStatus,objects + busInfo[40], busInfo[41]);
	(void) memcpy(_u2BUS.rcsValue,objects + busInfo[42], busInfo[43]);
	(void) memcpy(_u2BUS.obstacleProbability,objects + busInfo[44], busInfo[45]);
	(void) memcpy(&_u3BUS.timestampCount,obstacles + busInfo[46], busInfo[47]);
	(void) memcpy(_u3BUS.timestamp,obstacles + busInfo[48], busInfo[49]);
	(void) memcpy(_u3BUS.obstacleCount,obstacles + busInfo[50], busInfo[51]);
	(void) memcpy(_u3BUS.x,obstacles + busInfo[52], busInfo[53]);
	(void) memcpy(_u3BUS.y,obstacles + busInfo[54], busInfo[55]);
	(void) memcpy(_u3BUS.vx,obstacles + busInfo[56], busInfo[57]);
	(void) memcpy(_u3BUS.vy,obstacles + busInfo[58], busInfo[59]);
	(void) memcpy(_u3BUS.id,obstacles + busInfo[60], busInfo[61]);
	(void) memcpy(_u3BUS.obstacleType,obstacles + busInfo[62], busInfo[63]);
	(void) memcpy(_u3BUS.obstacleStatus,obstacles + busInfo[64], busInfo[65]);
	(void) memcpy(_u3BUS.length,obstacles + busInfo[66], busInfo[67]);
	(void) memcpy(_u3BUS.width,obstacles + busInfo[68], busInfo[69]);
	(void) memcpy(_u3BUS.angleRate,obstacles + busInfo[70], busInfo[71]);
	(void) memcpy(_u3BUS.ax,obstacles + busInfo[72], busInfo[73]);
	(void) memcpy(_u3BUS.angle,obstacles + busInfo[74], busInfo[75]);
	(void) memcpy(_u3BUS.obstacleTimestamp,obstacles + busInfo[76], busInfo[77]);
	(void) memcpy(_u3BUS.cipvFlag,obstacles + busInfo[78], busInfo[79]);
	
	DataFusion_Outputs_wrapper(&_u0BUS,&_u1BUS,&_u2BUS,&_u3BUS, &_y0BUS);

	/*Copy temporary structure into output bus*/
	(void) memcpy(tracks+ busInfo[80], &_y0BUS.count, busInfo[81]);
	(void) memcpy(tracks+ busInfo[82], _y0BUS.id, busInfo[83]);
	(void) memcpy(tracks+ busInfo[84], _y0BUS.x, busInfo[85]);
	(void) memcpy(tracks+ busInfo[86], _y0BUS.y, busInfo[87]);
	(void) memcpy(tracks+ busInfo[88], _y0BUS.g, busInfo[89]);
	(void) memcpy(tracks+ busInfo[90], _y0BUS.v, busInfo[91]);
	(void) memcpy(tracks+ busInfo[92], _y0BUS.a, busInfo[93]);
	(void) memcpy(tracks+ busInfo[94], _y0BUS.angle, busInfo[95]);
	(void) memcpy(tracks+ busInfo[96], _y0BUS.majorAxis, busInfo[97]);
	(void) memcpy(tracks+ busInfo[98], _y0BUS.minorAxis, busInfo[99]);
}



/* Function: mdlTerminate =====================================================
 * Abstract:
 *    In this function, you should perform any actions that are necessary
 *    at the termination of a simulation.  For example, if memory was
 *    allocated in mdlStart, this is the place to free it.
 */
static void mdlTerminate(SimStruct *S)
{
    /*Free stored bus information*/
    int_T *busInfo = (int_T *) ssGetUserData(S);
    if(busInfo!=NULL) {
      free(busInfo);
    }
}


static int_T GetRTWEnvironmentMode(SimStruct *S)
{
    int_T status;
    mxArray *plhs[1];
    mxArray *prhs[1];
    int_T err;
    
    /*
      * Get the name of the Simulink block diagram
    */
    prhs[0] = mxCreateString(ssGetModelName(ssGetRootSS(S)));
    plhs[0] = NULL;
    
    /*
      * Call "isSimulationTarget = rtwenvironmentmode(modelName)" in MATLAB
    */
    mexSetTrapFlag(1);
    err = mexCallMATLAB(1, plhs, 1, prhs, "rtwenvironmentmode");
    mexSetTrapFlag(0);
    mxDestroyArray(prhs[0]);
    
    /*
     * Set the error status if an error occurred
    */
    if (err) {
        if (plhs[0]) {
            mxDestroyArray(plhs[0]);
            plhs[0] = NULL;
        }
        ssSetErrorStatus(S, "Unknow error during call to 'rtwenvironmentmode'.");
        return -1;
    }
    
    /*
      * Get the value returned by rtwenvironmentmode(modelName)
    */
   if (plhs[0]) {
       status = (int_T) (mxGetScalar(plhs[0]) != 0);
       mxDestroyArray(plhs[0]);
       plhs[0] = NULL;
   }
    
    return (status);
}

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif

