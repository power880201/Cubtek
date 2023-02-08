/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_2_DEFS */
/*                                                                                                                           */
/*   AUTHOR(S):                                                                                                              */
/*      U. Homann                                                                                                              */
/*      M. Eikermann                                                                                                              */
/*                                                                                                                           */
/*                                                                                                                           */
/*   RTICANMM Date: 06-Oct-2014 13:04:04                                                                                     */
/*   RTICANMM Version: 4.0.735878.5444907408                                                                                     */
/*                                                                                                                           */
/*  (c) Copyright 2016, dSPACE GmbH. All rights reserved.                                                                    */
/*      Brand names or product names are trademarks or registered trademarks of their respective companies or organizations. */
/*                                                                                                                           */
/* ***************************************************************************************************************************/


/*********
 *  ABS2_C - 1
 *     ABS2_C.BrkSw_Sta - 1
 *     ABS2_C.BrkSw_V - 2
 *     ABS2_C.VehSpeed - 3
 */

/*********
 *  ABS4_C - 2
 *     ABS4_C.YawRate - 1
 *     ABS4_C.YawRate_V - 2
 */

/*********
 *  BCM1_C - 3
 *     BCM1_C.BCM_RTurnLp_Sta - 1
 *     BCM1_C.BCM_LTurnLp_Sta - 2
 */

/*********
 *  CSW1_C - 4
 *     CSW1_C.CSW_FWipSw_Sta - 1
 */

/*********
 *  FECU1_C - 5
 *     FECU1_C.FECU_HiBeamRly_Sta - 1
 */

/*********
 *  HighLowBeam - 6
 *     HighLowBeam.Reason_Preceding - 1
 *     HighLowBeam.Reason_Preceding_Grace - 2
 *     HighLowBeam.Reason_Oncoming - 3
 *     HighLowBeam.Reason_Oncoming_Grace - 4
 *     HighLowBeam.Reason_Street_Light - 5
 *     HighLowBeam.Reason_Street_Light_Grace - 6
 *     HighLowBeam.Reason_Lit_Night - 7
 *     HighLowBeam.Reason_Lit_Night_US - 8
 *     HighLowBeam.Reason_Low_speed - 9
 *     HighLowBeam.Reason_Bright_Scene - 10
 *     HighLowBeam.Reason_Sharp_Curve - 11
 *     HighLowBeam.Reason_Load_Balance - 12
 *     HighLowBeam.reserved_4 - 13
 *     HighLowBeam.HLB_decision - 14
 *     HighLowBeam.HLB_Running_Mode - 15
 *     HighLowBeam.Reason_for_HLB_Inactive - 16
 *     HighLowBeam.reserved_1 - 17
 */

/*********
 *  IBEO1 - 7
 *     IBEO1.HeaderCounter - 1
 *     IBEO1.ObjDataInfoFlag_vel - 2
 *     IBEO1.ObjDataInfoFlag_box - 3
 *     IBEO1.SensorTemp - 4
 *     IBEO1.SensorViewRange - 5
 *     IBEO1.NumberOfObject - 6
 *     IBEO1.Version - 7
 */

/*********
 *  IBEO2 - 8
 *     IBEO2.NTP_fractional_seconds - 1
 *     IBEO2.NTP_seconds - 2
 */

/*********
 *  IBEO3 - 9
 *     IBEO3.VelocityY - 1
 *     IBEO3.VelocityX - 2
 *     IBEO3.PositionY - 3
 *     IBEO3.PositionX - 4
 *     IBEO3.ObjID - 5
 */

/*********
 *  IBEO4 - 10
 *     IBEO4.VelocityYSigma - 1
 *     IBEO4.VelocityXSigma - 2
 *     IBEO4.PositionYSigma - 3
 *     IBEO4.PositionXSigma - 4
 *     IBEO4.ObjTimeOffset - 5
 *     IBEO4.ObjPredictionAge - 6
 *     IBEO4.ObjAge - 7
 *     IBEO4.ObjID - 8
 */

/*********
 *  IBEO5 - 11
 *     IBEO5.BoxCenterY - 1
 *     IBEO5.BoxCenterX - 2
 *     IBEO5.ObjClassAge - 3
 *     IBEO5.ObjClassCertainty - 4
 *     IBEO5.ObjClassification - 5
 *     IBEO5.ObjID - 6
 */

/*********
 *  IBEO6 - 12
 *     IBEO6.BoxOrientation - 1
 *     IBEO6.BoxSizeY - 2
 *     IBEO6.BoxSizeX - 3
 *     IBEO6.ObjID - 4
 */

/*********
 *  IBEO7 - 13
 *     IBEO7.StartPointY - 1
 *     IBEO7.StartPointX - 2
 *     IBEO7.ClosestContourPointNum - 3
 *     IBEO7.NumberOfContourPoints - 4
 *     IBEO7.ObjID - 5
 */

/*********
 *  IBEO8 - 14
 *     IBEO8.yOffset3 - 1
 *     IBEO8.xOffset3 - 2
 *     IBEO8.yOffset2 - 3
 *     IBEO8.xOffset2 - 4
 *     IBEO8.yOffset - 5
 *     IBEO8.xOffset - 6
 *     IBEO8.ContourMessageNum - 7
 *     IBEO8.ObjID - 8
 */

/*********
 *  LKA_Left_Lane_A - 15
 *     LKA_Left_Lane_A.Lane_Type - 1
 *     LKA_Left_Lane_A.Quality - 2
 *     LKA_Left_Lane_A.Position - 3
 *     LKA_Left_Lane_A.Curvature - 4
 *     LKA_Left_Lane_A.Curvature_Derivative - 5
 *     LKA_Left_Lane_A.Width_left_marking - 6
 */

/*********
 *  LKA_Left_Lane_B - 16
 *     LKA_Left_Lane_B.Heading_Angle - 1
 *     LKA_Left_Lane_B.View_Range_Start - 2
 *     LKA_Left_Lane_B.View_Range_End - 3
 *     LKA_Left_Lane_B.Lane_Crossing - 4
 *     LKA_Left_Lane_B.Lane_mark_color - 5
 *     LKA_Left_Lane_B.PRED_DIST_BASED_EXTRAPOLATION - 6
 *     LKA_Left_Lane_B.PRED_OTHER_SIDE - 7
 *     LKA_Left_Lane_B.PRED_OVERRIDE - 8
 *     LKA_Left_Lane_B.PRED_OCCLUDED_LM_EXTRAPOLATION - 9
 *     LKA_Left_Lane_B.PRED_HEADWAY_ORIENTED - 10
 *     LKA_Left_Lane_B.Reserved1_laneB - 11
 *     LKA_Left_Lane_B.PRED_SOURCE_DIVERGING_LANES - 12
 *     LKA_Left_Lane_B.PRED_SOURCE_GUARDRAIL_SHADOW - 13
 *     LKA_Left_Lane_B.PRED_SOURCE_HWE_SPAIN - 14
 *     LKA_Left_Lane_B.PRED_SOURCE_STD - 15
 *     LKA_Left_Lane_B.PRED_SOURCE_VRTL_MERGE - 16
 *     LKA_Left_Lane_B.TLC - 17
 */

/*********
 *  LKA_Right_Lane_A - 17
 *     LKA_Right_Lane_A.Lane_Type - 1
 *     LKA_Right_Lane_A.Quality - 2
 *     LKA_Right_Lane_A.Position - 3
 *     LKA_Right_Lane_A.Curvature - 4
 *     LKA_Right_Lane_A.Curvature_Derivative - 5
 *     LKA_Right_Lane_A.Width_right_marking - 6
 */

/*********
 *  LKA_Right_Lane_B - 18
 *     LKA_Right_Lane_B.Heading_Angle - 1
 *     LKA_Right_Lane_B.View_Range_Start - 2
 *     LKA_Right_Lane_B.View_Range_End - 3
 *     LKA_Right_Lane_B.Lane_Crossing - 4
 *     LKA_Right_Lane_B.Lane_mark_color - 5
 *     LKA_Right_Lane_B.PRED_DIST_BASED_EXTRAPOLATION - 6
 *     LKA_Right_Lane_B.PRED_OTHER_SIDE - 7
 *     LKA_Right_Lane_B.PRED_OVERRIDE - 8
 *     LKA_Right_Lane_B.PRED_OCCLUDED_LM_EXTRAPOLATION - 9
 *     LKA_Right_Lane_B.PRED_HEADWAY_ORIENTED - 10
 *     LKA_Right_Lane_B.Reserved1_laneB - 11
 *     LKA_Right_Lane_B.PRED_SOURCE_DIVERGING_LANES - 12
 *     LKA_Right_Lane_B.PRED_SOURCE_GUARDRAIL_SHADOW - 13
 *     LKA_Right_Lane_B.PRED_SOURCE_HWE_SPAIN - 14
 *     LKA_Right_Lane_B.PRED_SOURCE_STD - 15
 *     LKA_Right_Lane_B.PRED_SOURCE_VRTL_MERGE - 16
 *     LKA_Right_Lane_B.TLC - 17
 */

/*********
 *  Next_Left_Lane_A - 19
 *     Next_Left_Lane_A.Lane_Type - 1
 *     Next_Left_Lane_A.Quality - 2
 *     Next_Left_Lane_A.Position - 3
 *     Next_Left_Lane_A.Curvature - 4
 *     Next_Left_Lane_A.Curvature_Derivative - 5
 *     Next_Left_Lane_A.Lane_mark_width - 6
 */

/*********
 *  Next_Left_Lane_B - 20
 *     Next_Left_Lane_B.Heading_Angle - 1
 *     Next_Left_Lane_B.View_Range_Start - 2
 *     Next_Left_Lane_B.View_Range_End - 3
 */

/*********
 *  Next_Right_Lane_A - 21
 *     Next_Right_Lane_A.Lane_Type - 1
 *     Next_Right_Lane_A.Quality - 2
 *     Next_Right_Lane_A.Position - 3
 *     Next_Right_Lane_A.Curvature - 4
 *     Next_Right_Lane_A.Curvature_Derivative - 5
 *     Next_Right_Lane_A.Lane_mark_width - 6
 */

/*********
 *  Next_Right_Lane_B - 22
 *     Next_Right_Lane_B.Heading_Angle - 1
 *     Next_Right_Lane_B.View_Range_Start - 2
 *     Next_Right_Lane_B.View_Range_End - 3
 */

