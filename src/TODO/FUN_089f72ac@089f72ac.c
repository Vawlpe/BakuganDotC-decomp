#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f72ac(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_3 == 0) {
    param_3 = *(uint *)(DAT_08ac5934 + 0x34);
  }
  *(undefined *)(param_1 + 0xad) = 1;
  *(int *)(param_1 + 0xb0) = param_1 + 0xb4;
  memset_jak((undefined *)(param_1 + 0x38),0,0x20);
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(int *)(param_1 + 0x54) = param_1;
  memset_jak((undefined *)(param_1 + 0x60),0,0x40);
  *(undefined2 *)(param_1 + 0x60) = 1;
  *(int *)(param_1 + 0x68) = param_1;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined **)(param_1 + 0x124) = &DAT_08afa6d0;
  memset_jak(&DAT_08afa6d0,0,0x40);
  *(undefined *)(param_1 + 0x128) = 0;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0x124) + 0x10;
  *(undefined *)(*(int *)(param_1 + 0x124) + 0x23) = 0;
  strcpy(param_1 + 0x18,param_2);
  *(undefined2 *)(*(int *)(param_1 + 0xa0) + 0x14) = 0x100;
  *(undefined2 *)(*(int *)(param_1 + 0xa0) + 0x16) = 0x100;
  *(uint *)(param_1 + 0x11c) = param_3;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  uVar1 = FUN_089f70c4(param_1);
  iVar2 = FUN_089f7194(param_1,uVar1);
  uVar1 = FUN_089f70d0(param_1);
  iVar3 = FUN_089f7194(param_1,uVar1);
  *(undefined *)(param_1 + 0xac) = 1;
  puVar4 = *(undefined4 **)(param_1 + 0xb0);
  *(undefined4 **)(param_1 + 0x4c) = puVar4;
  *(undefined4 **)(param_1 + 100) = puVar4;
  *(float *)(param_1 + 0xa4) = 1.0 / (float)iVar2;
  *(float *)(param_1 + 0xa8) = 1.0 / (float)iVar3;
  *puVar4 = 0xc2000000;
  puVar4[1] = 0xc3000000;
  puVar4[2] = 0xcb000000;
  puVar4[3] = (param_3 >> 0x18 & 0xf) << 0x10 | 0xa8000100;
  puVar4[4] = param_3 & 0xffffff | 0xa0000000;
  puVar4[5] = 0xb8000808;
  puVar4[6] = 0xcb000000;
  puVar4[7] = 0xc6000101;
  puVar4[8] = 0xc7000101;
  puVar4[9] = 0xb000000;
  return;
}

