#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08939958(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_08939524(param_1);
    FUN_089395d8(param_1);
    FUN_089396cc(param_1);
    bVar2 = false;
    if ((*(char *)(param_1 + 0x5ee) != '\x05') && (*(char *)(param_1 + 0x5ee) != '\x06')) {
      bVar2 = true;
    }
    if (bVar2) {
      iVar1 = *(int *)(param_1 + 0x2c);
    }
    else {
      FUN_089397b0(param_1);
      iVar1 = *(int *)(param_1 + 0x2c);
    }
    *(int *)(param_1 + 0x2c) = iVar1 + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x790) = 8;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