/*********
 *  ObstacleDataA1 - 23
 *     ObstacleDataA1.ObstacleID - 1
 *     ObstacleDataA1.ObstaclePosX - 2
 *     ObstacleDataA1.reserved_4 - 3
 *     ObstacleDataA1.ObstaclePosY - 4
 *     ObstacleDataA1.BlinkerInfo - 5
 *     ObstacleDataA1.Move_in_and_Out - 6
 *     ObstacleDataA1.ObstacleVelX - 7
 *     ObstacleDataA1.ObstacleType - 8
 *     ObstacleDataA1.reserved_1 - 9
 *     ObstacleDataA1.ObstacleStatus - 10
 *     ObstacleDataA1.ObstacleBrakeLights - 11
 *     ObstacleDataA1.reserved_2 - 12
 *     ObstacleDataA1.ObstacleValid - 13
 */

/*********
 *  ObstacleDataA10 - 24
 *     ObstacleDataA10.ObstacleID - 1
 *     ObstacleDataA10.ObstaclePosX - 2
 *     ObstacleDataA10.reserved_4 - 3
 *     ObstacleDataA10.ObstaclePosY - 4
 *     ObstacleDataA10.BlinkerInfo - 5
 *     ObstacleDataA10.Move_in_and_Out - 6
 *     ObstacleDataA10.ObstacleVelX - 7
 *     ObstacleDataA10.ObstacleType - 8
 *     ObstacleDataA10.reserved_1 - 9
 *     ObstacleDataA10.ObstacleStatus - 10
 *     ObstacleDataA10.ObstacleBrakeLights - 11
 *     ObstacleDataA10.reserved_2 - 12
 *     ObstacleDataA10.ObstacleValid - 13
 */

/*********
 *  ObstacleDataA2 - 25
 *     ObstacleDataA2.ObstacleID - 1
 *     ObstacleDataA2.ObstaclePosX - 2
 *     ObstacleDataA2.reserved_4 - 3
 *     ObstacleDataA2.ObstaclePosY - 4
 *     ObstacleDataA2.BlinkerInfo - 5
 *     ObstacleDataA2.Move_in_and_Out - 6
 *     ObstacleDataA2.ObstacleVelX - 7
 *     ObstacleDataA2.ObstacleType - 8
 *     ObstacleDataA2.reserved_1 - 9
 *     ObstacleDataA2.ObstacleStatus - 10
 *     ObstacleDataA2.ObstacleBrakeLights - 11
 *     ObstacleDataA2.reserved_2 - 12
 *     ObstacleDataA2.ObstacleValid - 13
 */

/*********
 *  ObstacleDataA3 - 26
 *     ObstacleDataA3.ObstacleID - 1
 *     ObstacleDataA3.ObstaclePosX - 2
 *     ObstacleDataA3.reserved_4 - 3
 *     ObstacleDataA3.ObstaclePosY - 4
 *     ObstacleDataA3.BlinkerInfo - 5
 *     ObstacleDataA3.Move_in_and_Out - 6
 *     ObstacleDataA3.ObstacleVelX - 7
 *     ObstacleDataA3.ObstacleType - 8
 *     ObstacleDataA3.reserved_1 - 9
 *     ObstacleDataA3.ObstacleStatus - 10
 *     ObstacleDataA3.ObstacleBrakeLights - 11
 *     ObstacleDataA3.reserved_2 - 12
 *     ObstacleDataA3.ObstacleValid - 13
 */

/*********
 *  ObstacleDataA4 - 27
 *     ObstacleDataA4.ObstacleID - 1
 *     ObstacleDataA4.ObstaclePosX - 2
 *     ObstacleDataA4.reserved_4 - 3
 *     ObstacleDataA4.ObstaclePosY - 4
 *     ObstacleDataA4.BlinkerInfo - 5
 *     ObstacleDataA4.Move_in_and_Out - 6
 *     ObstacleDataA4.ObstacleVelX - 7
 *     ObstacleDataA4.ObstacleType - 8
 *     ObstacleDataA4.reserved_1 - 9
 *     ObstacleDataA4.ObstacleStatus - 10
 *     ObstacleDataA4.ObstacleBrakeLights - 11
 *     ObstacleDataA4.reserved_2 - 12
 *     ObstacleDataA4.ObstacleValid - 13
 */

/*********
 *  ObstacleDataA5 - 28
 *     ObstacleDataA5.ObstacleID - 1
 *     ObstacleDataA5.ObstaclePosX - 2
 *     ObstacleDataA5.reserved_4 - 3
 *     ObstacleDataA5.ObstaclePosY - 4
 *     ObstacleDataA5.BlinkerInfo - 5
 *     ObstacleDataA5.Move_in_and_Out - 6
 *     ObstacleDataA5.ObstacleVelX - 7
 *     ObstacleDataA5.ObstacleType - 8
 *     ObstacleDataA5.reserved_1 - 9
 *     ObstacleDataA5.ObstacleStatus - 10
 *     ObstacleDataA5.ObstacleBrakeLights - 11
 *     ObstacleDataA5.reserved_2 - 12
 *     ObstacleDataA5.ObstacleValid - 13
 */

/*********
 *  ObstacleDataA6 - 29
 *     ObstacleDataA6.ObstacleID - 1
 *     ObstacleDataA6.ObstaclePosX - 2
 *     ObstacleDataA6.reserved_4 - 3
 *     ObstacleDataA6.ObstaclePosY - 4
 *     ObstacleDataA6.BlinkerInfo - 5
 *     ObstacleDataA6.Move_in_and_Out - 6
 *     ObstacleDataA6.ObstacleVelX - 7
 *     ObstacleDataA6.ObstacleType - 8
 *     ObstacleDataA6.reserved_1 - 9
 *     ObstacleDataA6.ObstacleStatus - 10
 *     ObstacleDataA6.ObstacleBrakeLights - 11
 *     ObstacleDataA6.reserved_2 - 12
 *     ObstacleDataA6.ObstacleValid - 13
 */

/*********
 *  ObstacleDataA7 - 30
 *     ObstacleDataA7.ObstacleID - 1
 *     ObstacleDataA7.ObstaclePosX - 2
 *     ObstacleDataA7.reserved_4 - 3
 *     ObstacleDataA7.ObstaclePosY - 4
 *     ObstacleDataA7.BlinkerInfo - 5
 *     ObstacleDataA7.Move_in_and_Out - 6
 *     ObstacleDataA7.ObstacleVelX - 7
 *     ObstacleDataA7.ObstacleType - 8
 *     ObstacleDataA7.reserved_1 - 9
 *     ObstacleDataA7.ObstacleStatus - 10
 *     ObstacleDataA7.ObstacleBrakeLights - 11
 *     ObstacleDataA7.reserved_2 - 12
 *     ObstacleDataA7.ObstacleValid - 13
 */

/*********
 *  ObstacleDataA8 - 31
 *     ObstacleDataA8.ObstacleID - 1
 *     ObstacleDataA8.ObstaclePosX - 2
 *     ObstacleDataA8.reserved_4 - 3
 *     ObstacleDataA8.ObstaclePosY - 4
 *     ObstacleDataA8.BlinkerInfo - 5
 *     ObstacleDataA8.Move_in_and_Out - 6
 *     ObstacleDataA8.ObstacleVelX - 7
 *     ObstacleDataA8.ObstacleType - 8
 *     ObstacleDataA8.reserved_1 - 9
 *     ObstacleDataA8.ObstacleStatus - 10
 *     ObstacleDataA8.ObstacleBrakeLights - 11
 *     ObstacleDataA8.reserved_2 - 12
 *     ObstacleDataA8.ObstacleValid - 13
 */

/*********
 *  ObstacleDataA9 - 32
 *     ObstacleDataA9.ObstacleID - 1
 *     ObstacleDataA9.ObstaclePosX - 2
 *     ObstacleDataA9.reserved_4 - 3
 *     ObstacleDataA9.ObstaclePosY - 4
 *     ObstacleDataA9.BlinkerInfo - 5
 *     ObstacleDataA9.Move_in_and_Out - 6
 *     ObstacleDataA9.ObstacleVelX - 7
 *     ObstacleDataA9.ObstacleType - 8
 *     ObstacleDataA9.reserved_1 - 9
 *     ObstacleDataA9.ObstacleStatus - 10
 *     ObstacleDataA9.ObstacleBrakeLights - 11
 *     ObstacleDataA9.reserved_2 - 12
 *     ObstacleDataA9.ObstacleValid - 13
 */

/*********
 *  ObstacleDataB1 - 33
 *     ObstacleDataB1.ObstacleLength - 1
 *     ObstacleDataB1.ObstacleWidth - 2
 *     ObstacleDataB1.ObstacleAge - 3
 *     ObstacleDataB1.ObstacleLane - 4
 *     ObstacleDataB1.CIPVFlag - 5
 *     ObstacleDataB1.reserved_1 - 6
 *     ObstacleDataB1.RadarPosX - 7
 *     ObstacleDataB1.RadarVelX - 8
 *     ObstacleDataB1.RadarMatchConfidence - 9
 *     ObstacleDataB1.reserved_1_b - 10
 *     ObstacleDataB1.MatchedRadarID - 11
 *     ObstacleDataB1.reserved_1_c - 12
 */

/*********
 *  ObstacleDataB10 - 34
 *     ObstacleDataB10.ObstacleLength - 1
 *     ObstacleDataB10.ObstacleWidth - 2
 *     ObstacleDataB10.ObstacleAge - 3
 *     ObstacleDataB10.ObstacleLane - 4
 *     ObstacleDataB10.CIPVFlag - 5
 *     ObstacleDataB10.reserved_1 - 6
 *     ObstacleDataB10.RadarPosX - 7
 *     ObstacleDataB10.RadarVelX - 8
 *     ObstacleDataB10.RadarMatchConfidence - 9
 *     ObstacleDataB10.reserved_1_b - 10
 *     ObstacleDataB10.MatchedRadarID - 11
 *     ObstacleDataB10.reserved_1_c - 12
 */

/*********
 *  ObstacleDataB2 - 35
 *     ObstacleDataB2.ObstacleLength - 1
 *     ObstacleDataB2.ObstacleWidth - 2
 *     ObstacleDataB2.ObstacleAge - 3
 *     ObstacleDataB2.ObstacleLane - 4
 *     ObstacleDataB2.CIPVFlag - 5
 *     ObstacleDataB2.reserved_1 - 6
 *     ObstacleDataB2.RadarPosX - 7
 *     ObstacleDataB2.RadarVelX - 8
 *     ObstacleDataB2.RadarMatchConfidence - 9
 *     ObstacleDataB2.reserved_1_b - 10
 *     ObstacleDataB2.MatchedRadarID - 11
 *     ObstacleDataB2.reserved_1_c - 12
 */

