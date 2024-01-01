#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08897168(int param_1)

{
  int iVar1;
  float fVar2;
  
  FUN_08895e1c();
  iVar1 = FUN_088936a0(param_1);
  if (iVar1 != 0) {
    FUN_0888cfe4(param_1 + 0x2d8);
    FUN_0888cfe4(param_1 + 0x404);
  }
  FUN_08896454(param_1);
  FUN_08898958(param_1);
  if (*(int *)(param_1 + 0x2dc) == 0x1b) {
    if (*(int *)(param_1 + 0x408) == 0x1b) {
      fVar2 = *(float *)(param_1 + 0x934) + 0.03333334;
    }
    else {
      fVar2 = 0.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x934) = fVar2;
  return;
}

