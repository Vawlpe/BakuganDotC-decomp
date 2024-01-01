#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888ddf0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x19c) = param_2;
  uVar2 = 0;
  uVar1 = *(uint *)(param_1 + 0x918);
  uVar3 = 1;
  do {
    uVar2 = uVar2 + 1;
    uVar1 = uVar1 | uVar3;
    uVar3 = 1 << (uVar2 & 0x1f);
  } while ((int)uVar2 < 0x1e);
  *(uint *)(param_1 + 0x918) = uVar1;
  *(int *)(param_1 + 0x920) = param_1;
  *(int *)(param_1 + 0x924) = param_1 + 0x50;
  *(int *)(param_1 + 0x928) = param_1 + 0xa0;
  *(int *)(param_1 + 0x92c) = param_1 + 0xf0;
  *(int *)(param_1 + 0x930) = param_1 + 0x150;
  FUN_0888dadc();
  return;
}

