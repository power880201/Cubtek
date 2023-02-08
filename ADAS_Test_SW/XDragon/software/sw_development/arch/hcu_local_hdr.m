% Header defining ADAS Dragon constants

% =========== $Id: hcu_local_hdr.m 1605 2017-08-14 07:10:19Z HUNG $  =========
disp('Loading $Id: hcu_local_hdr.m 1605 2017-08-14 07:10:19Z HUNG $')

%-----------------------------
% General global constants
%-----------------------------

TRUE                                = boolean( 1 );
FALSE                               = boolean( 0 );

ZERO_FLOAT 	                        = single(0);
ZERO_INT 	                        = uint8(0);

ONE_PERCENT                         = single( 0.01 );
HUNDRED_PERCENT                    	= single(	1	);

%-----------------------------
% Unit conversion constants
%-----------------------------

KPH2MPS      = single( 1000/3600 );
MPH2KPH      = single( 1.6093    );
MPS2KPH      = single( 1/KPH2MPS );
KPH2MPH      = single( 1/MPH2KPH );
RPM2RADPS    = single( 2*pi/60   );
RADPS2RPM    = single( 1/RPM2RADPS);
DEG2RAD      = single( pi/180    );
RAD2DEG      = single( 180/pi    );
EPSILON      = single( 1e-6    );

%#########################################################################
% Model execution period
%#########################################################################

C_TICK_TIME_S                    = single(	0.005	    	)	;
C_TASK_1MS_S                     = (	C_TICK_TIME_S       )	;
C_TASK_5MS_S                     = (	C_TICK_TIME_S      	)	;
C_TASK_10MS_S                    = (	C_TICK_TIME_S * 2  	)	;
C_TASK_100MS_S                   = (	C_TICK_TIME_S * 20 	)	;
C_TASK_1000MS_S                  = (	C_TICK_TIME_S * 200	)	;

%#########################################################################
% Model ENUMs
%#########################################################################

% -------------------------------------------------
% ACC State (okokok)
% VACC_ACCSystemState_enum
% -------------------------------------------------
ENUM_ACCSTATE_DISABLED             	=	uint8(	0	);
ENUM_ACCSTATE_OFF                  	=	uint8(	1	);
ENUM_ACCSTATE_STANDBY              	=	uint8(	2	);
ENUM_ACCSTATE_SPEED                	=	uint8(	3	);
ENUM_ACCSTATE_HOLD                 	=	uint8(	4	);
ENUM_ACCSTATE_STANDSTILL           	=	uint8(	5	);
ENUM_ACCSTATE_OVERRIDE             	=	uint8(	6	);

% -------------------------------------------------
% AEB State (okokok)
% VAEB_AEBSystemState_enum
% -------------------------------------------------
ENUM_AEBSTATE_DISABLED             	=	uint8(	0	);
ENUM_AEBSTATE_STANDBY              	=	uint8(	1	);
ENUM_AEBSTATE_OPERATIONAL          	=	uint8(	2	);
ENUM_AEBSTATE_PREBRAKING           	=	uint8(	3	);
ENUM_AEBSTATE_AUTOBRAKING          	=	uint8(	4	);
ENUM_AEBSTATE_BRAKEASSIST          	=	uint8(	5	);

% -------------------------------------------------
% FCW State (okokok)
% VFCW_FCWSystemState_enum
% -------------------------------------------------
ENUM_FCWSTATE_DISABLED             	=	uint8(	0	);
ENUM_FCWSTATE_STANDBY              	=	uint8(	1	);
ENUM_FCWSTATE_OPERATIONAL          	=	uint8(	2	);
ENUM_FCWSTATE_WARNING              	=	uint8(	3	);
ENUM_FCWSTATE_PREFILL              	=	uint8(	4	);
ENUM_FCWSTATE_HAPTIC_ON            	=	uint8(	5	);
ENUM_FCWSTATE_HAPTIC_OFF           	=	uint8(	6	);
ENUM_FCWSTATE_DBS                  	=	uint8(	7	);

% -------------------------------------------------
% FCW Warning Mode (okokok)
% VHAL_FCWWarningModeH_enum
% -------------------------------------------------
ENUM_FCWWARNINGMODE_NORMAL           = uint8(  0  );
ENUM_FCWWARNINGMODE_EARLY            = uint8(  1  );
ENUM_FCWWARNINGMODE_LATE             = uint8(  2  );


% -------------------------------------------------
% EMS Hybrid State (okok)
% VHAL_EMSHybridOpState_enum
% -------------------------------------------------
ENUM_EMSHYBRIDOPSTATE_INITIALIZATION        = uint8(  0  );
ENUM_EMSHYBRIDOPSTATE_HYBRIDENABLE          = uint8(  1  );
ENUM_EMSHYBRIDOPSTATE_HYBRIDDISABLE         = uint8(  2  );
ENUM_EMSHYBRIDOPSTATE_INVALID               = uint8(  3  );

