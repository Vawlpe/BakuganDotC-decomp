#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e3a74(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x324);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      FUN_088e1004(param_1,0);
      FUN_088def24(0x3e4ccccd,param_1,0x1b,0,0);
      FUN_089df730(0x41800000,param_1);
      *(undefined4 *)(param_1 + 0x324) = 1;
    }
  }
  else if (iVar1 < 2) {
    fVar2 = (float)FUN_089df648(param_1);
    if (fVar2 == 0.0) {
      *(undefined4 *)(param_1 + 0x324) = 2;
    }
  }
  else if (iVar1 < 3) {
    FUN_088e2788(param_1,0,0);
  }
  return;
}

