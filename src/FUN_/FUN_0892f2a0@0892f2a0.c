#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892f2a0(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x60);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
  }
  else {
    uVar1 = FUN_0892adcc(param_1,0,*(undefined *)(param_1 + 0x1b7e));
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x60);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 0x128) = 2;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 0xbc) = 0x3f800000;
    iVar2 = (uVar1 & 0xff) * 4;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 0x60) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x68) + 0x60);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 100) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x68) + 100);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 0x68) =
         *(undefined4 *)(param_1 + 0x15a0);
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60));
  }
  return;
}

