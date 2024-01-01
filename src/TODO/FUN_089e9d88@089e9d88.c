#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e9d88(float *param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*(uint *)(param_2 + 0x20) | *(uint *)(param_2 + 0x28)) != 0) {
    uVar1 = FUN_089e9bac(param_1,param_2);
    return uVar1;
  }
  if ((((*param_1 <= *(float *)(param_2 + 0x10)) && (*(float *)(param_2 + 0x10) <= param_1[4])) &&
      (param_1[2] <= *(float *)(param_2 + 0x18))) && (*(float *)(param_2 + 0x18) <= param_1[6])) {
    fVar4 = (param_1[1] - *(float *)(param_2 + 0x14)) * *(float *)(param_2 + 0x34);
    fVar2 = (param_1[5] - *(float *)(param_2 + 0x14)) * *(float *)(param_2 + 0x34);
    fVar3 = 0.0;
    if (0.0 < fVar4) {
      fVar3 = fVar4;
    }
    fVar4 = 1e+15;
    if (1e+15 < fVar2) {
      fVar4 = fVar2;
    }
    if (fVar3 <= fVar4) {
      DAT_08ac5d68 = fVar3;
      return 1;
    }
  }
  return 0;
}

