#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088a41a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08860188(*(undefined4 *)(param_1 + 0x324));
  uVar2 = 0;
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x4c1) == '\0')) {
    uVar2 = 1;
  }
  return uVar2;
}

