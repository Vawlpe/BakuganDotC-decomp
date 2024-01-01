#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889fd4c(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_088e1948();
  if (iVar1 == 0) {
    fVar2 = *(float *)(param_1 + 0x178);
  }
  else if (*(char *)(param_1 + 0x1a8) == '\0') {
    fVar2 = *(float *)(param_1 + 0x178);
  }
  else {
    if (*(char *)(iVar1 + 0x3a1) == '\0') {
      return;
    }
    fVar2 = *(float *)(param_1 + 0x178);
  }
  if (0.0 < fVar2) {
    FUN_088d93cc(param_1,param_2);
  }
  return;
}