% -------------------------------------------------
% EMS State  (okok)
% VHAL_EMSOpState_enum
% -------------------------------------------------
ENUM_EMSOPSTATE_INITIALIZATION              = uint8(  0  );
ENUM_EMSOPSTATE_NORMAL                      = uint8(  1  );
ENUM_EMSOPSTATE_LIMPHOME                    = uint8(  2  );
ENUM_EMSOPSTATE_INVALID                     = uint8(  3  );


% ----------------------------------------------------
% BCM key status (okokok)
% VHAL_KeySwitchStatus_enum
% ----------------------------------------------------
ENUM_KEYSWITCH_LOCK                           = uint8(  0  );
ENUM_KEYSWITCH_ACC                            = uint8(  1  );
ENUM_KEYSWITCH_ON                             = uint8(  2  );
ENUM_KEYSWITCH_START                          = uint8(  3  );


% ---------------------------------------------------
% shift lever position (okok)
% VINP_ShifterPosn_enum
% ---------------------------------------------------
ENUM_SHIFTLEVER_P                  = uint8(  0  );
ENUM_SHIFTLEVER_LOW                = uint8(  1  );
ENUM_SHIFTLEVER_D2                 = uint8(  2  );
ENUM_SHIFTLEVER_D3                 = uint8(  3  );
ENUM_SHIFTLEVER_N                  = uint8(  4  );
ENUM_SHIFTLEVER_D                  = uint8(  5  );
ENUM_SHIFTLEVER_FAILURE            = uint8(  6  );
ENUM_SHIFTLEVER_R                  = uint8(  7  );

% ---------------------------------------------------
% new gear position (okok)
% VINP_NowGearPosn_enum
% ---------------------------------------------------
ENUM_GEARPOSN_PN                    = uint8(  0  );
ENUM_GEARPOSN_1ST                   = uint8(  1  );
ENUM_GEARPOSN_2ND                   = uint8(  2  );
ENUM_GEARPOSN_3RD                   = uint8(  3  );
ENUM_GEARPOSN_4TH                   = uint8(  4  );
ENUM_GEARPOSN_5TH                   = uint8(  5  );
ENUM_GEARPOSN_6TH                   = uint8(  6  );
ENUM_GEARPOSN_R                     = uint8(  7  );

% ---------------------------------------------------
% TCM fault status (okok)                          
% VINP_TCMFaultStatus_enum
% ---------------------------------------------------
ENUM_TCMFAULTSTATE_NORMAL                    = uint8(  0  );
ENUM_TCMFAULTSTATE_FAILNOLIMPHOME            = uint8(  1  );
ENUM_TCMFAULTSTATE_FAILLIMPHOME              = uint8(  2  );

% ---------------------------------------------------
% Torque Converter Clutch Status (okok)                          
% VHAL_TqConvClutchSt_enum
% ---------------------------------------------------
ENUM_TQCONVCLUTCHST_INACTIVE                  = uint8(  0  );
ENUM_TQCONVCLUTCHST_TRANSIENT                 = uint8(  1  );
ENUM_TQCONVCLUTCHST_LOCKED                    = uint8(  2  );

% ---------------------------------------------------
% driver mode (okok)
% VINP_DriverMode_enum
% ---------------------------------------------------
ENUM_DRIVERMODE_ECO                       = uint8(  0  );
ENUM_DRIVERMODE_GREEN                     = uint8(  1  );
ENUM_DRIVERMODE_NA1                       = uint8(  2  );
ENUM_DRIVERMODE_NA2                       = uint8(  3  );
ENUM_DRIVERMODE_DOWNSLOPE                 = uint8(  4  );
ENUM_DRIVERMODE_MIDALTITUDE               = uint8(  5  );
ENUM_DRIVERMODE_UPSLOPE1                  = uint8(  6  );
ENUM_DRIVERMODE_HOT1                      = uint8(  7  );
ENUM_DRIVERMODE_HIGHALTITUDE              = uint8(  8  );
ENUM_DRIVERMODE_UPSLOPE2                  = uint8(  9  );
ENUM_DRIVERMODE_WINTER                    = uint8(  10  );
ENUM_DRIVERMODE_CRUISECONTROL             = uint8(  11  );
ENUM_DRIVERMODE_HOT2                      = uint8(  12  );
ENUM_DRIVERMODE_TIPTRO                    = uint8(  13  );


% --------------------------------------------------
% system power mode (okokok)
% VPMM_SysPowerMode_enum
% --------------------------------------------------
ENUM_PMMMODE_INITIALIZE						= uint8(  0  );
ENUM_PMMMODE_POWER_UP                       = uint8(  1  );
ENUM_PMMMODE_NORMAL                         = uint8(  2  );
ENUM_PMMMODE_POWER_DOWN                     = uint8(  3  );
ENUM_PMMMODE_IDLE                           = uint8(  4  );
ENUM_PMMMODE_FAULT                          = uint8(  5  );


% ----------------------------------------------------
% fault state
% ----------------------------------------------------
ENUM_FAULTSTATE_PASS         			= uint8(  0  );
ENUM_FAULTSTATE_FAIL         			= uint8(  1  );
ENUM_FAULTSTATE_INDETERMINATE           = uint8(  2  );


