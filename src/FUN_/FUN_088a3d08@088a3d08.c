#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a3d08(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08860188(*(undefined4 *)(param_1 + 0x324));
  if (iVar1 != 0) {
    *(int *)(iVar1 + *(int *)(param_1 + 0x340) * 4 + 0x7f0) = param_1;
  }
  return;
}

