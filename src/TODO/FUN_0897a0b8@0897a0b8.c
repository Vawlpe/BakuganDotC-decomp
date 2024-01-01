#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897a0b8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 local_28;
  float local_24;
  
  uVar4 = 0;
  iVar2 = param_1;
  iVar3 = param_1;
  do {
    FUN_089e29e4(*(undefined4 *)(iVar3 + 0x1288));
    *(undefined4 *)(*(int *)(iVar3 + 0x1288) + 0x40) = 0x3f800000;
    iVar1 = *(int *)(iVar3 + 0x1288);
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    iVar1 = *(int *)(iVar3 + 0x1288);
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    FUN_089a5aec(*(undefined4 *)(iVar2 + 0x12c8),*(undefined4 *)(iVar2 + 0x12cc),&local_28);
    uVar5 = local_28;
    fVar6 = local_24;
    FUN_0897a068(param_1,*(undefined *)(param_1 + 0xee1),uVar4 & 0xff);
    FUN_089e3008(uVar5,fVar6 + *(float *)(param_1 + 0x1398),*(undefined4 *)(iVar3 + 0x1288));
    FUN_089e2b14(*(undefined4 *)(iVar3 + 0x1288),0xffffffff);
    iVar1 = *(int *)(*(int *)(iVar3 + 0x1288) + 0x20);
    (**(code **)(iVar1 + 0x14))(*(int *)(iVar3 + 0x1288) + (int)*(short *)(iVar1 + 0x10));
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 8;
  } while ((int)uVar4 < 7);
  return;
}

