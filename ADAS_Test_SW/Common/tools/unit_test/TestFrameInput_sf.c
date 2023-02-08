/*
 * TestFrameInput_sf.c
 *
 * $Id: TestFrameInput_sf.c 2 2019-09-19 09:28:50Z JuneXmas $
 */

#define S_FUNCTION_NAME  TestFrameInput_sf
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

	/* No inputs */
    if (!ssSetNumInputPorts(S, 0)) return;

    if (!ssSetNumOutputPorts(S, 1)) return;
    ssSetOutputPortWidth(S, 0, 1);

    ssSetNumSampleTimes(S, 1);

	/* current value */
    ssSetNumRWork(S, 1);
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

/****************************************************************************
 * Copy the name parameter from the block dialog and add to the persistent
 * data.
 ****************************************************************************/
void copy_name_param(SimStruct *S)
{
	const mxArray *pname_param = NAME_PARAM;
	char *pname = NULL;
	int buflen, status;

	if(!mxIsChar(pname_param))
	{
		mexErrMsgTxt("The name parameter in the block dialog has "
			"an incorrect type. Must be a quoted (') string.");
	}
	else
	{
		/* allocate memory and create a local copy of the name string. */
		buflen = (mxGetM(pname_param) * mxGetN(pname_param)) + 1;
		pname = (char *)malloc(buflen * sizeof(char));
		if(!pname)
		{
			mexErrMsgTxt(
				"Failed to allocate memory to copy the name parameter.");
		}
		else
		{
			/* copy the string. */
			status = mxGetString(pname_param, pname, buflen);
			if(status != 0)
			{
				mexErrMsgTxt(
					"mxGetString failed to copy the name parameter.");
			}
			else
			{
				/* add the pointer to the persistent data. */
				ssGetPWork(S)[0] = pname;
			}
		}
	}
}

void copy_timesteps(mxArray *pmx_testframe, SimStruct *S)
{
	int nt,k;
	double *pt;
	mxArray *pmxt;

	pmxt = mxGetField(pmx_testframe, 0, "t");
	if(!pmxt)
	{
		mexErrMsgTxt("testframe is missing the required field \"t\".");
	}
	if(!mxIsDouble(pmxt))
	{
		mexErrMsgTxt("testframe.t has an incorrect type. "
			"It should be an array of doubles.");
	}

	/* set the number of timesteps to the length of the array. */
	nt = mxGetNumberOfElements(pmxt);
	ssSetIWorkValue(S, 0, nt);

	pt = (double *)malloc(nt * sizeof(double));
	if(!pt)
	{
		mexErrMsgTxt("Failed to allocate memory for testframe.t");
	}
	/* copy the values from the workspace. */
	for(k = 0; k < nt; k++)
	{
		pt[k]=mxGetPr(pmxt)[k];
	}
	/* store the pointer to the values. */
	ssGetPWork(S)[1] = pt;
}

