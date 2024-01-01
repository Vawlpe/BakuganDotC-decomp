#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891ed50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      FUN_089c87e4(1);
      FUN_089c879c(0x3dcccccd,1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
  }
  else if (iVar2 < 2) {
    iVar2 = FUN_089c2b10(1);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
    }
    else {
      uVar1 = FUN_089c2b48(1);
      iVar2 = FUN_089c3818(uVar1);
      if (iVar2 == 0) {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x2c);
    }
    *(int *)(param_1 + 0x2c) = iVar2 + 1;
  }
  else if ((iVar2 < 3) && (iVar2 = FUN_089c2f78(), iVar2 == 0)) {
    FUN_089c2ef0();
    *(undefined *)(param_1 + 0x4c) = 1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  return;
}

