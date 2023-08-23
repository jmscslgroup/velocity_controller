//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: velocity_controller_data.cpp
//
// Code generated for Simulink model 'velocity_controller'.
//
// Model version                  : 1.45
// Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
// C/C++ source code generated on : Wed Aug 23 11:23:11 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "velocity_controller.h"

// Block parameters (default storage)
P_velocity_controller_T velocity_controller_P = {
  // Mask Parameter: reference_tracking_D
  //  Referenced by: '<S38>/Derivative Gain'

  1.0,

  // Mask Parameter: reference_tracking_I
  //  Referenced by: '<S41>/Integral Gain'

  0.0,

  // Mask Parameter: reference_tracking_InitialCondi
  //  Referenced by: '<S39>/Filter'

  0.0,

  // Mask Parameter: reference_tracking_InitialCon_n
  //  Referenced by: '<S44>/Integrator'

  0.0,

  // Mask Parameter: reference_tracking_LowerSaturat
  //  Referenced by:
  //    '<S51>/Saturation'
  //    '<S37>/DeadZone'

  -3.0,

  // Mask Parameter: reference_tracking_N
  //  Referenced by: '<S47>/Filter Coefficient'

  7.54853219511638,

  // Mask Parameter: reference_tracking_P
  //  Referenced by: '<S49>/Proportional Gain'

  0.2,

  // Mask Parameter: reference_tracking_UpperSaturat
  //  Referenced by:
  //    '<S51>/Saturation'
  //    '<S37>/DeadZone'

  1.5,

  // Computed Parameter: Out1_Y0
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

  // Computed Parameter: Constant_Value
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

  // Computed Parameter: Out1_Y0_h
  //  Referenced by: '<S9>/Out1'

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
  //  Referenced by: '<S5>/Constant'

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

  // Computed Parameter: Out1_Y0_a
  //  Referenced by: '<S10>/Out1'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_ja
  //  Referenced by: '<S6>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_d
  //  Referenced by: '<S1>/Constant'

  {
    0.0                                // Data
  },

  // Expression: 0
  //  Referenced by: '<S35>/Constant1'

  0.0,

  // Expression: 1.5
  //  Referenced by: '<Root>/Saturation'

  1.5,

  // Expression: -3
  //  Referenced by: '<Root>/Saturation'

  -3.0,

  // Expression: 0
  //  Referenced by: '<S35>/ZeroGain'

  0.0,

  // Computed Parameter: Memory_InitialCondition
  //  Referenced by: '<S35>/Memory'

  false
};

//
// File trailer for generated code.
//
// [EOF]
//