void copy_values(mxArray *pmx_input_array, int i, SimStruct *S)
{
	int nv,k;
	double *pv;
	mxArray *pmxv;

	pmxv = mxGetField(pmx_input_array, i, "values");
	if(!pmxv)
	{
		mexErrMsgTxt("mxGetField() Failed to get \"values\" from pmx_input_array");
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

	pv = (double*)malloc(nv * sizeof(double));
	if(!pv)
	{
		mexErrMsgTxt("malloc failed for the values.");
	}

	/* copy the values from the workspace. */
	for(k = 0; k < nv; k++)
	{
		pv[k]=mxGetPr(pmxv)[k];
	}
	/* store the pointer to the values. */
	ssGetPWork(S)[2] = pv;
}

void copy_test_input_from_matlab(SimStruct *S)
{
	mxArray *pmx_testframe = NULL;
	mxArray *pmx_input_array = NULL;
	mxArray *pmx_name_field = NULL;
	int ninputs;
	char name_buffer[1024];
	int found_name=0;
	int nTimeSteps=0;
	int i,buflen,status;

	/* test for a testframe in the workspace. */
	pmx_testframe = mexGetVariablePtr("base", "testframe");
	if(pmx_testframe)
	{
		if(!mxIsStruct(pmx_testframe))
		{
			mexErrMsgTxt("The testframe variable in the Matlab workspace "
				"has an incorrect type. It must be a structure.");
		}

		pmx_input_array = mxGetField(pmx_testframe, 0, "input");
		if(pmx_input_array)
		{
			if(!mxIsStruct(pmx_input_array))
			{
				mexErrMsgTxt("testframe.input has a bad matlab type,"
					" must be an array of structures.");
			}

			/* get the size of the input array. */
			ninputs = mxGetNumberOfElements(pmx_input_array);

			/* iterate through the array until a match is 
			   found with the block parameter name. */
			for(i = 0; i < ninputs && !found_name; i++)
			{
				pmx_name_field = mxGetField(pmx_input_array, i, "name");
				if(!pmx_name_field)
				{
					mexPrintf("testframe.input(%d) is missing the required "
						"\"name\" field.\n",i);
					mexErrMsgTxt("testframe.input is missing a required field."
						" See the matlab workspace for details.");
				}
				if(!mxIsChar(pmx_name_field))
				{
					mexPrintf("testframe.input(%d).name has an incorrect type. "
						"It should be a string.\n",i);
					mexErrMsgTxt("A testframe.input has an incorrect type."
						" See the matlab workspace for details.");
				}

				/* get the string and compare with the name param. */
				buflen = (mxGetM(pmx_name_field) * mxGetN(pmx_name_field)) + 1;
				status = mxGetString(pmx_name_field, name_buffer, buflen);
				if(status != 0)
				{
					mexErrMsgTxt(
						"mxGetString failed to copy the name parameter.");
				}
				/* test if the name matches the param name. */
				if(strcmp(name_buffer, ssGetPWork(S)[0])==0) 
				{
					copy_timesteps(pmx_testframe,S);
					copy_values(pmx_input_array,i,S);
					found_name=1;
				}
			}

			/* don't report this at the moment. */
			if(0 && !found_name)
			{
				mexPrintf("TestFrameInput(%s) has no TestFrame values in the workspace.\n",ssGetPWork(S)[0]);
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
	/* copy the name parameter from the block dialog and add to persistent data. */
	copy_name_param(S);
	/* copy this input from the testframe in the workspace. */
	copy_test_input_from_matlab(S);

	/* initialise the index into the timestamps. */
	ssSetIWorkValue(S,1,0);		
	/* initialise the output value. */
	ssSetRWorkValue(S,0,0.0);	
}
#endif /*  MDL_START */


/* Function: mdlOutputs =======================================================
 * Abstract:
 *    In this function, you compute the outputs of your S-function
 *    block. Generally outputs are placed in the output vector, ssGetY(S).
 */
static void mdlOutputs(SimStruct *S, int_T tid)
{
    real_T *y = ssGetOutputPortSignal(S,0);
	real_T t = ssGetT(S);
	double *pt = ssGetPWork(S)[1]; /* pointer to the timesteps array held locally. */
	double *pv = ssGetPWork(S)[2]; /* pointer to the values array held locally. */
	int nt = ssGetIWorkValue(S, 0); /* number of timesteps in the array. */
	int it = ssGetIWorkValue(S, 1); /* current index into the array. */

	if(it < nt && t >= pt[it])
	{
		y[0] = ssSetRWorkValue(S,0,pv[it]); /* set a new current value. */
		ssSetIWorkValue(S, 1, ++it);
	}
	else
	{
		y[0] = ssGetRWorkValue(S,0); /* output the current value. */
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
	/* Bit lazy with cleaning up memory but can be done manually in Matlab 
	   with a clear mex command. */
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
