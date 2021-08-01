//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: velocity_controller.h
//
// Code generated for Simulink model 'velocity_controller'.
//
// Model version                  : 1.46
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Sun Aug  1 14:47:25 2021
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
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_velocity_controller_T {
  real_T rseq[20];
  real_T D[9];
  real_T b_H[9];
  real_T U[9];
  real_T RLinv[9];
  real_T TL[9];
  real_T QQ[9];
  real_T RR[9];
  real_T c_A[9];
  SL_Bus_velocity_controller_geometry_msgs_Twist In1;// '<S31>/In1'
  SL_Bus_velocity_controller_geometry_msgs_Twist In1_m;// '<S30>/In1'
  SL_Bus_velocity_controller_geometry_msgs_Twist b_varargout_2;
  real_T Opt[6];
  real_T Rhs[6];
  real_T a__1[4];
  real_T b_Mlim[4];
  real_T cTol[4];
  real_T dv[4];
  real_T xk[3];
  real_T f[3];
  real_T xest[3];                      // '<S28>/optimizer'
  real_T r[3];
  real_T z[3];
  real_T b_Ac[3];
  real_T work[3];
  real_T VectorConcatenate[2];         // '<Root>/Vector Concatenate'
  real_T VectorConcatenate1[2];        // '<Root>/Vector Concatenate1'
  real_T umin_scale1;                  // '<S8>/umin_scale1'
  real_T rMin;
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T zTa;
  real_T t2;
  real_T b_Ac_tmp;
  real_T atmp;
  real_T beta1;
  real_T tau_idx_1;
  real_T tau_idx_0;
  real_T temp;
  real_T c;
  real_T scale;
  SL_Bus_velocity_controller_std_msgs_Float64 In1_n;// '<S32>/In1'
  SL_Bus_velocity_controller_std_msgs_Float64 b_varargout_2_m;
  SL_Bus_velocity_controller_std_msgs_Float64 BusAssignment1;// '<Root>/Bus Assignment1' 
  int16_T iAnew[4];
  int16_T iC[4];
  int32_T b_i;
  int32_T rseq_tmp;
  int32_T b_k;
  int32_T i;
  int32_T i_c;
  int32_T r_tmp;
  int32_T U_tmp;
  int32_T i_k;
  int32_T b_i_c;
  int32_T f_i;
};

// Block states (default storage) for system '<Root>'
struct DW_velocity_controller_T {
  ros_slroscpp_internal_block_P_T obj; // '<S4>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_d;// '<S7>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_f;// '<S6>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_j;// '<S5>/SourceBlock'
  real_T last_mv_DSTATE;               // '<S8>/last_mv'
  real_T last_x_PreviousInput[3];      // '<S8>/last_x'
  boolean_T Memory_PreviousInput[4];   // '<S8>/Memory'
};

// Parameters (default storage)
struct P_velocity_controller_T_ {
  SL_Bus_velocity_controller_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                            //  Referenced by: '<S30>/Out1'

  SL_Bus_velocity_controller_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                                   //  Referenced by: '<S5>/Constant'

  SL_Bus_velocity_controller_geometry_msgs_Twist Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                              //  Referenced by: '<S31>/Out1'

  SL_Bus_velocity_controller_geometry_msgs_Twist Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                     //  Referenced by: '<S6>/Constant'

  SL_Bus_velocity_controller_std_msgs_Float64 Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                                  //  Referenced by: '<S1>/Constant'

  SL_Bus_velocity_controller_std_msgs_Float64 Out1_Y0_c;// Computed Parameter: Out1_Y0_c
                                                           //  Referenced by: '<S32>/Out1'

  SL_Bus_velocity_controller_std_msgs_Float64 Constant_Value_gl;// Computed Parameter: Constant_Value_gl
                                                                   //  Referenced by: '<S7>/Constant'

  real_T last_x_InitialCondition[3];   // Expression: lastx+xoff
                                          //  Referenced by: '<S8>/last_x'

