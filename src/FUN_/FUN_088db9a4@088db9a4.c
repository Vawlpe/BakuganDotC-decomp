#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088db9a4(int param_1)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0x15e) != '\0') && ((*(byte *)(param_1 + 0x15f) & 1) == 0)) &&
     (iVar1 = FUN_0881a580(*(undefined4 *)(param_1 + 0x194)), iVar1 != 0)) {
    *(byte *)(param_1 + 0x15f) = *(byte *)(param_1 + 0x15f) | 1;
  }
  return;
}

