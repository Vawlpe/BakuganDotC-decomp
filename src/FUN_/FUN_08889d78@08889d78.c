#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08889d78(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  fVar2 = 0.0;
  if (iVar1 < 2) {
    if (0 < iVar1) {
      iVar1 = FUN_08887a90(*(int *)(param_1 + 0x28) + 0x434);
      fVar2 = (float)iVar1;
      if (iVar1 < 0) {
        fVar2 = fVar2 + 4.294967e+09;
      }
      return fVar2;
    }
  }
  else if (iVar1 < 3) {
    fVar2 = (float)*(int *)(*(int *)(param_1 + 0x2c) + 0x204);
  }
  return fVar2;
}

