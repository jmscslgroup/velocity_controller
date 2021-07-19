//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: velocity_controller_private.h
//
// Code generated for Simulink model 'velocity_controller'.
//
// Model version                  : 1.37
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Mon Jul 19 14:05:28 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_velocity_controller_private_h_
#define RTW_HEADER_velocity_controller_private_h_
#include "rtwtypes.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

// private model entry point functions
extern void velocity_controller_derivatives(void);

#endif                             // RTW_HEADER_velocity_controller_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
