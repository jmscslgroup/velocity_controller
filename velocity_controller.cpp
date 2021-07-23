//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: velocity_controller.cpp
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
#include "velocity_controller.h"
#include "velocity_controller_private.h"

// Block signals (default storage)
B_velocity_controller_T velocity_controller_B;

// Continuous states
X_velocity_controller_T velocity_controller_X;

// Block states (default storage)
DW_velocity_controller_T velocity_controller_DW;

// Real-time model
RT_MODEL_velocity_controller_T velocity_controller_M_ =
  RT_MODEL_velocity_controller_T();
RT_MODEL_velocity_controller_T *const velocity_controller_M =
  &velocity_controller_M_;

//
// This function updates continuous states using the ODE3 fixed-step
// solver algorithm
//
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  // Solver Matrices
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = static_cast<ODE3_IntgData *>(rtsiGetSolverData(si));
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 2;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  // Save the state values at time t in y, we'll use x as ynew.
  (void) memcpy(y, x,
                static_cast<uint_T>(nXc)*sizeof(real_T));

  // Assumes that rtsiSetT and ModelOutputs are up-to-date
  // f0 = f(t,y)
  rtsiSetdX(si, f0);
  velocity_controller_derivatives();

  // f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*));
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  velocity_controller_step();
  velocity_controller_derivatives();

  // f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*));
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  velocity_controller_step();
  velocity_controller_derivatives();

  // tnew = t + hA(3);
  // ynew = y + f*hB(:,3);
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

