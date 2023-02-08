/*
 * TestFrameInput_sf.c
 *
 * $Id: TestOutputFrame_sf.c 2 2019-09-19 09:28:50Z JuneXmas $
 */

#define S_FUNCTION_NAME  TestOutputFrame_sf
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"

typedef struct 
{
	int		idtc;
	char	*pName;
	mxArray	*pMatlabOBDValues;
	mxArray *pMatlabTestValues;
} testobdoutput_t;

typedef struct 
{
	int		nTimestep;
	int		iTimestep;
	double	*pTimestep;

	int				n_ifault;
	testobdoutput_t *p_ifault;
	int				n_cfault;
	testobdoutput_t *p_cfault;
	int				n_afl_count;
	testobdoutput_t *p_afl_count;
} testoutputframe_t;

testoutputframe_t testoutputframe = {0, 0, NULL, 0, NULL, 0, NULL, 0, NULL};

void create_testobdoutput_array(mxArray *pmx_testframe,
							   char *str_type,
							   char *str_obd_type,
							   int n_timesteps,
							   int *n_obdoutputs,
							   testobdoutput_t **pp_obdoutputs);

void create_testoutputframe(SimStruct *S);
void step_testoutputframe(SimStruct *S);
void destroy_testoutputframe(void);

void init_obd_values(void);
int get_obd_value(int index, char *str_obd_type);


