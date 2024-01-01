#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint * FUN_089f2c88(undefined4 param_1,uint *param_2,float *param_3,undefined (*param_4) [16])

{
  undefined auVar1 [16];
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 in_V74;
  
  puVar3 = param_2 + 2;
  puVar2 = param_2 + 5;
  *param_2 = ((uint)puVar2 >> 0x18 & 0xf) << 0x10 | 0x10000000;
  param_2[1] = (uint)puVar2 & 0xffffff | 0x8000000;
  *(short *)puVar3 = (short)(int)*param_3;
  *(short *)((int)param_2 + 10) = (short)(int)param_3[1];
  *(undefined2 *)(param_2 + 3) = 0;
  *(short *)((int)param_2 + 0xe) = (short)(int)(*param_3 + param_3[2]);
  *(short *)(param_2 + 4) = (short)(int)(param_3[1] + param_3[3]);
  *(undefined2 *)((int)param_2 + 0x12) = 0;
  *puVar2 = 0x1e000000;
  param_2[6] = 0xdf000032;
  param_2[7] = 0xe0000000;
  param_2[8] = 0xe1000000;
  auVar1 = vsat0_q(*param_4);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar4 = vi2uc_q(auVar1);
  param_2[9] = uVar4 & 0xffffff | 0x55000000;
  param_2[10] = uVar4 >> 0x18 | 0x58000000;
  param_2[0xb] = 0x12800100;
  puVar2 = param_2 + 0xc;
  if (puVar3 != (uint *)0x0) {
    *puVar2 = ((uint)puVar3 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    param_2[0xd] = (uint)puVar3 & 0xffffff | 0x1000000;
    puVar2 = param_2 + 0xe;
  }
  *puVar2 = 0x4060002;
  return puVar2 + 1;
}

