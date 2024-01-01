#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f1490(undefined4 *param_1,int param_2,int param_3)

{
  undefined auVar1 [16];
  uint uVar2;
  undefined4 in_V74;
  
  *param_1 = 0x10080000;
  param_1[1] = 0xaaa3a24;
  if (DAT_08af8760 == 0) {
    DAT_08af8760 = 1;
    DAT_08ac5dfc = 0x5b40a000;
  }
  if (param_3 == 0) {
    param_1[2] = 0x10080000;
    param_1[3] = 0xaaa39b4;
    DAT_08b02144 = 0x5f000002;
  }
  else {
    param_1[2] = 0x10080000;
    param_1[3] = 0xaac5dd8;
    DAT_08b02144 = 0x5f000001;
  }
  param_1[4] = DAT_08b00850 >> 8 | 0x63000000;
  param_1[5] = DAT_08b00854 >> 8 | 0x64000000;
  param_1[6] = DAT_08b00858 >> 8 | 0x65000000;
  param_1[7] = DAT_08b00980 >> 8 | 0x66000000;
  param_1[8] = DAT_08b00984 >> 8 | 0x67000000;
  param_1[9] = DAT_08b00988 >> 8 | 0x68000000;
  auVar1._12_4_ = DAT_08b009ac;
  auVar1._8_4_ = DAT_08b009a8;
  auVar1._4_4_ = DAT_08b009a4;
  auVar1._0_4_ = DAT_08b009a0;
  auVar1 = vsat0_q(auVar1);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar2 = vi2uc_q(auVar1);
  param_1[10] = uVar2 & 0xffffff | 0x93000000;
  param_1[0xb] = 0xc6000101;
  if (param_2 != 0) {
    FUN_089e3014(param_2,param_1 + 0xc,0xffffffff);
  }
  return;
}

