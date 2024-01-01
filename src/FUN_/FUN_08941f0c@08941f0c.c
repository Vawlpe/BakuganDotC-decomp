#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08941f0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x88) == '\0') {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        uVar2 = 1;
      }
    }
    else if (iVar1 < 2) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 0;
    DAT_08ac0e70 = 1;
  }
  FUN_0890a598(param_1,uVar2);
  *(undefined *)(param_1 + 0x4c) = 1;
  return;
}

