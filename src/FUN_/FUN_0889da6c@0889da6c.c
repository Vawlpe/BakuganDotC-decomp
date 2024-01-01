#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0889da6c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_08ac58c4 + 4);
  uVar1 = 0;
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      uVar1 = 1;
    }
  }
  else if (iVar2 == 0xd) {
    uVar1 = 1;
  }
  return uVar1;
}

