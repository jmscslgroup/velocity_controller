//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: velocity_controller_data.cpp
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

// Block parameters (default storage)
P_velocity_controller_T velocity_controller_P = {
  // Mask Parameter: reference_tracking_D
  //  Referenced by: '<S37>/Derivative Gain'

  1.33981022316214,

  // Mask Parameter: reference_tracking_I
  //  Referenced by: '<S40>/Integral Gain'

  0.0655731064858092,

  // Mask Parameter: reference_tracking_InitialCondi
  //  Referenced by: '<S38>/Filter'

  0.0,

  // Mask Parameter: reference_tracking_InitialCon_n
  //  Referenced by: '<S43>/Integrator'

  0.0,

  // Mask Parameter: reference_tracking_Kt
  //  Referenced by: '<S54>/Kt'

  1.0,

  // Mask Parameter: reference_tracking_LowerSaturat
  //  Referenced by:
  //    '<S50>/Saturation'
  //    '<S36>/DeadZone'

  -3.0,

  // Mask Parameter: reference_tracking_N
  //  Referenced by: '<S46>/Filter Coefficient'

  7.54853219511638,

  // Mask Parameter: reference_tracking_P
  //  Referenced by: '<S48>/Proportional Gain'

  2.71967723043159,

  // Mask Parameter: reference_tracking_UpperSaturat
  //  Referenced by:
  //    '<S50>/Saturation'
  //    '<S36>/DeadZone'

  1.5,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S7>/Out1'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S3>/Constant'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: Out1_Y0_h
  //  Referenced by: '<S8>/Out1'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: Constant_Value_j
  //  Referenced by: '<S4>/Constant'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: Constant_Value_d
  //  Referenced by: '<S1>/Constant'

  {
    0.0                                // Data
  },

  // Computed Parameter: Out1_Y0_i
  //  Referenced by: '<S9>/Out1'

  {
    0.0                                // Data
  },

  // Computed Parameter: Constant_Value_b
  //  Referenced by: '<S5>/Constant'

  {
    0.0                                // Data
  },

  // Expression: 0
  //  Referenced by: '<S34>/Constant1'

  0.0,

  // Expression: 1.5
  //  Referenced by: '<Root>/Saturation'

  1.5,

  // Expression: -3
  //  Referenced by: '<Root>/Saturation'

  -3.0,

  // Expression: 0
  //  Referenced by: '<S34>/ZeroGain'

  0.0,

  // Computed Parameter: Memory_InitialCondition
  //  Referenced by: '<S34>/Memory'

  0
};

//
// File trailer for generated code.
//
// [EOF]
//