// Model step function
void velocity_controller_step(void)
{
  SL_Bus_velocity_controller_std_msgs_Float64 rtb_BusAssignment;
  real_T rtb_DeadZone;
  real_T rtb_Sum;
  real_T rtb_Sum_p;
  real_T tmp;
  boolean_T b_varargout_1;
  if (rtmIsMajorTimeStep(velocity_controller_M)) {
    // set solver stop time
    rtsiSetSolverStopTime(&velocity_controller_M->solverInfo,
                          ((velocity_controller_M->Timing.clockTick0+1)*
      velocity_controller_M->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep(velocity_controller_M)) {
    velocity_controller_M->Timing.t[0] = rtsiGetT
      (&velocity_controller_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(velocity_controller_M)) {
    // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
    // MATLABSystem: '<S4>/SourceBlock' incorporates:
    //   Inport: '<S8>/In1'

    b_varargout_1 = Sub_velocity_controller_31.getLatestMessage
      (&velocity_controller_B.b_varargout_2);

    // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S8>/Enable'

    if (b_varargout_1) {
      velocity_controller_B.In1 = velocity_controller_B.b_varargout_2;
    }

    // End of MATLABSystem: '<S4>/SourceBlock'
    // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe1'

    // Outputs for Atomic SubSystem: '<Root>/Subscribe'
    // MATLABSystem: '<S3>/SourceBlock' incorporates:
    //   Inport: '<S7>/In1'

    b_varargout_1 = Sub_velocity_controller_10.getLatestMessage
      (&velocity_controller_B.b_varargout_2);

    // Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S7>/Enable'

    if (b_varargout_1) {
      velocity_controller_B.In1_d = velocity_controller_B.b_varargout_2;
    }

    // End of MATLABSystem: '<S3>/SourceBlock'
    // End of Outputs for SubSystem: '<S3>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe'

    // Sum: '<Root>/Sum'
    rtb_Sum = velocity_controller_B.In1.Linear.X -
      velocity_controller_B.In1_d.Linear.X;

    // Gain: '<S48>/Proportional Gain'
    velocity_controller_B.ProportionalGain =
      velocity_controller_P.reference_tracking_P * rtb_Sum;

    // Gain: '<S37>/Derivative Gain'
    velocity_controller_B.DerivativeGain =
      velocity_controller_P.reference_tracking_D * rtb_Sum;
  }

  // Gain: '<S46>/Filter Coefficient' incorporates:
  //   Integrator: '<S38>/Filter'
  //   Sum: '<S38>/SumD'

  velocity_controller_B.FilterCoefficient =
    (velocity_controller_B.DerivativeGain - velocity_controller_X.Filter_CSTATE)
    * velocity_controller_P.reference_tracking_N;

  // Sum: '<S52>/Sum' incorporates:
  //   Integrator: '<S43>/Integrator'

  rtb_Sum_p = (velocity_controller_B.ProportionalGain +
               velocity_controller_X.Integrator_CSTATE) +
    velocity_controller_B.FilterCoefficient;

  // Saturate: '<S50>/Saturation'
  if (rtb_Sum_p > velocity_controller_P.reference_tracking_UpperSaturat) {
    rtb_DeadZone = velocity_controller_P.reference_tracking_UpperSaturat;
  } else if (rtb_Sum_p < velocity_controller_P.reference_tracking_LowerSaturat)
  {
    rtb_DeadZone = velocity_controller_P.reference_tracking_LowerSaturat;
  } else {
    rtb_DeadZone = rtb_Sum_p;
  }

  // End of Saturate: '<S50>/Saturation'

  // Saturate: '<Root>/Saturation'
  if (rtb_DeadZone > velocity_controller_P.Saturation_UpperSat) {
    // BusAssignment: '<Root>/Bus Assignment'
    rtb_BusAssignment.Data = velocity_controller_P.Saturation_UpperSat;
  } else if (rtb_DeadZone < velocity_controller_P.Saturation_LowerSat) {
    // BusAssignment: '<Root>/Bus Assignment'
    rtb_BusAssignment.Data = velocity_controller_P.Saturation_LowerSat;
  } else {
    // BusAssignment: '<Root>/Bus Assignment'
    rtb_BusAssignment.Data = rtb_DeadZone;
  }

  // End of Saturate: '<Root>/Saturation'

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S2>/SinkBlock'
  Pub_velocity_controller_3.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
  if (rtmIsMajorTimeStep(velocity_controller_M)) {
    // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
    // MATLABSystem: '<S5>/SourceBlock' incorporates:
    //   Inport: '<S9>/In1'

    b_varargout_1 = Sub_velocity_controller_35.getLatestMessage
      (&rtb_BusAssignment);

    // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S9>/Enable'

    if (b_varargout_1) {
      velocity_controller_B.In1_a = rtb_BusAssignment;
    }

    // End of MATLABSystem: '<S5>/SourceBlock'
    // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe2'

    // Gain: '<S40>/Integral Gain'
    velocity_controller_B.IntegralGain =
      velocity_controller_P.reference_tracking_I * rtb_Sum;
  }

  // Sum: '<S55>/SumI1' incorporates:
  //   Gain: '<S54>/Kt'
  //   Sum: '<S54>/SumI3'

  velocity_controller_B.Switch = (velocity_controller_B.In1_a.Data -
    rtb_DeadZone) * velocity_controller_P.reference_tracking_Kt +
    velocity_controller_B.IntegralGain;

  // DeadZone: '<S36>/DeadZone'
  if (rtb_Sum_p > velocity_controller_P.reference_tracking_UpperSaturat) {
    rtb_DeadZone = rtb_Sum_p -
      velocity_controller_P.reference_tracking_UpperSaturat;
  } else if (rtb_Sum_p >= velocity_controller_P.reference_tracking_LowerSaturat)
  {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone = rtb_Sum_p -
      velocity_controller_P.reference_tracking_LowerSaturat;
  }

  // End of DeadZone: '<S36>/DeadZone'

  // Signum: '<S34>/SignPreSat'
  if (rtb_DeadZone < 0.0) {
    // DataTypeConversion: '<S34>/DataTypeConv1'
    rtb_Sum = -1.0;
  } else if (rtb_DeadZone > 0.0) {
    // DataTypeConversion: '<S34>/DataTypeConv1'
    rtb_Sum = 1.0;
  } else if (rtb_DeadZone == 0.0) {
    // DataTypeConversion: '<S34>/DataTypeConv1'
    rtb_Sum = 0.0;
  } else {
    // DataTypeConversion: '<S34>/DataTypeConv1'
    rtb_Sum = (rtNaN);
  }

  // End of Signum: '<S34>/SignPreSat'

  // DataTypeConversion: '<S34>/DataTypeConv1'
  if (rtIsNaN(rtb_Sum)) {
    rtb_Sum = 0.0;
  } else {
    rtb_Sum = fmod(rtb_Sum, 256.0);
  }

  // Signum: '<S34>/SignPreIntegrator'
  if (velocity_controller_B.Switch < 0.0) {
    // DataTypeConversion: '<S34>/DataTypeConv2'
    tmp = -1.0;
  } else if (velocity_controller_B.Switch > 0.0) {
    // DataTypeConversion: '<S34>/DataTypeConv2'
    tmp = 1.0;
  } else if (velocity_controller_B.Switch == 0.0) {
    // DataTypeConversion: '<S34>/DataTypeConv2'
    tmp = 0.0;
  } else {
    // DataTypeConversion: '<S34>/DataTypeConv2'
    tmp = (rtNaN);
  }

  // End of Signum: '<S34>/SignPreIntegrator'

  // DataTypeConversion: '<S34>/DataTypeConv2'
  if (rtIsNaN(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  // Logic: '<S34>/AND3' incorporates:
  //   DataTypeConversion: '<S34>/DataTypeConv1'
  //   DataTypeConversion: '<S34>/DataTypeConv2'
  //   Gain: '<S34>/ZeroGain'
  //   RelationalOperator: '<S34>/Equal1'
  //   RelationalOperator: '<S34>/NotEqual'

  velocity_controller_B.AND3 = ((velocity_controller_P.ZeroGain_Gain * rtb_Sum_p
    != rtb_DeadZone) && ((rtb_Sum < 0.0 ? static_cast<int32_T>
    (static_cast<int8_T>(-static_cast<int8_T>(static_cast<uint8_T>(-rtb_Sum)))) :
    static_cast<int32_T>(static_cast<int8_T>(static_cast<uint8_T>(rtb_Sum)))) ==
    (tmp < 0.0 ? static_cast<int32_T>(static_cast<int8_T>(-static_cast<int8_T>(
    static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<int8_T>(
    static_cast<uint8_T>(tmp))))));
  if (rtmIsMajorTimeStep(velocity_controller_M)) {
    // Memory: '<S34>/Memory'
    velocity_controller_B.Memory = velocity_controller_DW.Memory_PreviousInput;
  }

  // Switch: '<S34>/Switch'
  if (velocity_controller_B.Memory) {
    // Sum: '<S55>/SumI1' incorporates:
    //   Constant: '<S34>/Constant1'
    //   Switch: '<S34>/Switch'

    velocity_controller_B.Switch = velocity_controller_P.Constant1_Value;
  }

  // End of Switch: '<S34>/Switch'
  if (rtmIsMajorTimeStep(velocity_controller_M)) {
    if (rtmIsMajorTimeStep(velocity_controller_M)) {
      // Update for Memory: '<S34>/Memory'
      velocity_controller_DW.Memory_PreviousInput = velocity_controller_B.AND3;
    }
  }                                    // end MajorTimeStep

  if (rtmIsMajorTimeStep(velocity_controller_M)) {
    rt_ertODEUpdateContinuousStates(&velocity_controller_M->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++velocity_controller_M->Timing.clockTick0;
    velocity_controller_M->Timing.t[0] = rtsiGetSolverStopTime
      (&velocity_controller_M->solverInfo);

    {
      // Update absolute timer for sample time: [0.02s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.02, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      velocity_controller_M->Timing.clockTick1++;
    }
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void velocity_controller_derivatives(void)
{
  XDot_velocity_controller_T *_rtXdot;
  _rtXdot = ((XDot_velocity_controller_T *) velocity_controller_M->derivs);

  // Derivatives for Integrator: '<S43>/Integrator'
  _rtXdot->Integrator_CSTATE = velocity_controller_B.Switch;

  // Derivatives for Integrator: '<S38>/Filter'
  _rtXdot->Filter_CSTATE = velocity_controller_B.FilterCoefficient;
}

// Model initialize function
void velocity_controller_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&velocity_controller_M->solverInfo,
                          &velocity_controller_M->Timing.simTimeStep);
    rtsiSetTPtr(&velocity_controller_M->solverInfo, &rtmGetTPtr
                (velocity_controller_M));
    rtsiSetStepSizePtr(&velocity_controller_M->solverInfo,
                       &velocity_controller_M->Timing.stepSize0);
    rtsiSetdXPtr(&velocity_controller_M->solverInfo,
                 &velocity_controller_M->derivs);
    rtsiSetContStatesPtr(&velocity_controller_M->solverInfo, (real_T **)
                         &velocity_controller_M->contStates);
    rtsiSetNumContStatesPtr(&velocity_controller_M->solverInfo,
      &velocity_controller_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&velocity_controller_M->solverInfo,
      &velocity_controller_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&velocity_controller_M->solverInfo,
      &velocity_controller_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&velocity_controller_M->solverInfo,
      &velocity_controller_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&velocity_controller_M->solverInfo,
                          (&rtmGetErrorStatus(velocity_controller_M)));
    rtsiSetRTModelPtr(&velocity_controller_M->solverInfo, velocity_controller_M);
  }

  rtsiSetSimTimeStep(&velocity_controller_M->solverInfo, MAJOR_TIME_STEP);
  velocity_controller_M->intgData.y = velocity_controller_M->odeY;
  velocity_controller_M->intgData.f[0] = velocity_controller_M->odeF[0];
  velocity_controller_M->intgData.f[1] = velocity_controller_M->odeF[1];
  velocity_controller_M->intgData.f[2] = velocity_controller_M->odeF[2];
  velocity_controller_M->contStates = ((X_velocity_controller_T *)
    &velocity_controller_X);
  rtsiSetSolverData(&velocity_controller_M->solverInfo, static_cast<void *>
                    (&velocity_controller_M->intgData));
  rtsiSetSolverName(&velocity_controller_M->solverInfo,"ode3");
  rtmSetTPtr(velocity_controller_M, &velocity_controller_M->Timing.tArray[0]);
  velocity_controller_M->Timing.stepSize0 = 0.02;

  {
    int32_T i;
    char_T b_zeroDelimTopic_0[12];
    char_T b_zeroDelimTopic_1[10];
    char_T b_zeroDelimTopic[8];
    char_T b_zeroDelimTopic_2[6];
    static const char_T tmp[7] = { 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_0[11] = { 'v', 'e', 'h', 'i', 'c', 'l', 'e', '/',
      'v', 'e', 'l' };

    static const char_T tmp_1[9] = { 'c', 'm', 'd', '_', 'a', 'c', 'c', 'e', 'l'
    };

    static const char_T tmp_2[5] = { 'a', 'c', 'c', 'e', 'l' };

    // InitializeConditions for Integrator: '<S43>/Integrator'
    velocity_controller_X.Integrator_CSTATE =
      velocity_controller_P.reference_tracking_InitialCon_n;

    // InitializeConditions for Integrator: '<S38>/Filter'
    velocity_controller_X.Filter_CSTATE =
      velocity_controller_P.reference_tracking_InitialCondi;

    // InitializeConditions for Memory: '<S34>/Memory'
    velocity_controller_DW.Memory_PreviousInput =
      velocity_controller_P.Memory_InitialCondition;

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S8>/Out1' incorporates:
    //   Inport: '<S8>/In1'

    velocity_controller_B.In1 = velocity_controller_P.Out1_Y0_h;

    // End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem'

    // Start for MATLABSystem: '<S4>/SourceBlock'
    velocity_controller_DW.obj_gs.matlabCodegenIsDeleted = false;
    velocity_controller_DW.obj_gs.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[7] = '\x00';
    Sub_velocity_controller_31.createSubscriber(&b_zeroDelimTopic[0], 1);
    velocity_controller_DW.obj_gs.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S3>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S7>/Out1' incorporates:
    //   Inport: '<S7>/In1'

    velocity_controller_B.In1_d = velocity_controller_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem'

    // Start for MATLABSystem: '<S3>/SourceBlock'
    velocity_controller_DW.obj_n.matlabCodegenIsDeleted = false;
    velocity_controller_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic_0[i] = tmp_0[i];
    }

    b_zeroDelimTopic_0[11] = '\x00';
    Sub_velocity_controller_10.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    velocity_controller_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    velocity_controller_DW.obj.matlabCodegenIsDeleted = false;
    velocity_controller_DW.obj.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_1[i] = tmp_1[i];
    }

    b_zeroDelimTopic_1[9] = '\x00';
    Pub_velocity_controller_3.createPublisher(&b_zeroDelimTopic_1[0], 1);
    velocity_controller_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S9>/Out1' incorporates:
    //   Inport: '<S9>/In1'

    velocity_controller_B.In1_a = velocity_controller_P.Out1_Y0_i;

    // End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem'

    // Start for MATLABSystem: '<S5>/SourceBlock'
    velocity_controller_DW.obj_g.matlabCodegenIsDeleted = false;
    velocity_controller_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      b_zeroDelimTopic_2[i] = tmp_2[i];
    }

    b_zeroDelimTopic_2[5] = '\x00';
    Sub_velocity_controller_35.createSubscriber(&b_zeroDelimTopic_2[0], 1);
    velocity_controller_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'
  }
}

// Model terminate function
void velocity_controller_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S4>/SourceBlock'
  if (!velocity_controller_DW.obj_gs.matlabCodegenIsDeleted) {
    velocity_controller_DW.obj_gs.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S3>/SourceBlock'
  if (!velocity_controller_DW.obj_n.matlabCodegenIsDeleted) {
    velocity_controller_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S3>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S2>/SinkBlock'
  if (!velocity_controller_DW.obj.matlabCodegenIsDeleted) {
    velocity_controller_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S5>/SourceBlock'
  if (!velocity_controller_DW.obj_g.matlabCodegenIsDeleted) {
    velocity_controller_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe2'
}

//
// File trailer for generated code.
//
// [EOF]
//
