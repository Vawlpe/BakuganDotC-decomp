#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08889e00(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  fVar2 = 0.0;
  if (iVar1 < 2) {
    if (0 < iVar1) {
      fVar2 = (float)FUN_08887b94(*(int *)(param_1 + 0x28) + 0x434);
      return fVar2;
    }
  }
  else if (iVar1 < 3) {
    fVar2 = (float)*(int *)(*(int *)(param_1 + 0x2c) + 0x200);
  }
  return fVar2;
}

