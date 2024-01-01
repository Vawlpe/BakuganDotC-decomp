#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089e45d0(void)

{
  undefined auVar1 [16];
  int in_a3;
  float *in_t0;
  float fVar2;
  
  DAT_08af8388 = FUN_089e41b8();
  auVar1._12_4_ = DAT_08af839c;
  auVar1._8_4_ = DAT_08af8398;
  auVar1._4_4_ = DAT_08af8394;
  auVar1._0_4_ = DAT_08af8390;
  auVar1 = vsub_q(auVar1,*(undefined (*) [16])(in_a3 + 0x10));
  fVar2 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
  *in_t0 = fVar2;
  return fVar2 <= *(float *)(in_a3 + 0x1c);
}

