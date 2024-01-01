#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088e61c4(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_088e1948();
  fVar2 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
  }
  if (fVar2 < DAT_08abf6d0) {
    return 0;
  }
  return 1;
}

