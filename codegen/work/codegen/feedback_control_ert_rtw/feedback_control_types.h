/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: feedback_control_types.h
 *
 * Code generated for Simulink model 'feedback_control'.
 *
 * Model version                  : 15.0
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Nov 14 21:16:17 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef feedback_control_types_h_
#define feedback_control_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_pid_param_
#define DEFINED_TYPEDEF_FOR_pid_param_

typedef struct {
  real_T P;
  real_T I;
  real_T D;
  real_T N;
} pid_param;

#endif

/* Parameters (default storage) */
typedef struct Parameters_feedback_control_ Parameters_feedback_control;

/* Forward declaration for rtModel */
typedef struct tag_RTM_feedback_control RT_MODEL_feedback_control;

#endif                                 /* feedback_control_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
