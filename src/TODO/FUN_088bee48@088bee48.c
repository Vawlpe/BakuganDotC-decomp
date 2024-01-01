#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088bee48(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_089bf6e8(0x1ae,100);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x74) = param_2;
  }
  *(undefined4 *)(param_1 + 0x618) = 4;
  return;
}

