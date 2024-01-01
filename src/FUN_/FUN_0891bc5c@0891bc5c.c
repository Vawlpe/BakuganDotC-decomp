#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891bc5c(int param_1)

{
  int iVar1;
  
  *(undefined *)(param_1 + 0x218c) = 0;
  if (*(char *)(param_1 + 0x2137) == '\0') {
    *(byte *)(param_1 + 0x218c) = *(byte *)(param_1 + 0x218c) | 2;
  }
  else {
    iVar1 = FUN_0891bbc4(param_1);
    if (iVar1 == 1) {
      *(byte *)(param_1 + 0x218c) = *(byte *)(param_1 + 0x218c) | 5;
    }
  }
  return;
}