void create_testobdoutput_array(mxArray *pmx_testframe,
							   char *str_type,
							   char *str_obd_type,
							   int n_timesteps,
							   int *n_obdoutputs,
							   testobdoutput_t **pp_obdoutputs)
{
	mxArray *pmx_dtc;
	mxArray *pmx_name;
	mxArray *pmx_array;
	mxArray *pmx_obd_diag_array;
	int i,nv,buflen,status;

	pmx_array = mxGetField(pmx_testframe, 0, str_type);
	if(pmx_array)
	{
		if(!mxIsStruct(pmx_array))
		{
			mexPrintf("The testframe.%s has a bad matlab type,"
				" must be an array of structures.\n", str_type);
			mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
		}

		/* get the size of array and allocate memory for it. */
		*n_obdoutputs = mxGetNumberOfElements(pmx_array);
		*pp_obdoutputs = (testobdoutput_t *)malloc(
			*n_obdoutputs * sizeof(testobdoutput_t));

		if(!*pp_obdoutputs)
		{
			mexPrintf("Failed to allocate memory for the testframe.%s array.\n.",str_type);
			mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
		}

		/* Memory allocated so start populating the array from the workspace items. */
		for(i = 0; i < *n_obdoutputs; i++)
		{
			pmx_name = mxGetField(pmx_array, i, "name");
			if(!pmx_name)
			{
				mexPrintf("testframe.%s(%d).name is missing.\n",str_type,i);
				mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
			}
			if(!mxIsChar(pmx_name))
			{
				mexPrintf("testframe.%s(%d).name has an incorrect type. "
					"It must be a string.\n",str_type,i);
				mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
			}

			/* get the string and compare with the name param. */
			buflen = (mxGetM(pmx_name) * mxGetN(pmx_name)) + 1;
			(*pp_obdoutputs)[i].pName = (char *)malloc(buflen);
			status = mxGetString(pmx_name, (*pp_obdoutputs)[i].pName, buflen);
			if(status != 0)
			{
				mexPrintf("Failed to copy testframe.%s(%d).name "
					"from the workspace.\n",str_type,i);
				mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
			}

			(*pp_obdoutputs)[i].pMatlabTestValues = mxGetField(pmx_array, i, "values");
			if(!(*pp_obdoutputs)[i].pMatlabTestValues)
			{
				mexPrintf("testframe.%s(%d).values is missing.\n",str_type,i);
				mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
			}
			if(!mxIsDouble((*pp_obdoutputs)[i].pMatlabTestValues))
			{
				mexPrintf("testframe.%s(%d).values has an incorrect type. "
					"It must be an array of doubles.\n",str_type,i);
				mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
			}

			nv = mxGetNumberOfElements((*pp_obdoutputs)[i].pMatlabTestValues);
			if(nv != n_timesteps)
			{
				mexPrintf("The testframe is incorrectly specified. "
					"Testframe.timesteps and testframe.%s(%d).values "
					"must have the same number of values.\n",str_type,i);
				mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
			}

			/* Get the DTC value from the workspace so that we can index into the obd_diag_array. */
			pmx_dtc = mexGetVariablePtr("base", (*pp_obdoutputs)[i].pName);
			if(!pmx_dtc)
			{
				mexPrintf("Can't find the DTC %s in the workspace.\n",(*pp_obdoutputs)[i].pName);
				mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
			}
			if(!mxIsDouble(pmx_dtc))
			{
				mexPrintf("The DTC %s in the workspace has a bad type. It must be a double.\n",(*pp_obdoutputs)[i].pName);
				mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
			}
			/* Get the value of the DTC. */
			(*pp_obdoutputs)[i].idtc = (int)mxGetPr(pmx_dtc)[0];


			/* test for an obd_diag_array in the workspace. */
			pmx_obd_diag_array = mexGetVariablePtr("base", "obd_diag_array");
			if(pmx_obd_diag_array)
			{
				if(!mxIsStruct(pmx_obd_diag_array))
				{
					mexPrintf("The obd_diag_array variable in the Matlab workspace "
						"has an incorrect type. It must be a structure.");
					mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
				}

				if((*pp_obdoutputs)[i].idtc > mxGetNumberOfElements(pmx_obd_diag_array))
				{
					mexPrintf("Error: DTC(%s=%d) is greater than the number "
						"of elements in the obd_diag_array(%d).\n", 
						(*pp_obdoutputs)[i].pName, 
						(*pp_obdoutputs)[i].idtc, 
						mxGetNumberOfElements(pmx_obd_diag_array));
					mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
				}
				
				/* Get a pointer to the obd value and do a sanity check on its type. */
				(*pp_obdoutputs)[i].pMatlabOBDValues = mxGetField(pmx_obd_diag_array, (*pp_obdoutputs)[i].idtc, str_obd_type);
				if(!(*pp_obdoutputs)[i].pMatlabOBDValues)
				{
					mexPrintf("Error: obd_diag_array(%d).%s doesn't exist.\n",
						(*pp_obdoutputs)[i].idtc, str_obd_type);
					mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
				}
				if(!mxIsDouble((*pp_obdoutputs)[i].pMatlabOBDValues))
				{
					mexPrintf("Error: obd_diag_array(%d).%s should be a double but isn't.\n",
						(*pp_obdoutputs)[i].idtc, str_obd_type);
					mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
				}
				if(mxGetNumberOfElements((*pp_obdoutputs)[i].pMatlabOBDValues) != 1)
				{
					mexPrintf("Error: obd_diag_array(%d).%s has %d values. Must only have 1 value.\n", 
						(*pp_obdoutputs)[i].idtc, str_obd_type, mxGetNumberOfElements((*pp_obdoutputs)[i].pMatlabOBDValues));
					mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
				}
			}
			else
			{
				(*pp_obdoutputs)[i].idtc = 0;
				(*pp_obdoutputs)[i].pMatlabOBDValues = NULL;
			}
		}
	}
}

