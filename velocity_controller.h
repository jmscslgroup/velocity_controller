//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: velocity_controller.h
//
// Code generated for Simulink model 'velocity_controller'.
//
// Model version                  : 1.39
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Thu Jul 22 18:37:40 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_velocity_controller_h_
#define RTW_HEADER_velocity_controller_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "velocity_controller_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

// Block signals (default storage)
struct B_velocity_controller_T {
  SL_Bus_velocity_controller_geometry_msgs_Twist In1;// '<S8>/In1'
  SL_Bus_velocity_controller_geometry_msgs_Twist In1_d;// '<S7>/In1'
  SL_Bus_velocity_controller_geometry_msgs_Twist b_varargout_2;
  real_T ProportionalGain;             // '<S48>/Proportional Gain'
  real_T DerivativeGain;               // '<S37>/Derivative Gain'
  real_T FilterCoefficient;            // '<S46>/Filter Coefficient'
  real_T IntegralGain;                 // '<S40>/Integral Gain'
  real_T Switch;                       // '<S34>/Switch'
  SL_Bus_velocity_controller_std_msgs_Float64 In1_a;// '<S9>/In1'
  boolean_T AND3;                      // '<S34>/AND3'
  boolean_T Memory;                    // '<S34>/Memory'
};

// Block states (default storage) for system '<Root>'
struct DW_velocity_controller_T {
  ros_slroscpp_internal_block_P_T obj; // '<S2>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_g;// '<S5>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_gs;// '<S4>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_n;// '<S3>/SourceBlock'
  boolean_T Memory_PreviousInput;      // '<S34>/Memory'
};

// Continuous states (default storage)
struct X_velocity_controller_T {
  real_T Integrator_CSTATE;            // '<S43>/Integrator'
  real_T Filter_CSTATE;                // '<S38>/Filter'
};

// State derivatives (default storage)
struct XDot_velocity_controller_T {
  real_T Integrator_CSTATE;            // '<S43>/Integrator'
  real_T Filter_CSTATE;                // '<S38>/Filter'
};

// State disabled
struct XDis_velocity_controller_T {
  boolean_T Integrator_CSTATE;         // '<S43>/Integrator'
  boolean_T Filter_CSTATE;             // '<S38>/Filter'
};

#ifndef ODE3_INTG
#define ODE3_INTG

// ODE3 Integration Data
struct ODE3_IntgData {
  real_T *y;                           // output
  real_T *f[3];                        // derivatives
};

#endif

// Parameters (default storage)
struct P_velocity_controller_T_ {
  real_T reference_tracking_D;         // Mask Parameter: reference_tracking_D
                                          //  Referenced by: '<S37>/Derivative Gain'

  real_T reference_tracking_I;         // Mask Parameter: reference_tracking_I
                                          //  Referenced by: '<S40>/Integral Gain'

  real_T reference_tracking_InitialCondi;
                              // Mask Parameter: reference_tracking_InitialCondi
                                 //  Referenced by: '<S38>/Filter'

  real_T reference_tracking_InitialCon_n;
                              // Mask Parameter: reference_tracking_InitialCon_n
                                 //  Referenced by: '<S43>/Integrator'

  real_T reference_tracking_Kt;        // Mask Parameter: reference_tracking_Kt
                                          //  Referenced by: '<S54>/Kt'

  real_T reference_tracking_LowerSaturat;
                              // Mask Parameter: reference_tracking_LowerSaturat
                                 //  Referenced by:
                                 //    '<S50>/Saturation'
                                 //    '<S36>/DeadZone'

  real_T reference_tracking_N;         // Mask Parameter: reference_tracking_N
                                          //  Referenced by: '<S46>/Filter Coefficient'

  real_T reference_tracking_P;         // Mask Parameter: reference_tracking_P
                                          //  Referenced by: '<S48>/Proportional Gain'

