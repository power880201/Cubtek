/*
 * TestFrameInput_sf.c
 * 
 * Currently supports the following input types in 
 * the test spreadsheet:
 *		ifault_in
 *		cfault_in
 *
 * $Id: TestInputFrame_sf.c 2 2019-09-19 09:28:50Z JuneXmas $
 */

#define S_FUNCTION_NAME  TestInputFrame_sf
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"

typedef struct 
{
	char	*pName;
	double	*pValues;
} testobdinput_t;

typedef struct 
{
	char	*pName;
	double	*pValues;
} testwsdata_t;

typedef struct 
{
	int		nTimestep;
	int		iTimestep;
	double	*pTimestep;

	int				n_ifault;
	testobdinput_t *p_ifault;

	int				n_cfault;
	testobdinput_t *p_cfault;

	int				n_wsdata;
	testwsdata_t   *p_wsdata;
} testinputframe_t;

testinputframe_t testinputframe = {0, 0, NULL, 0, NULL, 0, NULL, 0, NULL};

void create_testobdinput_array(mxArray *pmx_testframe,
							   char *str_type,
							   int n_timesteps,
							   int *n_obdinputs,
							   testobdinput_t **pp_obdinputs);
void create_testwsdatainput_array(mxArray *pmx_testframe,
							   int n_timesteps,
							   int *n_wsdata_in,
							   testwsdata_t **pp_wsdata_in);
void create_testinputframe(SimStruct *S);
void step_testinputframe(SimStruct *S);
void destroy_testinputframe(void);


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

void create_testobdinput_array(mxArray *pmx_testframe,
							   char *str_type,
							   int n_timesteps,
							   int *n_obdinputs,
							   testobdinput_t **pp_obdinputs)
{
	mxArray *pmx_t;
	mxArray *pmx_v;
	mxArray *pmx_name;
	mxArray *pmx_array;
	int i,k,nv,buflen,status;

	pmx_array = mxGetField(pmx_testframe, 0, str_type);
	if(pmx_array)
	{
		if(!mxIsStruct(pmx_array))
		{
			mexPrintf("The testframe.%s has a bad matlab type,"
				" must be an array of structures.\n", str_type);
			mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
		}

		/* get the size of array and allocate memory for it. */
		*n_obdinputs = mxGetNumberOfElements(pmx_array);
		*pp_obdinputs = (testobdinput_t *)malloc(
			*n_obdinputs * sizeof(testobdinput_t));

		if(!*pp_obdinputs)
		{
			mexPrintf("Failed to allocate memory for the testframe.%s array.\n.",str_type);
			mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
		}

		/* Memory allocated so start populating the array from the workspace items. */
		for(i = 0; i < *n_obdinputs; i++)
		{
			pmx_name = mxGetField(pmx_array, i, "name");
			if(!pmx_name)
			{
				mexPrintf("testframe.%s(%d).name is missing.\n",str_type,i);
				mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
			}
			if(!mxIsChar(pmx_name))
			{
				mexPrintf("testframe.%s(%d).name has an incorrect type. "
					"It must be a string.\n",str_type,i);
				mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
			}

			/* get the string and compare with the name param. */
			buflen = (mxGetM(pmx_name) * mxGetN(pmx_name)) + 1;
			(*pp_obdinputs)[i].pName = (char *)malloc(buflen);
			status = mxGetString(pmx_name, (*pp_obdinputs)[i].pName, buflen);
			if(status != 0)
			{
				mexPrintf("Failed to copy testframe.%s(%d).name "
					"from the workspace.\n",str_type,i);
				mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
			}

			pmx_v = mxGetField(pmx_array, i, "values");
			if(!pmx_v)
			{
				mexPrintf("testframe.%s(%d).values is missing.\n",str_type,i);
				mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
			}
			if(!mxIsDouble(pmx_v))
			{
				mexPrintf("testframe.%s(%d).values has an incorrect type. "
					"It must be an array of doubles.\n",str_type,i);
				mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
			}

			nv = mxGetNumberOfElements(pmx_v);
			if(nv != n_timesteps)
			{
				mexPrintf("The testframe is incorrectly specified. "
					"Testframe.timesteps and testframe.%s(%d).values "
					"must have the same number of values.\n",str_type,i);
				mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
			}

			(*pp_obdinputs)[i].pValues = (double*)malloc(nv * sizeof(double));
			if(!(*pp_obdinputs)[i].pValues)
			{
				mexPrintf("Malloc failed when copying testframe.%s(%d).values "
					"from the workspace.\n",str_type,i);
				mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
			}
			else
			{
				/* copy the values from the workspace. */
				for(k = 0; k < nv; k++)
				{
					(*pp_obdinputs)[i].pValues[k] = mxGetPr(pmx_v)[k];
				}
			}
		}
	}
}

