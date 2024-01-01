#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088604f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x4c1) != '\0') {
    iVar1 = FUN_0885fc80(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x660) == 0) {
        uVar2 = 1;
      }
    }
    else if (DAT_08aba77d == '\0') {
      uVar2 = 1;
    }
  }
  return uVar2;
}