/*********
 *  ObstacleDataB3 - 36
 *     ObstacleDataB3.ObstacleLength - 1
 *     ObstacleDataB3.ObstacleWidth - 2
 *     ObstacleDataB3.ObstacleAge - 3
 *     ObstacleDataB3.ObstacleLane - 4
 *     ObstacleDataB3.CIPVFlag - 5
 *     ObstacleDataB3.reserved_1 - 6
 *     ObstacleDataB3.RadarPosX - 7
 *     ObstacleDataB3.RadarVelX - 8
 *     ObstacleDataB3.RadarMatchConfidence - 9
 *     ObstacleDataB3.reserved_1_b - 10
 *     ObstacleDataB3.MatchedRadarID - 11
 *     ObstacleDataB3.reserved_1_c - 12
 */

/*********
 *  ObstacleDataB4 - 37
 *     ObstacleDataB4.ObstacleLength - 1
 *     ObstacleDataB4.ObstacleWidth - 2
 *     ObstacleDataB4.ObstacleAge - 3
 *     ObstacleDataB4.ObstacleLane - 4
 *     ObstacleDataB4.CIPVFlag - 5
 *     ObstacleDataB4.reserved_1 - 6
 *     ObstacleDataB4.RadarPosX - 7
 *     ObstacleDataB4.RadarVelX - 8
 *     ObstacleDataB4.RadarMatchConfidence - 9
 *     ObstacleDataB4.reserved_1_b - 10
 *     ObstacleDataB4.MatchedRadarID - 11
 *     ObstacleDataB4.reserved_1_c - 12
 */

/*********
 *  ObstacleDataB5 - 38
 *     ObstacleDataB5.ObstacleLength - 1
 *     ObstacleDataB5.ObstacleWidth - 2
 *     ObstacleDataB5.ObstacleAge - 3
 *     ObstacleDataB5.ObstacleLane - 4
 *     ObstacleDataB5.CIPVFlag - 5
 *     ObstacleDataB5.reserved_1 - 6
 *     ObstacleDataB5.RadarPosX - 7
 *     ObstacleDataB5.RadarVelX - 8
 *     ObstacleDataB5.RadarMatchConfidence - 9
 *     ObstacleDataB5.reserved_1_b - 10
 *     ObstacleDataB5.MatchedRadarID - 11
 *     ObstacleDataB5.reserved_1_c - 12
 */

/*********
 *  ObstacleDataB6 - 39
 *     ObstacleDataB6.ObstacleLength - 1
 *     ObstacleDataB6.ObstacleWidth - 2
 *     ObstacleDataB6.ObstacleAge - 3
 *     ObstacleDataB6.ObstacleLane - 4
 *     ObstacleDataB6.CIPVFlag - 5
 *     ObstacleDataB6.reserved_1 - 6
 *     ObstacleDataB6.RadarPosX - 7
 *     ObstacleDataB6.RadarVelX - 8
 *     ObstacleDataB6.RadarMatchConfidence - 9
 *     ObstacleDataB6.reserved_1_b - 10
 *     ObstacleDataB6.MatchedRadarID - 11
 *     ObstacleDataB6.reserved_1_c - 12
 */

/*********
 *  ObstacleDataB7 - 40
 *     ObstacleDataB7.ObstacleLength - 1
 *     ObstacleDataB7.ObstacleWidth - 2
 *     ObstacleDataB7.ObstacleAge - 3
 *     ObstacleDataB7.ObstacleLane - 4
 *     ObstacleDataB7.CIPVFlag - 5
 *     ObstacleDataB7.reserved_1 - 6
 *     ObstacleDataB7.RadarPosX - 7
 *     ObstacleDataB7.RadarVelX - 8
 *     ObstacleDataB7.RadarMatchConfidence - 9
 *     ObstacleDataB7.reserved_1_b - 10
 *     ObstacleDataB7.MatchedRadarID - 11
 *     ObstacleDataB7.reserved_1_c - 12
 */

/*********
 *  ObstacleDataB8 - 41
 *     ObstacleDataB8.ObstacleLength - 1
 *     ObstacleDataB8.ObstacleWidth - 2
 *     ObstacleDataB8.ObstacleAge - 3
 *     ObstacleDataB8.ObstacleLane - 4
 *     ObstacleDataB8.CIPVFlag - 5
 *     ObstacleDataB8.reserved_1 - 6
 *     ObstacleDataB8.RadarPosX - 7
 *     ObstacleDataB8.RadarVelX - 8
 *     ObstacleDataB8.RadarMatchConfidence - 9
 *     ObstacleDataB8.reserved_1_b - 10
 *     ObstacleDataB8.MatchedRadarID - 11
 *     ObstacleDataB8.reserved_1_c - 12
 */

/*********
 *  ObstacleDataB9 - 42
 *     ObstacleDataB9.ObstacleLength - 1
 *     ObstacleDataB9.ObstacleWidth - 2
 *     ObstacleDataB9.ObstacleAge - 3
 *     ObstacleDataB9.ObstacleLane - 4
 *     ObstacleDataB9.CIPVFlag - 5
 *     ObstacleDataB9.reserved_1 - 6
 *     ObstacleDataB9.RadarPosX - 7
 *     ObstacleDataB9.RadarVelX - 8
 *     ObstacleDataB9.RadarMatchConfidence - 9
 *     ObstacleDataB9.reserved_1_b - 10
 *     ObstacleDataB9.MatchedRadarID - 11
 *     ObstacleDataB9.reserved_1_c - 12
 */

/*********
 *  ObstacleDataC1 - 43
 *     ObstacleDataC1.ObstacleAngleRate - 1
 *     ObstacleDataC1.ObstacleVelY - 2
 *     ObstacleDataC1.reserved_5 - 3
 *     ObstacleDataC1.Object_Accel_X - 4
 *     ObstacleDataC1.reserved_2 - 5
 *     ObstacleDataC1.ObstacleReplaced - 6
 *     ObstacleDataC1.reserved_3 - 7
 *     ObstacleDataC1.ObstacleAngle - 8
 */

/*********
 *  ObstacleDataC10 - 44
 *     ObstacleDataC10.ObstacleAngleRate - 1
 *     ObstacleDataC10.ObstacleVelY - 2
 *     ObstacleDataC10.reserved_5 - 3
 *     ObstacleDataC10.Object_Accel_X - 4
 *     ObstacleDataC10.reserved_2 - 5
 *     ObstacleDataC10.ObstacleReplaced - 6
 *     ObstacleDataC10.reserved_3 - 7
 *     ObstacleDataC10.ObstacleAngle - 8
 */

/*********
 *  ObstacleDataC2 - 45
 *     ObstacleDataC2.ObstacleAngleRate - 1
 *     ObstacleDataC2.ObstacleVelY - 2
 *     ObstacleDataC2.reserved_5 - 3
 *     ObstacleDataC2.Object_Accel_X - 4
 *     ObstacleDataC2.reserved_2 - 5
 *     ObstacleDataC2.ObstacleReplaced - 6
 *     ObstacleDataC2.reserved_3 - 7
 *     ObstacleDataC2.ObstacleAngle - 8
 */

/*********
 *  ObstacleDataC3 - 46
 *     ObstacleDataC3.ObstacleAngleRate - 1
 *     ObstacleDataC3.ObstacleVelY - 2
 *     ObstacleDataC3.reserved_5 - 3
 *     ObstacleDataC3.Object_Accel_X - 4
 *     ObstacleDataC3.reserved_2 - 5
 *     ObstacleDataC3.ObstacleReplaced - 6
 *     ObstacleDataC3.reserved_3 - 7
 *     ObstacleDataC3.ObstacleAngle - 8
 */

/*********
 *  ObstacleDataC4 - 47
 *     ObstacleDataC4.ObstacleAngleRate - 1
 *     ObstacleDataC4.ObstacleVelY - 2
 *     ObstacleDataC4.reserved_5 - 3
 *     ObstacleDataC4.Object_Accel_X - 4
 *     ObstacleDataC4.reserved_2 - 5
 *     ObstacleDataC4.ObstacleReplaced - 6
 *     ObstacleDataC4.reserved_3 - 7
 *     ObstacleDataC4.ObstacleAngle - 8
 */

/*********
 *  ObstacleDataC5 - 48
 *     ObstacleDataC5.ObstacleAngleRate - 1
 *     ObstacleDataC5.ObstacleVelY - 2
 *     ObstacleDataC5.reserved_5 - 3
 *     ObstacleDataC5.Object_Accel_X - 4
 *     ObstacleDataC5.reserved_2 - 5
 *     ObstacleDataC5.ObstacleReplaced - 6
 *     ObstacleDataC5.reserved_3 - 7
 *     ObstacleDataC5.ObstacleAngle - 8
 */

/*********
 *  ObstacleDataC6 - 49
 *     ObstacleDataC6.ObstacleAngleRate - 1
 *     ObstacleDataC6.ObstacleVelY - 2
 *     ObstacleDataC6.reserved_5 - 3
 *     ObstacleDataC6.Object_Accel_X - 4
 *     ObstacleDataC6.reserved_2 - 5
 *     ObstacleDataC6.ObstacleReplaced - 6
 *     ObstacleDataC6.reserved_3 - 7
 *     ObstacleDataC6.ObstacleAngle - 8
 */

/*********
 *  ObstacleDataC7 - 50
 *     ObstacleDataC7.ObstacleAngleRate - 1
 *     ObstacleDataC7.ObstacleVelY - 2
 *     ObstacleDataC7.reserved_5 - 3
 *     ObstacleDataC7.Object_Accel_X - 4
 *     ObstacleDataC7.reserved_2 - 5
 *     ObstacleDataC7.ObstacleReplaced - 6
 *     ObstacleDataC7.reserved_3 - 7
 *     ObstacleDataC7.ObstacleAngle - 8
 */

/*********
 *  ObstacleDataC8 - 51
 *     ObstacleDataC8.ObstacleAngleRate - 1
 *     ObstacleDataC8.ObstacleVelY - 2
 *     ObstacleDataC8.reserved_5 - 3
 *     ObstacleDataC8.Object_Accel_X - 4
 *     ObstacleDataC8.reserved_2 - 5
 *     ObstacleDataC8.ObstacleReplaced - 6
 *     ObstacleDataC8.reserved_3 - 7
 *     ObstacleDataC8.ObstacleAngle - 8
 */