% ----------------------------------------------------
% park brake binding status (okok)
% VINP_ParkBrakeBindSta_enum
% ----------------------------------------------------
ENUM_PARKBRAKEBINDSTA_RELEASE  			= uint8(  0  );
ENUM_PARKBRAKEBINDSTA_TIGHTENED 		= uint8(  1  );
ENUM_PARKBRAKEBINDSTA_UNAVAILABLE 		= uint8(  3  );

% ----------------------------------------------------
% ECM torque source (okok)
% VHAL_ECMTqSource_enum
% ----------------------------------------------------
ENUM_ECMTQSOURCE_INTERNAL      			= uint8(  0  );
ENUM_ECMTQSOURCE_HCU         			= uint8(  1  );
ENUM_ECMTQSOURCE_ADAS       			= uint8(  2  );
ENUM_ECMTQSOURCE_INTLIMITATION 			= uint8(  3  );
ENUM_ECMTQSOURCE_TCM        			= uint8(  4  );
ENUM_ECMTQSOURCE_ESC        			= uint8(  5  );

% ----------------------------------------------------
% ESC brake status (okok)
% VHAL_ESCBrakeStatus_enum
% ----------------------------------------------------
ENUM_ESCBRAKESTATUS_INTERNAL      			= uint8(  0  );
ENUM_ESCBRAKESTATUS_PREFILL      			= uint8(  1  );
ENUM_ESCBRAKESTATUS_AEBEMERGBRAKE  			= uint8(  2  );
ENUM_ESCBRAKESTATUS_DECECONTROL   			= uint8(  3  );
ENUM_ESCBRAKESTATUS_VEHICLEHOLDING 			= uint8(  4  );
ENUM_ESCBRAKESTATUS_VEHICLESTANDSTL			= uint8(  5  );
ENUM_ESCBRAKESTATUS_HAPTICBRAKE     		= uint8(  6  );

% ----------------------------------------------------
% TCM Gear Position Request Allowable (okok)
% VHAL_TCMGearPosnReqAllow_enum
% ----------------------------------------------------
ENUM_TCMGEARPOSNALL_NOTALLOW      			= uint8(  0  );
ENUM_TCMGEARPOSNALL_ALLOW        			= uint8(  1  );
ENUM_TCMGEARPOSNALL_DENY        			= uint8(  2  );

% ----------------------------------------------------
% MSA Status (okok)
% VHAL_SpdLimStatus_enum
% ----------------------------------------------------
ENUM_SPDLIMSTATUS_OFF          			= uint8(  0  );
ENUM_SPDLIMSTATUS_MSAON                 = uint8(  1  );
ENUM_SPDLIMSTATUS_MSAACTIVATED          = uint8(  2  );
ENUM_SPDLIMSTATUS_ISAACTIVATED          = uint8(  3  );

% ----------------------------------------------------
% Lane Quality (okokok)
% VHAL_LaneQualityL_enum, VHAL_LaneQualityR_enum
% VHAL_NextLaneQualityL_enum, VHAL_NextLaneQualityR_enum
% ----------------------------------------------------
ENUM_LANEQUALITY_VERY_LOW      			= uint8(  0  );
ENUM_LANEQUALITY_LOW         			= uint8(  1  );
ENUM_LANEQUALITY_MEDIUM        			= uint8(  2  );
ENUM_LANEQUALITY_HIGH          			= uint8(  3  );

% ----------------------------------------------------
% Lane Type (okokok)
% VHAL_LaneTypeL_enum, VHAL_LaneTypeR_enum
% VHAL_NextLaneTypeL_enum, VHAL_NextLaneTypeR_enum
% ----------------------------------------------------
ENUM_LANETYPE_UDECIDED        			= uint8(  0  );
ENUM_LANETYPE_SOLID           			= uint8(  1  );
ENUM_LANETYPE_ROAD_EDGE        			= uint8(  2  );
ENUM_LANETYPE_DASHED        			= uint8(  3  );
ENUM_LANETYPE_DOUBLE_LANE   			= uint8(  4  );
ENUM_LANETYPE_BOTTS_DOTS    			= uint8(  5  );
ENUM_LANETYPE_BARRIER       			= uint8(  6  );
ENUM_LANETYPE_INVALID       			= uint8(  15  );


% ----------------------------------------------------
% Lane Mark Color (okokok)
% VHAL_LaneMrkClrL_enum, VHAL_LaneMrkClrR_enum
% ----------------------------------------------------
ENUM_LANECOLOR_WHITE        			= uint8(  0  );
ENUM_LANECOLOR_YELLOW          			= uint8(  1  );
ENUM_LANECOLOR_BLUE             		= uint8(  2  );
ENUM_LANECOLOR_INVALID      			= uint8(  3  );

% ----------------------------------------------------
% EPM Go Decision (okokok)
% VHAL_EPMGoDecision_enum
% ----------------------------------------------------
ENUM_GODECISION_STOP        			= uint8(  0  );
ENUM_GODECISION_GO          			= uint8(  1  );
ENUM_GODECISION_UNDECIDED          		= uint8(  2  );
ENUM_GODECISION_NOT_CALCULATED     		= uint8(  15  );

