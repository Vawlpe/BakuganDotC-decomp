#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089aa658(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  FUN_089a4f4c(0x40000000,
               *(undefined4 *)
                (*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x680) * 4 + 0xc),0,0);
  *(undefined *)(param_1 + 0xa7) = 0;
  FUN_089a75c0(param_1,0,*(undefined *)(param_1 + 0x75));
  iVar7 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x75) * 4;
  iVar5 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4;
  iVar3 = param_1 + *(char *)(param_1 + 0x75) * 0x28;
  uVar6 = (uint)*(byte *)(param_1 + 0x680);
  *(short *)(iVar3 + 0x154) = (short)(int)*(float *)(*(int *)(iVar7 + 0x14) + 0x60);
  uVar8 = 0xff20;
  if (uVar6 == 0) {
    uVar8 = 0x2c0;
  }
  *(undefined2 *)(iVar3 + 0x156) = uVar8;
  fVar9 = (float)FUN_089a4b3c(*(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x60),
                              (float)(int)*(short *)(iVar3 + 0x156));
  *(short *)(iVar3 + 0x158) = (short)(int)fVar9;
  if (uVar6 == 0) {
    *(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x60) = 0xc3600000;
    uVar6 = (uint)*(char *)(param_1 + 0x74);
    bVar1 = *(byte *)(param_1 + 0x680);
    uVar8 = (undefined2)(int)*(float *)(param_1 + 0x678);
    iVar3 = *(int *)(param_1 + 0x1c) + uVar6 * 4;
    iVar5 = *(int *)(iVar3 + 0x14);
    fVar9 = *(float *)(param_1 + 0x65c);
  }
  else {
    *(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x60) = 0x44300000;
    uVar6 = (uint)*(char *)(param_1 + 0x74);
    bVar1 = *(byte *)(param_1 + 0x680);
    iVar3 = *(int *)(param_1 + 0x1c) + uVar6 * 4;
    iVar5 = *(int *)(iVar3 + 0x14);
    uVar8 = (undefined2)(int)*(float *)(param_1 + 0x678);
    fVar9 = *(float *)(param_1 + 0x65c);
  }
  iVar7 = param_1 + uVar6 * 0x28;
  uVar4 = (uint)bVar1;
  fVar11 = *(float *)(iVar5 + 0x60);
  *(undefined2 *)(iVar7 + 0x156) = uVar8;
  *(short *)(iVar7 + 0x154) = (short)(int)fVar11;
  fVar11 = (float)FUN_089a4b3c(*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x60),
                               (float)(int)*(short *)(iVar7 + 0x156));
  *(float *)(param_1 + 0x654) = fVar9;
  *(short *)(iVar7 + 0x158) = (short)(int)fVar11;
  if (uVar4 == 0) {
    uVar10 = FUN_089a4dc8(fVar9 + 1.256);
  }
  else {
    uVar10 = FUN_089a4dc8(fVar9 - 1.256);
  }
  *(undefined4 *)(param_1 + 0x658) = uVar10;
  uVar4 = 0;
  iVar3 = param_1;
  iVar5 = param_1;
  do {
    if (*(int *)(iVar3 + 0x68c) != 0) {
      uVar10 = FUN_089a4dc8((float)(uint)*(byte *)(iVar5 + 0x594) * 1.256 + 1.57);
      *(undefined4 *)(iVar5 + 0x58c) = uVar10;
      *(undefined4 *)(iVar5 + 0x594) = uVar10;
      uVar2 = FUN_089a602c(param_1,uVar4 & 0xff,uVar6 & 0xff);
      *(undefined *)(iVar5 + 0x594) = uVar2;
      uVar10 = FUN_089a4dc8((float)(uint)*(byte *)(iVar5 + 0x594) * 1.256 + 1.57);
      *(undefined4 *)(iVar5 + 0x590) = uVar10;
      uVar6 = (uint)*(char *)(param_1 + 0x74);
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar5 = iVar5 + 0x28;
  } while ((int)uVar4 < 5);
  if (uVar6 == 4) {
    FUN_089a6080(param_1,1);
  }
  else if (*(char *)(param_1 + 0x75) == '\x04') {
    FUN_089a6080(param_1,0);
  }
  return;
}

