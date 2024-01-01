#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884ee54(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  switch(*(undefined4 *)(param_1 + 0x480)) {
  case 1:
    *(undefined4 *)(param_1 + 0x4f0) = 0;
    *(undefined4 *)(param_1 + 0x4f4) = 0;
    *(undefined4 *)(param_1 + 0x4f8) = 0;
    *(undefined4 *)(param_1 + 0x4fc) = 0;
    uVar2 = FUN_0882c15c();
    FUN_0882c2f4(uVar2,*(undefined4 *)(param_1 + 0x4dc));
    *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
  case 2:
    iVar1 = FUN_0882c15c();
    if (*(int *)(iVar1 + 0x394) == 0) {
      *(undefined4 *)(param_1 + 0x480) = 10;
LAB_0884eeec:
      *(undefined4 *)(param_1 + 0x480) = 100;
    }
    break;
  default:
    goto LAB_0884efbc;
  case 10:
    goto LAB_0884eeec;
  case 0xb:
    *(undefined4 *)(param_1 + 0x4f0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4f4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4f8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4fc) = 0x3f800000;
    FUN_0882c2cc(0,0);
    uVar2 = FUN_0882c15c();
    FUN_0882c32c(uVar2);
    *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
    return;
  case 0xc:
    uVar2 = FUN_0882c15c();
    FUN_0882c394(uVar2);
    fVar3 = *(float *)(param_1 + 0x4fc);
    *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
    goto LAB_0884ef78;
  case 0xd:
    fVar3 = *(float *)(param_1 + 0x4fc);
LAB_0884ef78:
    if (0.005 < fVar3) {
      fVar3 = fVar3 * 0.8;
    }
    else {
      fVar3 = 0.0;
    }
    *(float *)(param_1 + 0x4fc) = fVar3;
    iVar1 = FUN_089bf93c(0x1e0,1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x480) = 100;
LAB_0884efbc:
      *(undefined4 *)(param_1 + 0x4f0) = 0;
      *(undefined4 *)(param_1 + 0x4f4) = 0;
      *(undefined4 *)(param_1 + 0x4f8) = 0;
      *(undefined4 *)(param_1 + 0x4fc) = 0;
      uVar2 = 1;
      if (DAT_08aba778 == 0) {
        *(undefined4 *)(param_1 + 0x440) = 1;
      }
      else {
        uVar2 = 2;
        *(undefined4 *)(param_1 + 0x440) = 2;
      }
      *(undefined4 *)(param_1 + 0x444) = uVar2;
      FUN_0889d9e4();
      FUN_0882c2cc(0,1);
    }
  }
  return;
}

