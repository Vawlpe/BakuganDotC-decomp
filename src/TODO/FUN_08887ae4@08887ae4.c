#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08887ae4(float param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_2 + 0x88) != 0) {
    *(float *)(param_2 + 0x98) = param_1;
    iVar1 = FUN_08887a90(param_2);
    fVar2 = (float)iVar1;
    fVar3 = 0.0;
    if (iVar1 < 0) {
      fVar2 = fVar2 + 4.294967e+09;
    }
    if (fVar2 <= param_1) {
      iVar1 = FUN_08887a90(param_2);
      fVar2 = (float)iVar1;
      if (iVar1 < 0) {
        fVar2 = fVar2 + 4.294967e+09;
      }
      *(float *)(param_2 + 0x98) = fVar2;
    }
    else {
      fVar2 = *(float *)(param_2 + 0x98);
      if (fVar2 <= 0.0) {
        *(undefined4 *)(param_2 + 0x98) = 0;
        fVar2 = 0.0;
      }
    }
    if (fVar3 < fVar2) {
      *(undefined *)(param_2 + 0x8d) = 0;
    }
  }
  return;
}

