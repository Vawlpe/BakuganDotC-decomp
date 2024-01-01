#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a3adc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x140);
  *(int *)(iVar1 + 0x110) = *(int *)(param_1 + 0x130) + 0x80;
  *(undefined *)(iVar1 + 0x10c) = 1;
  return;
}

