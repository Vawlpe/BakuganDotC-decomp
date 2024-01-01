#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08854bb0(int param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    if (param_2 < 0x16) {
      *(undefined4 *)(param_1 + param_2 * 4 + 4) = 0;
      return;
    }
    iVar1 = 0;
    do {
      *(undefined4 *)(param_1 + 4) = 0;
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 4;
    } while (iVar1 < 0x16);
  }
  return;
}

