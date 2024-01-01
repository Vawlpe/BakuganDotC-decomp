#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08858ec8(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xa3d) != '\0') {
    iVar1 = *(int *)(param_1 + 0x5c8);
    *(int *)(param_1 + 0x5c8) = iVar1 + 1;
    if (0x77 < iVar1) {
      *(uint *)(*(int *)(param_1 + 0x168) + 0x1c) =
           *(uint *)(*(int *)(param_1 + 0x168) + 0x1c) | 0x10;
      *(undefined4 *)(param_1 + 0x5c8) = 0;
    }
  }
  if ((*(uint *)(param_1 + 0x16c) & 0x10) != 0) {
    FUN_08855384(param_1,1,0);
  }
  return;
}

