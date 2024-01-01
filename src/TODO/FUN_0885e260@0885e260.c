#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885e260(int param_1)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 in_V74;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(uint *)(param_1 + 8) < 0x21) {
    *(undefined *)(param_1 + 0xbc) = 1;
    auVar1._12_4_ = DAT_08b001bc;
    auVar1._8_4_ = DAT_08b001b8;
    auVar1._4_4_ = DAT_08b001b4;
    auVar1._0_4_ = DAT_08b001b0;
    auVar1 = vsat0_q(auVar1);
    auVar1 = vscl_q(auVar1,in_V74);
    auVar1 = vf2iz_q(auVar1,0x17);
    uVar2 = vi2uc_q(auVar1);
    *(undefined4 *)(param_1 + 0x10c) = uVar2;
    FUN_089e0a70(param_1,&LAB_0885dd8c,0);
    if ((int)(((((int)*(char *)(*(int *)(&DAT_08aba9e0 + *(int *)(param_1 + 8) * 4) + 3) & 0xf0U) >>
                4 ^ 8) - 8) * 0x1000000) >> 0x18 != 0) {
      local_30 = 0x3ecccccd;
      local_2c = 0x3ecccccd;
      local_28 = 0x3ecccccd;
      local_24 = 0x3f800000;
      FUN_089e0344(0x41000000,param_1,&local_30,0);
    }
    if (*(int *)(param_1 + 8) == 0xe) {
      local_20 = 0x3ecccccd;
      local_1c = 0x3ecccccd;
      local_18 = 0x3ecccccd;
      local_14 = 0x3f800000;
      FUN_089e0344(0x41000000,param_1,&local_20,0);
    }
  }
  return;
}

