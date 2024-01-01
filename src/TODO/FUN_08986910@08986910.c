#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08986910(int param_1,char param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  
  cVar1 = *(char *)(param_1 + 0xbcc);
  iVar7 = *(int *)(param_1 + 0x1c);
  iVar6 = param_1 + cVar1 * 0x28;
  if (param_2 == '\0') {
    *(short *)(iVar6 + 0x290) = (short)(int)*(float *)(*(int *)(iVar7 + 0xd0) + 0x60);
    fVar9 = *(float *)(*(int *)(iVar7 + 0xd0) + 100);
    *(undefined2 *)(iVar6 + 0x294) = 0xf0;
    *(undefined2 *)(iVar6 + 0x296) = 0x88;
    sVar2 = *(short *)(iVar6 + 0x294);
    sVar3 = *(short *)(iVar6 + 0x290);
    *(short *)(iVar6 + 0x292) = (short)(int)fVar9;
    sVar4 = *(short *)(iVar6 + 0x296);
    sVar5 = *(short *)(iVar6 + 0x292);
    *(undefined4 *)(param_1 + 0xcac) = 0x3f4ccccd;
    *(float *)(param_1 + 0xca4) = (float)((int)sVar2 - (int)sVar3);
    *(undefined4 *)(iVar6 + 0x298) = 0;
    *(undefined4 *)(param_1 + 0xcb0) = 0x3f800000;
    *(float *)(param_1 + 0xca8) = (float)((int)sVar4 - (int)sVar5);
    return;
  }
  *(short *)(iVar6 + 0x294) = (short)(int)*(float *)(*(int *)(iVar7 + 0xd0) + 0x60);
  fVar9 = *(float *)(*(int *)(iVar7 + 0xd0) + 100);
  *(undefined2 *)(iVar6 + 0x290) = 0xf0;
  *(undefined2 *)(iVar6 + 0x292) = 0x88;
  *(short *)(iVar6 + 0x296) = (short)(int)fVar9;
  sVar2 = *(short *)(iVar6 + 0x296);
  sVar3 = *(short *)(iVar6 + 0x292);
  *(float *)(param_1 + 0xca4) =
       (float)((int)*(short *)(iVar6 + 0x294) - (int)*(short *)(iVar6 + 0x290));
  *(undefined4 *)(param_1 + 0xcb0) = 0x3f4ccccd;
  *(float *)(param_1 + 0xca8) = (float)((int)sVar2 - (int)sVar3);
  uVar8 = *(undefined4 *)(*(int *)(iVar7 + cVar1 * 4 + 0x34) + 0x90);
  *(undefined4 *)(iVar6 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0xcac) = uVar8;
  return;
}