void create_testoutputframe(SimStruct *S)
{
	mxArray *pmx_t;
	mxArray *pmx_testframe;
	int i;

	/* test for a testframe in the workspace. */
	pmx_testframe = mexGetVariablePtr("base", "testframe");
	if(pmx_testframe)
	{
		if(!mxIsStruct(pmx_testframe))
		{
			mexPrintf("The testframe variable in the Matlab workspace "
				"has an incorrect type. It must be a structure.\n");
			mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
		}

		pmx_t = mxGetField(pmx_testframe, 0, "t");
		if(!pmx_t)
		{
			mexPrintf("The testframe is missing the required timesteps field testframe.t.\n");
			mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
		}
		if(!mxIsDouble(pmx_t))
		{
			mexPrintf("The testframe.t variable has an incorrect type. "
				"It must be an array of doubles.");
			mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
		}

		/* Set the values in the testoutputframe structure. */
		testoutputframe.iTimestep = 0;
		testoutputframe.nTimestep = mxGetNumberOfElements(pmx_t);
		testoutputframe.pTimestep = (double *)malloc(testoutputframe.nTimestep * sizeof(double));

		/* Allocate memory ... */
		if(!testoutputframe.pTimestep)
		{
			mexPrintf("Failed to allocate memory for the timesteps in testframe.t\n.");
			mexErrMsgTxt("Error in TestOutputFrame, see Matlab workspace for details.");
		}
		/* ... and copy the values. */
		for(i = 0; i < testoutputframe.nTimestep; i++)
		{
			testoutputframe.pTimestep[i] = mxGetPr(pmx_t)[i];
		}

		create_testobdoutput_array(
			pmx_testframe,
			"ifault_out",
			"ifault",
			testoutputframe.nTimestep,
			&(testoutputframe.n_ifault),
			&(testoutputframe.p_ifault));
		
		create_testobdoutput_array(
			pmx_testframe,
			"cfault_out",
			"cfault",
			testoutputframe.nTimestep,
			&(testoutputframe.n_cfault),
			&(testoutputframe.p_cfault));

		create_testobdoutput_array(
			pmx_testframe,
			"afl_count_out",
			"afl_count",
			testoutputframe.nTimestep,
			&(testoutputframe.n_afl_count),
			&(testoutputframe.p_afl_count));
	}

}

int get_obd_value(int index, char *str_obd_type)
{
	mxArray *pmx_obd_diag_array;
	mxArray *pmx_values;
	int obd_value = 0;

	pmx_obd_diag_array = mexGetVariablePtr("base", "obd_diag_array");
	pmx_values = mxGetField(pmx_obd_diag_array, index, str_obd_type);
	obd_value = (int)mxGetPr(pmx_values)[0];
	return obd_value;
}

void init_obd_values(void)
{
	int i;
	char evalString[2048];

	for(i = 0; i < testoutputframe.n_ifault; i++)
	{
		/* initialise ifault in workspace to 0. */
		sprintf(evalString,"obd_diag_array(%s+1).ifault=0;",
			testoutputframe.p_ifault[i].pName);
		mexEvalString(evalString);
	}
	for(i = 0; i < testoutputframe.n_cfault; i++)
	{
		/* initialise cfault in workspace to 0. */
		sprintf(evalString,"obd_diag_array(%s+1).cfault=0;",
			testoutputframe.p_cfault[i].pName);
		mexEvalString(evalString);
	}
	for(i = 0; i < testoutputframe.n_afl_count; i++)
	{
		/* initialise afl_count in workspace to 0. */
		sprintf(evalString,"obd_diag_array(%s+1).afl_count=0;",
			testoutputframe.p_afl_count[i].pName);
		mexEvalString(evalString);
	}
}


