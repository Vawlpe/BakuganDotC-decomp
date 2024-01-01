#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08824594(void)

{
  int iVar1;
  int in_a3;
  
  iVar1 = FUN_08823f5c();
  *(int *)(iVar1 + 0x1fc) = in_a3;
  if (in_a3 != 0) {
    *(undefined4 *)(iVar1 + 0x200) = *(undefined4 *)(in_a3 + 0xc);
  }
  return;
}

