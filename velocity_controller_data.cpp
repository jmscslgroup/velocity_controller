//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: velocity_controller_data.cpp
//
// Code generated for Simulink model 'velocity_controller'.
//
// Model version                  : 1.42
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Sun Jul 18 21:01:03 2021
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
  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S29>/Out1'

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

  // Computed Parameter: Out1_Y0_o
  //  Referenced by: '<S30>/Out1'

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

  // Computed Parameter: Constant_Value_m
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

  // Computed Parameter: Constant_Value_g
  //  Referenced by: '<S1>/Constant'

  {
    0.0                                // Data
  },

  // Computed Parameter: Out1_Y0_c
  //  Referenced by: '<S31>/Out1'

  {
    0.0                                // Data
  },

  // Computed Parameter: Constant_Value_gl
  //  Referenced by: '<S6>/Constant'

  {
    0.0                                // Data
  },

  // Expression: lastx+xoff
  //  Referenced by: '<S7>/last_x'

  { 0.0, 0.0, 0.0 },

  // Expression: lastu+uoff
  //  Referenced by: '<S7>/last_mv'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Constant'

  0.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S2>/md_zero'

  0.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S2>/umin_zero'

  0.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S2>/umax_zero'

  0.0,

  // Expression: zeros(2,1)
  //  Referenced by: '<S2>/ymin_zero'

  { 0.0, 0.0 },

  // Expression: zeros(2,1)
  //  Referenced by: '<S2>/ymax_zero'

  { 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S2>/E_zero'

  0.0,

  // Expression: MVscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S7>/umin_scale4'

  1.0,

  // Expression: zeros(1,2)
  //  Referenced by: '<S2>/F_zero'

  { 0.0, 0.0 },

  // Expression: Yscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S7>/ymin_scale1'

  { 1.0, 1.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S2>/G_zero'

  0.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S2>/S_zero'

  0.0,

  // Expression: MDscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S7>/ymin_scale2'

  1.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S2>/switch_zero'

  0.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S2>/ext.mv_zero'

  0.0,

  // Expression: RMVscale
  //  Referenced by: '<S7>/ext.mv_scale'

  1.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S2>/mv.target_zero'

  0.0,

  // Expression: RMVscale
  //  Referenced by: '<S7>/ext.mv_scale1'

  1.0,

  // Expression: zeros(2,1)
  //  Referenced by: '<S2>/y.wt_zero'

  { 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S2>/u.wt_zero'

  0.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S2>/du.wt_zero'

  0.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S2>/ecr.wt_zero'

  0.0,

  // Expression: MVscale
  //  Referenced by: '<S7>/umin_scale1'

  1.0,

  // Expression: iA
  //  Referenced by: '<S7>/Memory'

  { 0, 0, 0, 0 }
};

//
// File trailer for generated code.
//
// [EOF]
//
