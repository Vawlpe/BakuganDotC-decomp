#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e2d98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30 [2];
  float local_28;
  float local_20 [2];
  float local_18;
  
  if (*(int *)(param_1 + 0x314) == 0) {
    FUN_088e2788(param_1,0,0);
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x324)) {
  case 0:
    FUN_088d462c(local_30,1);
    uVar2 = atan2f(local_28 - *(float *)(param_1 + 0x28),local_30[0] - *(float *)(param_1 + 0x20));
    fVar3 = (float)FUN_088defe8(uVar2,0x3e99999a,0,param_1);
    if (0.8 < ABS(fVar3)) {
      FUN_088def24(0x3e4ccccd,param_1,1,1,0);
    }
    *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
    break;
  case 1:
    FUN_088d462c(local_20,1);
    uVar2 = atan2f(local_18 - *(float *)(param_1 + 0x28),local_20[0] - *(float *)(param_1 + 0x20));
    fVar3 = (float)FUN_088defe8(uVar2,0x3e99999a,0,param_1);
    if (ABS(fVar3) < 0.01) {
      iVar1 = FUN_088deefc(param_1,0);
      if (iVar1 == 0) {
        FUN_088def24(0x3e4ccccd,param_1,0,1,0);
        *(undefined4 *)(param_1 + 0x338) = 4;
      }
      else {
        *(undefined4 *)(param_1 + 0x338) = 1;
      }
      *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
    }
    break;
  case 2:
    iVar1 = *(int *)(param_1 + 0x338) + -1;
    *(int *)(param_1 + 0x338) = iVar1;
    if (iVar1 < 0) {
      *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
    }
    break;
  case 3:
    break;
  case 4:
    iVar1 = FUN_089bf93c(0x17c,1);
    if (iVar1 == 0) {
      if (*(int *)(DAT_08ac58c4 + 0xc) == 1) {
        *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
      }
      else {
        FUN_088e2788(param_1,0,0);
      }
    }
    break;
  case 5:
    FUN_088d462c(&local_40,0);
    *(undefined4 *)(param_1 + 0x20) = local_40;
    *(undefined4 *)(param_1 + 0x24) = uStack_3c;
    *(undefined4 *)(param_1 + 0x28) = uStack_38;
    *(undefined4 *)(param_1 + 0x2c) = uStack_34;
    FUN_088ba9cc(*(undefined4 *)(param_1 + 0x314));
    *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
    break;
  case 6:
    *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
    break;
  case 7:
    FUN_089bf6e8(0x186,100);
    *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
    break;
  case 8:
    iVar1 = FUN_089bf93c(0x186,1);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
    }
    break;
  case 9:
    *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
    break;
  default:
    FUN_088e2788(param_1,0,0);
  }
  return;
}

