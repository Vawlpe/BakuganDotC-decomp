#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08859994(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  
  *(char *)(param_1 + 0xa3a) = param_2;
  pfVar4 = (float *)(param_1 + 0x24);
  if (param_2 == '\0') {
    *(undefined *)(param_1 + 0x940) = 1;
    *(undefined *)(param_1 + 0x4c1) = 1;
    *pfVar4 = *pfVar4 - 5000.0;
    iVar5 = *(int *)(param_1 + 0x130);
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar5 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar5 + 0xb4) = uVar1;
    *(undefined4 *)(iVar5 + 0xb8) = uVar2;
    *(undefined4 *)(iVar5 + 0xbc) = uVar3;
    (**(code **)(*(int *)(param_1 + 0x14) + 0xbc))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb8));
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0xa84) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xa39) = 1;
    *(undefined *)(param_1 + 0x940) = 0;
    *(undefined *)(param_1 + 0x4c1) = 0;
    *pfVar4 = *pfVar4 + 5000.0;
    iVar5 = *(int *)(param_1 + 0x130);
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar5 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar5 + 0xb4) = uVar1;
    *(undefined4 *)(iVar5 + 0xb8) = uVar2;
    *(undefined4 *)(iVar5 + 0xbc) = uVar3;
    (**(code **)(*(int *)(param_1 + 0x14) + 0xbc))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb8));
    *(undefined *)(param_1 + 0xa3f) = 0;
    FUN_08855384(param_1,2,0);
  }
  return;
}