% ----------------------------------------------------
% EPS Mode Request (okokok)
% VISP_EPSModeReq_enum, VINP_EPSModeReq_enum
% VSTR_EPSModeReqLFC_enum, VSTR_EPSModeReqLKA_enum
% ----------------------------------------------------
ENUM_EPSMODEREQ_INTERNAL       			= uint8(  0  );
ENUM_EPSMODEREQ_ANGLE           		= uint8(  1  );
ENUM_EPSMODEREQ_TORQUE             		= uint8(  2  );
ENUM_EPSMODEREQ_INVALID      			= uint8(  3  );

% ----------------------------------------------------
% ADAS LKA Status (okokok)
% VISP_ADASLKAStatus_enum, VINP_ADASLKAStatus_enum
% ----------------------------------------------------
ENUM_ADASLKASTATUS_OFF          			= uint8(  0  );
ENUM_ADASLKASTATUS_STANDBY           		= uint8(  1  );
ENUM_ADASLKASTATUS_ACTIVE             		= uint8(  2  );
ENUM_ADASLKASTATUS_NOTAVAIL_TEMP   			= uint8(  3  );
ENUM_ADASLKASTATUS_NOTAVAIL_PERM   			= uint8(  4  );

% ----------------------------------------------------
% ADAS LFC Status (okokok)
% VISP_ADASLFCStatus_enum, VINP_ADASLFCStatus_enum
% ----------------------------------------------------
ENUM_ADASLFCSTATUS_OFF          			= uint8(  0  );
ENUM_ADASLFCSTATUS_STANDBY           		= uint8(  1  );
ENUM_ADASLFCSTATUS_ACTIVE_NORMAL       		= uint8(  2  );
ENUM_ADASLFCSTATUS_ACTIVE_TRANSITION  		= uint8(  3  );
ENUM_ADASLFCSTATUS_NOTAVAIL_TEMP   			= uint8(  4  );
ENUM_ADASLFCSTATUS_NOTAVAIL_PERM   			= uint8(  5  );

% ----------------------------------------------------
% EPS LFC Status (okokok)
% VEPSS_EPSLFCStatus_enum, VHAL_EPSLFCStatus_enum
% ----------------------------------------------------
ENUM_EPSLFCSTATUS_OFF             			= uint8(  0  );
ENUM_EPSLFCSTATUS_READY               		= uint8(  1  );
ENUM_EPSLFCSTATUS_ACTIVE              		= uint8(  2  );
ENUM_EPSLFCSTATUS_TRANSITION                = uint8(  3  );
ENUM_EPSLFCSTATUS_NOTAVAIL_TEMP   			= uint8(  4  );
ENUM_EPSLFCSTATUS_NOTAVAIL_PERM   			= uint8(  5  );

% ----------------------------------------------------
% EPS LKA Status (okokok)
% VEPSS_EPSLKAStatus_enum, VHAL_EPSLKAStatus_enum
% ----------------------------------------------------
ENUM_EPSLKASTATUS_OFF             			= uint8(  0  );
ENUM_EPSLKASTATUS_READY               		= uint8(  1  );
ENUM_EPSLKASTATUS_ACTIVE              		= uint8(  2  );
ENUM_EPSLKASTATUS_NOTAVAIL_TEMP   			= uint8(  3  );
ENUM_EPSLKASTATUS_NOTAVAIL_PERM   			= uint8(  4  );

% ----------------------------------------------------
% EPS ADAS Abort Reason (okokok)
% VHAL_EPSLFCAbReason_enum, VEPSS_EPSLFCAbReason_enum,
% VHAL_EPSLKAAbReason_enum, VEPSS_EPSLKAAbReason_enum.
% VHAL_EPSADASAbReason_enum, VEPSS_EPSADASAbReason_enum
% ----------------------------------------------------
ENUM_EPSADASABREASON_NO_DRIVING_INTERRUPTION     = uint8(  0  );
ENUM_EPSADASABREASON_THERMAL_ERROR          	 = uint8(  1  );
ENUM_EPSADASABREASON_GEAR_POSITION_ERROR    	 = uint8(  2  );
ENUM_EPSADASABREASON_VEHICLE_SPEED_ERROR		 = uint8(  3  );
ENUM_EPSADASABREASON_TORQUE_ERROR      			 = uint8(  5  );
ENUM_EPSADASABREASON_REQUEST_TORQUE_ERROR		 = uint8(  6  );
ENUM_EPSADASABREASON_THERMAL_PROTECTION          = uint8(  7  );
ENUM_EPSADASABREASON_TRANSITION_GAIN_ERROR       = uint8(  8  );
ENUM_EPSADASABREASON_OTHER_DEFAULT           	 = uint8(  12  );