void create_testwsdatainput_array(mxArray *pmx_testframe,
							   int n_timesteps,
							   int *n_wsdata_in,
							   testwsdata_t **pp_wsdata_in)
{
	mxArray *pmx_t;
	mxArray *pmx_v;
	mxArray *pmx_name;
	mxArray *pmx_array;
	int i,k,nv,buflen,status;

	pmx_array = mxGetField(pmx_testframe, 0, "wsdata_in");
	if(pmx_array)
	{
		if(!mxIsStruct(pmx_array))
		{
			mexPrintf("The testframe.wsdata_in has a bad matlab type,"
				" must be an array of structures.\n");
			mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
		}

		/* get the size of array and allocate memory for it. */
		*n_wsdata_in = mxGetNumberOfElements(pmx_array);
		*pp_wsdata_in = (testobdinput_t *)malloc(
			*n_wsdata_in * sizeof(testobdinput_t));

		if(!*pp_wsdata_in)
		{
			mexPrintf("Failed to allocate memory for the testframe.wsdata_in array.\n.");
			mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
		}

		/* Memory allocated so start populating the array from the workspace items. */
		for(i = 0; i < *n_wsdata_in; i++)
		{
			pmx_name = mxGetField(pmx_array, i, "name");
			if(!pmx_name)
			{
				mexPrintf("testframe.wsdata_in(%d).name is missing.\n",i);
				mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
			}
			if(!mxIsChar(pmx_name))
			{
				mexPrintf("testframe.wsdata_in(%d).name has an incorrect type. "
					"It must be a string.\n",i);
				mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
			}

			/* get the string and compare with the name param. */
			buflen = (mxGetM(pmx_name) * mxGetN(pmx_name)) + 1;
			(*pp_wsdata_in)[i].pName = (char *)malloc(buflen);
			status = mxGetString(pmx_name, (*pp_wsdata_in)[i].pName, buflen);
			if(status != 0)
			{
				mexPrintf("Failed to copy testframe.wsdata_in(%d).name "
					"from the workspace.\n",i);
				mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
			}

			pmx_v = mxGetField(pmx_array, i, "values");
			if(!pmx_v)
			{
				mexPrintf("testframe.wsdata_in(%d).values is missing.\n",i);
				mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
			}
			if(!mxIsDouble(pmx_v))
			{
				mexPrintf("testframe.wsdata_in(%d).values has an incorrect type. "
					"It must be an array of doubles.\n",i);
				mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
			}

			nv = mxGetNumberOfElements(pmx_v);
			if(nv != n_timesteps)
			{
				mexPrintf("The testframe is incorrectly specified. "
					"Testframe.timesteps and testframe.wsdata_in(%d).values "
					"must have the same number of values.\n",i);
				mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
			}

			(*pp_wsdata_in)[i].pValues = (double*)malloc(nv * sizeof(double));
			if(!(*pp_wsdata_in)[i].pValues)
			{
				mexPrintf("Malloc failed when copying testframe.wsdata_in(%d).values "
					"from the workspace.\n",i);
				mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
			}
			else
			{
				/* copy the values from the workspace. */
				for(k = 0; k < nv; k++)
				{
					(*pp_wsdata_in)[i].pValues[k] = mxGetPr(pmx_v)[k];
				}
			}
		}
	}
}

void create_testinputframe(SimStruct *S)
{
	mxArray *pmx_t;
	mxArray *pmx_v;
	mxArray *pmx_name;
	mxArray *pmx_array;
	mxArray *pmx_testframe;
	int i,k,nv,buflen,status;

	/* test for a testframe in the workspace. */
	pmx_testframe = mexGetVariablePtr("base", "testframe");
	if(pmx_testframe)
	{
		if(!mxIsStruct(pmx_testframe))
		{
			mexPrintf("The testframe variable in the Matlab workspace "
				"has an incorrect type. It must be a structure.\n");
			mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
		}

		pmx_t = mxGetField(pmx_testframe, 0, "t");
		if(!pmx_t)
		{
			mexPrintf("The testframe is missing the required timesteps field testframe.t.\n");
			mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
		}
		if(!mxIsDouble(pmx_t))
		{
			mexPrintf("The testframe.t variable has an incorrect type. "
				"It must be an array of doubles.");
			mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
		}

		/* Set the values in the testinputframe structure. */
		testinputframe.iTimestep = 0;
		testinputframe.nTimestep = mxGetNumberOfElements(pmx_t);
		testinputframe.pTimestep = (double *)malloc(testinputframe.nTimestep * sizeof(double));

		/* Allocate memory ... */
		if(!testinputframe.pTimestep)
		{
			mexPrintf("Failed to allocate memory for the timesteps in testframe.t\n.");
			mexErrMsgTxt("Error in TestInputFrame, see Matlab workspace for details.");
		}
		/* ... and copy the values. */
		for(i = 0; i < testinputframe.nTimestep; i++)
		{
			testinputframe.pTimestep[i] = mxGetPr(pmx_t)[i];
		}

		create_testobdinput_array(
			pmx_testframe,
			"ifault_in",
			testinputframe.nTimestep,
			&(testinputframe.n_ifault),
			&(testinputframe.p_ifault));
		
		create_testobdinput_array(
			pmx_testframe,
			"cfault_in",
			testinputframe.nTimestep,
			&(testinputframe.n_cfault),
			&(testinputframe.p_cfault));

		create_testwsdatainput_array(
			pmx_testframe,
			testinputframe.nTimestep,
			&(testinputframe.n_wsdata),
			&(testinputframe.p_wsdata));
	}

}

