#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ed404(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined auVar2 [16];
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 in_V74;
  
  if (((param_1[8] & 1U) != 0) && ((float)param_1[7] != 0.0)) {
    iVar4 = *param_1;
    if (iVar4 < 1) {
      if (-1 < iVar4) {
        param_2 = (undefined4 *)FUN_089f1418(param_2);
      }
    }
    else if (iVar4 < 2) {
      *param_2 = 0x3a000000;
      uVar6 = DAT_08b001c4 >> 8;
      uVar1 = DAT_08b001c8 >> 8;
      param_2[1] = DAT_08b001c0 >> 8 | 0x3b000000;
      param_2[2] = uVar6 | 0x3b000000;
      param_2[3] = uVar1 | 0x3b000000;
      uVar6 = DAT_08b001d4 >> 8;
      uVar1 = DAT_08b001d8 >> 8;
      param_2[4] = DAT_08b001d0 >> 8 | 0x3b000000;
      param_2[5] = uVar6 | 0x3b000000;
      param_2[6] = uVar1 | 0x3b000000;
      uVar6 = DAT_08b001e4 >> 8;
      uVar1 = DAT_08b001e8 >> 8;
      param_2[7] = DAT_08b001e0 >> 8 | 0x3b000000;
      param_2[8] = uVar6 | 0x3b000000;
      param_2[9] = uVar1 | 0x3b000000;
      uVar6 = DAT_08b001f4 >> 8;
      uVar1 = DAT_08b001f8 >> 8;
      param_2[10] = DAT_08b001f0 >> 8 | 0x3b000000;
      param_2[0xb] = uVar6 | 0x3b000000;
      param_2[0xc] = uVar1 | 0x3b000000;
      param_2 = param_2 + 0xd;
      if (DAT_08ac5c90 != 0) {
        param_2 = (undefined4 *)FUN_089e3014(DAT_08ac5c90,param_2,0xffffffff);
      }
      param_2 = (undefined4 *)FUN_089f1490(param_2,DAT_08ac5c90,0);
      *param_2 = 0x10080000;
      param_2[1] = 0xaaa37b8;
      param_2 = param_2 + 2;
    }
    *param_2 = 0x1e000000;
    puVar3 = param_2 + 1;
    puVar5 = param_2 + 2;
    if ((param_1[8] & 4U) == 0) {
      if ((param_1[8] & 2U) == 0) {
        *puVar3 = 0x24000000;
      }
      else {
        *puVar3 = 0x24000001;
        *puVar5 = 0xdd000000;
        param_2[3] = param_1[9] << 8 | 0xdcff0002;
        puVar5 = param_2 + 4;
      }
    }
    else {
      *puVar3 = 0x24000001;
      *puVar5 = 0xdd020000;
      param_2[3] = param_1[9] << 8 | 0xdcff0001;
      puVar5 = param_2 + 4;
    }
    *puVar5 = 0xdf000032;
    puVar5[1] = 0xe0000000;
    puVar5[2] = 0xe1000000;
    auVar2 = vsat0_q(*(undefined (*) [16])(param_1 + 4));
    auVar2 = vscl_q(auVar2,in_V74);
    auVar2 = vf2iz_q(auVar2,0x17);
    uVar6 = vi2uc_q(auVar2);
    puVar5[3] = uVar6 & 0xffffff | 0x55000000;
    puVar5[4] = uVar6 >> 0x18 | 0x58000000;
    (**(code **)(param_1[10] + 0x14))((int)param_1 + (int)*(short *)(param_1[10] + 0x10),puVar5 + 5)
    ;
  }
  return;
}