  real_T reference_tracking_UpperSaturat;
                              // Mask Parameter: reference_tracking_UpperSaturat
                                 //  Referenced by:
                                 //    '<S50>/Saturation'
                                 //    '<S36>/DeadZone'

  SL_Bus_velocity_controller_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                            //  Referenced by: '<S7>/Out1'

  SL_Bus_velocity_controller_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                                   //  Referenced by: '<S3>/Constant'

  SL_Bus_velocity_controller_geometry_msgs_Twist Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                              //  Referenced by: '<S8>/Out1'

  SL_Bus_velocity_controller_geometry_msgs_Twist Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                                     //  Referenced by: '<S4>/Constant'

  SL_Bus_velocity_controller_std_msgs_Float64 Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                                  //  Referenced by: '<S1>/Constant'

  SL_Bus_velocity_controller_std_msgs_Float64 Out1_Y0_i;// Computed Parameter: Out1_Y0_i
                                                           //  Referenced by: '<S9>/Out1'

  SL_Bus_velocity_controller_std_msgs_Float64 Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                                  //  Referenced by: '<S5>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S34>/Constant1'

  real_T Saturation_UpperSat;          // Expression: 1.5
                                          //  Referenced by: '<Root>/Saturation'

  real_T Saturation_LowerSat;          // Expression: -3
                                          //  Referenced by: '<Root>/Saturation'

  real_T ZeroGain_Gain;                // Expression: 0
                                          //  Referenced by: '<S34>/ZeroGain'

  boolean_T Memory_InitialCondition;
                                  // Computed Parameter: Memory_InitialCondition
                                     //  Referenced by: '<S34>/Memory'

};

// Real-time Model Data Structure
struct tag_RTM_velocity_controller_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_velocity_controller_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[2];
  real_T odeF[3][2];
  ODE3_IntgData intgData;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_velocity_controller_T velocity_controller_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_velocity_controller_T velocity_controller_B;

#ifdef __cplusplus

}
#endif

// Continuous states (default storage)
extern X_velocity_controller_T velocity_controller_X;

// Block states (default storage)
extern struct DW_velocity_controller_T velocity_controller_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void velocity_controller_initialize(void);
  extern void velocity_controller_step(void);
  extern void velocity_controller_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_velocity_controller_T *const velocity_controller_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'velocity_controller'
