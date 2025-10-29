/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ADC_reader_simulink.h
 *
 * Code generated for Simulink model 'ADC_reader_simulink'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Sat Oct 25 14:18:02 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef ADC_reader_simulink_h_
#define ADC_reader_simulink_h_
#ifndef ADC_reader_simulink_COMMON_INCLUDES_
#define ADC_reader_simulink_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "math.h"
#endif                                /* ADC_reader_simulink_COMMON_INCLUDES_ */

#include "ADC_reader_simulink_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
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
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  uint16_T AnalogtoDigitalConverter;   /* '<S15>/Analog to Digital Converter' */
  uint16_T AnalogtoDigitalConverter_e; /* '<S13>/Analog to Digital Converter' */
  uint16_T AnalogtoDigitalConverter_b; /* '<S11>/Analog to Digital Converter' */
  uint16_T AnalogtoDigitalConverter_c; /* '<S9>/Analog to Digital Converter' */
  uint16_T AnalogtoDigitalConverter_l; /* '<S7>/Analog to Digital Converter' */
} B_ADC_reader_simulink_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_AnalogInput__T obj; /* '<S15>/Analog to Digital Converter' */
  stm32cube_blocks_AnalogInput__T obj_p;/* '<S13>/Analog to Digital Converter' */
  stm32cube_blocks_AnalogInput__T obj_o;/* '<S11>/Analog to Digital Converter' */
  stm32cube_blocks_AnalogInput__T obj_k;/* '<S9>/Analog to Digital Converter' */
  stm32cube_blocks_AnalogInput__T obj_b;/* '<S7>/Analog to Digital Converter' */
} DW_ADC_reader_simulink_T;

/* Real-time Model Data Structure */
struct tag_RTM_ADC_reader_simulink_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block signals (default storage) */
extern B_ADC_reader_simulink_T ADC_reader_simulink_B;

/* Block states (default storage) */
extern DW_ADC_reader_simulink_T ADC_reader_simulink_DW;

/* Model entry point functions */
extern void ADC_reader_simulink_initialize(void);
extern void ADC_reader_simulink_step(void);
extern void ADC_reader_simulink_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ADC_reader_simulink_T *const ADC_reader_simulink_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ADC_reader_simulink'
 * '<S1>'   : 'ADC_reader_simulink/Analog to Digital Converter'
 * '<S2>'   : 'ADC_reader_simulink/Analog to Digital Converter1'
 * '<S3>'   : 'ADC_reader_simulink/Analog to Digital Converter2'
 * '<S4>'   : 'ADC_reader_simulink/Analog to Digital Converter3'
 * '<S5>'   : 'ADC_reader_simulink/Analog to Digital Converter4'
 * '<S6>'   : 'ADC_reader_simulink/Analog to Digital Converter/ECSoC'
 * '<S7>'   : 'ADC_reader_simulink/Analog to Digital Converter/ECSoC/ECSimCodegen'
 * '<S8>'   : 'ADC_reader_simulink/Analog to Digital Converter1/ECSoC'
 * '<S9>'   : 'ADC_reader_simulink/Analog to Digital Converter1/ECSoC/ECSimCodegen'
 * '<S10>'  : 'ADC_reader_simulink/Analog to Digital Converter2/ECSoC'
 * '<S11>'  : 'ADC_reader_simulink/Analog to Digital Converter2/ECSoC/ECSimCodegen'
 * '<S12>'  : 'ADC_reader_simulink/Analog to Digital Converter3/ECSoC'
 * '<S13>'  : 'ADC_reader_simulink/Analog to Digital Converter3/ECSoC/ECSimCodegen'
 * '<S14>'  : 'ADC_reader_simulink/Analog to Digital Converter4/ECSoC'
 * '<S15>'  : 'ADC_reader_simulink/Analog to Digital Converter4/ECSoC/ECSimCodegen'
 */
#endif                                 /* ADC_reader_simulink_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
