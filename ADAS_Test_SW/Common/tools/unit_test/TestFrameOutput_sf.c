/*
 * TestFrameOutput_sf.c
 *
 * $Id: TestFrameOutput_sf.c 2 2019-09-19 09:28:50Z JuneXmas $
 */

#define S_FUNCTION_NAME  TestFrameOutput_sf
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"

#define NAME_PARAM			(ssGetSFcnParam(S,0))
#define SAMPLE_TIME_PARAM	((double)*mxGetPr(ssGetSFcnParam(S,1)))

/*====================*
 * S-function methods *
 *====================*/

/* Function: mdlInitializeSizes ===============================================
 * Abstract:
 *    The sizes information is used by Simulink to determine the S-function
 *    block's characteristics (number of inputs, outputs, states, etc.).
 */
static void mdlInitializeSizes(SimStruct *S)
{
    ssSetNumSFcnParams(S, 2);  /* Number of expected parameters */
    if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
        /* Return if number of expected != number of actual parameters */
        return;
    }

    ssSetNumContStates(S, 0);
    ssSetNumDiscStates(S, 0);

    if (!ssSetNumInputPorts(S, 1)) return;
    ssSetInputPortWidth(S, 0, 1);
    ssSetInputPortRequiredContiguous(S, 0, true);
    ssSetInputPortDirectFeedThrough(S, 0, 1);

	/* No outputs. */
    if (!ssSetNumOutputPorts(S, 0)) return;

    ssSetNumSampleTimes(S, 1);

    ssSetNumRWork(S, 0);
	/* number of timesteps and current timestep. */
    ssSetNumIWork(S, 2);
	/* name, timesteps, values. */
    ssSetNumPWork(S, 3);

    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);
    ssSetOptions(S, 0);
}

/* Function: mdlInitializeSampleTimes =========================================
 * Abstract:
 *    This function is used to specify the sample time(s) for your
 *    S-function. You must register the same number of sample times as
 *    specified in ssSetNumSampleTimes.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, SAMPLE_TIME_PARAM);
    ssSetOffsetTime(S, 0, 0.0);
}



#define MDL_INITIALIZE_CONDITIONS   /* Change to #undef to remove function */
#if defined(MDL_INITIALIZE_CONDITIONS)
  /* Function: mdlInitializeConditions ========================================
   * Abstract:
   *    In this function, you should initialize the continuous and discrete
   *    states for your S-function block.  The initial states are placed
   *    in the state vector, ssGetContStates(S) or ssGetRealDiscStates(S).
   *    You can also perform any other initialization activities that your
   *    S-function may require. Note, this routine will be called at the
   *    start of simulation and if it is present in an enabled subsystem
   *    configured to reset states, it will be call when the enabled subsystem
   *    restarts execution to reset the states.
   */
  static void mdlInitializeConditions(SimStruct *S)
  {
  }
#endif /* MDL_INITIALIZE_CONDITIONS */

/* 
 * Get the name of this instance of the block and add to the PWork vector.
 * The name is used to get a pointer to the TestFrame Input for the item.
 */
void CopyBlockName(SimStruct *S)
{
	const mxArray *pmxName = NAME_PARAM;
	int buflen,status;
	char *pName=NULL;

	if(!mxIsChar(pmxName))
	{
		mexErrMsgTxt("The Name input (param 0) has the wrong type. Must be a quoted (') string.");
	}
	buflen = (mxGetM(pmxName) * mxGetN(pmxName)) + 1;
	pName = (char*)malloc(buflen* sizeof(char));
	if(pName)
	{
		status = mxGetString(pmxName, pName, buflen);
		if(status != 0)
		{
			mexErrMsgTxt("Not enough mem available for name.");
		}
		/* Add it as the persistant data for this instance of the block. */
		ssGetPWork(S)[0] = pName;
	}
	else
	{
		mexErrMsgTxt("Failed to allocate memory for the Name parameter.");
	}
}

void CopyTestFrameTimeSteps(mxArray *pmxTestFrame, SimStruct *S)
{
	int nt,k;
	double *pt;
	mxArray *pmxt;

	pmxt = mxGetField(pmxTestFrame, 0, "t");
	if(!pmxt)
	{
		mexErrMsgTxt("mxGetField() Failed to get \"t\" from pmxTestFrame");
	}
	if(!mxIsDouble(pmxt))
	{
		mexPrintf("TestFrame.Timesteps should be an array of double but isn't.\n");
		mexErrMsgTxt("TestFrame.Timesteps has a bad matlab type.");
	}
	/* set the number of timesteps to the length of the array. */
	nt = mxGetNumberOfElements(pmxt);
	ssSetIWorkValue(S, 0, nt);

	pt = (double*)malloc(nt * sizeof(double));
	if(!pt)
	{
		mexErrMsgTxt("Failed to allocate memory for the TestFrame.Timesteps array.");
	}
	/* copy the values from the workspace. */
	for(k = 0; k < nt; k++)
	{
		pt[k]=mxGetPr(pmxt)[k];
	}
	/* store the pointer to the values. */
	ssGetPWork(S)[1] = pt;
}

