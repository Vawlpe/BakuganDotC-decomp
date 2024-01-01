#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08986368(int param_1,char param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  int iVar10;
  
  iVar10 = (int)*(char *)(param_1 + 0xbcc);
  iVar5 = param_1 + iVar10 * 8;
  iVar8 = param_1 + iVar10 * 0x28;
  iVar6 = *(int *)(param_1 + 0x1c);
  uVar9 = (undefined2)(int)*(float *)(iVar5 + 0xc84);
  uVar7 = (undefined2)(int)*(float *)(iVar5 + 0xc88);
  if (param_2 == '\0') {
    *(undefined2 *)(iVar8 + 0x290) = uVar9;
    *(undefined2 *)(iVar8 + 0x292) = uVar7;
    sVar1 = *(short *)(iVar8 + 0x290);
    *(short *)(iVar8 + 0x294) = (short)(int)*(float *)(*(int *)(iVar6 + 0xd0) + 0x60);
    sVar2 = *(short *)(iVar8 + 0x294);
    sVar3 = *(short *)(iVar8 + 0x292);
    *(short *)(iVar8 + 0x296) = (short)(int)*(float *)(*(int *)(iVar6 + 0xd0) + 100);
    sVar4 = *(short *)(iVar8 + 0x296);
    *(undefined4 *)(param_1 + 0xcac) = 0x3e99999a;
    *(float *)(param_1 + 0xca4) = (float)((int)sVar2 - (int)sVar1);
    *(undefined4 *)(param_1 + 0xcb0) = 0x3f4ccccd;
    *(undefined4 *)(iVar8 + 0x298) = 0;
    *(float *)(param_1 + 0xca8) = (float)((int)sVar4 - (int)sVar3);
    *(undefined4 *)(*(int *)(iVar6 + iVar10 * 4 + 0x34) + 0x128) = 8;
    return;
  }
  *(undefined2 *)(iVar8 + 0x294) = uVar9;
  *(undefined2 *)(iVar8 + 0x296) = uVar7;
  sVar1 = *(short *)(iVar8 + 0x294);
  *(short *)(iVar8 + 0x290) = (short)(int)*(float *)(*(int *)(iVar6 + 0xd0) + 0x60);
  sVar2 = *(short *)(iVar8 + 0x290);
  sVar3 = *(short *)(iVar8 + 0x296);
  *(short *)(iVar8 + 0x292) = (short)(int)*(float *)(*(int *)(iVar6 + 0xd0) + 100);
  sVar4 = *(short *)(iVar8 + 0x292);
  *(undefined4 *)(param_1 + 0xcb0) = 0x3e99999a;
  *(float *)(param_1 + 0xca4) = (float)((int)sVar1 - (int)sVar2);
  *(undefined4 *)(param_1 + 0xcac) = 0x3f4ccccd;
  *(undefined4 *)(iVar8 + 0x298) = 0;
  *(float *)(param_1 + 0xca8) = (float)((int)sVar3 - (int)sVar4);
  return;
}

