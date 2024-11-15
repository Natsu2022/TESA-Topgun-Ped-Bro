/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: feedback_control.c
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

#include "feedback_control.h"
#include "rtwtypes.h"

/* Block states (default storage) */
D_Work_feedback_control feedback_control_DWork;

/* External inputs (root inport signals with default storage) */
ExternalInputs_feedback_control feedback_control_U;

/* External outputs (root outports fed by signals with default storage) */
ExternalOutputs_feedback_contro feedback_control_Y;

/* Real-time model */
static RT_MODEL_feedback_control feedback_control_M_;
RT_MODEL_feedback_control *const feedback_control_M = &feedback_control_M_;

/* Model step function */
void feedback_control_step(void)
{
  real_T rtb_FilterCoefficient;

  /* Gain: '<S39>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S31>/Filter'
   *  Gain: '<S29>/Derivative Gain'
   *  Inport: '<Root>/u'
   *  Sum: '<S31>/SumD'
   */
  rtb_FilterCoefficient = ((feedback_control_P.pid.D *
    feedback_control_U.control_input) - feedback_control_DWork.Filter_DSTATE) *
    feedback_control_P.pid.N;

  /* Outport: '<Root>/y' incorporates:
   *  DiscreteIntegrator: '<S36>/Integrator'
   *  Gain: '<S41>/Proportional Gain'
   *  Inport: '<Root>/u'
   *  Sum: '<S45>/Sum'
   */
  feedback_control_Y.y = ((feedback_control_P.pid.P *
    feedback_control_U.control_input) + feedback_control_DWork.Integrator_DSTATE)
    + rtb_FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S36>/Integrator' incorporates:
   *  Gain: '<S33>/Integral Gain'
   *  Inport: '<Root>/u'
   */
  feedback_control_DWork.Integrator_DSTATE += (feedback_control_P.pid.I *
    feedback_control_U.control_input) * 0.001;

  /* Update for DiscreteIntegrator: '<S31>/Filter' */
  feedback_control_DWork.Filter_DSTATE += 0.001 * rtb_FilterCoefficient;
}

/* Model initialize function */
void feedback_control_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void feedback_control_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