  real_T last_mv_InitialCondition;     // Expression: lastu+uoff
                                          //  Referenced by: '<S8>/last_mv'

  real_T Constant_Value_d;             // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

  real_T md_zero_Value;                // Expression: zeros(1,1)
                                          //  Referenced by: '<S3>/md_zero'

  real_T umin_zero_Value;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S3>/umin_zero'

  real_T umax_zero_Value;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S3>/umax_zero'

  real_T ymin_zero_Value[2];           // Expression: zeros(2,1)
                                          //  Referenced by: '<S3>/ymin_zero'

  real_T ymax_zero_Value[2];           // Expression: zeros(2,1)
                                          //  Referenced by: '<S3>/ymax_zero'

  real_T E_zero_Value;                 // Expression: zeros(1,1)
                                          //  Referenced by: '<S3>/E_zero'

  real_T umin_scale4_Gain;         // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S8>/umin_scale4'

  real_T F_zero_Value[2];              // Expression: zeros(1,2)
                                          //  Referenced by: '<S3>/F_zero'

  real_T ymin_scale1_Gain[2];       // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S8>/ymin_scale1'

  real_T G_zero_Value;                 // Expression: zeros(1,1)
                                          //  Referenced by: '<S3>/G_zero'

  real_T S_zero_Value;                 // Expression: zeros(1,1)
                                          //  Referenced by: '<S3>/S_zero'

  real_T ymin_scale2_Gain;         // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S8>/ymin_scale2'

  real_T switch_zero_Value;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S3>/switch_zero'

  real_T extmv_zero_Value;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S3>/ext.mv_zero'

  real_T extmv_scale_Gain;             // Expression: RMVscale
                                          //  Referenced by: '<S8>/ext.mv_scale'

  real_T mvtarget_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S3>/mv.target_zero'

  real_T extmv_scale1_Gain;            // Expression: RMVscale
                                          //  Referenced by: '<S8>/ext.mv_scale1'

  real_T ywt_zero_Value[2];            // Expression: zeros(2,1)
                                          //  Referenced by: '<S3>/y.wt_zero'

  real_T uwt_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S3>/u.wt_zero'

  real_T duwt_zero_Value;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S3>/du.wt_zero'

  real_T ecrwt_zero_Value;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S3>/ecr.wt_zero'

  real_T umin_scale1_Gain;             // Expression: MVscale
                                          //  Referenced by: '<S8>/umin_scale1'

  boolean_T Memory_InitialCondition[4];// Expression: iA
                                          //  Referenced by: '<S8>/Memory'

};

