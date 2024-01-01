#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08849408(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x2c0) == '\0') {
    iVar1 = FUN_0884b268();
    *(undefined4 *)(iVar1 + 0x4e0) = 0x3f59999a;
    FUN_089e10cc(0x3f0ccccd);
    *(undefined *)(param_1 + 0x2c0) = 1;
  }
  return;
}