% ----------------------------------------------------
% Sensor Statue (okokok)
% VPER_CameraStatus_enum, VPER_FusionStatus_enum
% VPER_RadarStatus_enum
% ----------------------------------------------------
ENUM_SENSORSTATE_NORMAL                     = uint8(  0  );
ENUM_SENSORSTATE_FAILURE                    = uint8(  1  );
ENUM_SENSORSTATE_NOT_REL                    = uint8(  2  );

% ----------------------------------------------------
% Radar Rx Status (okokok)
% VDINR_RadRxInvalid_enum
% ----------------------------------------------------
ENUM_RADRXMISSING_NONE                      =	uint8(  0  );
ENUM_RADRXMISSING_SPEED                 	=	uint8(  1  );
ENUM_RADRXMISSING_YAW                       =	uint8(  2  );
ENUM_RADRXMISSING_SPD_YAW                   =	uint8(  3  );

% ----------------------------------------------------
% Radar Current Power (okokok)
% VDINR_RadCurrentPower_enum
% ----------------------------------------------------
ENUM_RADPOWER_LOW                       	=	uint8(  0  );
ENUM_RADPOWER_HIGH                      	=	uint8(  1  );

% ----------------------------------------------------
% Target Type (okokok)
% VPER_TargTypeVect30_enum, VHAL_CamObsXType_enum
% ----------------------------------------------------
ENUM_TARGETTYPE_VEHICLE                 	=	uint8(  0  );
ENUM_TARGETTYPE_TRUCK                      	=	uint8(  1  );
ENUM_TARGETTYPE_MOTORBIKE                   =	uint8(  2  );
ENUM_TARGETTYPE_PED                         =	uint8(  3  );
ENUM_TARGETTYPE_BICYCLE                 	=	uint8(  4  );
ENUM_TARGETTYPE_NONE                        =	uint8(  7  );


% ----------------------------------------------------
% Camera Obstacle status (okokok)
% VPER_CamObsStatusVect30_enum, VHAL_CamObsXStatus_enum
% ----------------------------------------------------
ENUM_CAMDYN_UNDEFINED                      =   uint8(  0   );
ENUM_CAMDYN_STANDING                       =   uint8(  1   );
ENUM_CAMDYN_STOPPED                        =   uint8(  2   );
ENUM_CAMDYN_MOVING                         =   uint8(  3   );
ENUM_CAMDYN_ONCOMING                       =   uint8(  4   );
ENUM_CAMDYN_PARKED                         =   uint8(  5   );


% ----------------------------------------------------
% Camera Obstacle valid (okokok)
% VHAL_CamObsXValid_enum
% ----------------------------------------------------
ENUM_CAMOBSVALID_NA                         =   uint8(  0   );
ENUM_CAMOBSVALID_NEWVALID                   =   uint8(  1   );
ENUM_CAMOBSVALID_OLDVALIE                   =   uint8(  2   );


% ----------------------------------------------------
% Camera Obstacle moves in and out (okokok)
% VHAL_CamObsXMoveInO_enum
% ----------------------------------------------------
ENUM_CAMOBSMOVE_UNDEFINED                   =   uint8(  0   );
ENUM_CAMOBSMOVE_INHOST                      =   uint8(  1   );
ENUM_CAMOBSMOVE_OUTHOST                     =   uint8(  2   );
ENUM_CAMOBSMOVE_CUTIN                       =   uint8(  3   );
ENUM_CAMOBSMOVE_CUTOUT                      =   uint8(  4   );


% ----------------------------------------------------
% Camera Obstacle blinker status (okokok)
% VHAL_CamObsXBlinker_enum
% ----------------------------------------------------
ENUM_CAMOBSBLINKER_UNAVAILABLE               =   uint8(  0   );
ENUM_CAMOBSBLINKER_OFF                       =   uint8(  1   );
ENUM_CAMOBSBLINKER_LEFT                      =   uint8(  2   );
ENUM_CAMOBSBLINKER_RIGHT                     =   uint8(  3   );
ENUM_CAMOBSBLINKER_BOTH                      =   uint8(  4   );


% ----------------------------------------------------
% Camera Obstacle Lane (okokok)
% VHAL_CamObsXLane_enum
% ----------------------------------------------------
ENUM_CAMOBSLANE_NOTASSIGN                    =   uint8(  0   );
ENUM_CAMOBSLANE_EGOLANE                      =   uint8(  1   );
ENUM_CAMOBSLANE_NEXTLANE                     =   uint8(  2   );
ENUM_CAMOBSLANE_INVALID                      =   uint8(  3   );


% ----------------------------------------------------
% FCW and AEB HMI Status (okokok)
% VFCW_FCWStateHMI_enum, VAEB_AEBStateHMI_enum
% ----------------------------------------------------
ENUM_HMISTATE_DISABLED                   	=	uint8(  0  );
ENUM_HMISTATE_STANDBY                     	=	uint8(  1  );
ENUM_HMISTATE_ACTIVE                        =	uint8(  2  );

