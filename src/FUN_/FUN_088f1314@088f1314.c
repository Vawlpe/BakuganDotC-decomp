#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f1314(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_088f505c(*(undefined2 *)(param_1 + 0x28c));
  if (iVar1 != 0) {
    do {
      FUN_088eb6bc(param_1,0x91);
    } while ((int)*(short *)(*(int *)(param_1 + 0x20) + 2) != (param_2 & 0xff));
  }
  return;
}

