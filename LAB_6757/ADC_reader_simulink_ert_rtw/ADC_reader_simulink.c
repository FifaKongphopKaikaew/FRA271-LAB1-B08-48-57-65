/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ADC_reader_simulink.c
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

#include "ADC_reader_simulink.h"
#include "ADC_reader_simulink_types.h"
#include "stm_adc_ll.h"
#include <stddef.h>
#include "ADC_reader_simulink_private.h"

/* Block signals (default storage) */
B_ADC_reader_simulink_T ADC_reader_simulink_B;

/* Block states (default storage) */
DW_ADC_reader_simulink_T ADC_reader_simulink_DW;

/* Real-time model */
static RT_MODEL_ADC_reader_simulink_T ADC_reader_simulink_M_;
RT_MODEL_ADC_reader_simulink_T *const ADC_reader_simulink_M =
  &ADC_reader_simulink_M_;

/* Forward declaration for local functions */
static void ADC_reader_sim_SystemCore_setup(stm32cube_blocks_AnalogInput__T *obj);
static void ADC_reader_s_SystemCore_setup_d(stm32cube_blocks_AnalogInput__T *obj);
static void ADC_reader__SystemCore_setup_de(stm32cube_blocks_AnalogInput__T *obj);
static void ADC_reader_SystemCore_setup_dep(stm32cube_blocks_AnalogInput__T *obj);
static void ADC_reade_SystemCore_setup_depw(stm32cube_blocks_AnalogInput__T *obj);
static void ADC_reader_sim_SystemCore_setup(stm32cube_blocks_AnalogInput__T *obj)
{
  ADC_Type_T adcStructLoc;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S7>/Analog to Digital Converter' */
  obj->isInitialized = 1;
  adcStructLoc.InternalBufferPtr = (void *)(NULL);

  /* Start for MATLABSystem: '<S7>/Analog to Digital Converter' */
  adcStructLoc.InjectedNoOfConversion = 0U;
  adcStructLoc.peripheralPtr = ADC1;
  adcStructLoc.dmaPeripheralPtr = NULL;
  adcStructLoc.dmastream = 0;
  adcStructLoc.DataTransferMode = ADC_DR_TRANSFER;
  adcStructLoc.DmaTransferMode = ADC_DMA_TRANSFER_LIMITED;
  adcStructLoc.InternalBufferSize = 1U;
  adcStructLoc.RegularNoOfConversion = 1U;
  obj->ADCHandle = ADC_Handle_Init(&adcStructLoc, ADC_NORMAL_MODE, 1,
    ADC_TRIGGER_AND_READ, LL_ADC_REG_SEQ_SCAN_DISABLE);
  enableADCAutomaticCalibrationOffset(obj->ADCHandle, 2);
  enableADC(obj->ADCHandle);
  startADCConversionForExternalTrigger(obj->ADCHandle, 1);
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

static void ADC_reader_s_SystemCore_setup_d(stm32cube_blocks_AnalogInput__T *obj)
{
  ADC_Type_T adcStructLoc;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S9>/Analog to Digital Converter' */
  obj->isInitialized = 1;
  adcStructLoc.InternalBufferPtr = (void *)(NULL);

  /* Start for MATLABSystem: '<S9>/Analog to Digital Converter' */
  adcStructLoc.InjectedNoOfConversion = 0U;
  adcStructLoc.peripheralPtr = ADC2;
  adcStructLoc.dmaPeripheralPtr = NULL;
  adcStructLoc.dmastream = 0;
  adcStructLoc.DataTransferMode = ADC_DR_TRANSFER;
  adcStructLoc.DmaTransferMode = ADC_DMA_TRANSFER_LIMITED;
  adcStructLoc.InternalBufferSize = 1U;
  adcStructLoc.RegularNoOfConversion = 1U;
  obj->ADCHandle = ADC_Handle_Init(&adcStructLoc, ADC_NORMAL_MODE, 1,
    ADC_TRIGGER_AND_READ, LL_ADC_REG_SEQ_SCAN_DISABLE);
  enableADCAutomaticCalibrationOffset(obj->ADCHandle, 2);
  enableADC(obj->ADCHandle);
  startADCConversionForExternalTrigger(obj->ADCHandle, 1);
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

static void ADC_reader__SystemCore_setup_de(stm32cube_blocks_AnalogInput__T *obj)
{
  ADC_Type_T adcStructLoc;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S11>/Analog to Digital Converter' */
  obj->isInitialized = 1;
  adcStructLoc.InternalBufferPtr = (void *)(NULL);

  /* Start for MATLABSystem: '<S11>/Analog to Digital Converter' */
  adcStructLoc.InjectedNoOfConversion = 0U;
  adcStructLoc.peripheralPtr = ADC3;
  adcStructLoc.dmaPeripheralPtr = NULL;
  adcStructLoc.dmastream = 0;
  adcStructLoc.DataTransferMode = ADC_DR_TRANSFER;
  adcStructLoc.DmaTransferMode = ADC_DMA_TRANSFER_LIMITED;
  adcStructLoc.InternalBufferSize = 1U;
  adcStructLoc.RegularNoOfConversion = 1U;
  obj->ADCHandle = ADC_Handle_Init(&adcStructLoc, ADC_NORMAL_MODE, 1,
    ADC_TRIGGER_AND_READ, LL_ADC_REG_SEQ_SCAN_DISABLE);
  enableADCAutomaticCalibrationOffset(obj->ADCHandle, 2);
  enableADC(obj->ADCHandle);
  startADCConversionForExternalTrigger(obj->ADCHandle, 1);
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

static void ADC_reader_SystemCore_setup_dep(stm32cube_blocks_AnalogInput__T *obj)
{
  ADC_Type_T adcStructLoc;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S13>/Analog to Digital Converter' */
  obj->isInitialized = 1;
  adcStructLoc.InternalBufferPtr = (void *)(NULL);

  /* Start for MATLABSystem: '<S13>/Analog to Digital Converter' */
  adcStructLoc.InjectedNoOfConversion = 0U;
  adcStructLoc.peripheralPtr = ADC4;
  adcStructLoc.dmaPeripheralPtr = NULL;
  adcStructLoc.dmastream = 0;
  adcStructLoc.DataTransferMode = ADC_DR_TRANSFER;
  adcStructLoc.DmaTransferMode = ADC_DMA_TRANSFER_LIMITED;
  adcStructLoc.InternalBufferSize = 1U;
  adcStructLoc.RegularNoOfConversion = 1U;
  obj->ADCHandle = ADC_Handle_Init(&adcStructLoc, ADC_NORMAL_MODE, 1,
    ADC_TRIGGER_AND_READ, LL_ADC_REG_SEQ_SCAN_DISABLE);
  enableADCAutomaticCalibrationOffset(obj->ADCHandle, 2);
  enableADC(obj->ADCHandle);
  startADCConversionForExternalTrigger(obj->ADCHandle, 1);
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

static void ADC_reade_SystemCore_setup_depw(stm32cube_blocks_AnalogInput__T *obj)
{
  ADC_Type_T adcStructLoc;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S15>/Analog to Digital Converter' */
  obj->isInitialized = 1;
  adcStructLoc.InternalBufferPtr = (void *)(NULL);

  /* Start for MATLABSystem: '<S15>/Analog to Digital Converter' */
  adcStructLoc.InjectedNoOfConversion = 0U;
  adcStructLoc.peripheralPtr = ADC5;
  adcStructLoc.dmaPeripheralPtr = NULL;
  adcStructLoc.dmastream = 0;
  adcStructLoc.DataTransferMode = ADC_DR_TRANSFER;
  adcStructLoc.DmaTransferMode = ADC_DMA_TRANSFER_LIMITED;
  adcStructLoc.InternalBufferSize = 1U;
  adcStructLoc.RegularNoOfConversion = 1U;
  obj->ADCHandle = ADC_Handle_Init(&adcStructLoc, ADC_NORMAL_MODE, 1,
    ADC_TRIGGER_AND_READ, LL_ADC_REG_SEQ_SCAN_DISABLE);
  enableADCAutomaticCalibrationOffset(obj->ADCHandle, 2);
  enableADC(obj->ADCHandle);
  startADCConversionForExternalTrigger(obj->ADCHandle, 1);
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

/* Model step function */
void ADC_reader_simulink_step(void)
{
  /* MATLABSystem: '<S7>/Analog to Digital Converter' */
  if (ADC_reader_simulink_DW.obj_b.TunablePropsChanged) {
    ADC_reader_simulink_DW.obj_b.TunablePropsChanged = false;
  }

  /* MATLABSystem: '<S7>/Analog to Digital Converter' */
  regularReadADCNormal(ADC_reader_simulink_DW.obj_b.ADCHandle,
                       ADC_TRIGGER_AND_READ,
                       &ADC_reader_simulink_B.AnalogtoDigitalConverter_l);

  /* MATLABSystem: '<S9>/Analog to Digital Converter' */
  if (ADC_reader_simulink_DW.obj_k.TunablePropsChanged) {
    ADC_reader_simulink_DW.obj_k.TunablePropsChanged = false;
  }

  /* MATLABSystem: '<S9>/Analog to Digital Converter' */
  regularReadADCNormal(ADC_reader_simulink_DW.obj_k.ADCHandle,
                       ADC_TRIGGER_AND_READ,
                       &ADC_reader_simulink_B.AnalogtoDigitalConverter_c);

  /* MATLABSystem: '<S11>/Analog to Digital Converter' */
  if (ADC_reader_simulink_DW.obj_o.TunablePropsChanged) {
    ADC_reader_simulink_DW.obj_o.TunablePropsChanged = false;
  }

  /* MATLABSystem: '<S11>/Analog to Digital Converter' */
  regularReadADCNormal(ADC_reader_simulink_DW.obj_o.ADCHandle,
                       ADC_TRIGGER_AND_READ,
                       &ADC_reader_simulink_B.AnalogtoDigitalConverter_b);

  /* MATLABSystem: '<S13>/Analog to Digital Converter' */
  if (ADC_reader_simulink_DW.obj_p.TunablePropsChanged) {
    ADC_reader_simulink_DW.obj_p.TunablePropsChanged = false;
  }

  /* MATLABSystem: '<S13>/Analog to Digital Converter' */
  regularReadADCNormal(ADC_reader_simulink_DW.obj_p.ADCHandle,
                       ADC_TRIGGER_AND_READ,
                       &ADC_reader_simulink_B.AnalogtoDigitalConverter_e);

  /* MATLABSystem: '<S15>/Analog to Digital Converter' */
  if (ADC_reader_simulink_DW.obj.TunablePropsChanged) {
    ADC_reader_simulink_DW.obj.TunablePropsChanged = false;
  }

  /* MATLABSystem: '<S15>/Analog to Digital Converter' */
  regularReadADCNormal(ADC_reader_simulink_DW.obj.ADCHandle,
                       ADC_TRIGGER_AND_READ,
                       &ADC_reader_simulink_B.AnalogtoDigitalConverter);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  ADC_reader_simulink_M->Timing.taskTime0 =
    ((time_T)(++ADC_reader_simulink_M->Timing.clockTick0)) *
    ADC_reader_simulink_M->Timing.stepSize0;
}

/* Model initialize function */
void ADC_reader_simulink_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(ADC_reader_simulink_M, -1);
  ADC_reader_simulink_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  ADC_reader_simulink_M->Sizes.checksums[0] = (698958916U);
  ADC_reader_simulink_M->Sizes.checksums[1] = (790970038U);
  ADC_reader_simulink_M->Sizes.checksums[2] = (2315513634U);
  ADC_reader_simulink_M->Sizes.checksums[3] = (291564860U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[6];
    ADC_reader_simulink_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(ADC_reader_simulink_M->extModeInfo,
      &ADC_reader_simulink_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(ADC_reader_simulink_M->extModeInfo,
                        ADC_reader_simulink_M->Sizes.checksums);
    rteiSetTPtr(ADC_reader_simulink_M->extModeInfo, rtmGetTPtr
                (ADC_reader_simulink_M));
  }

  /* Start for MATLABSystem: '<S7>/Analog to Digital Converter' */
  ADC_reader_simulink_DW.obj_b.isInitialized = 0;
  ADC_reader_simulink_DW.obj_b.matlabCodegenIsDeleted = false;
  ADC_reader_sim_SystemCore_setup(&ADC_reader_simulink_DW.obj_b);

  /* Start for MATLABSystem: '<S9>/Analog to Digital Converter' */
  ADC_reader_simulink_DW.obj_k.isInitialized = 0;
  ADC_reader_simulink_DW.obj_k.matlabCodegenIsDeleted = false;
  ADC_reader_s_SystemCore_setup_d(&ADC_reader_simulink_DW.obj_k);

  /* Start for MATLABSystem: '<S11>/Analog to Digital Converter' */
  ADC_reader_simulink_DW.obj_o.isInitialized = 0;
  ADC_reader_simulink_DW.obj_o.matlabCodegenIsDeleted = false;
  ADC_reader__SystemCore_setup_de(&ADC_reader_simulink_DW.obj_o);

  /* Start for MATLABSystem: '<S13>/Analog to Digital Converter' */
  ADC_reader_simulink_DW.obj_p.isInitialized = 0;
  ADC_reader_simulink_DW.obj_p.matlabCodegenIsDeleted = false;
  ADC_reader_SystemCore_setup_dep(&ADC_reader_simulink_DW.obj_p);

  /* Start for MATLABSystem: '<S15>/Analog to Digital Converter' */
  ADC_reader_simulink_DW.obj.isInitialized = 0;
  ADC_reader_simulink_DW.obj.matlabCodegenIsDeleted = false;
  ADC_reade_SystemCore_setup_depw(&ADC_reader_simulink_DW.obj);
}

/* Model terminate function */
void ADC_reader_simulink_terminate(void)
{
  /* Terminate for MATLABSystem: '<S7>/Analog to Digital Converter' */
  if (!ADC_reader_simulink_DW.obj_b.matlabCodegenIsDeleted) {
    ADC_reader_simulink_DW.obj_b.matlabCodegenIsDeleted = true;
    if ((ADC_reader_simulink_DW.obj_b.isInitialized == 1) &&
        ADC_reader_simulink_DW.obj_b.isSetupComplete) {
      ADC_Handle_Deinit(ADC_reader_simulink_DW.obj_b.ADCHandle, ADC_NORMAL_MODE,
                        1);
    }
  }

  /* End of Terminate for MATLABSystem: '<S7>/Analog to Digital Converter' */
  /* Terminate for MATLABSystem: '<S9>/Analog to Digital Converter' */
  if (!ADC_reader_simulink_DW.obj_k.matlabCodegenIsDeleted) {
    ADC_reader_simulink_DW.obj_k.matlabCodegenIsDeleted = true;
    if ((ADC_reader_simulink_DW.obj_k.isInitialized == 1) &&
        ADC_reader_simulink_DW.obj_k.isSetupComplete) {
      ADC_Handle_Deinit(ADC_reader_simulink_DW.obj_k.ADCHandle, ADC_NORMAL_MODE,
                        1);
    }
  }

  /* End of Terminate for MATLABSystem: '<S9>/Analog to Digital Converter' */
  /* Terminate for MATLABSystem: '<S11>/Analog to Digital Converter' */
  if (!ADC_reader_simulink_DW.obj_o.matlabCodegenIsDeleted) {
    ADC_reader_simulink_DW.obj_o.matlabCodegenIsDeleted = true;
    if ((ADC_reader_simulink_DW.obj_o.isInitialized == 1) &&
        ADC_reader_simulink_DW.obj_o.isSetupComplete) {
      ADC_Handle_Deinit(ADC_reader_simulink_DW.obj_o.ADCHandle, ADC_NORMAL_MODE,
                        1);
    }
  }

  /* End of Terminate for MATLABSystem: '<S11>/Analog to Digital Converter' */
  /* Terminate for MATLABSystem: '<S13>/Analog to Digital Converter' */
  if (!ADC_reader_simulink_DW.obj_p.matlabCodegenIsDeleted) {
    ADC_reader_simulink_DW.obj_p.matlabCodegenIsDeleted = true;
    if ((ADC_reader_simulink_DW.obj_p.isInitialized == 1) &&
        ADC_reader_simulink_DW.obj_p.isSetupComplete) {
      ADC_Handle_Deinit(ADC_reader_simulink_DW.obj_p.ADCHandle, ADC_NORMAL_MODE,
                        1);
    }
  }

  /* End of Terminate for MATLABSystem: '<S13>/Analog to Digital Converter' */
  /* Terminate for MATLABSystem: '<S15>/Analog to Digital Converter' */
  if (!ADC_reader_simulink_DW.obj.matlabCodegenIsDeleted) {
    ADC_reader_simulink_DW.obj.matlabCodegenIsDeleted = true;
    if ((ADC_reader_simulink_DW.obj.isInitialized == 1) &&
        ADC_reader_simulink_DW.obj.isSetupComplete) {
      ADC_Handle_Deinit(ADC_reader_simulink_DW.obj.ADCHandle, ADC_NORMAL_MODE, 1);
    }
  }

  /* End of Terminate for MATLABSystem: '<S15>/Analog to Digital Converter' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