% ----------------------------------------------------
% ACC HMI Status (okokok)
% VACC_ACCStateHMI_enum
% ----------------------------------------------------
ENUM_ACCHMISTATE_OFF               	=	uint8(	0	);
ENUM_ACCHMISTATE_STANDBY           	=	uint8(	1	);
ENUM_ACCHMISTATE_ACTIVE            	=	uint8(	2	);
ENUM_ACCHMISTATE_ERROR             	=	uint8(	3	);

% -------------------------------------------------
% LFC System status (okokok)
% VLFC_LFCState_enum
% -------------------------------------------------
ENUM_LFCSTATE_DISABLED       				= uint8(  0  );
ENUM_LFCSTATE_OFF             			 	= uint8(  1  );
ENUM_LFCSTATE_STANDBY                       = uint8(  2  ); 
ENUM_LFCSTATE_AUTOSTEERING                  = uint8(  3  ); 
ENUM_LFCSTATE_DEGRADED                      = uint8(  4  ); %%%%%%%%%
ENUM_LFCSTATE_SOFTEN                        = uint8(  5  ); %%%%%%%%
ENUM_LFCSTATE_ADASFAILURE                   = uint8(  6  );
ENUM_LFCSTATE_EPSRECOVERYPENDING            = uint8(  7  ); %%%%%%%


% -------------------------------------------------
% LKA System status (okokok)
% VLKA_LKAState_enum
% -------------------------------------------------
ENUM_LKASTATE_DISABLED       				= uint8(  0  );
ENUM_LKASTATE_OFF             				= uint8(  1  );
ENUM_LKASTATE_STANDBY                       = uint8(  2  ); 
ENUM_LKASTATE_OPERATIONAL                   = uint8(  3  ); 
ENUM_LKASTATE_LEFTASSISTING                 = uint8(  4  );
ENUM_LKASTATE_RIGHTASSISTING                = uint8(  5  ); 
ENUM_LKASTATE_ADASFAILURE                   = uint8(  6  );
ENUM_LKASTATE_EPSRECOVERYPENDING            = uint8(  7  ); %%%%%%%%%

% -------------------------------------------------
% Lane Lamp Status (okokok)
% VDIP_LeftLaneLampMode_enum, VDIP_RightLaneLampMode_enum
% -------------------------------------------------
ENUM_LANELAMPMODE_OFF                          = uint8(  0  );
ENUM_LANELAMPMODE_GREY             		       = uint8(  1  );
ENUM_LANELAMPMODE_GREEN                        = uint8(  2  ); 
ENUM_LANELAMPMODE_RED                          = uint8(  3  ); 
ENUM_LANELAMPMODE_FLASH                        = uint8(  4  ); 

% ----------------------------------------------------
% LFC HMI Status  (okokok)
% VDIP_LFCHMIStatus_enum
% ----------------------------------------------------
ENUM_LFCHMISTATUS_OFF                           = uint8(  0  );
ENUM_LFCHMISTATUS_STANDBY                       = uint8(  1  );
ENUM_LFCHMISTATUS_ACTING                        = uint8(  2  );
ENUM_LFCHMISTATUS_TRANSITION                    = uint8(  3  );


% ----------------------------------------------------
% LKA HMI Status  (okokok)
% VDIP_LKAHMIStatus_enum
% ----------------------------------------------------
ENUM_LKAHMISTATUS_OFF                           = uint8(  0  );
ENUM_LKAHMISTATUS_STANDBY                       = uint8(  1  );
ENUM_LKAHMISTATUS_ACTING                        = uint8(  2  );


% Not yet confirm
ENUM_PUFAULT_NOFAULT               	=	uint8(	0	);
ENUM_PUFAULT_TIMEOUT               	=	uint8(	1	);
ENUM_RADARDYN_UNDEFINED             =   uint8(  0   );
ENUM_RADARDYN_STANDING              =   uint8(  1   );
ENUM_RADARDYN_NEVERMOVED            =   uint8(  2   );
ENUM_RADARDYN_MOVING                =   uint8(  3   );
ENUM_RADARDYN_ONCOMING              =   uint8(  4   );


% -------------------------------------------------
% LCA System status (新增)
% VLCA_LCAState_enum
% -------------------------------------------------
ENUM_LCASTATE_DISABLED       				= uint8(  0  );
ENUM_LCASTATE_OFF             				= uint8(  1  );
ENUM_LCASTATE_STANDBY                       = uint8(  2  ); 
ENUM_LCASTATE_OPERATIONAL                   = uint8(  3  ); 
ENUM_LCASTATE_LEFTASSISTING                 = uint8(  4  );
ENUM_LCASTATE_RIGHTASSISTING                = uint8(  5  ); 
ENUM_LCASTATE_ADASFAILURE                   = uint8(  6  );
ENUM_LCASTATE_EPSRECOVERYPENDING            = uint8(  7  ); 

% -------------------------------------------------
% From IDIADA_SVN (新增)
% -------------------------------------------------

ENUM_BRAKEBOOSTFAULT_VALID         	=	uint8(	0	);
ENUM_BRAKEBOOSTFAULT_SENSORWIRING  	=	uint8(	1	);
ENUM_BRAKEBOOSTFAULT_SENSORUNDETERMINE	=	uint8(	2	);
ENUM_BRAKEBOOSTFAULT_BOOSTFAILURE  	=	uint8(	3	);


