#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a4cec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 in_V7C;
  undefined auStack_20 [20];
  
  iVar1 = *(int *)(param_1 + 0x344);
  if (iVar1 < 2) {
    if (iVar1 < 0) {
      iVar1 = *(int *)(param_1 + 800);
LAB_088a4ec8:
      if (iVar1 != 0) {
        *(uint *)(*(int *)(iVar1 + 0x20c) + 0x130) =
             *(uint *)(*(int *)(iVar1 + 0x20c) + 0x130) & 0xfffffffd;
      }
      *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
      FUN_088a3cf8(param_1,2);
      return;
    }
    if (iVar1 < 1) {
      FUN_088a8f2c(auStack_20,*(int *)(param_1 + 0x130) + 0xb0,0x3fbf2500);
      FUN_08823f5c(DAT_08abd5b0,0x36,auStack_20);
      if (*(int *)(param_1 + 800) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 800) + 0x20c);
        *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 2;
      }
      *(undefined4 *)(param_1 + 0x228) = 0;
      *(undefined4 *)(param_1 + 0x35c) = 2;
      *(int *)(param_1 + 0x344) = *(int *)(param_1 + 0x344) + 1;
      iVar1 = *(int *)(param_1 + 0x35c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x35c);
    }
    *(int *)(param_1 + 0x35c) = iVar1 + -1;
    if (0 < iVar1 + -1) {
      return;
    }
    *(int *)(param_1 + 0x344) = *(int *)(param_1 + 0x344) + 1;
  }
  else if (2 < iVar1) {
    if (3 < iVar1) {
      iVar1 = *(int *)(param_1 + 800);
      goto LAB_088a4ec8;
    }
    goto LAB_088a4dd8;
  }
  *(undefined4 *)(param_1 + 0x35c) = 0;
  *(int *)(param_1 + 0x344) = *(int *)(param_1 + 0x344) + 1;
LAB_088a4dd8:
  FUN_089e0a70(param_1,&LAB_088a3af8,0);
  iVar1 = *(int *)(param_1 + 0x35c);
  *(int *)(param_1 + 0x35c) = iVar1 + 1;
  uVar2 = vmul_s((float)iVar1 * 3.141593 * 0.03,in_V7C);
  fVar3 = (float)vsin_s(uVar2);
  fVar3 = fVar3 * 0.35 + 0.65;
  *(float *)(param_1 + 0x228) = fVar3;
  if (0.95 <= fVar3) {
    *(int *)(param_1 + 0x344) = *(int *)(param_1 + 0x344) + 1;
  }
  else if ((0.2 <= fVar3) && (*(int *)(param_1 + 800) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 800) + 0x20c);
    *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) & 0xfffffffd;
  }
  return;
}

