#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08934a98(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar1 = FUN_0880dc00("DWCardName");
  FUN_088cc354(iVar1);
  iVar3 = param_1 + 0xcd4;
  strcpy(iVar3,*(undefined4 *)(iVar1 + (param_2 & 0xff) * 4));
  iVar1 = *(int *)(param_1 + 0xcb0);
  FUN_089f51b8(iVar1);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0xcb0) + 0x74);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd8);
  (**(code **)(iVar2 + 0x14))
            (*(undefined4 *)(iVar1 + 0x60),*(float *)(iVar1 + 100) - 34.0,0,
             *(int *)(param_1 + 0xcb0) + (int)*(short *)(iVar2 + 0x10),iVar3,1,0,0);
  FUN_088184e8(0,*(undefined4 *)(param_1 + 0xcb0),iVar3,param_1 + 0xcc4,param_1 + 0xcc8,
               param_1 + 0xccc);
  *(undefined4 *)(param_1 + 0xcd0) = *(undefined4 *)(*(int *)(param_1 + 0xcb0) + 0x84);
  fVar4 = (float)*(int *)(*(int *)(param_1 + 0xcb0) + 0x88);
  iVar3 = *(int *)(param_1 + 0xcd0);
  iVar2 = 0;
  *(float *)(param_1 + 0xcbc) = fVar4;
  iVar1 = param_1;
  if (0.0 < fVar4) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar1 + 0x10f8) = *(undefined4 *)(iVar3 + 0x60);
      iVar3 = *(int *)(iVar3 + 4);
      iVar1 = iVar1 + 4;
    } while ((float)iVar2 < fVar4);
  }
  *(undefined4 *)(param_1 + 0xcb4) = 0;
  *(undefined4 *)(param_1 + 0xcb8) = 0x3f800000;
  return;
}

