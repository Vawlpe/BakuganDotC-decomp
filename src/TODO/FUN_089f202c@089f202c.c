#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint * FUN_089f202c(uint *param_1,undefined (*param_2) [16],uint param_3,int param_4)

{
  undefined auVar1 [16];
  uint *puVar2;
  uint uVar3;
  undefined4 in_V74;
  
  *param_1 = param_3 & 0xff | 0x1e000000;
  param_1[1] = 0x22000000;
  param_1[2] = 0x23000000;
  param_1[3] = 0x24000000;
  param_1[4] = 0x21000001;
  puVar2 = param_1 + 5;
  if (param_4 < 2) {
    if (-1 < param_4) {
      if (param_4 < 1) {
        *puVar2 = 0xdf0000aa;
        param_1[6] = 0xe0ffffff;
        param_1[7] = 0xe1000000;
        puVar2 = param_1 + 8;
      }
      else {
        *puVar2 = 0xdf000032;
        param_1[6] = 0xe0000000;
        param_1[7] = 0xe1000000;
        puVar2 = param_1 + 8;
      }
    }
  }
  else if (param_4 < 3) {
    *puVar2 = 0xdf0000a2;
    param_1[6] = 0xe0000000;
    param_1[7] = 0xe1ffffff;
    puVar2 = param_1 + 8;
  }
  else if (param_4 < 4) {
    *puVar2 = 0xdf0002a2;
    param_1[6] = 0xe0000000;
    param_1[7] = 0xe1ffffff;
    puVar2 = param_1 + 8;
  }
  auVar1 = vsat0_q(*param_2);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar3 = vi2uc_q(auVar1);
  *puVar2 = uVar3 & 0xffffff | 0x55000000;
  puVar2[1] = uVar3 >> 0x18 | 0x58000000;
  return puVar2 + 2;
}

