/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ADC_reader_simulink_types.h
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

#ifndef ADC_reader_simulink_types_h_
#define ADC_reader_simulink_types_h_
#include "rtwtypes.h"
#include "stm_adc_ll.h"

/* Custom Type definition for MATLABSystem: '<S15>/Analog to Digital Converter' */
#include "stm_adc_ll.h"
#include "stm_adc_ll.h"
#ifndef struct_tag_V8NuBFyzhXWrH9W8r74ibE
#define struct_tag_V8NuBFyzhXWrH9W8r74ibE

struct tag_V8NuBFyzhXWrH9W8r74ibE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  ADC_Type_T* ADCHandle;
};

#endif                                 /* struct_tag_V8NuBFyzhXWrH9W8r74ibE */

#ifndef typedef_stm32cube_blocks_AnalogInput__T
#define typedef_stm32cube_blocks_AnalogInput__T

typedef struct tag_V8NuBFyzhXWrH9W8r74ibE stm32cube_blocks_AnalogInput__T;

#endif                             /* typedef_stm32cube_blocks_AnalogInput__T */

/* Forward declaration for rtModel */
typedef struct tag_RTM_ADC_reader_simulink_T RT_MODEL_ADC_reader_simulink_T;

#endif                                 /* ADC_reader_simulink_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