void step_testinputframe(SimStruct *S)
{
	real_T t = ssGetT(S);
	char evalString[2048];

	if(testinputframe.iTimestep < testinputframe.nTimestep 
		&& t >= testinputframe.pTimestep[testinputframe.iTimestep])
	{
		int i;

		for(i = 0; i < testinputframe.n_ifault; i++)
		{
			sprintf(evalString,"obd_diag_array(%s+1).ifault=%d;",
				testinputframe.p_ifault[i].pName,
				(int)(testinputframe.p_ifault[i].pValues[testinputframe.iTimestep]));
			mexEvalString(evalString);

			/*mexPrintf("[%g] obd_diag_array(%s).ifault=%d;\n",
				t,testinputframe.p_ifault[i].pName,
				(int)(testinputframe.p_ifault[i].pValues[testinputframe.iTimestep]));*/
		}

		for(i = 0; i < testinputframe.n_cfault; i++)
		{
			sprintf(evalString,"obd_diag_array(%s+1).cfault=%d;",
				testinputframe.p_cfault[i].pName,
				(int)(testinputframe.p_cfault[i].pValues[testinputframe.iTimestep]));
			mexEvalString(evalString);

			/*mexPrintf("[%g] obd_diag_array(%s).cfault=%d;\n",
				t,testinputframe.p_cfault[i].pName,
				(int)(testinputframe.p_cfault[i].pValues[testinputframe.iTimestep]));*/
		}
		for(i = 0; i < testinputframe.n_wsdata; i++)
		{
			sprintf(evalString,"%s=%d;",
				testinputframe.p_wsdata[i].pName,
				(int)(testinputframe.p_wsdata[i].pValues[testinputframe.iTimestep]));
			mexEvalString(evalString);
			/*mexPrintf("[%g] %s=%d;\n",
				t,testinputframe.p_wsdata[i].pName,
				(int)(testinputframe.p_wsdata[i].pValues[testinputframe.iTimestep]));*/
		}
		/* advance the index to the next timestep. */
		testinputframe.iTimestep++;
	}
}

void destroy_testinputframe(void)
{
	int i;
	for(i = 0; i < testinputframe.n_ifault; i++)
	{
		free(testinputframe.p_ifault[i].pName);
		free(testinputframe.p_ifault[i].pValues);
	}
	free(testinputframe.p_ifault);
	testinputframe.n_ifault=0;

	for(i = 0; i < testinputframe.n_cfault; i++)
	{
		free(testinputframe.p_cfault[i].pName);
		free(testinputframe.p_cfault[i].pValues);
	}
	free(testinputframe.p_cfault);
	testinputframe.n_cfault=0;
	for(i = 0; i < testinputframe.n_wsdata; i++)
	{
		free(testinputframe.p_wsdata[i].pName);
		free(testinputframe.p_wsdata[i].pValues);
	}
	free(testinputframe.p_wsdata);
	testinputframe.n_wsdata=0;
	free(testinputframe.pTimestep);
	testinputframe.nTimestep=0;
	testinputframe.iTimestep=0;
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
	create_testinputframe(S);
	/*mexPrintf("Finished create_testinputframe(S)\n");*/
}
#endif /*  MDL_START */


/* Function: mdlOutputs =======================================================
 * Abstract:
 *    In this function, you compute the outputs of your S-function
 *    block. Generally outputs are placed in the output vector, ssGetY(S).
 */
static void mdlOutputs(SimStruct *S, int_T tid)
{
	step_testinputframe(S);
}

#undef MDL_UPDATE  /* Change to #undef to remove function */
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



#undef MDL_DERIVATIVES  /* Change to #undef to remove function */
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
	destroy_testinputframe();
	/*mexPrintf("Finished destroy_testinputframe():\n");*/
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
