#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void WIP_WeirdBuff_PrepReadCtrl(config_buffer *weird_buff,char val)

{
  weird_buff->field41_0x38 = val;
  zz_sceCtrlSetSamplingMode(1);
  zz_sceCtrlSetSamplingCycle(0);
  *(undefined2 *)weird_buff->field0_0x0 = 0;
  *(undefined2 *)(weird_buff->field0_0x0 + 2) = 0;
  *(undefined2 *)(weird_buff->field0_0x0 + 4) = 0;
  *(undefined2 *)((int)&weird_buff->field1_0x5 + 1) = 0;
  *(undefined2 *)((int)&weird_buff->field2_0x7 + 1) = 0;
  *(undefined4 *)((int)&weird_buff->field38_0x2f + 1) = 0;
  weird_buff->field40_0x34 = 0.0;
  memset_jak((undefined *)&weird_buff->field4_0xa,0,0x22);
  WIP_WeirdBuff_PrepReadCtrl_Set0(weird_buff,0x10);
  WIP_WeirdBuff_PrepReadCtrl_Set1(weird_buff,2);
  weird_buff->field42_0x39 = 1;
  weird_buff->field45_0x3c = 0;
  zz_sceCtrlSetIdleCancelThreshold(100,0xffffffff);
  *(undefined4 *)((int)&weird_buff->field48_0x3f + 1) = 0;
  *(undefined4 *)((int)&weird_buff->field49_0x43 + 1) = 0;
  return;
}

