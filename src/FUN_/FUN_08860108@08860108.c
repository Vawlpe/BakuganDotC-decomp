#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08860108(int param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (float)(*(int *)(param_1 + 0x198) + *(int *)(param_1 + 0x1a8));
  if (99.0 < fVar1) {
    iVar2 = 99;
  }
  else {
    iVar2 = (int)fVar1;
  }
  *(int *)(param_1 + 0x198) = iVar2;
  if (*(int *)(param_1 + 0x19c) < iVar2) {
    *(int *)(param_1 + 0x19c) = iVar2;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    return;
  }
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  return;
}