/*********
 *  ObstacleDataC9 - 52
 *     ObstacleDataC9.ObstacleAngleRate - 1
 *     ObstacleDataC9.ObstacleVelY - 2
 *     ObstacleDataC9.reserved_5 - 3
 *     ObstacleDataC9.Object_Accel_X - 4
 *     ObstacleDataC9.reserved_2 - 5
 *     ObstacleDataC9.ObstacleReplaced - 6
 *     ObstacleDataC9.reserved_3 - 7
 *     ObstacleDataC9.ObstacleAngle - 8
 */

/*********
 *  ObstacleStatusA - 53
 *     ObstacleStatusA.NumObstacles - 1
 *     ObstacleStatusA.Timestamp - 2
 *     ObstacleStatusA.ApplicationVersion_minor - 3
 *     ObstacleStatusA.ApplicationVersion_rc - 4
 *     ObstacleStatusA.ProtocolVersion - 5
 *     ObstacleStatusA.Go - 6
 *     ObstacleStatusA.Close_Car - 7
 *     ObstacleStatusA.RightCloseRangeCutIn - 8
 *     ObstacleStatusA.LeftCloseRangeCutIn - 9
 *     ObstacleStatusA.Failsafe - 10
 *     ObstacleStatusA.reserved_3 - 11
 */

/*********
 *  ObstacleStatusB - 54
 *     ObstacleStatusB.timeStamp - 1
 *     ObstacleStatusB.frameIndex - 2
 */

/*********
 *  ObstacleStatusC - 55
 *     ObstacleStatusC.grabIndex - 1
 *     ObstacleStatusC.pedalConfGenObjDistFromBumper - 2
 *     ObstacleStatusC.pedalConfusionGeneralObjTTC - 3
 *     ObstacleStatusC.reserved_6 - 4
 */

/*********
 *  Road_Information - 56
 *     Road_Information.Construction_Area - 1
 *     Road_Information.Road_Type - 2
 *     Road_Information.Highway_Exit_Right - 3
 *     Road_Information.Highway_Exit_Left - 4
 *     Road_Information.Probability_Of_Left_Lane - 5
 *     Road_Information.Probability_Of_Right_Lane - 6
 *     Road_Information.Driving_Speed_Left_Lane - 7
 *     Road_Information.Driving_Speed_Right_Lane - 8
 *     Road_Information.protocol_version - 9
 */

/*********
 *  SAS1_C - 57
 *     SAS1_C.SAS_OK - 1
 *     SAS1_C.SAS_CAL - 2
 *     SAS1_C.SAS_Angle - 3
 */

/*********
 *  SpeedInformation - 58
 *     SpeedInformation.radarDeviceSpeedDirection - 1
 *     SpeedInformation.radarDeviceSpeed - 2
 */

/*********
 *  TEST1 - 59
 *     TEST1.HighBeamCount - 1
 *     TEST1.NoObjTimeLim - 2
 *     TEST1.HighBeamTime - 3
 *     TEST1.NoObjTime - 4
 *     TEST1.ForceLowBeamT - 5
 *     TEST1.HighBeamSw - 6
 *     TEST1.RearFogSw - 7
 *     TEST1.ECO_SW_STA - 8
 *     TEST1.FECU_HiBeamRly_Sta - 9
 *     TEST1.FECU_LoBeamRly_Sta - 10
 */

/*********
 *  TEST2 - 60
 *     TEST2.ObstacleAngle_Test - 1
 *     TEST2.ObstacleVelY_Test - 2
 *     TEST2.ObstacleVelX_Test - 3
 *     TEST2.ObstaclePosY_Test - 4
 *     TEST2.ObstaclePosX_Test - 5
 *     TEST2.ObstacleType_Test - 6
 */

/*********
 *  TEST3 - 61
 *     TEST3.ObstacleAngle_Test - 1
 *     TEST3.ObstacleVelY_Test - 2
 *     TEST3.ObstacleVelX_Test - 3
 *     TEST3.ObstaclePosY_Test - 4
 *     TEST3.ObstaclePosX_Test - 5
 *     TEST3.ObstacleType_Test - 6
 */

/*********
 *  TEST4 - 62
 *     TEST4.ObstacleAngle_Test - 1
 *     TEST4.ObstacleVelY_Test - 2
 *     TEST4.ObstacleVelX_Test - 3
 *     TEST4.ObstaclePosY_Test - 4
 *     TEST4.ObstaclePosX_Test - 5
 *     TEST4.ObstacleType_Test - 6
 */

/*********
 *  TEST5 - 63
 *     TEST5.ObstacleAngle_Test - 1
 *     TEST5.ObstacleVelY_Test - 2
 *     TEST5.ObstacleVelX_Test - 3
 *     TEST5.ObstaclePosY_Test - 4
 *     TEST5.ObstaclePosX_Test - 5
 *     TEST5.ObstacleType_Test - 6
 */

/*********
 *  TEST6 - 64
 *     TEST6.ObstacleAngle_Test - 1
 *     TEST6.ObstacleVelY_Test - 2
 *     TEST6.ObstacleVelX_Test - 3
 *     TEST6.ObstaclePosY_Test - 4
 *     TEST6.ObstaclePosX_Test - 5
 *     TEST6.ObstacleType_Test - 6
 */

/*********
 *  YawRateInformation - 65
 *     YawRateInformation.radarDeviceYawRate - 1
 */
volatile uint8_T CANMMCAN_2_RTVE;
volatile boolean_T CANMMCAN_2_TRAFFIC;
volatile int32_T CANMMCAN_2_MAXMSGPERSTEP;

volatile uint8_T CANMMCAN_2_TVAR8;

volatile uint8_T CANMMCAN_2_TVAR8_2;

volatile uint32_T CANMMCAN_2_TVAR32;

volatile uint8_T CANMMCAN_2_TVAR8A[8];

volatile double CANMMCAN_2_TVARD;
volatile double CANMMCAN_2_TVARD2;

/* Globale Enable */
volatile boolean_T CANMMCAN_2_GEIN;
#define CANMMCAN_2_GE CANMMCAN_2_GEIN

/* Reset */
#define CANMMCAN_2_RE 1


/* Feedthrough debug variable*/
volatile uint8_T CANMMCAN_2_FTD;

/* Globale Enable TX */
volatile boolean_T CANMMCAN_2_TXGEIN;
#define CANMMCAN_2_TXGE CANMMCAN_2_TXGEIN
                               
                               
/* ECU ENABLE */               
volatile boolean_T CANMMCAN_2_TXEEIE[3] = {1, 1, 1};     
volatile boolean_T CANMMCAN_2_TXEEIEOLD[3] = {1, 1, 1};     
volatile boolean_T CANMMCAN_2_TXECUEN_ADAS = 1;   
volatile boolean_T CANMMCAN_2_TXECUEN_ExternalUnit = 1;   
volatile boolean_T CANMMCAN_2_TXECUEN_Vector__XXX = 1;   
                            
                            

/* Message would be sent */
volatile uint8_T CANMMCAN_2_WBS[NUM_TX_MSG];
volatile boolean_T CANMMCAN_2_BYKICK[NUM_TX_MSG];

/* Message enable */
volatile boolean_T CANMMCAN_2_TXENIE[NUM_TX_MSG];
volatile boolean_T CANMMCAN_2_TXEIN[NUM_TX_MSG];
#define CANMMCAN_2_TXEN(X) (CANMMCAN_2_TXENIE[X])
#define USE_LOCAL_ENABLE

/* Cyclic triggering */
volatile boolean_T CANMMCAN_2_TXCIE[NUM_TX_MSG];
volatile boolean_T CANMMCAN_2_TXCIN[NUM_TX_MSG];
#define CANMMCAN_2_TXC(X) (CANMMCAN_2_TXCIE[X])

/* Message kickout */
volatile boolean_T CANMMCAN_2_TXKIEX[NUM_TX_MSG];
volatile boolean_T CANMMCAN_2_TXKIN[NUM_TX_MSG];
volatile boolean_T CANMMCAN_2_TXKIEXC[NUM_TX_MSG];
#define CANMMCAN_2_TXKOUT(X) (CANMMCAN_2_TXKIEX[X])
#undef MESSAGETIMEOUT


#define ID_Table_RX(X) (int)(CANMMCAN_2_MIDRX[X])
#define ID_Table_TX(X) (int)(CANMMCAN_2_MIDTX[X])
uint8_T CANMMCAN_2_MIDTXSW[NUM_RX_MSG];
uint32_T CANMMCAN_2_MIDTXIN[NUM_RX_MSG];
uint32_T CANMMCAN_2_MIDTXS[NUM_RX_MSG];
uint32_T CANMMCAN_2_MIDRX[NUM_RX_MSG];
uint8_T CANMMCAN_2_MIDFRX[NUM_RX_MSG];
uint8_T CANMMCAN_2_MIDFTXIN[NUM_RX_MSG];
uint8_T CANMMCAN_2_MIDFTXS[NUM_RX_MSG];
uint8_T CANMMCAN_2_MIDFTX[NUM_RX_MSG];
uint8_T CANMMCAN_2_RXMT[NUM_RX_MSG];
 

/* Capture data */
uint32_T CANMMCAN_2_CAPID[25];
uint32_T CANMMCAN_2_CAPOID[25];
uint8_T CANMMCAN_2_CAPIDF[25];
uint32_T CANMMCAN_2_CAPOIDF[25];
uint32_T CANMMCAN_2_COT[25];
uint8_T CANMMCAN_2_CAPL[25];
uint32_T CANMMCAN_2_COLEN[25];
boolean_T CANMMCAN_2_CAPS[25];
volatile real_T CANMMCAN_2_CAPT[25];
uint8_T CANMMCAN_2_CAPD_0[25];
uint32_T CANMMCAN_2_COIDX_0[25];
uint8_T CANMMCAN_2_CAPD_1[25];
uint32_T CANMMCAN_2_COIDX_1[25];
uint8_T CANMMCAN_2_CAPD_2[25];
uint32_T CANMMCAN_2_COIDX_2[25];
uint8_T CANMMCAN_2_CAPD_3[25];
uint32_T CANMMCAN_2_COIDX_3[25];
uint8_T CANMMCAN_2_CAPD_4[25];
uint32_T CANMMCAN_2_COIDX_4[25];
uint8_T CANMMCAN_2_CAPD_5[25];
uint32_T CANMMCAN_2_COIDX_5[25];
uint8_T CANMMCAN_2_CAPD_6[25];
uint32_T CANMMCAN_2_COIDX_6[25];
uint8_T CANMMCAN_2_CAPD_7[25];
uint32_T CANMMCAN_2_COIDX_7[25];


