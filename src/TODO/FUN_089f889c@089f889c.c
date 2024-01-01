#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined2 FUN_089f889c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x88) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x88) + 0x1c), iVar2 != 0)) {
    uVar1 = *(undefined2 *)(iVar2 + 0xc);
  }
  return uVar1;
}

