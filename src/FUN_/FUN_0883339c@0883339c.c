#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0883339c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (DAT_08aba77f == '\0') {
    iVar1 = FUN_088660e0();
    uVar2 = 1;
    if ((iVar1 != 0) && (iVar1 = FUN_08860344(), iVar1 == param_2)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