//  '<S1>'   : 'velocity_controller/Blank Message'
//  '<S2>'   : 'velocity_controller/Publish'
//  '<S3>'   : 'velocity_controller/Subscribe'
//  '<S4>'   : 'velocity_controller/Subscribe1'
//  '<S5>'   : 'velocity_controller/Subscribe2'
//  '<S6>'   : 'velocity_controller/reference_tracking'
//  '<S7>'   : 'velocity_controller/Subscribe/Enabled Subsystem'
//  '<S8>'   : 'velocity_controller/Subscribe1/Enabled Subsystem'
//  '<S9>'   : 'velocity_controller/Subscribe2/Enabled Subsystem'
//  '<S10>'  : 'velocity_controller/reference_tracking/Anti-windup'
//  '<S11>'  : 'velocity_controller/reference_tracking/D Gain'
//  '<S12>'  : 'velocity_controller/reference_tracking/Filter'
//  '<S13>'  : 'velocity_controller/reference_tracking/Filter ICs'
//  '<S14>'  : 'velocity_controller/reference_tracking/I Gain'
//  '<S15>'  : 'velocity_controller/reference_tracking/Ideal P Gain'
//  '<S16>'  : 'velocity_controller/reference_tracking/Ideal P Gain Fdbk'
//  '<S17>'  : 'velocity_controller/reference_tracking/Integrator'
//  '<S18>'  : 'velocity_controller/reference_tracking/Integrator ICs'
//  '<S19>'  : 'velocity_controller/reference_tracking/N Copy'
//  '<S20>'  : 'velocity_controller/reference_tracking/N Gain'
//  '<S21>'  : 'velocity_controller/reference_tracking/P Copy'
//  '<S22>'  : 'velocity_controller/reference_tracking/Parallel P Gain'
//  '<S23>'  : 'velocity_controller/reference_tracking/Reset Signal'
//  '<S24>'  : 'velocity_controller/reference_tracking/Saturation'
//  '<S25>'  : 'velocity_controller/reference_tracking/Saturation Fdbk'
//  '<S26>'  : 'velocity_controller/reference_tracking/Sum'
//  '<S27>'  : 'velocity_controller/reference_tracking/Sum Fdbk'
//  '<S28>'  : 'velocity_controller/reference_tracking/Tracking Mode'
//  '<S29>'  : 'velocity_controller/reference_tracking/Tracking Mode Sum'
//  '<S30>'  : 'velocity_controller/reference_tracking/Tsamp - Integral'
//  '<S31>'  : 'velocity_controller/reference_tracking/Tsamp - Ngain'
//  '<S32>'  : 'velocity_controller/reference_tracking/postSat Signal'
//  '<S33>'  : 'velocity_controller/reference_tracking/preSat Signal'
//  '<S34>'  : 'velocity_controller/reference_tracking/Anti-windup/Cont. Clamping Parallel'
//  '<S35>'  : 'velocity_controller/reference_tracking/Anti-windup/Cont. Clamping Parallel/Dead Zone'
//  '<S36>'  : 'velocity_controller/reference_tracking/Anti-windup/Cont. Clamping Parallel/Dead Zone/Enabled'
//  '<S37>'  : 'velocity_controller/reference_tracking/D Gain/Internal Parameters'
//  '<S38>'  : 'velocity_controller/reference_tracking/Filter/Cont. Filter'
//  '<S39>'  : 'velocity_controller/reference_tracking/Filter ICs/Internal IC - Filter'
//  '<S40>'  : 'velocity_controller/reference_tracking/I Gain/Internal Parameters'
//  '<S41>'  : 'velocity_controller/reference_tracking/Ideal P Gain/Passthrough'
//  '<S42>'  : 'velocity_controller/reference_tracking/Ideal P Gain Fdbk/Disabled'
//  '<S43>'  : 'velocity_controller/reference_tracking/Integrator/Continuous'
//  '<S44>'  : 'velocity_controller/reference_tracking/Integrator ICs/Internal IC'
//  '<S45>'  : 'velocity_controller/reference_tracking/N Copy/Disabled'
//  '<S46>'  : 'velocity_controller/reference_tracking/N Gain/Internal Parameters'
//  '<S47>'  : 'velocity_controller/reference_tracking/P Copy/Disabled'
//  '<S48>'  : 'velocity_controller/reference_tracking/Parallel P Gain/Internal Parameters'
//  '<S49>'  : 'velocity_controller/reference_tracking/Reset Signal/Disabled'
//  '<S50>'  : 'velocity_controller/reference_tracking/Saturation/Enabled'
//  '<S51>'  : 'velocity_controller/reference_tracking/Saturation Fdbk/Disabled'
//  '<S52>'  : 'velocity_controller/reference_tracking/Sum/Sum_PID'
//  '<S53>'  : 'velocity_controller/reference_tracking/Sum Fdbk/Disabled'
//  '<S54>'  : 'velocity_controller/reference_tracking/Tracking Mode/Enabled'
//  '<S55>'  : 'velocity_controller/reference_tracking/Tracking Mode Sum/Tracking Mode'
//  '<S56>'  : 'velocity_controller/reference_tracking/Tsamp - Integral/Passthrough'
//  '<S57>'  : 'velocity_controller/reference_tracking/Tsamp - Ngain/Passthrough'
//  '<S58>'  : 'velocity_controller/reference_tracking/postSat Signal/Forward_Path'
//  '<S59>'  : 'velocity_controller/reference_tracking/preSat Signal/Forward_Path'

#endif                                 // RTW_HEADER_velocity_controller_h_

//
// File trailer for generated code.
//
// [EOF]
//