ENUM_CAMSTATUS_NO_FAILSAFE         	=	uint8(	0	);
ENUM_CAMSTATUS_LOW_SUN             	=	uint8(	1	);
ENUM_CAMSTATUS_BLUR_IMAGE          	=	uint8(	2	);
ENUM_CAMSTATUS_SMEAR_IMAGE         	=	uint8(	3	);
ENUM_CAMSTATUS_PARTIAL_TRANSP_BLOCK	=	uint8(	4	);
ENUM_CAMSTATUS_SPLASHES            	=	uint8(	5	);
ENUM_CAMSTATUS_OUT_OF_CALIBRATION  	=	uint8(	6	);
ENUM_CAMSTATUS_FULL_BLOCKAGE       	=	uint8(	7	);

ENUM_DOORSTATUS_CLOSED             	=	uint8(	0	);
ENUM_DOORSTATUS_OPENED             	=	uint8(	1	);

ENUM_ECMTQSOURCE_EXTERNAL          	=	uint8(	1	);
ENUM_ECMTQSOURCE_TORQUELIM         	=	uint8(	2	);

ENUM_GEARPOSNREQ_NO_REQUEST        	=	uint8(	0	);
ENUM_GEARPOSNREQ_1ST               	=	uint8(	1	);
ENUM_GEARPOSNREQ_2ND               	=	uint8(	2	);
ENUM_GEARPOSNREQ_3TH               	=	uint8(	3	);
ENUM_GEARPOSNREQ_4TH               	=	uint8(	4	);
ENUM_GEARPOSNREQ_5TH               	=	uint8(	5	);
ENUM_GEARPOSNREQ_6TH               	=	uint8(	6	);
ENUM_GEARPOSNREQ_7TH               	=	uint8(	7	);
ENUM_GEARPOSNREQ_8TH               	=	uint8(	8	);
ENUM_GEARPOSNREQ_9TH               	=	uint8(	9	);
ENUM_GEARPOSNREQ_10TH              	=	uint8(	10	);

ENUM_IGSASTATE_DISABLED            	=	uint8(	0	);
ENUM_IGSASTATE_STANDBY             	=	uint8(	1	);
ENUM_IGSASTATE_OPERATIONAL         	=	uint8(	2	);
ENUM_IGSASTATE_ACTIVE              	=	uint8(	3	);

ENUM_IGSASTATUS_OFF                	=	uint8(	0	);
ENUM_IGSASTATUS_MSASTANDBY         	=	uint8(	1	);
ENUM_IGSASTATUS_MSAENABLED         	=	uint8(	2	);
ENUM_IGSASTATUS_ISAENABLED         	=	uint8(	3	);
ENUM_IGSASTATUS_CSCENABLED         	=	uint8(	4	);
ENUM_IGSASTATUS_ERROR              	=	uint8(	5	);

ENUM_IMPACT_NORMAL                 	=	uint8(	0	);
ENUM_IMPACT_CRASH                  	=	uint8(	5	);
ENUM_IMPACT_INVALID                	=	uint8(	15	);

ENUM_PMMSTATE_INITIALIZE           	=	uint8(	0	);
ENUM_PMMSTATE_NORMAL               	=	uint8(	1	);
ENUM_PMMSTATE_IDLE                 	=	uint8(	2	);
ENUM_PMMSTATE_FAULT                	=	uint8(	3	);




PushButnOnTimeThres_sec = single (0.2);

% Left Steering switch 

LeftSwitchSet_RefVpct_limupr = single (96);
LeftSwitchSet_RefVpct_limlow = single (20);
LeftSwitchSet_RefVpct_tcfilt = single (0.1);
LeftSwitchSet_RefVpct_defval = single (100);
LeftSwitchSet_RefVpct_ovrdflg = boolean (0);
LeftSwitchSet_RefVpct_ovrdval = single (0);
LeftSwitchSet_RefVpct_srvcflg = boolean (0);
LeftSwitchSet_RefVpct_srvcval = single (0);

ACCOnButnVoltLow_V = single (3.1);		% 3.2V
ACCOnButnVoltHigh_V = single (3.3);
ACCOffVoltThres_V = single(4.5);
ACCOnButnType_enum = uint8 (1);
ACCSetButnVoltLow_V = single (2.7);		% 2.8V
ACCSetButnVoltHigh_V = single (2.9);
ACCResumeButnVoltLow_V = single (2.9);	% 3.0V
ACCResumeButnVoltHigh_V = single (3.1);

% Right Steering switch 

RightSwitchSet_RefVpct_limupr = single (80);
RightSwitchSet_RefVpct_limlow = single (5);
RightSwitchSet_RefVpct_tcfilt = single (0.1);
RightSwitchSet_RefVpct_defval = single (100);
RightSwitchSet_RefVpct_ovrdflg = boolean (0);
RightSwitchSet_RefVpct_ovrdval = single (0);
RightSwitchSet_RefVpct_srvcflg = boolean (0);
RightSwitchSet_RefVpct_srvcval = single (0);


