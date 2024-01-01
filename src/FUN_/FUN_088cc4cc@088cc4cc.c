#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cc4cc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x20c) + 0x10);
  *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
  if (DAT_08abea26 == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x20c) + 0x10);
    uVar1 = FUN_089f7720("win_npc");
    *(undefined4 *)(iVar2 + 0xd4) = uVar1;
  }
  else if (DAT_08abea26 < 2) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x20c) + 0x10);
    uVar1 = FUN_089f7720("win_npc01");
    *(undefined4 *)(iVar2 + 0xd4) = uVar1;
  }
  return;
}

