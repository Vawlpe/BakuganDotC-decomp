#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08914888(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_1 + 0x13e8;
  if ((param_2 & 0xff) == 0) {
    strcpy(iVar3,&DAT_08a9bc58);
    iVar4 = *(int *)(param_1 + 0x13e4);
  }
  else {
    iVar4 = FUN_0880dc00("DMUpgrade");
    FUN_088cc354(iVar4);
    strcpy(iVar3,*(undefined4 *)(iVar4 + (param_2 & 0xff) * 4 + -4));
    iVar4 = *(int *)(param_1 + 0x13e4);
  }
  FUN_089f51b8(iVar4);
  *(undefined4 *)(iVar4 + 0x84) = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x13e4) + 0x74);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0xac);
  (**(code **)(iVar1 + 0x14))
            (*(undefined4 *)(iVar4 + 0x60),*(float *)(iVar4 + 100) - 6.0,0,
             *(int *)(param_1 + 0x13e4) + (int)*(short *)(iVar1 + 0x10),iVar3,1,0,0);
  iVar5 = *(int *)(param_1 + 0x13e4);
  iVar1 = 0;
  iVar4 = *(int *)(iVar5 + 0x84);
  iVar3 = 0;
  if (0 < *(int *)(iVar5 + 0x88)) {
    iVar2 = iVar4;
    do {
      iVar6 = (int)(*(float *)(iVar2 + 100) - *(float *)(iVar4 + 100));
      if (iVar3 < iVar6) {
        iVar3 = iVar6;
      }
      iVar1 = iVar1 + 1;
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar1 < *(int *)(iVar5 + 0x88));
  }
  iVar1 = 0;
  if (0 < *(int *)(iVar5 + 0x88)) {
    do {
      iVar1 = iVar1 + 1;
      *(float *)(iVar4 + 100) = *(float *)(iVar4 + 100) - (float)(iVar3 / 2);
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar1 < *(int *)(*(int *)(param_1 + 0x13e4) + 0x88));
  }
  return;
}

