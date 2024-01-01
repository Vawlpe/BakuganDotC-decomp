#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08857474(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  byte local_20 [4];
  
  if (*(char *)(param_1 + 0x940) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xa3a) != '\0') {
    return;
  }
  fVar4 = *(float *)(param_1 + 0xa80);
  uVar1 = FUN_088660e0();
  local_20[0] = 0;
  iVar2 = FUN_08857270(param_1,uVar1,param_1 + 0xa80,local_20);
  if (local_20[0] < 2) {
    if (local_20[0] != 0) {
      fVar3 = *(float *)(param_1 + 0xa80) + 0.1;
      *(float *)(param_1 + 0xa80) = fVar3;
      if (1.0 < fVar3) {
        *(undefined4 *)(param_1 + 0xa80) = 0x3f800000;
      }
      goto LAB_08857570;
    }
  }
  else {
    if (local_20[0] < 3) {
      *(undefined4 *)(param_1 + 0xa80) = 0;
      goto LAB_08857570;
    }
    if (local_20[0] < 4) {
      fVar3 = *(float *)(param_1 + 0xa80) - 0.1;
      *(float *)(param_1 + 0xa80) = fVar3;
      if (fVar3 < 0.0) {
        *(undefined4 *)(param_1 + 0xa80) = 0;
      }
      goto LAB_08857570;
    }
  }
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xa80) = 0x3f800000;
  }
LAB_08857570:
  if (*(float *)(param_1 + 0xa80) != fVar4) {
    FUN_089e056c(param_1,0);
    FUN_089e0694(*(float *)(param_1 + 0xa80) * 0.5,param_1,"mat_spel");
  }
  return;
}

