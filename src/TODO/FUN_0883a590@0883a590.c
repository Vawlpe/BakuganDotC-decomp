#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0883a590(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar1 = FUN_089f2178(0x42e60000);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x44),uVar1);
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar1 = FUN_089f2178(0x42f00000);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x4c),uVar1);
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar1 = FUN_089f2178(0x42fa0000);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x54),uVar1);
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    uVar1 = FUN_089f2178(0x43020000);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x5c),uVar1);
  }
  iVar2 = *(int *)(param_1 + 0x68c);
  if (iVar2 != 0) {
    uVar1 = FUN_089f2178(*(undefined4 *)(param_1 + 0x6a0));
    FUN_089f5084(iVar2,uVar1);
  }
  return;
}