void CopyTestFrameOutputValues(mxArray *pmxOutputs, int i, SimStruct *S)
{
	int nv,k;
	double *pv;
	mxArray *pmxv;

	pmxv = mxGetField(pmxOutputs, i, "values");
	if(!pmxv)
	{
		mexErrMsgTxt("mxGetField() Failed to get \"values\" from pmxOutputs");
	}
	if(!mxIsDouble(pmxv))
	{
		mexPrintf("values should be a double but isn't.\n");
		mexErrMsgTxt("values has a bad matlab type.");
	}

	nv = mxGetNumberOfElements(pmxv);
	if(nv != ssGetIWorkValue(S, 0))
	{
		mexPrintf("%s : number of timesteps is different to number of values.\n",ssGetPWork(S)[0]);
		mexErrMsgTxt("number of timesteps is different to number of values.");
	}

	/* store the pointer to the values that are in the workspace. */
	ssGetPWork(S)[2] = pmxv;
}

void CopyTestFrameOutputFromWS(SimStruct *S)
{
	mxArray *pmxTestFrame;
	mxArray *pmxOutputs;
	mxArray *pmxfield;
	int nin;
	char name_buffer[1024];
	int found_name=0;

	int nTimeSteps=0;
	int i,buflen,status;
	
	pmxTestFrame = mexGetVariablePtr("base","testframe");
	if(pmxTestFrame)
	{
		if(!mxIsStruct(pmxTestFrame))
		{
			mexErrMsgTxt("TestFrame has a bad matlab type, must be a structure.");
		}
		pmxOutputs = mxGetField(pmxTestFrame, 0, "output");
		if(pmxOutputs)
		{
			if(!mxIsStruct(pmxOutputs))
			{
				mexErrMsgTxt("TestFrame.Outputs has a bad matlab type, must be a structure.");
			}

			nin = mxGetNumberOfElements(pmxOutputs);

			for(i = 0; i < nin && !found_name; i++)
			{
				pmxfield = mxGetField(pmxOutputs, i, "name");
				if(!pmxfield)
				{
					mexErrMsgTxt("mxGetField() Failed to get name from TestFrame.Outputs");
				}
				if(!mxIsChar(pmxfield))
				{
					mexPrintf("TestFrame.Outputs(%d).name should be a string but isn't.\n",i);
					mexErrMsgTxt("name has a bad matlab type.");
				}
				buflen = (mxGetM(pmxfield) * mxGetN(pmxfield)) + 1;
				status = mxGetString(pmxfield, name_buffer, buflen);
				if(status != 0)
				{
					mexErrMsgTxt("Not enough space for name. String is truncated.");
				}

				if(strcmp(name_buffer,ssGetPWork(S)[0])==0)
				{
					CopyTestFrameTimeSteps(pmxTestFrame,S);
					CopyTestFrameOutputValues(pmxOutputs,i,S);
					found_name=1;
				}
			}

			/* don't report this at the moment. */
			if(0 && !found_name)
			{
				mexPrintf("Warning: TestFrameOutput(%s) has no TestFrame values in the workspace.\n",ssGetPWork(S)[0]);
				/* set the number of timesteps to be 0. */
				ssSetIWorkValue(S, 0, 0);
			}
		}
	}
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
	CopyBlockName(S);
	CopyTestFrameOutputFromWS(S);
	ssSetIWorkValue(S,1,0);		/* initialise the index into the timestamps. */
}
#endif /*  MDL_START */


/* Function: mdlOutputs =======================================================
 * Abstract:
 *    In this function, you compute the outputs of your S-function
 *    block. Generally outputs are placed in the output vector, ssGetY(S).
 */
static void mdlOutputs(SimStruct *S, int_T tid)
{
    const real_T *u = (const real_T*) ssGetInputPortSignal(S,0);
	real_T t = ssGetT(S);
	double *pt = ssGetPWork(S)[1];
	mxArray *pmxv = ssGetPWork(S)[2];
	int nt = ssGetIWorkValue(S, 0);
	int it = ssGetIWorkValue(S, 1);

	if(it < nt && t >= pt[it])
	{
		mxGetPr(pmxv)[it] = u[0];
		ssSetIWorkValue(S, 1, ++it);
	}
}



#define MDL_UPDATE  /* Change to #undef to remove function */
#if defined(MDL_UPDATE)
  /* Function: mdlUpdate ======================================================
   * Abstract:
   *    This function is called once for every major integration time step.
   *    Discrete states are typically updated here, but this function is useful
   *    for performing any tasks that should only take place once per
   *    integration step.
   */
  static void mdlUpdate(SimStruct *S, int_T tid)
  {
  }
#endif /* MDL_UPDATE */



#define MDL_DERIVATIVES  /* Change to #undef to remove function */
#if defined(MDL_DERIVATIVES)
  /* Function: mdlDerivatives =================================================
   * Abstract:
   *    In this function, you compute the S-function block's derivatives.
   *    The derivatives are placed in the derivative vector, ssGetdX(S).
   */
  static void mdlDerivatives(SimStruct *S)
  {
  }
#endif /* MDL_DERIVATIVES */



/* Function: mdlTerminate =====================================================
 * Abstract:
 *    In this function, you should perform any actions that are necessary
 *    at the termination of a simulation.  For example, if memory was
 *    allocated in mdlStart, this is the place to free it.
 */
static void mdlTerminate(SimStruct *S)
{
}


/*======================================================*
 * See sfuntmpl_doc.c for the optional S-function methods *
 *======================================================*/

/*=============================*
 * Required S-function trailer *
 *=============================*/

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif
