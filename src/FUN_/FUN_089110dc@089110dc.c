#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089110dc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0880d354();
  if (iVar1 != 0) {
    iVar1 = FUN_0880d36c();
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x8c);
    if (iVar1 == 1) {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + 0x68) = 0xc2c80000;
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x8c));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x8c);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x8c));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x8c);
      FUN_089a5b10(*(undefined4 *)(iVar1 + 0x60),*(float *)(iVar1 + 100) - 6.0,5);
    }
    else {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + 0x68) = 0xc2c80000;
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x8c));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x8c);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x8c));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x8c);
      FUN_089a5b10(*(undefined4 *)(iVar1 + 0x60),*(float *)(iVar1 + 100) - 6.0,6);
    }
  }
  return;
}

