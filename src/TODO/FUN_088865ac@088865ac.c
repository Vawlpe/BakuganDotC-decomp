#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088865ac(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 6;
  *(undefined *)(iVar1 + 0xc) = 0;
  *(undefined2 *)(iVar1 + 8) = 0;
  *(undefined2 *)(iVar1 + 10) = 0;
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0xe8) == param_2) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 3);
  return;
}

