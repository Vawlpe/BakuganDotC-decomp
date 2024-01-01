#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0888b824(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (DAT_08aba77f == '\0') {
    iVar1 = *(int *)(param_1 + 0x8c);
    if (iVar1 < 2) {
      if (0 < iVar1) {
        iVar1 = FUN_088660e0();
        uVar2 = 1;
        if ((iVar1 != 0) && (iVar1 = FUN_08860344(), iVar1 == *(int *)(param_1 + 0x28))) {
          uVar2 = 0;
        }
      }
    }
    else if (iVar1 < 3) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