volatile real_T CANMMCAN_2_RXt[NUM_RX_MSG];
volatile real_T CANMMCAN_2_RXdt[NUM_RX_MSG];
volatile boolean_T CANMMCAN_2_RXsta[NUM_RX_MSG];
volatile uint8_T CANMMCAN_2_RXerr[NUM_RX_MSG];
volatile real_T CANMMCAN_2_RXCTMIN[NUM_RX_MSG];
volatile real_T CANMMCAN_2_RXCTMAX[NUM_RX_MSG];
volatile uint8_T CANMMCAN_2_RXLEN[NUM_RX_MSG];
volatile uint32_T CANMMCAN_2_RXCNT[NUM_RX_MSG];
uint32_T CANMMCAN_2_MIDTX[NUM_TX_MSG];
volatile real_T CANMMCAN_2_TXCT[NUM_TX_MSG];
volatile real_T CANMMCAN_2_TXDT[NUM_TX_MSG];
volatile uint8_T CANMMCAN_2_TXcraw[NUM_TX_MSG];
volatile boolean_T CANMMCAN_2_TXsta[NUM_TX_MSG];
volatile uint8_T CANMMCAN_2_TXRBUF[NUM_TX_MSG];
volatile uint8_T CANMMCAN_2_TXRXBUF[NUM_TX_MSG];
volatile uint8_T CANMMCAN_2_TXusrm[NUM_TX_MSG];
volatile uint8_T CANMMCAN_2_TXLEN[NUM_TX_MSG];


/* Define RX/TX structure */

