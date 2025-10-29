/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Encoder_reader_simulink.c
 *
 * Code generated for Simulink model 'Encoder_reader_simulink'.
 *
 * Model version                  : 2.4
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Tue Oct 28 20:00:29 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Encoder_reader_simulink.h"
#include "Encoder_reader_simulink_types.h"
#include "rtwtypes.h"
#include "stm_timer_ll.h"
#include "Encoder_reader_simulink_private.h"

/* Block signals (default storage) */
B_Encoder_reader_simulink_T Encoder_reader_simulink_B;

/* Block states (default storage) */
DW_Encoder_reader_simulink_T Encoder_reader_simulink_DW;

/* Real-time model */
static RT_MODEL_Encoder_reader_simul_T Encoder_reader_simulink_M_;
RT_MODEL_Encoder_reader_simul_T *const Encoder_reader_simulink_M =
  &Encoder_reader_simulink_M_;

/* Forward declaration for local functions */
static void Encoder_reader_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj);
static void Encoder_reader_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj)
{
  uint8_T ChannelInfo;
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/TIM3_Encoder2' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM1;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/TIM3_Encoder2' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  ChannelInfo = ENABLE_CH;

  /* Start for MATLABSystem: '<Root>/TIM3_Encoder2' */
  enableTimerChannel1(obj->TimerHandle, ChannelInfo);
  enableTimerChannel2(obj->TimerHandle, ChannelInfo);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/TIM3_Encoder2' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

/* Model step function */
void Encoder_reader_simulink_step(void)
{
  real_T diff;
  uint32_T pinReadLoc;

  /* MATLABSystem: '<Root>/TIM3_Encoder2' */
  Encoder_reader_simulink_B.TIM3_Encoder2 = getTimerCounterValueForG4
    (Encoder_reader_simulink_DW.obj_b.TimerHandle, false, NULL);

  /* MATLABSystem: '<S5>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

  /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion3'
   *  MATLABSystem: '<S5>/Digital Port Read'
   * */
  if ((pinReadLoc & 8192U) != 0U) {
    Encoder_reader_simulink_DW.offset_e =
      Encoder_reader_simulink_B.TIM3_Encoder2;
  }

  Encoder_reader_simulink_B.Homing_position = (real_T)
    Encoder_reader_simulink_B.TIM3_Encoder2 -
    Encoder_reader_simulink_DW.offset_e;

  /* End of MATLAB Function: '<Root>/MATLAB Function2' */

  /* MATLAB Function: '<Root>/WrapAround2' */
  if (!Encoder_reader_simulink_DW.last_not_empty) {
    Encoder_reader_simulink_DW.last = Encoder_reader_simulink_B.Homing_position;
    Encoder_reader_simulink_DW.last_not_empty = true;
  }

  diff = Encoder_reader_simulink_B.Homing_position -
    Encoder_reader_simulink_DW.last;
  if (diff > 30719.5) {
    Encoder_reader_simulink_DW.offset -= 61440.0;
  } else if (diff < -30719.5) {
    Encoder_reader_simulink_DW.offset += 61440.0;
  }

  Encoder_reader_simulink_B.position = Encoder_reader_simulink_B.Homing_position
    + Encoder_reader_simulink_DW.offset;
  Encoder_reader_simulink_DW.last = Encoder_reader_simulink_B.Homing_position;

  /* End of MATLAB Function: '<Root>/WrapAround2' */

  /* Gain: '<Root>/Count2Deg2' */
  Encoder_reader_simulink_B.Count2Deg2 = 7.5 *
    Encoder_reader_simulink_B.position;

  /* Gain: '<Root>/Count2Rad2' */
  Encoder_reader_simulink_B.Count2Rad2 = 0.1308996938995747 *
    Encoder_reader_simulink_B.position;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  Encoder_reader_simulink_M->Timing.taskTime0 =
    ((time_T)(++Encoder_reader_simulink_M->Timing.clockTick0)) *
    Encoder_reader_simulink_M->Timing.stepSize0;
}

/* Model initialize function */
void Encoder_reader_simulink_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(Encoder_reader_simulink_M, -1);
  Encoder_reader_simulink_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  Encoder_reader_simulink_M->Sizes.checksums[0] = (4210891561U);
  Encoder_reader_simulink_M->Sizes.checksums[1] = (3545715348U);
  Encoder_reader_simulink_M->Sizes.checksums[2] = (1241659690U);
  Encoder_reader_simulink_M->Sizes.checksums[3] = (2569316717U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    Encoder_reader_simulink_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Encoder_reader_simulink_M->extModeInfo,
      &Encoder_reader_simulink_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Encoder_reader_simulink_M->extModeInfo,
                        Encoder_reader_simulink_M->Sizes.checksums);
    rteiSetTPtr(Encoder_reader_simulink_M->extModeInfo, rtmGetTPtr
                (Encoder_reader_simulink_M));
  }

  /* Start for MATLABSystem: '<Root>/TIM3_Encoder2' */
  Encoder_reader_simulink_DW.obj_b.isInitialized = 0;
  Encoder_reader_simulink_DW.obj_b.matlabCodegenIsDeleted = false;
  Encoder_reader_SystemCore_setup(&Encoder_reader_simulink_DW.obj_b);

  /* Start for MATLABSystem: '<S5>/Digital Port Read' */
  Encoder_reader_simulink_DW.obj.matlabCodegenIsDeleted = false;
  Encoder_reader_simulink_DW.obj.isInitialized = 1;
  Encoder_reader_simulink_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void Encoder_reader_simulink_terminate(void)
{
  uint8_T ChannelInfo;

  /* Terminate for MATLABSystem: '<Root>/TIM3_Encoder2' */
  if (!Encoder_reader_simulink_DW.obj_b.matlabCodegenIsDeleted) {
    Encoder_reader_simulink_DW.obj_b.matlabCodegenIsDeleted = true;
    if ((Encoder_reader_simulink_DW.obj_b.isInitialized == 1) &&
        Encoder_reader_simulink_DW.obj_b.isSetupComplete) {
      disableCounter(Encoder_reader_simulink_DW.obj_b.TimerHandle);
      disableTimerInterrupts(Encoder_reader_simulink_DW.obj_b.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(Encoder_reader_simulink_DW.obj_b.TimerHandle,
                           ChannelInfo);
      disableTimerChannel2(Encoder_reader_simulink_DW.obj_b.TimerHandle,
                           ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/TIM3_Encoder2' */

  /* Terminate for MATLABSystem: '<S5>/Digital Port Read' */
  if (!Encoder_reader_simulink_DW.obj.matlabCodegenIsDeleted) {
    Encoder_reader_simulink_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S5>/Digital Port Read' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