// Real-time Model Data Structure
struct tag_RTM_velocity_controller_T {
  const char_T *errorStatus;
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
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S8>/Data Type Conversion14' : Unused code path elimination
//  Block '<S8>/Data Type Conversion15' : Unused code path elimination
//  Block '<S8>/Floor' : Unused code path elimination
//  Block '<S8>/Floor1' : Unused code path elimination
//  Block '<S9>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S10>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S11>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S12>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S13>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S14>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S15>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S16>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S17>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S18>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S19>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S20>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S21>/Vector Dimension Check' : Unused code path elimination
//  Block '<S22>/Vector Dimension Check' : Unused code path elimination
//  Block '<S23>/Vector Dimension Check' : Unused code path elimination
//  Block '<S24>/Vector Dimension Check' : Unused code path elimination
//  Block '<S25>/Vector Dimension Check' : Unused code path elimination
//  Block '<S26>/Vector Dimension Check' : Unused code path elimination
//  Block '<S27>/Vector Dimension Check' : Unused code path elimination
//  Block '<S8>/constant' : Unused code path elimination
//  Block '<S8>/umin_scale2' : Unused code path elimination
//  Block '<S8>/umin_scale3' : Unused code path elimination
//  Block '<S8>/umin_scale5' : Unused code path elimination
//  Block '<S8>/ym_zero' : Unused code path elimination
//  Block '<S3>/m_zero' : Unused code path elimination
//  Block '<S3>/p_zero' : Unused code path elimination
//  Block '<S8>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S8>/Data Type Conversion10' : Eliminate redundant data type conversion
//  Block '<S8>/Data Type Conversion11' : Eliminate redundant data type conversion
//  Block '<S8>/Data Type Conversion12' : Eliminate redundant data type conversion
//  Block '<S8>/Data Type Conversion13' : Eliminate redundant data type conversion
//  Block '<S8>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<S8>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S8>/Data Type Conversion4' : Eliminate redundant data type conversion
//  Block '<S8>/Data Type Conversion5' : Eliminate redundant data type conversion
//  Block '<S8>/Data Type Conversion6' : Eliminate redundant data type conversion
//  Block '<S8>/Data Type Conversion7' : Eliminate redundant data type conversion
//  Block '<S8>/Data Type Conversion8' : Eliminate redundant data type conversion
//  Block '<S8>/Data Type Conversion9' : Eliminate redundant data type conversion
//  Block '<S8>/E Conversion' : Eliminate redundant data type conversion
//  Block '<S8>/F Conversion' : Eliminate redundant data type conversion
//  Block '<S8>/G Conversion' : Eliminate redundant data type conversion
//  Block '<S8>/Reshape' : Reshape block reduction
//  Block '<S8>/Reshape1' : Reshape block reduction
//  Block '<S8>/Reshape2' : Reshape block reduction
//  Block '<S8>/Reshape3' : Reshape block reduction
//  Block '<S8>/Reshape4' : Reshape block reduction
//  Block '<S8>/Reshape5' : Reshape block reduction
//  Block '<S8>/S Conversion' : Eliminate redundant data type conversion
//  Block '<S8>/mo or x Conversion' : Eliminate redundant data type conversion


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
//  '<S1>'   : 'velocity_controller/Blank Message1'
//  '<S2>'   : 'velocity_controller/Brake at low velocities'
//  '<S3>'   : 'velocity_controller/MPC Controller'
//  '<S4>'   : 'velocity_controller/Publish1'
//  '<S5>'   : 'velocity_controller/Subscribe2'
//  '<S6>'   : 'velocity_controller/Subscribe3'
//  '<S7>'   : 'velocity_controller/Subscribe4'
//  '<S8>'   : 'velocity_controller/MPC Controller/MPC'
//  '<S9>'   : 'velocity_controller/MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S10>'  : 'velocity_controller/MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S11>'  : 'velocity_controller/MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S12>'  : 'velocity_controller/MPC Controller/MPC/MPC Preview Signal Check'
//  '<S13>'  : 'velocity_controller/MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S14>'  : 'velocity_controller/MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S15>'  : 'velocity_controller/MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S16>'  : 'velocity_controller/MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S17>'  : 'velocity_controller/MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S18>'  : 'velocity_controller/MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S19>'  : 'velocity_controller/MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S20>'  : 'velocity_controller/MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S21>'  : 'velocity_controller/MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S22>'  : 'velocity_controller/MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S23>'  : 'velocity_controller/MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S24>'  : 'velocity_controller/MPC Controller/MPC/MPC Vector Signal Check'
//  '<S25>'  : 'velocity_controller/MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S26>'  : 'velocity_controller/MPC Controller/MPC/MPC Vector Signal Check11'
//  '<S27>'  : 'velocity_controller/MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S28>'  : 'velocity_controller/MPC Controller/MPC/optimizer'
//  '<S29>'  : 'velocity_controller/MPC Controller/MPC/optimizer/optimizer'
//  '<S30>'  : 'velocity_controller/Subscribe2/Enabled Subsystem'
//  '<S31>'  : 'velocity_controller/Subscribe3/Enabled Subsystem'
//  '<S32>'  : 'velocity_controller/Subscribe4/Enabled Subsystem'

#endif                                 // RTW_HEADER_velocity_controller_h_

//
// File trailer for generated code.
//
// [EOF]
//