ACCTimeAddButnVoltLow_V = single (2.8);		% 2.9V
ACCTimeAddButnVoltHigh_V = single (2.95);
ACCTimeDeceButnVoltLow_V = single (2.95);		% 3.0V
ACCTimeDeceButnVoltHigh_V = single (3.1);
LFCOnButnVoltLow_V = single (3.3);				% 3.3V	
LFCOnButnVoltHigh_V = single (3.4);
MSAOnButnVoltLow_V = single (2.65);  			% 2.7V
MSAOnButnVoltHigh_V = single (2.75); 	

% Brake sw active 

BrakeSwActive_flg_inverse = boolean (0);
BrakeSwActive_flg_deblim = uint8 (10);
BrakeSwActive_flg_debinc = uint8 (1);
BrakeSwActive_flg_debdec = uint8 (1);
BrakeSwActive_flg_ovrdflg = boolean (0);
BrakeSwActive_flg_ovrdval = boolean (0);
BrakeSwActive_flg_srvcflg = boolean (0);
BrakeSwActive_flg_srvcval = boolean (0);

% HWAccelPedaPosn1

HWAccelPedalPosn1_RefVpct_limupr = single (95);
HWAccelPedalPosn1_RefVpct_limlow = single (8);
HWAccelPedalPosn1_RefVpct_tcfilt = single (0.2);
HWAccelPedalPosn1_RefVpct_defval = single (0);
HWAccelPedalPosn1_RefVpct_ovrdflg = boolean (0);
HWAccelPedalPosn1_RefVpct_ovrdval = single (0);
HWAccelPedalPosn1_RefVpct_srvcflg = boolean (0);
HWAccelPedalPosn1_RefVpct_srvcval = single (0);

HWAPP1RefVpct_X_RefVpct = single ([14.8 82]);
HWAPP1_pct = single ([0 100]);

% HWAccelPedaPosn2

HWAccelPedalPosn2_RefVpct_limupr = single (50);
HWAccelPedalPosn2_RefVpct_limlow = single (4);
HWAccelPedalPosn2_RefVpct_tcfilt = single (0.2);
HWAccelPedalPosn2_RefVpct_defval = single (0);
HWAccelPedalPosn2_RefVpct_ovrdflg = boolean (0);
HWAccelPedalPosn2_RefVpct_ovrdval = single (0);
HWAccelPedalPosn2_RefVpct_srvcflg = boolean (0);
HWAccelPedalPosn2_RefVpct_srvcval = single (0);

HWAPP2RefVpct_X_RefVpct = single ([7.7 41.3]);
HWAPP2_pct = single([0 100]);

HWAPPCCThres_pct = single (5);


% Brake Lamp Req

ForcedBrakeLampOn_flg = boolean (0);

% Hazard Lamp

HazardEnableTrigDur_s = single (1);
ForcedHazardLampOn_flg = boolean (0);
TurnSignalDuration_ms = single (500);
TurnSignalCycle_rat = single (3);

HazardLampTest_flg = boolean (0);
HazardLampTestA_flg = boolean (0);
HazardLampTestB_flg = boolean (0);
HazardLampTestC_flg = boolean (0);
HazardLampTestD_flg = boolean (0);
HazardLampTestE_flg = boolean (0);
HazardLampTestF_flg = boolean (0);


% ADAS VehHold Override
VehHoleReqOverride_flg = boolean (0);

% ADAS 2 Override`
ADAS_YawRateReq_sw = uint8 (0);
ADAS_BHapticReq_enum = uint8 (0);
ADAS_YawRateReq_A_flg = boolean (0);
ADAS_YawRateReq_degps = single (0);

% Override Brake Pedal Signal in TQEN module

ENUM_ECMTQSOURCE_TORQUELIM = uint8 (2);
ENUM_ECMTQSOURCE_EXTERNAL = uint8 (1);
ENUM_ECMTQSOURCE_INTERNAL = uint8 (0);

EngBrakTqReqFinal_Nm_maxval = single (1000);
EngBrakTqReqFinal_Nm_minval = single (-100);
EngBrakTqReqFinal_Nm_srvcflg = boolean (0);
EngBrakTqReqFinal_Nm_srvcval = single (0);
EngBrakTqReqFinal_Nm_ovrdflg = boolean (0);
EngBrakTqReqFinal_Nm_ovrdval = single (0);
EngBrakTqReqFinal_Nm_defval = single (0);

EngIndTqReqMax_pct_maxval = single (100);
EngIndTqReqMax_pct_minval = single (0);
EngIndTqReqMax_pct_srvcflg = boolean (0);
EngIndTqReqMax_pct_srvcval = single (0);
EngIndTqReqMax_pct_ovrdflg = boolean (0);
EngIndTqReqMax_pct_ovrdval = single (0);
EngIndTqReqMax_pct_defval = single (0);
% Override Brake Pedal Signal in DINR module




%VDDM_HEVFault_enum[8]
try
run('ddm\ddm_local_hdr.m');
catch
end