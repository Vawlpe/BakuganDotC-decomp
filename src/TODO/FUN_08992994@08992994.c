#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08992994(int param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 * 4;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + param_2);
  *(undefined4 *)(iVar1 + 0xc0) = 0;
  *(undefined4 *)(iVar1 + 0xc4) = 0;
  *(undefined4 *)(iVar1 + 200) = 0;
  *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x84));
  *(undefined *)(param_1 + 0xa8) = 1;
  *(undefined4 *)(param_1 + 0xac) = 0;
  return;
}

