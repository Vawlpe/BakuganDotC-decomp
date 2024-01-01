#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08934bf4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  
  iVar1 = FUN_0880dc00("DWCardHelp");
  FUN_088cc354(iVar1);
  iVar4 = param_1 + 0xef8;
  strcpy(iVar4,*(undefined4 *)(iVar1 + (param_2 & 0xff) * 4));
  iVar1 = *(int *)(param_1 + 0xed4);
  FUN_089f51b8(iVar1);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0xed4) + 0x74);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd8);
  (**(code **)(iVar3 + 0x14))
            (*(undefined4 *)(iVar1 + 0x60),*(undefined4 *)(iVar1 + 100),0,
             *(int *)(param_1 + 0xed4) + (int)*(short *)(iVar3 + 0x10),iVar4,1,0,0);
  FUN_088184e8(0,*(undefined4 *)(param_1 + 0xed4),iVar4,param_1 + 0xee8,param_1 + 0xeec,
               param_1 + 0xef0);
  *(undefined4 *)(param_1 + 0xef4) = *(undefined4 *)(*(int *)(param_1 + 0xed4) + 0x84);
  fVar5 = (float)*(int *)(*(int *)(param_1 + 0xed4) + 0x88);
  iVar4 = *(int *)(param_1 + 0xef4);
  iVar1 = 0;
  iVar3 = 0;
  *(float *)(param_1 + 0xee0) = fVar5;
  if (0.0 < fVar5) {
    iVar2 = iVar4;
    do {
      iVar6 = (int)(*(float *)(iVar2 + 100) - *(float *)(iVar4 + 100));
      if (iVar1 < iVar6) {
        iVar1 = iVar6;
      }
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar2 + 4);
    } while ((float)iVar3 < fVar5);
  }
  iVar3 = 0;
  if (0.0 < fVar5) {
    do {
      iVar3 = iVar3 + 1;
      *(float *)(iVar4 + 100) = *(float *)(iVar4 + 100) - (float)(iVar1 / 2);
      fVar5 = *(float *)(param_1 + 0xee0);
      iVar4 = *(int *)(iVar4 + 4);
    } while ((float)iVar3 < fVar5);
    iVar4 = *(int *)(param_1 + 0xef4);
  }
  iVar3 = 0;
  iVar1 = param_1;
  if (0.0 < fVar5) {
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar1 + 0x11f8) = *(undefined4 *)(iVar4 + 0x60);
      iVar4 = *(int *)(iVar4 + 4);
      iVar1 = iVar1 + 4;
    } while ((float)iVar3 < fVar5);
  }
  *(undefined4 *)(param_1 + 0xed8) = 0;
  *(undefined4 *)(param_1 + 0xedc) = 0x3f800000;
  return;
}

