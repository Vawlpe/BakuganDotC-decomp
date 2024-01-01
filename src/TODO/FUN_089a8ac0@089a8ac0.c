#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a8ac0(int param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0xa04) = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xa04) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
  return;
}

