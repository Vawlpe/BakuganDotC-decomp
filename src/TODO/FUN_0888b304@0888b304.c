#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_0888b304(int param_1)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x8c);
  uVar1 = 0;
  if (iVar2 < 2) {
    if (0 < iVar2) {
      return *(undefined *)(*(int *)(param_1 + 0x28) + 0x4c1);
    }
  }
  else if ((iVar2 < 3) &&
          (uVar1 = *(undefined *)(*(int *)(param_1 + 0x2c) + 0x281), DAT_08aba77d != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}

