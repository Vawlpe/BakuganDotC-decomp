#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a2fe1c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_08a2fdbc();
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
  return uVar2;
}

