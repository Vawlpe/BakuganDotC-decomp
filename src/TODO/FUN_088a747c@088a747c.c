#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a747c(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (0.0 < *(float *)(param_1 + 0x6c)) {
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0x3b8);
    FUN_089df8d0(param_1,param_2);
    if (*(int *)(param_1 + 0x33c) == 0) {
      fVar3 = *(float *)(param_1 + 0x3bc);
      fVar2 = 1.0;
      if (8.0 < fVar3) {
        fVar2 = (16.0 - fVar3) * 0.125;
      }
      if (fVar3 < 0.5) {
        fVar2 = fVar3 * 2.0;
      }
      iVar1 = 0;
      *(float *)(param_1 + 0x6c) = fVar2;
      if (0 < *(int *)(param_1 + 0xf0)) {
        do {
          FUN_089e027c(param_1,iVar1,FUN_088a67c8,param_1 + 0x3bc);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0xf0));
      }
      FUN_089df8d0(param_1,param_2);
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0xf0)) {
        do {
          FUN_089e027c(param_1,iVar1,0,0);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0xf0));
      }
    }
    *(undefined4 *)(param_1 + 0x6c) = 0x3f666666;
  }
  return;
}

