#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a7860(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  byte local_20 [4];
  
  if (*(char *)(param_1 + 0x281) != '\0') {
    return;
  }
  iVar1 = FUN_089bfa40(100);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x440) == 9 || (*(int *)(iVar1 + 0x440) == 6)))) {
    *(undefined4 *)(param_1 + 0x238) = 0x3f800000;
    FUN_089e056c(param_1,0);
    return;
  }
  fVar4 = *(float *)(param_1 + 0x238);
  uVar2 = FUN_088660e0();
  local_20[0] = 0;
  iVar1 = FUN_088a765c(param_1,uVar2,param_1 + 0x238,local_20);
  if (local_20[0] < 2) {
    if (local_20[0] != 0) {
      fVar3 = *(float *)(param_1 + 0x238) + 0.1;
      *(float *)(param_1 + 0x238) = fVar3;
      if (0.95 < fVar3) {
        *(undefined4 *)(param_1 + 0x238) = 0x3f733333;
      }
      goto LAB_088a79c4;
    }
  }
  else {
    if (local_20[0] < 3) {
      *(undefined4 *)(param_1 + 0x238) = 0;
      goto LAB_088a79c4;
    }
    if (local_20[0] < 4) {
      fVar3 = *(float *)(param_1 + 0x238) - 0.1;
      *(float *)(param_1 + 0x238) = fVar3;
      if (fVar3 < 0.0) {
        *(undefined4 *)(param_1 + 0x238) = 0;
      }
      goto LAB_088a79c4;
    }
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x238) = 0x3f733333;
  }
LAB_088a79c4:
  if (*(float *)(param_1 + 0x238) != fVar4) {
    FUN_089e056c(param_1,0);
  }
  return;
}

