#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08988910(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte abStack_21 [5];
  
  uVar1 = 0;
  FUN_089a4b5c(abStack_21 + 1,*(char *)(param_1 + 0x8e1) + 1,2,0xff);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x9c);
  if (abStack_21[1] != -1) {
    uVar1 = 1;
    while (uVar1 = uVar1 & 0xff, abStack_21[uVar1 + 1] != 0xff) {
      uVar1 = uVar1 + 1;
    }
  }
  *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
  iVar4 = 0x28;
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xa0);
  iVar2 = 0xa0;
  *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
  do {
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
    FUN_089f4a90((float)(abStack_21[uVar1] / 5),(float)((uint)abStack_21[uVar1] % 5),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    uVar1 = uVar1 - 1 & 0xff;
    iVar4 = iVar4 + -1;
    if (uVar1 == 0) {
      return;
    }
    iVar2 = iVar2 + -4;
  } while (0x26 < iVar4);
  return;
}