UInt8 CANMMCAN_2_RX_Msg_1_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_1_constant;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_1_DynValue;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_1_error;
UInt8 CANMMCAN_2_RX_Msg_1_Sgn_2;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_2;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_2_constant;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_2_DynValue;
UInt8 CANMMCAN_2_TX_Msg_1_Sgn_2_error;
double CANMMCAN_2_RX_Msg_1_Sgn_3;
double CANMMCAN_2_TX_Msg_1_Sgn_3;
double CANMMCAN_2_TX_Msg_1_Sgn_3_constant;
double CANMMCAN_2_TX_Msg_1_Sgn_3_DynValue;
double CANMMCAN_2_TX_Msg_1_Sgn_3_error;
double CANMMCAN_2_RX_Msg_2_Sgn_1;
double CANMMCAN_2_TX_Msg_2_Sgn_1;
double CANMMCAN_2_TX_Msg_2_Sgn_1_constant;
double CANMMCAN_2_TX_Msg_2_Sgn_1_DynValue;
double CANMMCAN_2_TX_Msg_2_Sgn_1_error;
UInt8 CANMMCAN_2_RX_Msg_2_Sgn_2;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_2;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_2_constant;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_2_DynValue;
UInt8 CANMMCAN_2_TX_Msg_2_Sgn_2_error;
UInt8 CANMMCAN_2_RX_Msg_3_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_3_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_3_Sgn_1_constant;
UInt8 CANMMCAN_2_TX_Msg_3_Sgn_1_DynValue;
UInt8 CANMMCAN_2_TX_Msg_3_Sgn_1_error;
UInt8 CANMMCAN_2_RX_Msg_3_Sgn_2;
UInt8 CANMMCAN_2_TX_Msg_3_Sgn_2;
UInt8 CANMMCAN_2_TX_Msg_3_Sgn_2_constant;
UInt8 CANMMCAN_2_TX_Msg_3_Sgn_2_DynValue;
UInt8 CANMMCAN_2_TX_Msg_3_Sgn_2_error;
UInt8 CANMMCAN_2_RX_Msg_4_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_1_constant;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_1_DynValue;
UInt8 CANMMCAN_2_TX_Msg_4_Sgn_1_error;
UInt8 CANMMCAN_2_RX_Msg_5_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_5_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_5_Sgn_1_constant;
UInt8 CANMMCAN_2_TX_Msg_5_Sgn_1_DynValue;
UInt8 CANMMCAN_2_TX_Msg_5_Sgn_1_error;
volatile real_T CANMMCAN_2_RXCT6;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_1;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_12;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_13;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_14;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_15;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_16;
UInt8 CANMMCAN_2_RX_Msg_6_Sgn_17;
volatile real_T CANMMCAN_2_RXCT7;
UInt8 CANMMCAN_2_RX_Msg_7_Sgn_1;
UInt8 CANMMCAN_2_RX_Msg_7_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_7_Sgn_3;
Int8 CANMMCAN_2_RX_Msg_7_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_7_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_7_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_7_Sgn_7;
volatile real_T CANMMCAN_2_RXCT8;
UInt32 CANMMCAN_2_RX_Msg_8_Sgn_1;
UInt32 CANMMCAN_2_RX_Msg_8_Sgn_2;
volatile real_T CANMMCAN_2_RXCT9;
Int16 CANMMCAN_2_RX_Msg_9_Sgn_1;
Int16 CANMMCAN_2_RX_Msg_9_Sgn_2;
Int16 CANMMCAN_2_RX_Msg_9_Sgn_3;
Int16 CANMMCAN_2_RX_Msg_9_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_9_Sgn_5;
volatile real_T CANMMCAN_2_RXCT10;
UInt8 CANMMCAN_2_RX_Msg_10_Sgn_1;
UInt8 CANMMCAN_2_RX_Msg_10_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_10_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_10_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_10_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_10_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_10_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_10_Sgn_8;
volatile real_T CANMMCAN_2_RXCT11;
Int16 CANMMCAN_2_RX_Msg_11_Sgn_1;
Int16 CANMMCAN_2_RX_Msg_11_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_11_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_11_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_11_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_11_Sgn_6;
volatile real_T CANMMCAN_2_RXCT12;
Int16 CANMMCAN_2_RX_Msg_12_Sgn_1;
UInt16 CANMMCAN_2_RX_Msg_12_Sgn_2;
UInt16 CANMMCAN_2_RX_Msg_12_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_12_Sgn_4;
volatile real_T CANMMCAN_2_RXCT13;
Int16 CANMMCAN_2_RX_Msg_13_Sgn_1;
Int16 CANMMCAN_2_RX_Msg_13_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_13_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_13_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_13_Sgn_5;
volatile real_T CANMMCAN_2_RXCT14;
UInt8 CANMMCAN_2_RX_Msg_14_Sgn_1;
UInt8 CANMMCAN_2_RX_Msg_14_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_14_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_14_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_14_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_14_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_14_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_14_Sgn_8;
volatile real_T CANMMCAN_2_RXCT15;
UInt8 CANMMCAN_2_RX_Msg_15_Sgn_1;
UInt8 CANMMCAN_2_RX_Msg_15_Sgn_2;
double CANMMCAN_2_RX_Msg_15_Sgn_3;
double CANMMCAN_2_RX_Msg_15_Sgn_4;
double CANMMCAN_2_RX_Msg_15_Sgn_5;
double CANMMCAN_2_RX_Msg_15_Sgn_6;
volatile real_T CANMMCAN_2_RXCT16;
double CANMMCAN_2_RX_Msg_16_Sgn_1;
double CANMMCAN_2_RX_Msg_16_Sgn_2;
double CANMMCAN_2_RX_Msg_16_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_16_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_16_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_16_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_16_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_16_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_16_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_16_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_16_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_16_Sgn_12;
UInt8 CANMMCAN_2_RX_Msg_16_Sgn_13;
UInt8 CANMMCAN_2_RX_Msg_16_Sgn_14;
UInt8 CANMMCAN_2_RX_Msg_16_Sgn_15;
UInt8 CANMMCAN_2_RX_Msg_16_Sgn_16;
double CANMMCAN_2_RX_Msg_16_Sgn_17;
volatile real_T CANMMCAN_2_RXCT17;
UInt8 CANMMCAN_2_RX_Msg_17_Sgn_1;
UInt8 CANMMCAN_2_RX_Msg_17_Sgn_2;
double CANMMCAN_2_RX_Msg_17_Sgn_3;
double CANMMCAN_2_RX_Msg_17_Sgn_4;
double CANMMCAN_2_RX_Msg_17_Sgn_5;
double CANMMCAN_2_RX_Msg_17_Sgn_6;
volatile real_T CANMMCAN_2_RXCT18;
double CANMMCAN_2_RX_Msg_18_Sgn_1;
double CANMMCAN_2_RX_Msg_18_Sgn_2;
double CANMMCAN_2_RX_Msg_18_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_18_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_18_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_18_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_18_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_18_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_18_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_18_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_18_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_18_Sgn_12;
UInt8 CANMMCAN_2_RX_Msg_18_Sgn_13;
UInt8 CANMMCAN_2_RX_Msg_18_Sgn_14;
UInt8 CANMMCAN_2_RX_Msg_18_Sgn_15;
UInt8 CANMMCAN_2_RX_Msg_18_Sgn_16;
double CANMMCAN_2_RX_Msg_18_Sgn_17;
volatile real_T CANMMCAN_2_RXCT19;
UInt8 CANMMCAN_2_RX_Msg_19_Sgn_1;
UInt8 CANMMCAN_2_RX_Msg_19_Sgn_2;
double CANMMCAN_2_RX_Msg_19_Sgn_3;
double CANMMCAN_2_RX_Msg_19_Sgn_4;
double CANMMCAN_2_RX_Msg_19_Sgn_5;
double CANMMCAN_2_RX_Msg_19_Sgn_6;
volatile real_T CANMMCAN_2_RXCT20;
double CANMMCAN_2_RX_Msg_20_Sgn_1;
double CANMMCAN_2_RX_Msg_20_Sgn_2;
double CANMMCAN_2_RX_Msg_20_Sgn_3;
volatile real_T CANMMCAN_2_RXCT21;
UInt8 CANMMCAN_2_RX_Msg_21_Sgn_1;
UInt8 CANMMCAN_2_RX_Msg_21_Sgn_2;
double CANMMCAN_2_RX_Msg_21_Sgn_3;
double CANMMCAN_2_RX_Msg_21_Sgn_4;
double CANMMCAN_2_RX_Msg_21_Sgn_5;
double CANMMCAN_2_RX_Msg_21_Sgn_6;
volatile real_T CANMMCAN_2_RXCT22;
double CANMMCAN_2_RX_Msg_22_Sgn_1;
double CANMMCAN_2_RX_Msg_22_Sgn_2;
double CANMMCAN_2_RX_Msg_22_Sgn_3;
volatile real_T CANMMCAN_2_RXCT23;
UInt8 CANMMCAN_2_RX_Msg_23_Sgn_1;
double CANMMCAN_2_RX_Msg_23_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_23_Sgn_3;
double CANMMCAN_2_RX_Msg_23_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_23_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_23_Sgn_6;
double CANMMCAN_2_RX_Msg_23_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_23_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_23_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_23_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_23_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_23_Sgn_12;
UInt8 CANMMCAN_2_RX_Msg_23_Sgn_13;
volatile real_T CANMMCAN_2_RXCT24;
UInt8 CANMMCAN_2_RX_Msg_24_Sgn_1;
double CANMMCAN_2_RX_Msg_24_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_24_Sgn_3;
double CANMMCAN_2_RX_Msg_24_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_24_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_24_Sgn_6;
double CANMMCAN_2_RX_Msg_24_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_24_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_24_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_24_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_24_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_24_Sgn_12;
UInt8 CANMMCAN_2_RX_Msg_24_Sgn_13;
volatile real_T CANMMCAN_2_RXCT25;
UInt8 CANMMCAN_2_RX_Msg_25_Sgn_1;
double CANMMCAN_2_RX_Msg_25_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_25_Sgn_3;
double CANMMCAN_2_RX_Msg_25_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_25_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_25_Sgn_6;
double CANMMCAN_2_RX_Msg_25_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_25_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_25_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_25_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_25_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_25_Sgn_12;
UInt8 CANMMCAN_2_RX_Msg_25_Sgn_13;
volatile real_T CANMMCAN_2_RXCT26;
UInt8 CANMMCAN_2_RX_Msg_26_Sgn_1;
double CANMMCAN_2_RX_Msg_26_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_26_Sgn_3;
double CANMMCAN_2_RX_Msg_26_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_26_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_26_Sgn_6;
double CANMMCAN_2_RX_Msg_26_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_26_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_26_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_26_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_26_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_26_Sgn_12;
UInt8 CANMMCAN_2_RX_Msg_26_Sgn_13;
volatile real_T CANMMCAN_2_RXCT27;
UInt8 CANMMCAN_2_RX_Msg_27_Sgn_1;
double CANMMCAN_2_RX_Msg_27_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_27_Sgn_3;
double CANMMCAN_2_RX_Msg_27_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_27_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_27_Sgn_6;
double CANMMCAN_2_RX_Msg_27_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_27_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_27_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_27_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_27_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_27_Sgn_12;
UInt8 CANMMCAN_2_RX_Msg_27_Sgn_13;
volatile real_T CANMMCAN_2_RXCT28;
UInt8 CANMMCAN_2_RX_Msg_28_Sgn_1;
double CANMMCAN_2_RX_Msg_28_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_28_Sgn_3;
double CANMMCAN_2_RX_Msg_28_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_28_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_28_Sgn_6;
double CANMMCAN_2_RX_Msg_28_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_28_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_28_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_28_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_28_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_28_Sgn_12;
UInt8 CANMMCAN_2_RX_Msg_28_Sgn_13;
volatile real_T CANMMCAN_2_RXCT29;
UInt8 CANMMCAN_2_RX_Msg_29_Sgn_1;
double CANMMCAN_2_RX_Msg_29_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_29_Sgn_3;
double CANMMCAN_2_RX_Msg_29_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_29_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_29_Sgn_6;
double CANMMCAN_2_RX_Msg_29_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_29_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_29_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_29_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_29_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_29_Sgn_12;
UInt8 CANMMCAN_2_RX_Msg_29_Sgn_13;
volatile real_T CANMMCAN_2_RXCT30;
UInt8 CANMMCAN_2_RX_Msg_30_Sgn_1;
double CANMMCAN_2_RX_Msg_30_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_30_Sgn_3;
double CANMMCAN_2_RX_Msg_30_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_30_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_30_Sgn_6;
double CANMMCAN_2_RX_Msg_30_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_30_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_30_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_30_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_30_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_30_Sgn_12;
UInt8 CANMMCAN_2_RX_Msg_30_Sgn_13;
volatile real_T CANMMCAN_2_RXCT31;
UInt8 CANMMCAN_2_RX_Msg_31_Sgn_1;
double CANMMCAN_2_RX_Msg_31_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_31_Sgn_3;
double CANMMCAN_2_RX_Msg_31_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_31_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_31_Sgn_6;
double CANMMCAN_2_RX_Msg_31_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_31_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_31_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_31_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_31_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_31_Sgn_12;
UInt8 CANMMCAN_2_RX_Msg_31_Sgn_13;
volatile real_T CANMMCAN_2_RXCT32;
UInt8 CANMMCAN_2_RX_Msg_32_Sgn_1;
double CANMMCAN_2_RX_Msg_32_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_32_Sgn_3;
double CANMMCAN_2_RX_Msg_32_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_32_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_32_Sgn_6;
double CANMMCAN_2_RX_Msg_32_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_32_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_32_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_32_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_32_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_32_Sgn_12;
UInt8 CANMMCAN_2_RX_Msg_32_Sgn_13;
volatile real_T CANMMCAN_2_RXCT33;
double CANMMCAN_2_RX_Msg_33_Sgn_1;
double CANMMCAN_2_RX_Msg_33_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_33_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_33_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_33_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_33_Sgn_6;
double CANMMCAN_2_RX_Msg_33_Sgn_7;
double CANMMCAN_2_RX_Msg_33_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_33_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_33_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_33_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_33_Sgn_12;
volatile real_T CANMMCAN_2_RXCT34;
double CANMMCAN_2_RX_Msg_34_Sgn_1;
double CANMMCAN_2_RX_Msg_34_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_34_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_34_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_34_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_34_Sgn_6;
double CANMMCAN_2_RX_Msg_34_Sgn_7;
double CANMMCAN_2_RX_Msg_34_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_34_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_34_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_34_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_34_Sgn_12;
volatile real_T CANMMCAN_2_RXCT35;
double CANMMCAN_2_RX_Msg_35_Sgn_1;
double CANMMCAN_2_RX_Msg_35_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_35_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_35_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_35_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_35_Sgn_6;
double CANMMCAN_2_RX_Msg_35_Sgn_7;
double CANMMCAN_2_RX_Msg_35_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_35_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_35_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_35_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_35_Sgn_12;
volatile real_T CANMMCAN_2_RXCT36;
double CANMMCAN_2_RX_Msg_36_Sgn_1;
double CANMMCAN_2_RX_Msg_36_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_36_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_36_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_36_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_36_Sgn_6;
double CANMMCAN_2_RX_Msg_36_Sgn_7;
double CANMMCAN_2_RX_Msg_36_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_36_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_36_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_36_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_36_Sgn_12;
volatile real_T CANMMCAN_2_RXCT37;
double CANMMCAN_2_RX_Msg_37_Sgn_1;
double CANMMCAN_2_RX_Msg_37_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_37_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_37_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_37_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_37_Sgn_6;
double CANMMCAN_2_RX_Msg_37_Sgn_7;
double CANMMCAN_2_RX_Msg_37_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_37_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_37_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_37_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_37_Sgn_12;
volatile real_T CANMMCAN_2_RXCT38;
double CANMMCAN_2_RX_Msg_38_Sgn_1;
double CANMMCAN_2_RX_Msg_38_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_38_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_38_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_38_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_38_Sgn_6;
double CANMMCAN_2_RX_Msg_38_Sgn_7;
double CANMMCAN_2_RX_Msg_38_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_38_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_38_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_38_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_38_Sgn_12;
volatile real_T CANMMCAN_2_RXCT39;
double CANMMCAN_2_RX_Msg_39_Sgn_1;
double CANMMCAN_2_RX_Msg_39_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_39_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_39_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_39_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_39_Sgn_6;
double CANMMCAN_2_RX_Msg_39_Sgn_7;
double CANMMCAN_2_RX_Msg_39_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_39_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_39_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_39_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_39_Sgn_12;
volatile real_T CANMMCAN_2_RXCT40;
double CANMMCAN_2_RX_Msg_40_Sgn_1;
double CANMMCAN_2_RX_Msg_40_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_40_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_40_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_40_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_40_Sgn_6;
double CANMMCAN_2_RX_Msg_40_Sgn_7;
double CANMMCAN_2_RX_Msg_40_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_40_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_40_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_40_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_40_Sgn_12;
volatile real_T CANMMCAN_2_RXCT41;
double CANMMCAN_2_RX_Msg_41_Sgn_1;
double CANMMCAN_2_RX_Msg_41_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_41_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_41_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_41_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_41_Sgn_6;
double CANMMCAN_2_RX_Msg_41_Sgn_7;
double CANMMCAN_2_RX_Msg_41_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_41_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_41_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_41_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_41_Sgn_12;
volatile real_T CANMMCAN_2_RXCT42;
double CANMMCAN_2_RX_Msg_42_Sgn_1;
double CANMMCAN_2_RX_Msg_42_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_42_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_42_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_42_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_42_Sgn_6;
double CANMMCAN_2_RX_Msg_42_Sgn_7;
double CANMMCAN_2_RX_Msg_42_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_42_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_42_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_42_Sgn_11;
UInt8 CANMMCAN_2_RX_Msg_42_Sgn_12;
volatile real_T CANMMCAN_2_RXCT43;
double CANMMCAN_2_RX_Msg_43_Sgn_1;
double CANMMCAN_2_RX_Msg_43_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_43_Sgn_3;
double CANMMCAN_2_RX_Msg_43_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_43_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_43_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_43_Sgn_7;
double CANMMCAN_2_RX_Msg_43_Sgn_8;
volatile real_T CANMMCAN_2_RXCT44;
double CANMMCAN_2_RX_Msg_44_Sgn_1;
double CANMMCAN_2_RX_Msg_44_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_44_Sgn_3;
double CANMMCAN_2_RX_Msg_44_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_44_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_44_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_44_Sgn_7;
double CANMMCAN_2_RX_Msg_44_Sgn_8;
volatile real_T CANMMCAN_2_RXCT45;
double CANMMCAN_2_RX_Msg_45_Sgn_1;
double CANMMCAN_2_RX_Msg_45_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_45_Sgn_3;
double CANMMCAN_2_RX_Msg_45_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_45_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_45_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_45_Sgn_7;
double CANMMCAN_2_RX_Msg_45_Sgn_8;
volatile real_T CANMMCAN_2_RXCT46;
double CANMMCAN_2_RX_Msg_46_Sgn_1;
double CANMMCAN_2_RX_Msg_46_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_46_Sgn_3;
double CANMMCAN_2_RX_Msg_46_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_46_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_46_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_46_Sgn_7;
double CANMMCAN_2_RX_Msg_46_Sgn_8;
volatile real_T CANMMCAN_2_RXCT47;
double CANMMCAN_2_RX_Msg_47_Sgn_1;
double CANMMCAN_2_RX_Msg_47_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_47_Sgn_3;
double CANMMCAN_2_RX_Msg_47_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_47_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_47_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_47_Sgn_7;
double CANMMCAN_2_RX_Msg_47_Sgn_8;
volatile real_T CANMMCAN_2_RXCT48;
double CANMMCAN_2_RX_Msg_48_Sgn_1;
double CANMMCAN_2_RX_Msg_48_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_48_Sgn_3;
double CANMMCAN_2_RX_Msg_48_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_48_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_48_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_48_Sgn_7;
double CANMMCAN_2_RX_Msg_48_Sgn_8;
volatile real_T CANMMCAN_2_RXCT49;
double CANMMCAN_2_RX_Msg_49_Sgn_1;
double CANMMCAN_2_RX_Msg_49_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_49_Sgn_3;
double CANMMCAN_2_RX_Msg_49_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_49_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_49_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_49_Sgn_7;
double CANMMCAN_2_RX_Msg_49_Sgn_8;
volatile real_T CANMMCAN_2_RXCT50;
double CANMMCAN_2_RX_Msg_50_Sgn_1;
double CANMMCAN_2_RX_Msg_50_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_50_Sgn_3;
double CANMMCAN_2_RX_Msg_50_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_50_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_50_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_50_Sgn_7;
double CANMMCAN_2_RX_Msg_50_Sgn_8;
volatile real_T CANMMCAN_2_RXCT51;
double CANMMCAN_2_RX_Msg_51_Sgn_1;
double CANMMCAN_2_RX_Msg_51_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_51_Sgn_3;
double CANMMCAN_2_RX_Msg_51_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_51_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_51_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_51_Sgn_7;
double CANMMCAN_2_RX_Msg_51_Sgn_8;
volatile real_T CANMMCAN_2_RXCT52;
double CANMMCAN_2_RX_Msg_52_Sgn_1;
double CANMMCAN_2_RX_Msg_52_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_52_Sgn_3;
double CANMMCAN_2_RX_Msg_52_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_52_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_52_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_52_Sgn_7;
double CANMMCAN_2_RX_Msg_52_Sgn_8;
volatile real_T CANMMCAN_2_RXCT53;
UInt8 CANMMCAN_2_RX_Msg_53_Sgn_1;
UInt8 CANMMCAN_2_RX_Msg_53_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_53_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_53_Sgn_4;
UInt8 CANMMCAN_2_RX_Msg_53_Sgn_5;
UInt8 CANMMCAN_2_RX_Msg_53_Sgn_6;
UInt8 CANMMCAN_2_RX_Msg_53_Sgn_7;
UInt8 CANMMCAN_2_RX_Msg_53_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_53_Sgn_9;
UInt16 CANMMCAN_2_RX_Msg_53_Sgn_10;
UInt8 CANMMCAN_2_RX_Msg_53_Sgn_11;
volatile real_T CANMMCAN_2_RXCT54;
UInt32 CANMMCAN_2_RX_Msg_54_Sgn_1;
UInt32 CANMMCAN_2_RX_Msg_54_Sgn_2;
volatile real_T CANMMCAN_2_RXCT55;
UInt16 CANMMCAN_2_RX_Msg_55_Sgn_1;
double CANMMCAN_2_RX_Msg_55_Sgn_2;
double CANMMCAN_2_RX_Msg_55_Sgn_3;
UInt32 CANMMCAN_2_RX_Msg_55_Sgn_4;
volatile real_T CANMMCAN_2_RXCT56;
UInt8 CANMMCAN_2_RX_Msg_56_Sgn_1;
UInt8 CANMMCAN_2_RX_Msg_56_Sgn_2;
UInt8 CANMMCAN_2_RX_Msg_56_Sgn_3;
UInt8 CANMMCAN_2_RX_Msg_56_Sgn_4;
double CANMMCAN_2_RX_Msg_56_Sgn_5;
double CANMMCAN_2_RX_Msg_56_Sgn_6;
double CANMMCAN_2_RX_Msg_56_Sgn_7;
double CANMMCAN_2_RX_Msg_56_Sgn_8;
UInt8 CANMMCAN_2_RX_Msg_56_Sgn_9;
UInt8 CANMMCAN_2_RX_Msg_57_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_57_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_57_Sgn_1_constant;
UInt8 CANMMCAN_2_TX_Msg_57_Sgn_1_DynValue;
UInt8 CANMMCAN_2_TX_Msg_57_Sgn_1_error;
UInt8 CANMMCAN_2_RX_Msg_57_Sgn_2;
UInt8 CANMMCAN_2_TX_Msg_57_Sgn_2;
UInt8 CANMMCAN_2_TX_Msg_57_Sgn_2_constant;
UInt8 CANMMCAN_2_TX_Msg_57_Sgn_2_DynValue;
UInt8 CANMMCAN_2_TX_Msg_57_Sgn_2_error;
double CANMMCAN_2_RX_Msg_57_Sgn_3;
double CANMMCAN_2_TX_Msg_57_Sgn_3;
double CANMMCAN_2_TX_Msg_57_Sgn_3_constant;
double CANMMCAN_2_TX_Msg_57_Sgn_3_DynValue;
double CANMMCAN_2_TX_Msg_57_Sgn_3_error;
UInt8 CANMMCAN_2_RX_Msg_58_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_58_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_58_Sgn_1_constant;
UInt8 CANMMCAN_2_TX_Msg_58_Sgn_1_DynValue;
UInt8 CANMMCAN_2_TX_Msg_58_Sgn_1_error;
double CANMMCAN_2_RX_Msg_58_Sgn_2;
double CANMMCAN_2_TX_Msg_58_Sgn_2;
double CANMMCAN_2_TX_Msg_58_Sgn_2_constant;
double CANMMCAN_2_TX_Msg_58_Sgn_2_DynValue;
double CANMMCAN_2_TX_Msg_58_Sgn_2_error;
UInt8 CANMMCAN_2_RX_Msg_59_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_1;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_1_constant;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_1_DynValue;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_1_error;
double CANMMCAN_2_RX_Msg_59_Sgn_2;
double CANMMCAN_2_TX_Msg_59_Sgn_2;
double CANMMCAN_2_TX_Msg_59_Sgn_2_constant;
double CANMMCAN_2_TX_Msg_59_Sgn_2_DynValue;
double CANMMCAN_2_TX_Msg_59_Sgn_2_error;
double CANMMCAN_2_RX_Msg_59_Sgn_3;
double CANMMCAN_2_TX_Msg_59_Sgn_3;
double CANMMCAN_2_TX_Msg_59_Sgn_3_constant;
double CANMMCAN_2_TX_Msg_59_Sgn_3_DynValue;
double CANMMCAN_2_TX_Msg_59_Sgn_3_error;
double CANMMCAN_2_RX_Msg_59_Sgn_4;
double CANMMCAN_2_TX_Msg_59_Sgn_4;
double CANMMCAN_2_TX_Msg_59_Sgn_4_constant;
double CANMMCAN_2_TX_Msg_59_Sgn_4_DynValue;
double CANMMCAN_2_TX_Msg_59_Sgn_4_error;
UInt8 CANMMCAN_2_RX_Msg_59_Sgn_5;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_5;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_5_constant;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_5_DynValue;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_5_error;
UInt8 CANMMCAN_2_RX_Msg_59_Sgn_6;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_6;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_6_constant;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_6_DynValue;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_6_error;
UInt8 CANMMCAN_2_RX_Msg_59_Sgn_7;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_7;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_7_constant;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_7_DynValue;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_7_error;
UInt8 CANMMCAN_2_RX_Msg_59_Sgn_8;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_8;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_8_constant;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_8_DynValue;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_8_error;
UInt8 CANMMCAN_2_RX_Msg_59_Sgn_9;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_9;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_9_constant;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_9_DynValue;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_9_error;
UInt8 CANMMCAN_2_RX_Msg_59_Sgn_10;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_10;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_10_constant;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_10_DynValue;
UInt8 CANMMCAN_2_TX_Msg_59_Sgn_10_error;
double CANMMCAN_2_RX_Msg_60_Sgn_1;
double CANMMCAN_2_TX_Msg_60_Sgn_1;
double CANMMCAN_2_TX_Msg_60_Sgn_1_constant;
double CANMMCAN_2_TX_Msg_60_Sgn_1_DynValue;
double CANMMCAN_2_TX_Msg_60_Sgn_1_error;
double CANMMCAN_2_RX_Msg_60_Sgn_2;
double CANMMCAN_2_TX_Msg_60_Sgn_2;
double CANMMCAN_2_TX_Msg_60_Sgn_2_constant;
double CANMMCAN_2_TX_Msg_60_Sgn_2_DynValue;
double CANMMCAN_2_TX_Msg_60_Sgn_2_error;
double CANMMCAN_2_RX_Msg_60_Sgn_3;
double CANMMCAN_2_TX_Msg_60_Sgn_3;
double CANMMCAN_2_TX_Msg_60_Sgn_3_constant;
double CANMMCAN_2_TX_Msg_60_Sgn_3_DynValue;
double CANMMCAN_2_TX_Msg_60_Sgn_3_error;
double CANMMCAN_2_RX_Msg_60_Sgn_4;
double CANMMCAN_2_TX_Msg_60_Sgn_4;
double CANMMCAN_2_TX_Msg_60_Sgn_4_constant;
double CANMMCAN_2_TX_Msg_60_Sgn_4_DynValue;
double CANMMCAN_2_TX_Msg_60_Sgn_4_error;
double CANMMCAN_2_RX_Msg_60_Sgn_5;
double CANMMCAN_2_TX_Msg_60_Sgn_5;
double CANMMCAN_2_TX_Msg_60_Sgn_5_constant;
double CANMMCAN_2_TX_Msg_60_Sgn_5_DynValue;
double CANMMCAN_2_TX_Msg_60_Sgn_5_error;
UInt8 CANMMCAN_2_RX_Msg_60_Sgn_6;
UInt8 CANMMCAN_2_TX_Msg_60_Sgn_6;
UInt8 CANMMCAN_2_TX_Msg_60_Sgn_6_constant;
UInt8 CANMMCAN_2_TX_Msg_60_Sgn_6_DynValue;
UInt8 CANMMCAN_2_TX_Msg_60_Sgn_6_error;
double CANMMCAN_2_RX_Msg_61_Sgn_1;
double CANMMCAN_2_TX_Msg_61_Sgn_1;
double CANMMCAN_2_TX_Msg_61_Sgn_1_constant;
double CANMMCAN_2_TX_Msg_61_Sgn_1_DynValue;
double CANMMCAN_2_TX_Msg_61_Sgn_1_error;
double CANMMCAN_2_RX_Msg_61_Sgn_2;
double CANMMCAN_2_TX_Msg_61_Sgn_2;
double CANMMCAN_2_TX_Msg_61_Sgn_2_constant;
double CANMMCAN_2_TX_Msg_61_Sgn_2_DynValue;
double CANMMCAN_2_TX_Msg_61_Sgn_2_error;
double CANMMCAN_2_RX_Msg_61_Sgn_3;
double CANMMCAN_2_TX_Msg_61_Sgn_3;
double CANMMCAN_2_TX_Msg_61_Sgn_3_constant;
double CANMMCAN_2_TX_Msg_61_Sgn_3_DynValue;
double CANMMCAN_2_TX_Msg_61_Sgn_3_error;
double CANMMCAN_2_RX_Msg_61_Sgn_4;
double CANMMCAN_2_TX_Msg_61_Sgn_4;
double CANMMCAN_2_TX_Msg_61_Sgn_4_constant;
double CANMMCAN_2_TX_Msg_61_Sgn_4_DynValue;
double CANMMCAN_2_TX_Msg_61_Sgn_4_error;
double CANMMCAN_2_RX_Msg_61_Sgn_5;
double CANMMCAN_2_TX_Msg_61_Sgn_5;
double CANMMCAN_2_TX_Msg_61_Sgn_5_constant;
double CANMMCAN_2_TX_Msg_61_Sgn_5_DynValue;
double CANMMCAN_2_TX_Msg_61_Sgn_5_error;
UInt8 CANMMCAN_2_RX_Msg_61_Sgn_6;
UInt8 CANMMCAN_2_TX_Msg_61_Sgn_6;
UInt8 CANMMCAN_2_TX_Msg_61_Sgn_6_constant;
UInt8 CANMMCAN_2_TX_Msg_61_Sgn_6_DynValue;
UInt8 CANMMCAN_2_TX_Msg_61_Sgn_6_error;
double CANMMCAN_2_RX_Msg_62_Sgn_1;
double CANMMCAN_2_TX_Msg_62_Sgn_1;
double CANMMCAN_2_TX_Msg_62_Sgn_1_constant;
double CANMMCAN_2_TX_Msg_62_Sgn_1_DynValue;
double CANMMCAN_2_TX_Msg_62_Sgn_1_error;
double CANMMCAN_2_RX_Msg_62_Sgn_2;
double CANMMCAN_2_TX_Msg_62_Sgn_2;
double CANMMCAN_2_TX_Msg_62_Sgn_2_constant;
double CANMMCAN_2_TX_Msg_62_Sgn_2_DynValue;
double CANMMCAN_2_TX_Msg_62_Sgn_2_error;
double CANMMCAN_2_RX_Msg_62_Sgn_3;
double CANMMCAN_2_TX_Msg_62_Sgn_3;
double CANMMCAN_2_TX_Msg_62_Sgn_3_constant;
double CANMMCAN_2_TX_Msg_62_Sgn_3_DynValue;
double CANMMCAN_2_TX_Msg_62_Sgn_3_error;
double CANMMCAN_2_RX_Msg_62_Sgn_4;
double CANMMCAN_2_TX_Msg_62_Sgn_4;
double CANMMCAN_2_TX_Msg_62_Sgn_4_constant;
double CANMMCAN_2_TX_Msg_62_Sgn_4_DynValue;
double CANMMCAN_2_TX_Msg_62_Sgn_4_error;
double CANMMCAN_2_RX_Msg_62_Sgn_5;
double CANMMCAN_2_TX_Msg_62_Sgn_5;
double CANMMCAN_2_TX_Msg_62_Sgn_5_constant;
double CANMMCAN_2_TX_Msg_62_Sgn_5_DynValue;
double CANMMCAN_2_TX_Msg_62_Sgn_5_error;
UInt8 CANMMCAN_2_RX_Msg_62_Sgn_6;
UInt8 CANMMCAN_2_TX_Msg_62_Sgn_6;
UInt8 CANMMCAN_2_TX_Msg_62_Sgn_6_constant;
UInt8 CANMMCAN_2_TX_Msg_62_Sgn_6_DynValue;
UInt8 CANMMCAN_2_TX_Msg_62_Sgn_6_error;
double CANMMCAN_2_RX_Msg_63_Sgn_1;
double CANMMCAN_2_TX_Msg_63_Sgn_1;
double CANMMCAN_2_TX_Msg_63_Sgn_1_constant;
double CANMMCAN_2_TX_Msg_63_Sgn_1_DynValue;
double CANMMCAN_2_TX_Msg_63_Sgn_1_error;
double CANMMCAN_2_RX_Msg_63_Sgn_2;
double CANMMCAN_2_TX_Msg_63_Sgn_2;
double CANMMCAN_2_TX_Msg_63_Sgn_2_constant;
double CANMMCAN_2_TX_Msg_63_Sgn_2_DynValue;
double CANMMCAN_2_TX_Msg_63_Sgn_2_error;
double CANMMCAN_2_RX_Msg_63_Sgn_3;
double CANMMCAN_2_TX_Msg_63_Sgn_3;
double CANMMCAN_2_TX_Msg_63_Sgn_3_constant;
double CANMMCAN_2_TX_Msg_63_Sgn_3_DynValue;
double CANMMCAN_2_TX_Msg_63_Sgn_3_error;
double CANMMCAN_2_RX_Msg_63_Sgn_4;
double CANMMCAN_2_TX_Msg_63_Sgn_4;
double CANMMCAN_2_TX_Msg_63_Sgn_4_constant;
double CANMMCAN_2_TX_Msg_63_Sgn_4_DynValue;
double CANMMCAN_2_TX_Msg_63_Sgn_4_error;
double CANMMCAN_2_RX_Msg_63_Sgn_5;
double CANMMCAN_2_TX_Msg_63_Sgn_5;
double CANMMCAN_2_TX_Msg_63_Sgn_5_constant;
double CANMMCAN_2_TX_Msg_63_Sgn_5_DynValue;
double CANMMCAN_2_TX_Msg_63_Sgn_5_error;
UInt8 CANMMCAN_2_RX_Msg_63_Sgn_6;
UInt8 CANMMCAN_2_TX_Msg_63_Sgn_6;
UInt8 CANMMCAN_2_TX_Msg_63_Sgn_6_constant;
UInt8 CANMMCAN_2_TX_Msg_63_Sgn_6_DynValue;
UInt8 CANMMCAN_2_TX_Msg_63_Sgn_6_error;
double CANMMCAN_2_RX_Msg_64_Sgn_1;
double CANMMCAN_2_TX_Msg_64_Sgn_1;
double CANMMCAN_2_TX_Msg_64_Sgn_1_constant;
double CANMMCAN_2_TX_Msg_64_Sgn_1_DynValue;
double CANMMCAN_2_TX_Msg_64_Sgn_1_error;
double CANMMCAN_2_RX_Msg_64_Sgn_2;
double CANMMCAN_2_TX_Msg_64_Sgn_2;
double CANMMCAN_2_TX_Msg_64_Sgn_2_constant;
double CANMMCAN_2_TX_Msg_64_Sgn_2_DynValue;
double CANMMCAN_2_TX_Msg_64_Sgn_2_error;
double CANMMCAN_2_RX_Msg_64_Sgn_3;
double CANMMCAN_2_TX_Msg_64_Sgn_3;
double CANMMCAN_2_TX_Msg_64_Sgn_3_constant;
double CANMMCAN_2_TX_Msg_64_Sgn_3_DynValue;
double CANMMCAN_2_TX_Msg_64_Sgn_3_error;
double CANMMCAN_2_RX_Msg_64_Sgn_4;
double CANMMCAN_2_TX_Msg_64_Sgn_4;
double CANMMCAN_2_TX_Msg_64_Sgn_4_constant;
double CANMMCAN_2_TX_Msg_64_Sgn_4_DynValue;
double CANMMCAN_2_TX_Msg_64_Sgn_4_error;
double CANMMCAN_2_RX_Msg_64_Sgn_5;
double CANMMCAN_2_TX_Msg_64_Sgn_5;
double CANMMCAN_2_TX_Msg_64_Sgn_5_constant;
double CANMMCAN_2_TX_Msg_64_Sgn_5_DynValue;
double CANMMCAN_2_TX_Msg_64_Sgn_5_error;
UInt8 CANMMCAN_2_RX_Msg_64_Sgn_6;
UInt8 CANMMCAN_2_TX_Msg_64_Sgn_6;
UInt8 CANMMCAN_2_TX_Msg_64_Sgn_6_constant;
UInt8 CANMMCAN_2_TX_Msg_64_Sgn_6_DynValue;
UInt8 CANMMCAN_2_TX_Msg_64_Sgn_6_error;
double CANMMCAN_2_RX_Msg_65_Sgn_1;
double CANMMCAN_2_TX_Msg_65_Sgn_1;
double CANMMCAN_2_TX_Msg_65_Sgn_1_constant;
double CANMMCAN_2_TX_Msg_65_Sgn_1_DynValue;
double CANMMCAN_2_TX_Msg_65_Sgn_1_error;






volatile uint8_T CANMMCAN_2_TXs[55];
volatile uint8_T CANMMCAN_2_TXm[55];
volatile uint8_T CANMMCAN_2_TXGWs[55];
volatile uint32_T CANMMCAN_2_TXcdo[55];
