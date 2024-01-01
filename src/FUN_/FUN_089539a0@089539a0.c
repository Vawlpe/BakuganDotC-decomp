#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089539a0(int param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = FUN_0880d354();
  uVar5 = 0xb;
  if (iVar1 == 0) {
    uVar3 = 0xd;
  }
  else {
    uVar5 = 0xe;
    uVar3 = 0x10;
  }
  if (uVar5 <= uVar3) {
    iVar4 = uVar5 << 2;
    iVar6 = param_1 + uVar5 * 0x28 + 0x78;
    iVar1 = param_1;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      if (*(char *)(iVar1 + 0x5fd) == '\0') {
        *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xbc) = 0;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      *(undefined4 *)(iVar2 + 0x128) = 2;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      FUN_089a5408(0x3fb33333,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar6,3);
      uVar5 = uVar5 + 1;
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 4;
      iVar6 = iVar6 + 0x28;
    } while (uVar5 <= uVar3);
  }
  return;
}

