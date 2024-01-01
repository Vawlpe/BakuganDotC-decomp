#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08950fcc(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0);
  FUN_08804484("dialog_moji",0,0);
  *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0xbc) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xbc) = 0;
  FUN_089f4a90(0,0x40000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0xbc) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + 100) = 0x43400000;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 100) = 0x43600000;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  iVar2 = 2;
  iVar1 = 8;
  do {
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
    FUN_089f4954(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1),0);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xbc) = 0;
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 5);
  *(undefined4 *)(param_1 + 0x88) = 0x3fc90fdb;
  return;
}