void step_testoutputframe(SimStruct *S)
{
	real_T t = ssGetT(S);

	if(testoutputframe.iTimestep < testoutputframe.nTimestep 
		&& t >= testoutputframe.pTimestep[testoutputframe.iTimestep])
	{
		int		i;
		int		obdvalue;
		mxArray *pmxvalue;

		/*mexPrintf("\ntimestep[%g]>>\n",t);*/

		for(i = 0; i < testoutputframe.n_ifault; i++)
		{
			obdvalue = get_obd_value(testoutputframe.p_ifault[i].idtc,"ifault");
			pmxvalue = testoutputframe.p_ifault[i].pMatlabTestValues;
			mxGetPr(pmxvalue)[testoutputframe.iTimestep] = obdvalue;

			/*mexPrintf("[%g] ifault_out(%s,%d) = %d\n",t,
				testoutputframe.p_ifault[i].pName,
				testoutputframe.p_ifault[i].idtc,
				obdvalue);*/
		}

		for(i = 0; i < testoutputframe.n_cfault; i++)
		{
			obdvalue = get_obd_value(testoutputframe.p_cfault[i].idtc,"cfault");
			pmxvalue = testoutputframe.p_cfault[i].pMatlabTestValues;
			mxGetPr(pmxvalue)[testoutputframe.iTimestep] = obdvalue;

			/*mexPrintf("[%g] cfault_out(%s,%d) = %d\n",t,
				testoutputframe.p_cfault[i].pName,
				testoutputframe.p_cfault[i].idtc,
				obdvalue);*/
		}

		for(i = 0; i < testoutputframe.n_afl_count; i++)
		{
			obdvalue = get_obd_value(testoutputframe.p_afl_count[i].idtc,"afl_count");
			pmxvalue = testoutputframe.p_afl_count[i].pMatlabTestValues;
			mxGetPr(pmxvalue)[testoutputframe.iTimestep] = obdvalue;

			/*mexPrintf("[%g] afl_count_out(%s,%d) = %d\n",t,
				testoutputframe.p_afl_count[i].pName,
				testoutputframe.p_afl_count[i].idtc,
				obdvalue);*/
		}

		/* advance the index to the next timestep. */
		testoutputframe.iTimestep++;
	}
}

void destroy_testoutputframe(void)
{
	int i;
	for(i = 0; i < testoutputframe.n_ifault; i++)
	{
		free(testoutputframe.p_ifault[i].pName);
		testoutputframe.p_ifault[i].idtc = 0;
		testoutputframe.p_ifault[i].pMatlabOBDValues = NULL;
		testoutputframe.p_ifault[i].pMatlabTestValues = NULL;
	}
	free(testoutputframe.p_ifault);
	testoutputframe.n_ifault=0;

	for(i = 0; i < testoutputframe.n_cfault; i++)
	{
		free(testoutputframe.p_cfault[i].pName);
		testoutputframe.p_cfault[i].idtc = 0;
		testoutputframe.p_cfault[i].pMatlabOBDValues = NULL;
		testoutputframe.p_cfault[i].pMatlabTestValues = NULL;
	}
	free(testoutputframe.p_cfault);
	testoutputframe.n_cfault=0;

	for(i = 0; i < testoutputframe.n_afl_count; i++)
	{
		free(testoutputframe.p_afl_count[i].pName);
		testoutputframe.p_afl_count[i].idtc = 0;
		testoutputframe.p_afl_count[i].pMatlabOBDValues = NULL;
		testoutputframe.p_afl_count[i].pMatlabTestValues = NULL;
	}
	free(testoutputframe.p_afl_count);
	testoutputframe.n_afl_count=0;

	free(testoutputframe.pTimestep);
	testoutputframe.nTimestep=0;
	testoutputframe.iTimestep=0;
}

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
    ssSetNumSFcnParams(S, 0);  /* Number of expected parameters */
    ssSetNumContStates(S, 0);
    ssSetNumDiscStates(S, 0);

	/* No inputs and no outputs */
    if (!ssSetNumInputPorts(S, 0)) return;
    if (!ssSetNumOutputPorts(S, 0)) return;

    ssSetNumSampleTimes(S, 1);

    ssSetNumRWork(S, 0);
    ssSetNumIWork(S, 0);
    ssSetNumPWork(S, 0);
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
    ssSetSampleTime(S, 0, -1);
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
	create_testoutputframe(S);
	init_obd_values();
	/*mexPrintf("Finished create_testoutputframe(S)\n");*/
}
#endif /*  MDL_START */


/* Function: mdlOutputs =======================================================
 * Abstract:
 *    In this function, you compute the outputs of your S-function
 *    block. Generally outputs are placed in the output vector, ssGetY(S).
 */
static void mdlOutputs(SimStruct *S, int_T tid)
{
	step_testoutputframe(S);
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
	destroy_testoutputframe();
	/*mexPrintf("Finished destroy_testoutputframe():\n");*/
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
