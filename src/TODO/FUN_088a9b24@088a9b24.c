#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a9b24(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 local_30;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = *(int *)(param_1 + 0x1fc);
  if (iVar1 < 2) {
    if (-1 < iVar1) {
      if (iVar1 < 1) {
        local_30 = *(undefined4 *)(param_1 + 0x20);
        fVar2 = *(float *)(param_1 + 0x24);
        uStack_28 = *(undefined4 *)(param_1 + 0x28);
        uStack_24 = *(undefined4 *)(param_1 + 0x2c);
        local_2c = fVar2;
        iVar1 = FUN_088a9614(param_1);
        local_2c = fVar2 + *(float *)(iVar1 + 4);
        FUN_08824594(DAT_08abd5b0,2,&local_30,param_1);
        *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 0x74);
        *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x78);
        *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x7c);
        *(undefined4 *)(param_1 + 0x240) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x244) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x248) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x24c) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x308) = 0x6e;
        *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
        iVar1 = *(int *)(param_1 + 0x308);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x308);
      }
      if (iVar1 == 0) {
        *(uint *)(*(int *)(param_1 + 0x140) + 0x130) =
             *(uint *)(*(int *)(param_1 + 0x140) + 0x130) | 2;
        *(undefined *)(param_1 + 0xbc) = 1;
        FUN_089e0a70(param_1,&LAB_088a90e0,0);
        local_30 = *(undefined4 *)(param_1 + 0x20);
        fVar2 = *(float *)(param_1 + 0x24);
        uStack_28 = *(undefined4 *)(param_1 + 0x28);
        uStack_24 = *(undefined4 *)(param_1 + 0x2c);
        local_2c = fVar2;
        iVar1 = FUN_088a9614(param_1);
        local_2c = fVar2 + *(float *)(iVar1 + 4);
        FUN_08824594(DAT_08abd5b0,1,&local_30,param_1);
        *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
      }
      else {
        *(float *)(param_1 + 0x240) = *(float *)(param_1 + 0x240) + 0.02;
        *(float *)(param_1 + 0x244) = *(float *)(param_1 + 0x244) - 0.02;
        *(float *)(param_1 + 0x248) = *(float *)(param_1 + 0x248) - 0.02;
        *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x250) + 0.01;
        *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x254) - 0.01;
        *(float *)(param_1 + 600) = *(float *)(param_1 + 600) - 0.01;
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x250);
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x254);
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 600);
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x25c);
        FUN_089e0460(param_1,param_1 + 0x240,0);
        *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + -1;
      }
    }
  }
  else if (iVar1 < 3) {
    fVar2 = *(float *)(param_1 + 0x228) - 0.2;
    *(float *)(param_1 + 0x228) = fVar2;
    if (fVar2 <= 0.0) {
      *(undefined4 *)(param_1 + 0x228) = 0;
      FUN_088a9668(param_1);
      *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    }
  }
  else if (iVar1 < 4) {
    FUN_088a99f0(param_1);
    *(undefined *)(param_1 + 0x282) = 1;
  }
  return;
}

